**Changes in 0.5.0** _"a test release for the more adventurous"_
  * Rework trackinfo collection to be more flexible, update all player interfaces to retrieve whatever extra track information is available from that player (if any)
  * Allow the addition of "%{tag}" in format string to represent an arbitrary tag. Tags available may vary by player and source. **Note:** there's no mechanism for looking at the list of tags at the moment, you'll have to open the debug window to see what is available; more work also needs to be done to standardize the names of more common tags between players
  * Rewrite status message generation to allow the addition of "%s" as the pidgin saved status and clarify the logic a lot
  * Fix a bug with track time data from banshee 1.0, a uint not int
  * Fix some issues found by [Valgrind](http://valgrind.org/)
  * Tidy up xmms to reduce debug spam a bit