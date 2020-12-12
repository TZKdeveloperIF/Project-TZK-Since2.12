#Radio Rearm Channel
0-0-7 ~ 0-0-0 channels for soldiers.
##4.0.5.00
+ Adjust script logic of NVG.
+ Make the anim change in rearming secondary weapon ammo available for 2.01 game only.
+ Adjust the ReloadMagazineTime of "9M311".
+ The error debug msg*'_set = aiSetting select _si select _gi select# _ais': Error Zero divisor* due to rallyPoint script. Maybe join and gi have errors.
	+ In rallyPoint script if _gi == -1 then script will sleep, and quit if this last for 2 minutes.
+ **Join and order not refreshed on non-dedicated-server remain unsolved. Maybe due to "+1" for order scripts not enough on server. Try +3.**
+ Solve the missile bug of 4xAA.
+ In AICO_CheckBuyUnit.sqs, AICO will pick up the first kind of factory from returned array. However for "-1" udFactoryType object the returned array is empty. This case should be excluded.
+ *The groupSize check of Join hasn't been solved yet. Unable to locate the problem. Add a showDebug info for testing.*
	+ Fix the bug in Server\Join\DelayAssign.sqs.


#4.0.4.08
+ Missing adjust script path in "Server\AI_UpdateCommander.sqs". This will cause error only when fighting with AICO.

#4.0.4.07
+ Unimportant income display bug due to lacking of definition of local variables in Player\Dialog\Options.sqs

#4.0.4.06
+ The undefined "Marker_TZK_199Rem" will make initial vehicles unable to have markers. The undefined variable case shall be handled in another way.
	+ Besides, format of undefined variable or of calling name of undefined variable (a string) is "scalar bool array string 0xfcffffef", but calling undefined variable will return "scalar bool array string nothing 0xfcffffef", an extra "nothing" will appear.

#4.0.4.05
+ ReloadMagazineTime of "9M311" is too long (90 seconds). Before new mod's releasing east 4xAA shall use "RedTop" instead. ***Have been solved in 4.0.5 version.***
	+ Only "Common\Equip\Tunguska.sqs" require modifying. "Common\ReEquip\4xAA..." is compatible with both missiles.

