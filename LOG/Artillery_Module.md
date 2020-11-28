Basing on motion equation of "shotShell"-simulation CfgAmmo class member, artillery module is possible to be designed and introduced into CTI. Since this part is still in developing, its scripts should be placed in mission but not AddOns.

#4.0.4.07
+ Rename the upgrade of "Trace Special Shell" as "Trace Artillery Shell".
+ Decouple artillery module scripts with addons.
	+ Entrance of orders (of player/server), EH of Common\EH\Fired_ReviseShellDir, SQF of RK4.
+ Add Soldier order for AI groups.
+ Adjust controlling mode of soldier scripts.
	+ Control throw/mortar scripts via magazine counts. 
		+ Using loop to wait its magazine loaded (except for 1 mag case). In the loop death/order updating should be checked.
		+ Rearm check should be contained in loop too, since "fire" will cost time for it requires animation of soldier.
		+ This design is invalid to grenade launcher since MM1/6G30/"Vest" has many ammunition in their magazine.
	+ Add delay time for GL launcher.
	+ Allow soldier rearm at their side barrack structure.
+ Raise price of mm1/6g30 magazine ($5 per grenade and extra $10 for rapid reload).
+ Add distance limit on mortar structure. 800 meters.
	+ **Later in 4.0.5 the maximum initSpeed of mortar structure called by radio channel should be 120 but not 180.**
+ Add structure avoiding in mortar structure and howitzer. Still allow tank, MLRS and soldier attack structure directly.
	+ Ask script seek for another target position if target is close to enemy structure (40 meters).
+ Allow mortar/howitzer structure able to be attach.

