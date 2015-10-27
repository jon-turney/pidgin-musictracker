# How do I configure my player and musictracker to work together? #

Some players require additional plugins/features to be turned on/a specific configuration to help musictracker get the track information.

## Windows Players ##

|[AIMP2](http://www.aimp.ru)|Supported via the 'winamp-compatible' interface.|
|:--------------------------|:-----------------------------------------------|
|[Foobar2000](http://www.foobar2000.org/)|foobar2000 works best with a component installed to help musictracker get the track information (See [FAQ #8](http://code.google.com/p/pidgin-musictracker/wiki/FAQ#8)) and musictracker's player setting set to 'auto-detect' or 'messenger compatible'.  The foobar2000-specific player interface will be removed at some future date.|
|[iTunes](http://www.apple.com/itunes/download/)|Supported via the iTunes interface.  The iTunes installer seems to have a bug so that sometimes upgrading iTunes breaks the COM interface, see [FAQ#16](http://code.google.com/p/pidgin-musictracker/wiki/FAQ#16). You'll need to uninstall and reinstall iTunes using the full download to work around this.|
|[Last.fm client](http://www.last.fm/download)|Supported via the 'MSN Messenger compatible' interface.|
|[MediaMonkey](http://www.mediamonkey.com/)|Supported via the 'winamp-compatible' interface.  Unicode characters in song titles may not be reported correctly, see [bug #14](http://code.google.com/p/pidgin-musictracker/issues/detail?id=14).|
|Media Player Classic       |Supported via the 'MSN Messenger compatible' interface.  'Send "Now Playing" information to MSN Messenger' needs to be turned on in the player's options.|
|[OpenPandora](http://openpandora.googlepages.com/)|Supported via the 'MSN Messenger compatible' interface.|
|[Songbird](http://getsongbird.com/)|Supported via the 'MSN Messenger compatible' interface.  Install the [LiveTweeter](http://addons.songbirdnest.com/addon/1204) plugin for Songbird and turn on 'Activate MSN/WindowsLive Messenger' in the plugins settings.|
|[Spotify](http://www.spotify.com/)|Supported via the 'MSN Messenger compatible' interface.|
|[Winamp](http://www.winamp.com/)|Supported via the 'winamp-compatible' interface.|
|[Windows Media Player](http://www.microsoft.com/windows/windowsmedia/player/11/default.aspx)| Supported via the 'Windows Media Player' interface.  This requires the 'uICE WMP Plug-in' for Windows Media Player, which should be automatically installed and enabled by the musictracker installer.  See [FAQ#7](http://code.google.com/p/pidgin-musictracker/wiki/FAQ#7) for help if that fails to happen.  We don't think this works with 64-bit WMP.<br>Also supported via the 'MSN Messenger compatible' interface. You may need to install "Windows Live Messenger" and then enable the 'Windows Live Messenger Music' plugin (under Now Playing (little down arrow at the bottom of button)/Plugins/Other (or View/Plugins/Other if you have normal menus enabled)).<br>
<tr><td><a href='http://wwwct.ttplayer.com/index.html'>TTplayer</a></td><td>Supported via the 'MSN Messenger compatible' interface.</td></tr>
<tr><td><a href='http://www.videolan.org/vlc/'>VLC</a></td><td>Supported via the 'MSN Messenger compatible' interface.  ''MSN Now Playing' needs to be turned on in the player's preferences, found under 'Control Interfaces' when 'Show settings' is set to 'all'.</td></tr></tbody></table>

<i>Note:</i> The <b>MSN Messenger compatible</b> interface, as implemented by many players has the limitation that only one other program can recieve the track information.  This causes problems if you run musictacker and e.g. the real MSN Messenger client at the same time.  This is a problem with the player and musictracker can't do anything about it.  If it causes you difficulties, please raise a bug on your player with the incantation "send the WM_COPYDATA message to the all MsnMsgrUIManager windows rather than just the first one".<br>
<br>
<h2>Player Interfaces available on both Windows & Linux ##

|[Last.fm feed](http://www.last.fm/feeds)|Supported via the 'Last.fm API' interface.  You will need to configure musictracker with your Last.fm username.|
|:---------------------------------------|:--------------------------------------------------------------------------------------------------------------|
|[MPD](http://www.musicpd.org/)          |Supported via the MPD interface. You will need to configure musictracker with the hostname or IP address, port and password of your MPD.|

## Linux Players ##

|[Amarok](http://amarok.kde.org/)|Supported via the Amarok interface (a Amarok-specific DCOP interface).|
|:-------------------------------|:---------------------------------------------------------------------|
|[Amarok2](http://amarok.kde.org/)|Supported via the MPRIS interface.                                    |
|[Audacious](http://audacious-media-player.org)|Audacious 1.4 and later is supported via the MPRIS interface.<br>Audacious 1.3 and earlier is supported via the XMMS interface.  Title format needs to be set as '%p | %a | %t' in the players preferences. Delimiter choice '|' can be changed in musictracker settings.<br>The Audacious-specific org.atheme.audacious Dbus interface is also supported, we're not sure which versions of Audacious have only that.<br>
<tr><td><a href='http://banshee-project.org/'>Banshee</a></td><td>Supported via the Banshee interface (the Banshee-specific org.bansheeproject.Banshee (versions 1.0 and later) and org.gnome.banshee (versions prior to 1.0) Dbus interfaces)</td></tr>
<tr><td><a href='http://bmpx.backtrace.info/'>BMPx</a></td><td>Supported via the MPRIS interface.                                    </td></tr>
<tr><td><a href='http://www.clementine-player.org/'>Clementine</a></td><td>Supported via the MPRIS interface.                                    </td></tr>
<tr><td><a href='http://www.dragonplayer.org/'>dragonplayer</a></td><td>Supported via the MPRIS interface.                                    </td></tr>
<tr><td><a href='http://www.exaile.org/'>Exaile</a></td><td>Exaile >= 0.3 are supported via the MPRIS interface.  This needs to be enabled in Exaile via Edit/Preferences/Plugins and ensure MPRIS plugin is ticked.<br>Earlier versions of Exaile are suported via the Exaile interface (the Exaile-specific org.exaile.DbusInterface Dbus interface).</td></tr>
<tr><td><a href='http://code.google.com/p/gogglesmm/'>Goggles Music Manager</a></td><td>Supported via the MPRIS interface.                                    </td></tr>
<tr><td><a href='http://sourceforge.net/projects/guayadeque/'>Guayadeque</a></td><td>Supported via the MPRIS interface.                                    </td></tr>
<tr><td><a href='http://www.listen-project.org/'>Listen</a></td><td>Supported via the Listen interface (the Listen-specific org.gnome.Listen Dbus interface).</td></tr>
<tr><td><a href='http://moc.daper.net/'>MOC</a></td><td>Supported via the MOC interface (using the mocq tool).                </td></tr>
<tr><td><a href='http://qmmp.ylsoftware.com/index_en.php'>QMMP</a> >=0.3</td><td>Supported via the MPRIS interface.                                    </td></tr>
<tr><td><a href='http://www.sacredchao.net/quodlibet/'>Quod Libet</a></td><td>Supported via the QuodLibet interface (the QuodLibet-specific net.sacredchao.QuodLibet Dbus interface).</td></tr>
<tr><td><a href='http://www.gnome.org/projects/rhythmbox/'>Rhythmbox</a></td><td>Supported via the MPRIS interface.<br>The rhythmbox-specific org.gnome.Rhythmbox Dbus interface is also supported for older versions of this player.</td></tr>
<tr><td><a href='http://getsongbird.com/'>Songbird</a></td><td>Supported via the MPRIS interface with <a href='http://addons.songbirdnest.com/addon/1626'>MPRIS addon</a>.<br>Also supported via the dbusBird interface with <a href='http://addons.songbirdnest.com/addon/181'>DBusBird addon</a>.</td></tr>
<tr><td><a href='http://www.slimdevices.com/su_downloads.html'>SqueezeCenter</a></td><td>Supported via the SqueezeCenter interface.  You need to configure musictracker with the details of your SqueezeBox server.</td></tr>
<tr><td><a href='http://vagalume.igalia.com/'>Vagalume</a></td><td>Supported via the Vagalume interface.                                 </td></tr>
<tr><td><a href='http://www.videolan.org/vlc/'>VLC</a></td><td>VLC versions >0.9.0 are supported via the MPRIS interface.  'D-Bus control interface' needs to be turned on in the player's preferences (Tools/Preferences), found under 'Control Interfaces' when 'Show settings' is set to 'all'.  You may need to restart VLC after changing this setting for it to take effect.</td></tr>
<tr><td><a href='http://www.xmms.org/'>XMMS</a></td><td>Supported via the XMMS interface.  Title format needs to be set as '%p | %a | %t' in the players preferences. Delimiter choice '|' can be changed in musictracker settings.</td></tr>
<tr><td><a href='http://wiki.xmms2.xmms.se'>XMMS2</a></td><td>XMMS2 0.6 and later are supported via the XMMS2 interface.            </td></tr></tbody></table>

<h2>Requested and unsupported players</h2>

See <a href='http://code.google.com/p/pidgin-musictracker/issues/list?can=2&q=label%3Aplayer'>player support requests</a> in the issue tracker.<br>
<br>
You can vote for adding support for these players by starring the relevant issue.