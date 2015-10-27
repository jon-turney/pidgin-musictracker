  * ~~[MPRIS](http://mpris.org/)-compliant DBUS player track-info retrival~~
  * ~~Sensible WMP support~~
  * ~~XMPP tune status support~~
  * ~~Other outstanding patches~~
  * ~~issues with track info containing hyphens? winamp related?~~
  * ~~XMMS2 support needs work: should use dlopen/dlsym to avoid depending on presence of library (detected at compile time at the moment)~~
  * ~~Last.fm feed support needs work: breaks player autodetection at the momeent, should look at timestamp and infer off it is more than 5 minutes (configurable?) in the past; look at what [pidgin-lastfm](http://code.google.com/p/pidgin-lastfm/) does?~~
  * Generate reasonable linux binary packages (hopefully without needing a system with each kind of linux distrubution on)
  * ~~When regex matching fails, log something useful~~
  * ~~Are we leaking memory every time we pcre\_compile? Check for leaks generally...~~
  * Go back to cache pcre\_compile results when regex is fixed
  * Use purple\_plugin\_pref() API rather than GTK directly?
  * asynchronous track info retrieval: dbus calls were synchronous, now synchronous with a timeout; and other retrieval follows a similar pattern.  This is not ideal as we are blocking a thread critical to pidgin's responsiveness while we wait. Properly async would be better?  How would elapsed track time and progres bar formatting elements work when we don't poll?
  * Player auto-detection gets complex in async case: 2 passes, first to launch all the data requests, the second to collect them all? (fold remaining synchronous retrieval into the collect phase?); evaluate if more than one player has returned info and break ties using the list of players we use sequentially at the moment (so no change in apparent behaviour);
  * Player autodetection should perhaps retry the player it found last time first before trying all the other alternatives?
  * ~~Filter isn't applied to tune status~~
  * Enable and test SqueezeCenter code under Windows
  * ~~Windows uninstaller~~
  * Write a patch for pidgin which allows the MSN tune presentation hint to be set as a tune status attribute
  * ~~Make UI translateable~~
  * If the media player is playing video, provide an option to ignore it
  * Address FAQ #1 by putting a separate (hideable) pane into the Pidgin buddy window, so we can show that we are doing something (as it's less than clear we should change the status selector, and interacting with it has some difficulties)?  Could show music emblem, player type and status, track details?  This gives some feedback in the glorious future when the default is to change tune status only...
  * Alternatively, address FAQ #1 by working out how to interact with the pidgin status selector cleanly.  Probably requires core changes to teach purple not to remember statuses set by musictracker...
  * Replace handwritten dbus code with code generated using dbus-binding-tool or similar
  * Improve player selection dialog so we can do more than chose a specifc player or autodetect, allow a player preference order to be specified.  Also stop overloading the player selection as choosing a player for configuration.

_(Please do not put feature requests in the comments. Start a new issue or vote for an existing one instead)_