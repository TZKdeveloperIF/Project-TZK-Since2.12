Basing on motion equation of "shotShell"-simulation CfgAmmo class member, artillery module is possible to be designed and introduced into CTI. Since this part is still in developing, its scripts should be placed in mission but not AddOns.

#4.0.5.00
+ Set new power of mortar 81mm: hit = 0; indirectHit = 40; indirectHitRange = 10;
	+ Quite weak. This is aim to reduce the influence of mortar when attacking tank. 
+ Prepare another weapon/magazine for this mrotar 81mm ammo.
	+ For directly shoot magazines (initSpeed = 200), no longer range difference.
+ Add PP89 (CHN) mortar model as east 82mm mortar structure.
+ The available maximum initSpeed of mortar structure is 120m/s.
	+ *It's optional to set minimum initSpeed of Howitzer Vehicles more than 120 to limit their trajectory. This can be done later in radio/order scripts in the mission.*
+ Allow M252/PP89/M119/D30A "canfloat" to fit "attach" system.
	+ Adjust the "armor" attribute of these structures to make soldiers shooting at them with rifle.
	+ Adjust the position of "zarmeny" in their models to make gunner easier to be killed.
+ Adjust the *structure avoiding* design. Threshold raised to 50 meters and provide another SQF file to search enemy objects only in *structsCritcal*.

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
	+ ***Later in 4.0.5 the maximum initSpeed of mortar structure called by radio channel should be 120 but not 180. Done. ***
+ Add structure avoiding in mortar structure and howitzer (structure/vehicle). Still allow tank, MLRS and soldier attack structure directly.
	+ Ask script seek for another target position if target is close to enemy structure (40 meters).
+ Allow mortar/howitzer structure able to be attach.

