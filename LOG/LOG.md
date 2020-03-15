## 2.12 v03
+ Server Burden
	+ "find" command. The "getIndex.SQF" is replaced by "find". However if apply "find" in other SQF files, the burden seems not be reduced.
		 + AddRearmData, EditRearmData: They're modified not to rely on SQF.
		 + GetRearmData、GetUnitTypeFromObject: Since they're widely used, they're not removed. Decouple them with many scripts, the **funcGetUnitTypeFromObject** on server will be used by Order and OrderTemp SQS scritps.
		 + In GetUnitTypeFromObject.SQF, copying array but not address requiring a **+** operator.
	+ RES patrol group script
		+ Decouple **UpdateResPatrolGroup.sqs** with SQF. Group's command will all be done by SQS.
		+ The patrol position will be roll and judged by SQS as well, with a 0.1 second delay.
	+ Remove CheckDetachedVehicles script from **UpdateServer.sqs**. There'is *call back MHQ* radio channel for COMMANDER and don't have to use this.
+ In **AddWorker.sqs**, it's necessary to use the *tug*'s position to deploy workers when MHQ is attached.
+ In **InitUnitTypes.sqs**, the displaying name of howitzer is changed (from *fixed* to *limited*). Adjust the texture's path of ka50.paa, and remove the paa file from **Player**.
+ Fix the bug that *_xj301* remain in Equip script of Mortar soldier.
+ Shoot Target
	+ Create 20 markers for shooting. 10 of them are for AI groups, but they're not made yet. In **InitPlayer.sqs** 10 invisible "H" are *camCreate*-ed.
	+ Add **Set/Clear Target** and **Shoot Target** for player group commanding. They're available for tank, howitzer, art tank, mortar structure and M46 filedgun. The author tried to add Mortar soldiers in this design, however "fire" script command for soldier is useless (soldier will always aim up in the air before firing).
	+ Rename all order scripts under **Player**. They're placed in **Player\Order** now.
+ ShowPad and ShowGPS should be added into **UpdateSpectator.sqs**.
+ Missing semicolon in MappingSpectator.sqf are added.
## 2.12 v02
+ Equip
	+ Optimize the EditRearmData series scripts.
	+ Set upgrades of 4xAA edit existing units' magazines (via 2.01 support commands, ammoArray/magazinesArray/addMagazinePrecise). 
		+ The corresponding SQF are placed in **Common\ReEquip**.
		+ Fix bug in UpgState scripts as well, they should take the situation via _upg, not the matrix directly. Old bug will make existing unit double their magazines everytime when new upgrade happen after having graded "2x magazines".
	+ Remove cannon of 4xAA added in v01. The cost of RedTop missile is same as AA, namely 20,000, meanwhile the cost of bullet4x20 is only 30. AI almost never use missile unless the cost is adjusted.
+ Temporary Order
	+ Add "All" for Temporary Order system.
		+ Adjust the dialog
		+ Adjust send/msg by double the constant "GroupsNum".
		+ "All" is invalid for those groups whose "order lock" is ON. 
	+ Add temporary order to control AI groups switch Sabot/Heat.
		+ There isn't "reload magazine" action for AI by script in OFP, thus use ammoArray/magazinesArray/addMagazinePrecise commands again here.
		+ AI gunner will activate the script unless the vehicle isn't local to server. Script placed in **Common\ReEquip** too.
	+ All Order/OrderTemp scripts are moved into a subfolder of "Server".
	+ Some OrderTemp scripts have bug in their "index" and are fixed this time.
+ Adjust howitzer from "fixed turret" to "limited turret".
+ Refering to "MsgUnitBuilt", the number of "Msg" scripts for killed-tank are 5 as well. And resistance tank using game-logic pre-set by MOD to broadcast their death.
+ Aiming to get avoid of bug that notepad not displaying, the options about pad is added in TZK_Mission_Setting Dialog as well.
+ The marker displaying in dev mode of enemy vehicles and structures is conflict to dev-off mode. Scripts should thus be closed in dev mode.
## 2.12 v01
+ EventHandler
	+ Fix bug about Incoming EH. Incoming EH won't be activated by missiles shot from the client on which Incoming EH isn't added.
	+ Adjust scripts about aircrafts' spoof missile. Dedicated server should never create (drop) effects. publicExec is still applied.
+ Fix bug about missing removing " REMOTE" in "GetUnitMarker.sqf".
+ Add cannon to 4xAA for trial.
+ Introduce T80 with drum displaying switch.
+ Add killed tank burning effect.
+ Add mission on usmc_gala.
## 2.12 v00
+ Adjust the version's name. Use "v00-v99" for future updating.
+ Decouple marker's refresh mode
	+ Units' and vehicles' marker of player's side are refresh by SQF at 2Hz.
	+ Enemy vehicles' refresh using SQF and $$\leq $$ 1Hz. The script will check radars first, then check spy satellite position.
	+ Structures' marker will be updated per 30 seconds, judge isNull or not. Black color is extra for ruined structures.
	+ Optimized the main loop. The "hide" will be executed only once.
+ Get the marker's position when player using UC to select a unit. Old design is inconvenient to select vehicles moving fast like plane.