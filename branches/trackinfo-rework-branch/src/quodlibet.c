#include <dbus/dbus-glib.h>
#include "musictracker.h"
#include "utils.h"
#include <stdint.h>
#include <string.h>

int g_state = STATUS_NORMAL;

void quodlibet_hash_str(GHashTable *table, const char *key, GString *dest)
{
	const char *value = (const char*) g_hash_table_lookup(table, key);
	if (value != NULL) {
                g_string_assign(dest, value);
	} else
		g_string_empty(dest);
}

void cb_quodlibet_paused(DBusGProxy *proxy, gpointer data)
{
	g_state = (intptr_t) data;
	trace("quodlibet paused: %d", g_state);
}

gboolean
get_quodlibet_info(TrackInfo* ti)
{
	DBusGConnection *connection;
	DBusGProxy *player, *shell;
	GError *error = 0;
	static gboolean connected = FALSE;

	connection = dbus_g_bus_get (DBUS_BUS_SESSION, &error);
	if (connection == NULL) {
		trace("Failed to open connection to dbus: %s\n", error->message);
		g_error_free (error);
		return FALSE;
	}

	if (!dbus_g_running(connection, "net.sacredchao.QuodLibet")) {
		return TRUE;
	}

	player = dbus_g_proxy_new_for_name(connection,
			"net.sacredchao.QuodLibet",
			"/net/sacredchao/QuodLibet",
			"net.sacredchao.QuodLibet");

	if (!connected) {
		dbus_g_proxy_add_signal(player, "Paused", G_TYPE_INVALID);
		dbus_g_proxy_connect_signal(player, "Paused", G_CALLBACK(cb_quodlibet_paused), 
				(gpointer) STATUS_PAUSED, 0);
		dbus_g_proxy_add_signal(player, "Unpaused", G_TYPE_INVALID);
		dbus_g_proxy_connect_signal(player, "Unpaused", G_CALLBACK(cb_quodlibet_paused), 
				(gpointer) STATUS_NORMAL, 0);
		connected = TRUE;
	}

	GHashTable *table;
	if (!dbus_g_proxy_call_with_timeout(player, "CurrentSong", DBUS_TIMEOUT, &error,
				G_TYPE_INVALID, 
				dbus_g_type_get_map("GHashTable", G_TYPE_STRING, G_TYPE_STRING), &table,
				G_TYPE_INVALID)) {
		trackinfo_set_status(ti, STATUS_OFF);
		return TRUE;
	}
	trackinfo_set_status(ti, g_state);

	quodlibet_hash_str(table, "artist", trackinfo_get_gstring_artist(ti));
	quodlibet_hash_str(table, "album", trackinfo_get_gstring_album(ti));
	quodlibet_hash_str(table, "title", trackinfo_get_gstring_track(ti));

	GString *buf = g_string_new("");
        int totalSecs;
	quodlibet_hash_str(table, "~#length", buf);
	sscanf(buf->str, "%d", totalSecs);
        trackinfo_set_totalSecs(ti, totalSecs);
        g_string_free(buf, TRUE);

	g_hash_table_destroy(table);

	return TRUE;
}
