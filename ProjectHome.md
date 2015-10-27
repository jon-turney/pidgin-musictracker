**pidgin-musictracker** is a plugin for **[Pidgin](http://www.pidgin.im/)** which publicises your currently playing media to your contacts.

**[Currently supported players:](Configuring.md)**

on Linux:
  * [Amarok](http://amarok.kde.org/), [Audacious](http://audacious-media-player.org), [Banshee](http://banshee-project.org/), [Clementine](http://www.clementine-player.org/), [Exaile](http://www.exaile.org/), [Last.fm feed](http://www.last.fm/feeds), [Listen](http://www.listen-project.org/), [MOC](http://moc.daper.net/), [MPD](http://www.musicpd.org/), [Quod Libet](http://www.sacredchao.net/quodlibet/), [Rhythmbox](http://www.gnome.org/projects/rhythmbox/), [Songbird](http://getsongbird.com/) + [DBusBird addon](http://addons.songbirdnest.com/addon/181),  [SqueezeCenter](http://www.slimdevices.com/su_downloads.html), [Vagalume](http://vagalume.igalia.com/), [XMMS](http://www.xmms.org/), [XMMS2](http://wiki.xmms2.xmms.se) >= 0.6
  * plus any player supporting the [MPRIS](http://wiki.xmms2.xmms.se/wiki/MPRIS) DBus interface ([Amarok2](http://amarok.kde.org/), [BMPx](http://bmpx.backtrace.info/), [dragonplayer](http://www.dragonplayer.org/),  [Exaile](http://www.exaile.org/) >= 0.3, [Goggles Music Manager](http://code.google.com/p/gogglesmm/), [Guayadeque](http://sourceforge.net/projects/guayadeque/), [QMMP](http://qmmp.ylsoftware.com/index_en.php) >=0.3, [Rhythmbox](http://www.gnome.org/projects/rhythmbox/), [Songbird](http://getsongbird.com/) + [MPRIS addon](http://addons.songbirdnest.com/addon/1626), [VLC](http://www.videolan.org/vlc/) >0.9.0, etc.)

on Windows:
  * [Foobar2000](http://www.foobar2000.org/), [iTunes](http://www.apple.com/itunes/download/), [Last.fm feed](http://www.last.fm/feeds), [MPD](http://www.musicpd.org/), [Winamp](http://www.winamp.com/), [Windows Media Player](http://www.microsoft.com/windows/windowsmedia/player/11/default.aspx)
  * plus any player with a 'winamp-compatible' interface ([AIMP2](http://www.aimp.ru), [MediaMonkey](http://www.mediamonkey.com/), etc.)
  * plus any player with a 'Send "Now Playing" information to MSN Messenger' feature ( [Last.fm client](http://www.last.fm/download), Media Player Classic, [OpenPandora](http://openpandora.googlepages.com/), [Songbird](http://getsongbird.com/) + [LiveTweeter](http://addons.songbirdnest.com/addon/1204), [Spotify](http://www.spotify.com/), [TTplayer](http://wwwct.ttplayer.com/index.html), [VLC](http://www.videolan.org/vlc/), [Zune](http://www.zune.net/), etc.)

**Features:**
  * Allows you to customize the status string with various fields extracted from your media player such as artist, album, track, duration, progress bar, etc.
  * Different status messages for various media player states such as Playing, Paused and Stopped.  You can choose to use the normal status message (by default in the stoppped state).
  * '/nowplaying' inserts the now-playing information into your conversation
  * Supports per-account status format customization.
  * You may choose to have your away message override musictracker.
  * Optional profanity filter for words in the status.
  * Can auto-detect which player is in use.

**Notes:**
  * To show now playing in MSN personal status messages you must be using pidgin 2.5.0 or later (or msn-pecan).  If you have ever had musictracker 0.4.1 or earlier installed, you **must** reinstall pidgin for MSN personal status messages to work correctly. (See [issue 15](https://code.google.com/p/pidgin-musictracker/issues/detail?id=15), [FAQ #2](http://code.google.com/p/pidgin-musictracker/wiki/FAQ#2))
  * See [this wiki page for details on configuring your player](Configuring.md) and musictracker to work together

**Privacy Statement/Security Considerations**
  * People can see what media you are listening to/watching. Doh!

**Changes**

A full [change log](ChangeLog0point4.md) is available.

**Remarks**

Distributed under the terms of the GNU General Public License version 2 or higher.