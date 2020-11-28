Aiming to reduce the volume of mission files, many scripts are placed in AddOns but not in mission. However this will make script adjusting more inconvenient. Having tried on 4.0.4 version, the structure of scripts should be better designed in 4.0.5 version.


#4.0.5 plan
**Check the date files modified isn't good since "git checkout" applied. All of them shall be modified directly, or try compare 2 versions.**
+ Player\DynamicInitializationMarker
	+ Remove 1.99 markers. Correctly define "mod" marker. If not 1.99, create other markers for mf/totalYugoWar.
+ **Common\DelayCode.sqs**
	+ In 4.0.5 mod a new "delay" subfolder should be created under "Common".
+ AI group order scripts are defined in orderDefs and orderTempDefs. Their path should better be "absolutely", which require decouple prefix in Server\...\AI_Leader.sqs.
	+ Also orders for player group should be edited too.
	+ Many scripts should be designed in this way.
		+ Functions should have impl.
+ Artillery Module should be placed in mission.
+ Radio system should be started in mission (scripts can be placed in addons)
+ Dynamic scripts should have impl.
+ Options and some important dialog should be remained in mission (at least the entrance)
#4.0.5 Done
	
##4.0.4.07
+ Decouple AI order with mission. **Remain complete it in 4.0.5.**
	+ Order scripts are executed in many position like AI_Leader, AI_Start, AI_UpdateCommander, etc. Decoupling them remains many redundant stuff need to be modified.
+ Decouple AI Order of server/player with mission. **Remain complete it in 4.0.5.**
	+ "impl\AI_Order_Player.sqf" is loaded by initplayer after a delay. This should be added in Player\Init\AIOrders.
+ Decouple Artillery Module with mission.
+ Decouple attach dialog with mission.  **Remain complete it in 4.0.5.**
	+ Many external scripts and radio channel using scripts in addon.
	+ UserActions using scripts in addon.


##4.0.4.05
+ Player\SQF\StringWithoutVersion.sqf
	+ New postfix "_xj405" is applied for vanilla objects. Actually it's enough to exclude "_xj" postfix.