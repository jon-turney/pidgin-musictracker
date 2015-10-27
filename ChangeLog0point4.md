**Changes in 0.4.22**
  * Fix 'make check' and 'make distcheck'
  * Add -shared to musictracker\_la\_LDFLAGS to avoid building unneeded static library ([issue 221](https://code.google.com/p/pidgin-musictracker/issues/detail?id=221))
  * Ensure stale data from MRPIS player is not reported when track metadata hashtable is missing one of the keys we look for ([issue 215](https://code.google.com/p/pidgin-musictracker/issues/detail?id=215))
  * Look for libxmmsclient.so.6 and libxmmsclient.so.5 as well as just libxmmsclient.so ([issue 214](https://code.google.com/p/pidgin-musictracker/issues/detail?id=214))
  * Remove intrepid, add lucid to ubuntu distributions we try to build for on launchpad
  * Added/Updated more translations contributed via Launchpad Rosetta: Added: Romanian(ro), Slovak(sk), Turkish(tr); Updated: Finnish(fi), Hungarian(hu), Polish(pl), Swedish(sv)
  * Zune Player seems to object to the MsnMsgrUIManager window having a title, so remove that ([issue 38](https://code.google.com/p/pidgin-musictracker/issues/detail?id=38))
  * Also Zune player seems to send the title and artist swapped compared to Windows Media Player, but fortunately identifies itself as Zune. So detect it and swap them.
  * Don't leak handles to the winamp process. Don't leak memory we allocate inside the winamp process ([issue 232](https://code.google.com/p/pidgin-musictracker/issues/detail?id=232))

**Changes in 0.4.21**
  * Fix a crash in preferences dialog when using russian locale (and potentially others with long translation strings) ([issue 176](https://code.google.com/p/pidgin-musictracker/issues/detail?id=176))
  * Added/Updated more translations contributed via Launchpad Rosetta: Added: Australian English(en\_AU), Greek(el), Hungarian(hu); Updated: Brazilian Portugese(pt\_BR), Czech(cs), Dutch(nl), French(fr), Finnish(fi), Hebrew(he), Low German(nds), Portugese(pt)), Russian(ru)
  * Update label for Exaile interface to clarify it is for Exaile versions prior to 0.3, later versions can use MPRIS interface ([issue 164](https://code.google.com/p/pidgin-musictracker/issues/detail?id=164))
  * Use pkg-config to correctly pick up any needed CFLAGS for pcre (e.g. for include path if pcre.h is installed in /usr/include/pcre/) ([issue 197](https://code.google.com/p/pidgin-musictracker/issues/detail?id=197))
  * Correctness fixes for a couple of issues detected by valgrind
  * Various updates to launchpad and koji snapshot build scripts
  * Check that Windows installer has acquired admin privs, and stop with an error if not ([issue 185](https://code.google.com/p/pidgin-musictracker/issues/detail?id=185))
  * Windows installer will create the plugins directory if needed, so it doesn't gratuitously fail if musictracker is being installed before pidgin is installed
  * Manifest Windows installer for XP style common controls
  * Fix a dbus related memory leak ([issue 88](https://code.google.com/p/pidgin-musictracker/issues/detail?id=88), [issue 148](https://code.google.com/p/pidgin-musictracker/issues/detail?id=148))
  * Fix an error potentially causing winamp to crash ([issue 181](https://code.google.com/p/pidgin-musictracker/issues/detail?id=181))
  * Always apply printable character filter to track information, which could otherwise cause disconnects of XMPP accounts ([issue 198](https://code.google.com/p/pidgin-musictracker/issues/detail?id=198))
  * Leave offline accounts alone, so we don't cause them to go online ([issue 192](https://code.google.com/p/pidgin-musictracker/issues/detail?id=192))
  * Don't use old track information if we have problems getting new track information from an MPRIS player ([issue 202](https://code.google.com/p/pidgin-musictracker/issues/detail?id=202))
  * Add [a new wiki page](Configuring.md) describing how to configure various players and musictracker to work together

**Changes in 0.4.20**
  * Reformat configure output when a package check fails, to make it a bit easier for people to read and understand that development packages are required
  * Add/update some more translations contributed via launchpad (added: Danish(da), Swedish(sv), Simplified Chinese(zn\_CN); updated:  Low German(nds), Dutch(nl), Polish(pl), Norwegian Bokmal(nb), French(fr), German(de))
  * Fix snapshot script not do to anything if svn is unavailable; Don't wait for koji builds to complete in snapshot script; Launchpad snapshots are now built for ubuntu karmic as well
  * Improve release script to create a clean working directory before starting

**Changes in 0.4.19**
  * Update snapshot scripts so launchpad builds are requested for all active Ubuntu releases; include translations in the snapshot .deb packages
  * Autogen.sh replaces reconf; this properly updates ltmain.sh, fixing a problem when building from source ([issue 104](https://code.google.com/p/pidgin-musictracker/issues/detail?id=104))
  * Distinguish between 'player closed' and 'player stopped' states more clearly.  When in the 'player closed' state, we always leave the status message alone.([issue 65](https://code.google.com/p/pidgin-musictracker/issues/detail?id=65))
  * Added a tooltip to tell people the effect of leaving the status format string blank is to keep using the status message selected in the pidgin status selector ([issue 66](https://code.google.com/p/pidgin-musictracker/issues/detail?id=66))
  * Add support for fetching track information from the Last.fm webservices API 2.0 ([issue 89](https://code.google.com/p/pidgin-musictracker/issues/detail?id=89))
  * Fix the legacy Last.fm track information fetcher to present a proper UserAgent identifier and plug an enormous memory leak.
  * Remove a hardcoded limit to buffer-size in debug output
  * Improvements to Windows installer: add RequestExecutionLevel to installer script (should avoid some Vista issues), add an uninstaller script, set compressor to LZMA (slightly reduces download size)
  * Add/update some more translations contributed via [launchpad](https://translations.launchpad.net/pidgin-musictracker/trunk/+pots/musictracker) (added: Russian(ru); updated:  Italian(it), Spanish(es), Polish(pl), French(fr), Norwegian Bokmal(nb) translations)

**Changes in 0.4.18**
  * Fix the Spanish translation, so that the translation of 'MusicTracker' menu item is not a translation of the instructions to translators for translating the 'MusicTracker' menu item, but a translation of the 'MusicTracker' menu item.
  * Fix a bug preventing track time retrieval from banshee 1.0; it's a uint not an int
  * Tidy up XMMS interface to reduce debug output spam and fix a memory leak
  * Avoid a dlopen() leak if libaudacious.so and libxmms.so are both present
  * Rewrite status message generation to allow the addition of "%s" in the message format as the pidgin saved status and clarify the logic a lot ([issue 19](https://code.google.com/p/pidgin-musictracker/issues/detail?id=19))
  * More adjustments to MSN compatible WM\_COPYDATA message catcher, to deal with the message in the form [Spotify](http://www.spotify.com/) sends ([issue 128](https://code.google.com/p/pidgin-musictracker/issues/detail?id=128)).
  * Correct a mistake in the WM\_COPYDATA parser which meant album information wasn't captured in one possible format.
  * It seems that the MSN compatible WM\_COPYDATA parser was incorrect and the artist and title were swapped in lots of cases; try to impove this so the "swap artist and title" preference shouldn't need to be turned on so often.
  * Minor corrections and additions to French(fr) and Spanish(es) translations. Add partial Indonesian(id) translation, contributed via [launchpad](https://translations.launchpad.net/pidgin-musictracker/trunk/+pots/musictracker)
  * Add a fallback to g\_timeout\_add() when built with GLib versions prior to 2.14.0, which do not have g\_timeout\_add\_seconds() ([issue 125](https://code.google.com/p/pidgin-musictracker/issues/detail?id=125))
  * Apply a patch to fix XMMS2 0.6 track information retrieval from chewi ([issue 71](https://code.google.com/p/pidgin-musictracker/issues/detail?id=71)). This change is incompatible with XMMS2 <=0.5
  * Remove .ebuild file from release upload, since there is now one in portage.

**Changes in 0.4.17**
  * Avoid pidgin plugin search path confusion for those building from source by installing into the prefix which pidgin was configured with by default ([issue 116](https://code.google.com/p/pidgin-musictracker/issues/detail?id=116))
  * Add/update some more translations contributed via [launchpad](https://translations.launchpad.net/pidgin-musictracker/trunk/+pots/musictracker) (added: Dutch(nl), Norwegian Bokmal(nb); updated: German(de), Italian(it), Spanish(es))
  * Fix a terrible crash-causing brown-paper bag bug.  Wrongly filed as Pidgin [trac ticket #8756](http://developer.pidgin.im/ticket/8756)
  * Make sure mostrecent\_ti.player is initialized to something, avoiding a crash if you start with status changing deactivated, but then activate status changing before you've played anything. ([Issue 107](https://code.google.com/p/pidgin-musictracker/issues/detail?id=107))
  * Snapshot script changes to request RPM buid on Koji; only do snapshot builds after a change is commited; use svn rev number in snapshot name

**Changes in 0.4.16**
  * Correct an issue with the toolchain I was using to build the Windows binaries, so they don't crash with "illegal instruction" on pentium III and earlier processors ([issue 76](https://code.google.com/p/pidgin-musictracker/issues/detail?id=76))
  * Various packaging script improvements, add an initial attempt at RPM .spec file
  * For packaging convenience, add a --disable-werror configure option
  * Be a bit more careful checking if a dbus name has an owner, and add a bit more logging (appears to resolve [issue 103](https://code.google.com/p/pidgin-musictracker/issues/detail?id=103))
  * Cause the status to update immediately after status changing is activated (rather than not until the next time the track information changes) ([issue 100](https://code.google.com/p/pidgin-musictracker/issues/detail?id=100))
  * Audit uses of sccanf() for checking the return value correctly
  * Fix annoying "close pidgin, close player, open pidgin, 'now listening' doesn't get cleared" bug (again), reintroduced by [r271](https://code.google.com/p/pidgin-musictracker/source/detail?r=271) (also fixed by pidgin 2.5.5 which properly understands tune status shouldn't be saved)

**Changes in 0.4.15**
  * Use a proper plugin ID and stop bogusly claiming to be a core plugin in debug output
  * Change "Broken 'now listening'" to "Don't use 'now listening'" to clarify and make it's use more general ([issue 86](https://code.google.com/p/pidgin-musictracker/issues/detail?id=86))
  * Avoid a warning from a debug build of dbus library if dbus connection could not be established
  * Tweak a few strings for clarity
  * Try harder to avoid "MSN Error: Friendly name changes too rapidly" ([issue 78](https://code.google.com/p/pidgin-musictracker/issues/detail?id=78))
  * Fix sequence of actions so that the per-protocol disable setting clears the status message immediately when it's set ([issue 85](https://code.google.com/p/pidgin-musictracker/issues/detail?id=85))
  * Avoid spamming 'sh: mocp: not found' to stderr in autodetect mode when mocp isn't installed ([issue 96](https://code.google.com/p/pidgin-musictracker/issues/detail?id=96))
  * Don't set 'now playing' when player is paused ([issue 92](https://code.google.com/p/pidgin-musictracker/issues/detail?id=92))
  * Make the Windows installer slightly more knowlegable about where pidgin is installed, to help picking our install directory
  * Properly install translations for languages pidgin doesn't have translations of ([issue 97](https://code.google.com/p/pidgin-musictracker/issues/detail?id=97))
  * Add/update some more translations contributed via [launchpad](https://translations.launchpad.net/pidgin-musictracker/trunk/+pots/musictracker) (added: Czech, Esperanto, Finnish, French, German (Low), Hebrew, Polish, Slovenian, Spanish; updated: German, Portugese (Brazilian))
  * Fix a random crash at plugin load ([issue 106](https://code.google.com/p/pidgin-musictracker/issues/detail?id=106))
  * Remove the use of fixed sized buffers for preference name formatting, which could be causing crashes with longish usernames
  * Fix a bug causing some track information from winamp longer than 50 characters to end in garbage characters ([issue 102](https://code.google.com/p/pidgin-musictracker/issues/detail?id=102))

**Changes in 0.4.14**
  * Correct encoding for it.po to UTF-8; Set the codeset for musictracker domain to UTF-8 (fixes [issue 69](https://code.google.com/p/pidgin-musictracker/issues/detail?id=69))
  * Adjust WM\_COPYDATA message parsing yet again, so it works with the format used by TTplayer as well (part of [issue 70](https://code.google.com/p/pidgin-musictracker/issues/detail?id=70))
  * Try to make it a bit clearer in the player selection dropdown that the Amarok DCOP interface is only for Amarok 1 (Amarok 2 uses the MPRIS interface)
  * Avoid a potential initial crash in lastfm feed code
  * Apply patch for Vagelume player support by Juan A. Suarez Romero ([issue 72](https://code.google.com/p/pidgin-musictracker/issues/detail?id=72))
  * Apply patch for MOC support by Peter Vizi ([issue 74](https://code.google.com/p/pidgin-musictracker/issues/detail?id=74))
  * Updated .ebuild file, add ./configure options --enable-xmm2 and --disable-xmms2 to allow control of if XMMS2 client support is built in or not ([issue 77](https://code.google.com/p/pidgin-musictracker/issues/detail?id=77))
  * Align Win32 build flags with those used by pidgin
  * Fix some more warnings
  * Add some more translations (portugese, german) contributed via [launchpad](https://translations.launchpad.net/pidgin-musictracker/trunk/+pots/musictracker)

**Changes in 0.4.13**
  * Fix filter to operate on whole words only ([issue 51](https://code.google.com/p/pidgin-musictracker/issues/detail?id=51))
  * Fix filter to operate on 'now listening', not just the status message
  * Add an option to swap artist and title in the received MSN-messenger compatible WM\_COPYDATA message, as some people are apparently getting them from some player applications in the opposite order for reasons which are unclear (It seems the Last.fm **client** needs this setting turned on, for one)
  * Add linux [songbird](http://getsongbird.com/) player support via [dbusbird](http://addons.songbirdnest.com/addon/181) interface ([issue 41](https://code.google.com/p/pidgin-musictracker/issues/detail?id=41)) (Note that dbusbird currently has a few limitations: it truncates title to 30 characters, and stopped status doesn't seem to be reported reliably)
  * Add translation support using gettext (**NOTE**: To be consistent with the location of the translation files, musictracker now installs the plugin into the prefix specified to ./configure, rather than directly into the pidgin plugin directory found using pidgin's pkg-config file.  Since pidgin installed into /usr doesn't appear to search for plugins in /usr/local by default, this means that people building from source may well need to do './configure --prefix=/usr' where previously './configure' has done the right thing for them...)
  * Add italian translation by Alessio Fachechi ([issue 67](https://code.google.com/p/pidgin-musictracker/issues/detail?id=67)) (Other translations are welcome.  The file [po/musictracker.pot](http://code.google.com/p/pidgin-musictracker/source/browse/trunk#trunk/po) is a template containing all the translatable messages)
  * Deal with AIMP2's implementation of the winamp interface ([issue 61](https://code.google.com/p/pidgin-musictracker/issues/detail?id=61))
  * Added reported classname for Foobar2000 ColumnsUI ([issue 53](https://code.google.com/p/pidgin-musictracker/issues/detail?id=53))
  * Try again to get the dbus-glib dependency in .ebuild right ([issue 55](https://code.google.com/p/pidgin-musictracker/issues/detail?id=55))

**Changes 0.4.12**
  * Relax and refine the regex used for matching MSN "now listening" messages; track info from VLC should work again ([issue 46](https://code.google.com/p/pidgin-musictracker/issues/detail?id=46))
  * Remove a fixed size buffer from capture() utility function
  * Add a per-account "tune status is broken" configuration to work around the problem that libpurple tells us googletalk accounts have tune status, but it doesn't actually work (and I can't work out a good way to detect this situation automatically) **Note:** This is on by default for all XMPP accounts, for non-GoogleTalk XMPP accounts with working XEP-0118 you should clear this setting ([issue 26](https://code.google.com/p/pidgin-musictracker/issues/detail?id=26))
  * Merge some fixes to problems found with valgrind (fixes warnings when compiled with -D\_FORTIFY\_SOURCE=2) ([issue 44](https://code.google.com/p/pidgin-musictracker/issues/detail?id=44))
  * Remove m4 directory from build, we don't actually make any macros (stops ebuild installing empty /usr/share/aclocal), see gentoo [bug #180771](https://code.google.com/p/pidgin-musictracker/issues/detail?id=180771)
  * Update and correct dbus-glib dependency in .ebuild
  * Fix a rare crash when data retrieval from last.fm fails ([issue 35](https://code.google.com/p/pidgin-musictracker/issues/detail?id=35))

**Changes in 0.4.11**
  * Fix "status doesn't clear when status changing is deactivated" bug ([issue #37](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#37)), more collateral breakage from change for [issue #32](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#32)
  * Reorder menu actions so disable/enable is the first one, as it's probably the most used

**Changes in 0.4.10**
  * Fix terrible bug introduced by change for [issue #32](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#32), which utterly broke tune status support (e.g."now listening" in MSN) ([issue #36](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#36))

**Changes in 0.4.9**
  * Update configure check for dbus-glib to 0.73, needed for dbus\_g\_proxy\_call\_with\_timeout ([issue #34](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#34))
  * Fix /nowplaying to get correct information when status changing is disabled ([issue #32](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#32))
  * Fix a problem with the msn compatibility message handler which behaved badly when Winamp had stopped in auto-detect mode
  * Avoid a crash mode in winamp message handling seen with musikCube (due to it's limited Winamp compatibility interface)
  * Fix crash with audacious caused by a rather obvious mistake ([issue #28](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#28), [issue #33](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#33))
  * Audit uses of G\_TYPE\_STRING returned from a dbus call and fix a couple of leaks
  * Make MPRIS player detection fully dynamic, scanning for org.mpris. service names; add an additional hint needed for dragonplayer to work.
  * Generalize MSN message support a little bit more
  * Avoid a potential null dereference in xmms2 debug output
  * Rewrite MPRIS debug code to avoid use of GHashTableIter, so we work with all GLib > 2.0.0, and so don't have a different GLib dependency to pidgin itself

**Changes in 0.4.8**
  * Add patch from Phillip Camp for SqueezeCenter/SlimServer support
  * Fix a crash which could occur if an account is added whilst musictracker is loaded
  * Add a fallback method for getting track information by catching messages intended to pass that info to MSN Messenger.  Tested with VLC 0.8.6i (you need to turn on the "MSN Now-Playing" control interface), Media Player Classic (turn on 'Send "Now Playing" information to MSN Messenger'), Songbird + LiveTweeter add-on, hopefully works with other stuff as well.  This is now the preferred interface for foobar2000, as it works better than reading the window title and guessing :-)
  * Fix foobar2000 title parsing for the case where the track has no album information
  * Add MPRIS-compliant player track information support.  Lightly tested with VLC 0.9.1 (you need to turn on "D-Bus Control Interface" in settings), BMPx 0.40, Audacious 1.4.  Feedback wanted!

**Changes in 0.4.7**
  * Correct the way we retrieve track artist info from WMP ([issue #16](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#16))
  * Fix a problem where tune status could sometimes get left with stale data (e.g. if player was closed whilst pidgin was closed)
  * Apply patch from hyperair adding a timeout to dbus calls, so they cannot block indefinitely (hanging pidgin) if something has gone wrong in the target application ([issue #13](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#13))
  * Fix restoring saved status so it correctly restores account-specific saved status ([issue #11](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#11))
  * Attempt to avoid being told "MSN: Friendly name changes too rapidly" when player is stopped
  * Some more tidying up
  * Update libmpdclient to latest svn ([revision 7402](https://code.google.com/p/pidgin-musictracker/source/detail?r=7402)) (this fixes a file descriptor leak when an IPv6-enabled MPD is running) (#137, maybe [issue #12](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#12)?)
  * Enable MPD client in windows build
  * Fix type conversion warnings when building for x64 ([issue #18](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#18))
  * Use dopen/dlsym to access XMMS2 client library, so it doesn't become a run-time dependency if we build with XMMS2 support enabled

**Changes in 0.4.6**
  * Rewrite WMP support using disphelper from http://disphelper.sourceforge.net/ and WMPuICE by Christian Mueller from http://www.mediatexx.com.  Hopefully this rewrite has several advantages: It works without needing any changes of configuration of WMP, now uses a wide-char interface so should be able to transport unicode chars successfully.  Feedback wanted!
  * Restore support for non-widechar Winamp interface, as a fall-back if preferred interface fails.  This restores compatability with older versions of Winamp, and the Winamp-compatible interface which MediaMonkey supports

**Changes in 0.4.5**
  * Various fixes to avoid crash modes where track information is longer than expected
  * Compilation warnings fixes
  * Improve foobar2000 and winamp interface code to work better for track info using east asian characters.  **Note:** Winamp 5.13 (circa 2006) or later is now required.  I suppose I could put some legacy compatability code in for those people who must use Winamp 2 :-).  Windows Media Player still needs work in this area, everything else should be fine.
  * Do PCRE\_STATIC properly (only applies to windows builds and tells us to use a static library)
  * Improve last.fm feed interface: infer player is off if scrobble timestamp is older than a configurable interval, configure polling interval as well
  * Add some possibly needed pcre\_free()s

**Changes in 0.4.4** "I suppose I should fix that...."
  * Store musictracker per-account preferences using both screen name and protocol as the key, so that multiple accounts with the same screen name on different protocols may have different musictracker status formatting setttings.  **Note:** No attempt is made to migrate existing per-account settings, it's ambigious which account they belong to and I'm lazy :S ([issue #2](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#2))
  * Strip windows DLL before making installer (so it's not huge!) ([issue #4](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#4))
  * Restore UI selected status when musictracker is unloaded (#114)
  * Fix tune status support to work with msnp15, coming in pidgin 2.5.0, add UI to disable personal message changing if we have tune status ([issue #3](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#3)) **Note:** pidgin 2.5.0 isn't released yet, so this won't do anything unless you are running a development version. Don't run development versions of pidgin unless you are willing to keep both pieces when it breaks :-)
  * Add ability to disable status changing whilst away
  * Add a simple implementation of a "/nowplaying" or "/np" command
  * Fix way amarok and iTunes interface code deals with times greater than 60 minutes (#22)
  * Fix exaile interface code to retrieve current position in track correctly (was broken!)
  * Tidy up some debug output and general cruft
  * Add a bit of defensive code against a possible crash ([issue #5](https://code.google.com/p/pidgin-musictracker/issues/detail?id=#5))

**Changes in 0.4.3** "patch frenzy"
  * patch from chet.the.gray for Listen player support (#13)
  * patch from puthali.HB for Last.fm feed support (#48)
  * patch from patrick.dessalle for Audacious 1.4 support (#86)
  * patch from hyperair for Banshee 1.0 support (#87)
  * patch from thelrix for XMPP user tune support (#96)
  * patch from ZeeGeek for XMMS2 player support (#121)
  * Rhythmbox: Slightly improve the way we report information for streams (#35), based on a patch by eemil.lagerspetz
  * Improve "Toggle status changing" action so it has a dynamic menu item which reflects the current Enabled/Disabled state (#39), based on a patch by TorresMAT
  * Winamp: don't screw up titles which contain hyphens, try to still do something useful with streams (#59) based on a patch by leonardo.monteiro.fernandes
  * amarok: Check for running dcopserver to avoid problems when dcop blocks for long enough that we appear to hang pidgin (#68), Don't spam stderr with "call failed" errors from trying to dcop amarok
  * Add missing header include to fix Gentoo QA notice on build (#138)

**Changes in 0.4.2**
  * Fix finding window for Foobar2000 0.9.5.3 and later
  * Don't crash if track info from player isn't valid UTF-8!
  * Get UTF-8 track info from iTunes and WMP
  * Avoid damaging valid UTF-8 track info when removing unprintable characters
  * If the track info message is empty, try to restore the status message selected in UI (e.g. for when your player stopped message is empty)
  * Remove use of modified MSN protocol plugin to append now-playing info to nickname (I suggest you use pidgin 2.5.0 or later or [msn-pecan](http://code.google.com/p/msn-pecan/) which supports personal messages)
  * Fixed to build with latest purple

A full [Changelog](http://code.google.com/p/pidgin-musictracker/source/browse/trunk/ChangeLog) is available.