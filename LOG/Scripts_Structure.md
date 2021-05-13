Aiming to reduce the volume of mission files, many scripts are placed in AddOns but not in mission. However this will make script adjusting more inconvenient. Having tried on 4.0.4 version, the structure of scripts should be better designed in 4.0.5 version.  
Besides, the use of **Preprocessor** can help a lot to simplify the mission.sqm and description.ext as well. This part is illustrated in **Preprocessor.md**.
# Hint
+ "goto" Loops in init.sqs will be busily executed as if it's a be called sqf/string.
  init.sqs中的goto循环会被忙处理，如同sqf脚本或string字符串。

# 4.0.5 Done
+ Modifications in "impl" folder of 4.0.4 have been merged in 4.0.5.
+ Scripts relating with external mods.
	+ Commented "UnitTypes_MFCTI116_TZK_Units.sqf" and add impl in "Common\Init\UnitTypes_VanillaMode.sqf".
+ Add implments in important initialization scripts.
	+ Unit/Struct/Equip
	+ Order of Server AI group and Player ai members.
	+ SQF functions of common/server folder.
	+ Some dynamic initialization scripts.
		+ Player Markers and Player/Server Triggers.
	+ Radio important entrance.
		+ "Radio_Update_Vehicle.sqs" and "Radio_Update_Vehicle_Spectator.sqf" are placed in mission. By now it's just an entrance to same name file in AddOn.
		+ Few edited radio scripts (entrance are in mission and link to scripts in AddOn).
+ Make "init" series scripts better decoupled.
	+ Init.sqs will exec scripts packed in addon to reduce its contents.
		+ Constants can be adjusted later. But entrance of scripts should be remained in mission scripts.
	+ For *message* scripts, their *handle script* (if they have) can be passed as parameter in their entrance.
	+ Some other scripts can pass script path via parameter to remain access in mission (like InitClient and InitSpectator).
	+ Remain Server\Start\AI_Leader, Server\AI_Start and Server\AI_UpdateCommander as implments.
		+ There're still some scripts using "\%" in script path assigning. But by now they don't have to be adjusted.
+ Important and better-placed-in-mission Actions and Dialogs. (Many of their entrance are defined in AddOns.)
	+ Attach
		+ Entrance of actions and dialogs are placed in mission.
	+ Option
		+ Entrance of Option dialog are UpdateOptionsAction, UA in AddOns and radio channel. They're all adjusted.
		+ Update its "updating sqf" in player\dialog\options.
		+ Set it as entrance of script in AddOn by now.
	+ AIGroupOrders/AITemporaryOrders, UnitCam
		+ All entrances are pointing to scripts under General "Player\Dialog\..". By now scripts under "Player\Dialog" are pointing to scripts in AddOn.
+ Repair, Rearm should be placed in mission (player side dialog, player/server repair/rearm scripts)
	+ "Player\HealRepair.sqs", "Player\Rearm.sqs", "Server\AI_Heal.sqs" and "Server\AI_Rearm.sqs" and dialog of RepairRearm should be placed in misson.
		+ By now they can just link to same name file in AddOn.
	+ All scripts using scripts above should link to new (implemental) scripts *placed in mission*.
+ Vote dialog/msg are remained in mission.
+ Income.sqs under Server is remained in mission.
+ Artillery Module has been moved in mission.
	+ *SwitchMagazine* command of player/server is edited as well. Speed limit of mortar of new version is 120m/s.
+ Checked other updated 4.0.4 scripts and put all scripts relating with them to 4.0.5 AddOns.
	
##4.0.4.07
+ Decouple AI order with mission. ***Has been completed it in 4.0.5.***
	+ Order scripts are executed in many position like AI_Leader, AI_Start, AI_UpdateCommander, etc. Decoupling them remains many redundant stuff need to be modified.
+ Decouple AI Order of server/player with mission. ***Has been completed it in 4.0.5.***
	+ "impl\AI_Order_Player.sqf" is loaded by initplayer after a delay. This should be added in Player\Init\AIOrders.
+ Decouple Artillery Module with mission.
+ Decouple attach dialog with mission.  ***Has been completed it in 4.0.5.***
	+ Many external scripts and radio channel using scripts in addon.
	+ UserActions using scripts in addon.


##4.0.4.05
+ Player\SQF\StringWithoutVersion.sqf
	+ New postfix "_xj405" is applied for vanilla objects. Actually it's enough to exclude "_xj" postfix.