# setDamage 0
+ It's not recommended to apply **setDamage 0** to **dead** objects. Such objects won't appear in 2-target and 4-embark list.

# Unit external data
It would help a lot if able to add external data to specific unit. The simplest way is uses an array to contain all units, "find" a unit's index and take external data from another array, however this is inefficient
## Rating
All units including AI has its own rating. However this value will change if he killed enemy/friendly units.  
If in mostly general cases the rating changes 1 or more at least, decimal part can be applied to restore informations.  
## Flag
Soldier can have a flag. But flag should be created and managed by flag carriers.  
Vehicle can't have a flag. Its flag status is decided by the member.