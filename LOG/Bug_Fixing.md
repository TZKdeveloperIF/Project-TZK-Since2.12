#4.0.4.07
+ Unimportant income display bug due to lacking of definition of local variables in Player\Dialog\Options.sqs

#4.0.4.06
+ The undefined "Marker_TZK_199Rem" will make initial vehicles unable to have markers. The undefined variable case shall be handled in another way.
	+ Besides, format of undefined variable or of calling name of undefined variable (a string) is "scalar bool array string 0xfcffffef", but calling undefined variable will return "scalar bool array string nothing 0xfcffffef", an extra "nothing" will appear.

#4.0.4.05
+ ReloadMagazineTime of "9M311" is too long (90 seconds). Before new mod's releasing east 4xAA shall use "RedTop" instead.
	+ Only "Common\Equip\Tunguska.sqs" require modifying. "Common\ReEquip\4xAA..." is compatible with both missiles.
	