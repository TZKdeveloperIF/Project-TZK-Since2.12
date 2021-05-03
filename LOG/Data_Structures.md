Having learnt simple data structures, I'll try apply them to adjust/optimize TZK script design.

## hash
It's hard to hash human object directly. When they're alive and belonging to a group, the "format" command will return its group and id info. Only dead man will return an string containing id info.
2.01 command, "NetworkID", can create a unique array in MP game, which is good for a hash table. However this command is invalid in 1.99 and thus improper if wish to make TZK work in vanilla as well.