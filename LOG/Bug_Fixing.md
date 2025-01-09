# CONFIG
Bug due to definition in CONFIG needs to be completely solved by mod updating and tried to be simply fixed in-mission.

## 4.0.5.12
+ Fix bug in art module that AI won't change its direction when target pos changed.
+ Remove abandoned art scripts.
## 4.0.5.11
+ Add script for me only to spy group size info when join failed due to size exception.
## 4.0.5.09
+ Fix script name error in player groum tank artillery module.
## 4.0.5.05
+ The PP87 82mm mortar for EAST is packed in TZK_CONFIG_4_0_5. It's unnecessary to remove it for vanilla mode. Implement is added using delay script.
	+ **Solve this bug in 4.0.6**
+ "Priority Seat" error in reclaim order.
  回收载具命令中的“优先座位”错误

## 4.0.5.01
+ Error definition of Su25 series and its vanilla units.
	+ Almost all su25_xj400 with their vanilla version is ruined. Apply normal Su25_xj400 and Su25_Vanilla_xj405 on all of them.
	+ Special fired effect (base buster LGB and tomahawk/raduga missile) and afterburner function relying on "typeOf" string of object. Scripts are adjusted.
		+ FiredPlaneMissile.sqs.
		+ *"countType" for 1.99 missions.*
			+ *Those missions playing on 2.01 will use 2.01 radio system thus isn't adjusted here.*
		+ Units checking...
			+ TZK: Raduga/BB equip OK, effect OK, afterburner OK. Other LGB effect: NO.
			+ MF: Raduga/BB equip OK, effect OK, afterburner action OK, *no radio channel, as expected*. Other LGB effect: NO.
			+ SE: Tomahawk/BB equip OK, effect OK. $20 K east LGB8 plane and east raduga plane has error definition, but that's not my work.
	+ **Scripts should be adjusted in 4.0.6.**
		+** Common\EH\FiredPlaneMissile.sqs**
		+ **impl\unit, unit_vanilla_redef.sqf**
	+ **\_xj400 series su25 is polluted. In new "external" config new postfix should be prepared. And it's necessary to give another base class inherit from BIS A10/Su25 and for vanilla TZK A10/Su25, because other mods' planes might inherit from A10/Su25 as well. We need TZK A10/Su25 as base class in "countType" command of afterburner design.**
		+ Release another same name pbo in 4.0.6. Use another name in CfgPatches. 

# Radio Rearm Channel
0-0-7 ~ 0-0-0 channels for soldiers.
## 4.0.5.00
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

# 4.0.5.02
+ Missing load parameter from _this in InitPlayer_Msg.sqs, which leads to "no enemy spot" message error.

# 4.0.4.07
+ Unimportant income display bug due to lacking of definition of local variables in Player\Dialog\Options.sqs

# 4.0.4.06
+ The undefined "Marker_TZK_199Rem" will make initial vehicles unable to have markers. The undefined variable case shall be handled in another way.
	+ Besides, format of undefined variable or of calling name of undefined variable (a string) is "scalar bool array string 0xfcffffef", but calling undefined variable will return "scalar bool array string nothing 0xfcffffef", an extra "nothing" will appear.

# 4.0.4.05
+ ReloadMagazineTime of "9M311" is too long (90 seconds). Before new mod's releasing east 4xAA shall use "RedTop" instead. ***Have been solved in 4.0.5 version.***
	+ Only "Common\Equip\Tunguska.sqs" require modifying. "Common\ReEquip\4xAA..." is compatible with both missiles.

