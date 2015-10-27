## 1 ##
**I installed musictracker, started my player and my status doesn't change**

  * Some players require additional plugins/features to be turned on/a specific configuration to help musictracker get the track information.

[See the player-specific notes](Configuring.md).

  * Make sure you haven't chosen "Deactivate Status Changing" from Tools/Musictracker menu

  * Incorrect expectations:

Your outgoing status message is changed, as your correspondents should be able to tell you, but the status message shown in the pidgin UI is not updated.

This behaviour, whilst failing to provide clearly needed user feedback, is by design, at least for the moment.

To see your own status add yourself to your own buddy list, or enable the [MyStatusBox](http://plugins.guifications.org/trac/wiki/mystatusbox) plugin from the [Pidgin Plugin Pack](http://plugins.guifications.org/trac/wiki/PluginPack)

## 2 ##
**MSN status messages aren't working at all**<br>
<b>MSN disconnects when I set invisible status</b><br>
<b>MSN protocol behaves strangely</b><br>

musictracker 0.4.1 installs a custom libmsn.dll/.so, which is now quite old and doesn't support MSN custom status messages.  If this libmsn is still on your system, MSN custom status messages won't work.  This could happen if you installed pidgin, then installed musictracker 0.4.1, then updated musictracker.<br>
<br>
The solution is to reinstall pidgin.<br>
<h2>3</h2>
<b>Windows installer fails "Error opening the file for writing musictracker.dll"</b>

You must exit pidgin to run the installer if you have a previous version of musictracker installed.<br>
<br>
If you have installed pidgin somewhere other than the default location of  "C:\Program Files\Pidgin", you must tell the musictracker installer the correct location for pidgin. (Since 0.4.15, the Windows installer should be clever enough to find where pidgin was installed correctly)<br>
<br>
On Windows Vista and later, you may need to install the program with Administrator privileges by right-clicking on the pidgin-musictracker-n.n.nn.exe installer file and choosing 'Run as Administrator'. (Since 0.4.19, the Windows installer should request privilege with a UAC prompt)<br>
<br>
<h2>4</h2>
<b>How do I uninstall musictracker on Windows? (0.4.19 and later)</b>

Use Add/Remove Programs from the Control Panel<br>
<br>
<b>How do I uninstall musictracker on Windows? (0.4.18 and earlier)</b>

<ul><li>Delete C:\Program Files\Pidgin\plugins\musictracker.dll<br>
</li><li>Run regsvr32 /u "C:\Program Files\Pidgin\wmpuice.dll"<br>
</li><li>Delete C:\Program Files\Pidgin\wmpuice.dll<br>
</li><li>Delete any musictracker.mo files from C:\Program Files\Pidgin\locale\<code>*</code>\LC_MESSAGES</li></ul>

<h2>5</h2>
<b>How do I get my status to go back to the pidgin status message when player stops?</b>

Leave the "Stopped" Status Format in the musictracker plugin configuration blank.<br>
<br>
<h2>6</h2>
<b>Player name is shown as "unknown"</b>

It is a limitation of the "MSN compatible" now playing interface that the player name is<br>
not available, so %r is replaced with "unknown" in this case.<br>
<br>
A useful <a href='http://kentie.net/article/nowplaying/index.htm'>description of this interface</a>

This <a href='http://code.google.com/p/psymp3/wiki/MsnMsgrUiManager'>other description</a> mentions an iTunes extension to the format to include the player name, but other players don't seem to support that, and it is unknown if that breaks inter-operation with other clients.<br>
<br>
<h2>7</h2>
<b>Doesn't work with Windows Media Player (0.4.6 and later)</b>

Since 0.4.6, the <a href='http://www.mediatexx.com/download/addons.htm'>WMPuICE</a> plug-in to WMP is used to retrieve now playing information from WMP.<br>
<br>
This has a number of advantages over the previous implementation:<br>
<ul><li>Supports a wide-char interface to transport unicode chars successfully<br>
</li><li>Should work without needing any changes of configuration of WMP<br>
</li><li>The author of the DLL (Christian Mueller) clearly permits it to be redistributed (with acknowlegement)</li></ul>

Note that the Windows Media Player SDK has an "Excluded Licenses" clause, so it's possible it's not permissible to link it with musictracker's GPL-ed code.  In any event, remoting an existing WMP instance (rather than starting a new one) via the COM interface requires some technical jumping through hoops which I'm quite happy to leave to others...<br>
<br>
If you have trouble getting this to work, you may find that the following help:<br>
<ul><li>Run the command 'regsvr32 "C:\Program Files\Pidgin\wmpuice.dll"'<br>
</li><li>Open Windows Media Player, go into options, the Plug-ins tab, select "Background" then check the "uICE WMP Plug-in". Click Ok and restart Windows Media Player.</li></ul>

These actions should have been performed by the musictracker installer. They won't have occured if you have a portable installation of pidgin or similar.<br>
<br>
The WMPuICE plug-in to WMP isn't available for 64-bit WMP.<br>
<br>
<b>Doesn't work with Windows Media Player (0.4.5 and earlier)</b>

Sigh.<br>
<br>
You must enable the plugin called "True Launch Bar Remote Control" in Windows Media<br>
Player (accessible from the little arrow underneath Now Playing, Plugins, Other).<br>
<br>
This plugin is implemented by wmp9.dll and seems to provide the hook needed for reporting WMP status messages.<br>
<br>
I've removed wmp9.dll from the pidgin-musictracker installer as the distribution rights are unclear.  Googling for "True Launch Bar" should find it :-)<br>
<br>
Needless to say, this was a complete crock and was re-writtten for 0.4.6<br>
<br>
<h2>8</h2>
<b>Doesn't work with foobar2000 (artist/track/title are blank)</b>

Direct foobar2000 player support is pretty fragile<br>
<br>
<ul><li>The title format needs to be the default "<code>[%album artist% - ]['['%album%[ CD%discnumber%][ #%tracknumber%]']' ]%title%[ '//' %track artist%]</code>"<br>
</li><li>The player paused state isn't detected<br>
</li><li>It doesn't work when player is set to minimize to tray</li></ul>

These limitations are pretty much intractable, given the way that direct foobar2000 suppport works (effectively by looking at the foobar2000 window title and guessing)<br>
<br>
Fortunately however, foobar2000 is much better supported either via<br>
<ul><li>the <a href='http://chron.visiondesigns.de/foobar2000/#foo_winamp_spam'>winamp spam</a> component (but this is still not perfect as some winamp messages we use aren't yet implemented)<br>
</li><li>the <a href='http://amip.tools-for.net/wiki/'>AMIP</a> component has "MSN Messenger integration" which, when enabled sends "now playing" messages for MSN, which musictracker can catch.  It seems to be necessary to swap the artist and title order (either by swapping the title and artist format fields in the AMIP configuration tool, or using musictracker's setting to do that; AMIP's "MSN Live Messenger (8.x) compatibility" settting is only needed for MSN Messenger 8.x betas and shouldn't be turned on for use with musictracker)<br>
</li><li>the offical last.fm foo_audioscrobbler component passes the now playing data from foobar2000 to the last.fm client, which sends "now playing" messages for MSN, which musictracker can catch. (Installing the <a href='http://www.last.fm/download'>last.fm</a> client will automatically install scrobbler plugins for all your players, including the foobar scrobbler component)<br>
</li><li>other foobar components designed to send now playing information to MSN messenger should also work.</li></ul>

So, with current versions of musictracker, the <b>recommendation</b> is to set player to 'auto-detect' (which tries 'Messenger compatible' before 'foobar2000') and install one of these components to help the track information get passed to musictracker.<br>
<br>
Since it doesn't work very well, the direct foobar2000 support will be removed at some future date.<br>
<br>
<h2>9</h2>
<b>How do I build from source?</b>

Usually, you don't!  The pidgin-musictracker packages available in most Linux distributions or the Windows installer are nearly always a much better choice.<br>
<br>
<ul><li>You need to have the pidgin development files installed.  These are usually in a separate package to the pidigin application itself, called pidgin-dev or similar.  Depending on your distro <code>apt-get build-dep pidgin-musictracker</code> or <code>yum-builddep pidgin-musictracker</code> should install all of the required packages to build for you.</li></ul>

<ul><li>Download and unpack the pidgin-musictracker-n.n.nn.tar.bz2 source package, then</li></ul>

<pre><code>./configure --prefix=/usr<br>
make<br>
sudo make install<br>
</code></pre>

or, for Windows<br>
<br>
<pre><code>make -f Makefile.mingw installer<br>
</code></pre>

<ul><li>For the Windows build, as we currently rely on some of the pidgin build infrastructure,  you'll also need the pidgin source at the relative path ../pidgin,  with a win32-dev/ which has been populated by the Windows build dependency fetcher, winpidgin-build-fetcher.sh.  This source needs to be buildable, i.e. have an appropriate config.h and local.mak.  See <a href='http://developer.pidgin.im/wiki/BuildingWinPidgin'>Pidgin for Windows Build Instructions</a> for more details.</li></ul>

<ul><li>For the Windows build, we don't provide and install a dynamic libpcre, so a static libpcre also needs to be made available to link the plugin with, one approach is to place that in a directory under win32-dev/ and add that directory to the LIB_PATH set in local.mak</li></ul>

<h2>10</h2>
<b>How do I build the source from subversion?</b>

Usually, you don't!  The source tarballs available on the downloads page are nearly always a much better choice.  If you must have absolutely the lastest source, try the snapshots page.  But if you really want to build from subversion (perhaps you want to send me a nice patch :-) ), perform the following steps before ./configure<br>
<br>
<pre><code>echo my-hacked-up-version &gt;version<br>
./autogen.sh<br>
</code></pre>

<h2>11</h2>
<b>Where are the linux binary packages?</b><br>
<b>I downloaded and extracted the Linux x86 plugin musictracker.so file, but what do I with it?</b>

There are links to binary packages for some distros on the main page.<br>
<br>
It would be nice have them for all major distros, but ... :effort:<br>
<br>
The downloads page offers a "Linux x86 plugin binary".  This shouldn't work anywhere but on the computer I used to build it, but often does.  Only people who are happy to troubleshoot their own problems should be installing that (and such people should be more than competent to build from source anyhow).<br>
<br>
You can drop the .so into /usr/lib/pidgin/ or ~/.purple/plugins/.<br>
<br>
Debian (and Debian-derived distros e.g. Ubuntu) will also need to 'sudo ln -s /usr/lib/libpcre.so.3 /usr/lib/libpcre.so.0' for this binary to work.<br>
<br>
<h2>12</h2>
<b>What does a "protocol has 'now listening'" mean?</b><br>
<b>Why is (some other IM client) showing the 'now listening' twice?</b><br>
<b>Why is the format 'title-artist' or 'artist-title(album)', not what I set?</b>

Some protocols (e.g. MSN) have a separate way of indicating 'now listening' information, so musictracker can potentially send the track information in two different ways: in your status message, and (for some protocols) in special 'now listening' element.<br>
Internally, pidgin calls this 'now listening' data a 'tune status'.  By default, musictracker will try to use both of these.<br>
<br>
Pidgin will show a music symbol next to a contact from whom it is receiving 'now playing' information.  If you hover the mouse over the contact, pidgin will show you both the 'now listening' (if the contact has one) and the status message in a tooltip.  (If the status message is empty, recent pidign also displays the 'now listening' information under the contact, in the space the status message would be).<br>
<br>
Note that this 'now listening' data is not usually a free text field, so the formatting you have configured in musictracker cannot be applied, e.g. for MSN, the format of this 'now listening' information is usually 'title-artist' or 'artist-title(album)'.<br>
<br>
If you don't want musictracker to set the status message for protocols where it can send 'now playing' information, tick the "Don't change status message if protocol has<br>
'now listening'" option in the musictracker configuration.  This will cause musictracker to just send the 'now listening' element and not update the status message.<br>
<br>
It is also possible to disable use of it in the account specific configuration.  At the moment, it is automatically disabled for all GoogleTalk and XMPP accounts.  This is useful for GoogleTalk, as the 'now listening' element is not implemented in the standard XMPP way and doesn't work that well with musictracker, but for non-GoogleTalk XMPP accounts with working XEP-0118 you may wish to clear that setting to enable musictracker to use the 'now listening' support.<br>
<br>
<h2>13</h2>
<b>How do I generate a debug log when pidgin is crashing?</b>

See the <a href='http://developer.pidgin.im/wiki/TipsForBugReports'>tips for bug reports</a> on the pidgin website for clear instructions.  Raise an issue <b>here</b> and attach the debug.log and pidgin.rpt files.<br>
<br>
<h2>14</h2>
<b>'now listening' doesn't work on WLM (msn-pecan)</b>

In some versions of msn-pecan, it seems you need to turn on 'Use independent personal messages' in the WLM account options to send 'now listening' information.  This option seems to have disappeared in the latest msn-pecan, we hope it works without it ;-)<br>
<br>
<h2>15</h2>
<b>Artist and Title are swapped</b>

There doesn't seem to be a definitive ordering for these elements in the 'MSN compatible' WM_COPYDATA interface.  So some players appear to send the artist and track name in the opposite order to that expected by musictracker, and there doesn't seem to be a good way to autodetect this.<br>
<br>
Maybe the offical MSN client can, but I don't know how it does that...  until someone can tell me how, users of such players will either need to<br>
open the musictracker plugin configuration dialog, select "Messenger compatible interface" in the player drop down list, press the "properties" button and tick "Swap artist and title", or look for a similar configuration in the player.<br>
<br>
<h2>16</h2>
<b>I updated iTunes and now musictracker doesn't work (or doesn't work properly)</b>

It seems that upgrading iTunes is known to sometimes break the COM interface used by musictracker to get track information. (For example see <a href='http://discussions.apple.com/thread.jspa?threadID=1701294'>http://discussions.apple.com/thread.jspa?threadID=1701294</a>)<br>
<br>
Uninstalling and then reinstalling iTunes using the full download should fix this problem.<br>
<br>
<h2>My Question isn't answered here! Help!</h2>

Please send a mail to the pidigin-musictracker general discussion mailing list if you have a question.<br>
<br>
If you find a bug or have an enhancement request, put it into the Google Code issues tracker<br>
<br>
<i>(Please to not post bug reports in the comments. Start a new issue instead)</i>

<b>Bug reports added as comments here will just be deleted.  Raise an issue instead</b>