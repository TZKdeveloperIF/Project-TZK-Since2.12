## 2.12 v08
Remove portable satchel in server scripts.
+ Remove the usage of portable satchel in AI_CheckDropBomb. In order scripts only check whether AI have "magSatchel".
+ Units join the server via "Join" design or because of player's disconnecting will be cleaned up its portable satchel.
+ Remove the portable satchel from soldiers' equipping scripts and AI leader's equipment. EAST sniper AT soldier equipping SVU-A instead of SVD.
+ Portable satchel is still available to players' group.

Adjust Res and Town Groups.
+ Recover their design, mostly modified since v04 for experiments. The period of loop is assigned as 30 seconds without random.
	+ Delay is remained in those ergodic parts.
+ Adjust the hibernate design. Unnecessary to delete units/vehicles, instead, repeatedly creating and deleting may be more expensive.
	+ Create some markers on players' clients.
	+ When players received the hibernate/spawn info, those markers will be placed/removed at the town flag to indicate the town is safe zone or not.
		+ Markers are available to CIV as well.
	+ When hibernate, TG will receive reinforce as general. When reinforce ready, TG will return to the hibernate check and do nothing but just halt.

Adjust the LOOP design.
The author found the "crash" (not no-response) problem become more frequent when applying loop design. 
After having add delay on the beginning of loop scripts the problem solved. Probably the release of last script cost some time.

The script of AI_Commander still use old design without loop.
Adjust the way AICO buy units in dev mode (dev ON in training MPMissions in everon and Freya_CTI island).

Adjust of AICO
+ The author found AI seldom stay home when loop design applied.
+ However on destroy part AI groups still can't do the "patrol co9 (whose position is at enemy MHQ)" well.
	+ They still have to be asked go to the closest town to enemy MHQ.
	+ Old design using a bool variable, which is binary. New design use a number and adjust the design into ternary.

*(This part is the by-product of researching "no-response" problem. Modifications here aiming to improve the mission. Although they probably don't relate to that problem, they're valid for some improvements and thus are remained.)*
The author use "setFriend" command of 2.01 and found the "no-response" won't appear if nobody killing each other.
The reason is no one will attack by portable satchel. However, the author used to thought the reason is because of too long unitMatrix/RearmData array.
+ The adjust of UnitMatrix is abandoned.
+ The adjust of RearmData is remained. Traditional design use a long array to record ALL units created in CTI.
	+ A unit with fixed type has a fixed equipment. Thus we can design an empty array whose size same as "unitDefs" to restore the equipment of each type.
		+ The elements of this array, "rDataMatrix", is array.
			+ The format of the element array is "[id, weapons[], magazines[]]"，the No.0 element indicates the priority.
		+ The **AddRearmData.sqs** will write data with priority "0".
		+ The **Equip** scripts will write data with priority "1".
		+ The **UpgState** script will write data with priority "2".
		+ Empty array will always be wrote. Otherwise the script will check the priority. Only when priority is "2", or priority more than existed data, will the script write.
	+ Units with undefined type (group leaders), custom soldiers and structures will use traditional design, i.e., be recorded into a long array (which won't be so long as before).
		+ They'll be distinguished by **AddRearmData**, if it received more than 1 parameters, and the second one means "type" of unitDefs.
	+ The record of resistance soldiers into RearmData is canceled. And only west/east town vehicles' equipment data will be writed by "EditEquipRearmData".
	+ Adjust **EditEquipRearmData.sqs** and **EditRearmdata.sqs** to fit new design.
	+ Adjust **GetRearmData** to fit new design. Many scripts using SQS syntax to get RearmData are recovered to use SQF as well.
	
Adjust the briefing.html. Parts of texts using handwriting.
Remove the reducing of DOOM.
Use "EffectBullet0_xj200" bullet for Fired Effects instead of Bizon bullet.
Recover those functions from string to SQF. No obvious signs that string is better than SQF and help solving "no-response" problem.
Fix the bug in dialog Equipment that missed loading Binocular and NVG.
Removed the hint when worker repairing structures set in v07.
Set Town Triggers' scripts as loop design. Attention, the "closestTown"'s side shouldn't be assigned as "siRes" only like before.
Remove some SQS syntax searching unit's type. Recover the usage of SQF.
Fix the "buy better NVG" channel. The binocular and NVG is removed from magazines and be treated as weapons in equipment system, but this script didn't adjusted.
Fix the KnowsAbout scripts using wrong variable name.
Set RallyPoint and PickupWait of AI as loop design. The number of their setting is passed in as a parameter. Set PickupWait don't keep on doing busySet and busyClear.
In dialog spectator, the carrying system using 15 for groups and thus causing bug. It's adjusted and using "GroupsNum" now.
Set a bool for CIV to turn ON/OFF the markers displaying. This bool can be set by marker in dialog or by 0-0-9 channel in 1st mode.
Managed to realize the 1st mode. "switchCamera", "cameraeffect" and delay is necessary.

Next step the author will mainly research the Server FPS. And the author now know how to test misisons better.
## 2.12 v07
Fix bug of money abnormal
+ The problem is because the script of Worker and SupportVehicle used undefined variable, which cause calculated money undefined.
+ This problem exist in the EventHandler of prim structure as well.

Set the loop design don't pass array. Not verified, but array in OFP is mostly assigned by pointer. Maybe passing array to new script will cause some variable unreleased.
Use sensor to pass the position info.
+ PlayerClient.sqs, Spectator.sqs, Income, KnowsAboutR, ResPatrolGroup.sqs, Server.sqs and TownGroup.

<s>Reduce the strength of doom mode.</s> This is abandoned in v08.
<s>Ask AICO only buy for the first 9 groups</s> This is abandoned in v08.
Remove the "distributed computing" of knowsAbout and towns' hibernate/spawn.
Adjust files.
+ Remove original scripts which had been modified into "loop" mode. Fill up 1-4 TG script.
+ Move SQF files into "SQF" folder.
+ Move mostly Action and Dialog files into subfolder. However some of them is defined and used by the MOD (in UserActions) and can't adjust their path here.
+ Move some effect and event script into "EH" folder.

Remove some unused initialization info in mission.sqm. Remove the execution of time and weather, they're general and should be executed by **Init.sqs**.
Set the rocket upgrade edit those built helicopters.
<s>Edit the magazines of 5 infantrys.</s> This is removed in v08, since portable satchel is proved caused the "no-response" problem.
Adjust the color of players' leader marker. Using color red.
+ In groupIsAI the color of AI leader should be recovered to blue.

## 2.12 v06
Bug fixing
+ Since busyCheck and temporaryCheck accept unit as its parameter, brackets is required between "not" command and other parts, or error will occur.
	+ This bug invalid all temporary order scripts.
+ Money bug.
	+ <s>Attempts in v06 is invalid, and is removed in v07.</s>
	+ The author thought the problem was because 2 public variable is used and the message script only "@" 1 variable.
		+ Although this isn't the source of the problem, this design is meaningful and thus be remained.
	
Adjust the radius parameter of Reclaim order to "response radius". Soldiers farther than this radius won't response to this order.
+ It would be better to set 2 radius for response and for empty vehicle range. But we've exhause our parameters.

Adjust syntax of 3 Money scripts. However this is meaningless.

Adjust UpdateWeather and TimeBoost script.
+ Although BIKI claim that "SkipTime" and many weather command has global effect, they have only local effect.
+ *This still require a calibration design, sending by server.*
	
<s>Adjust knowsAbout.</s> This design is canceled in v08.

Turn the script on server detecting whether player is disconnected into "loop" design.
+ And this still didn't solve the problem of Server FPS.
## 2.12 v05
Happened to discover that the cycling script, keep on using "goto", will lag the server, and modify it to pass status to new script and terminate old one can partly raise Server FPS.
Create "Start" and "Loop" folder for scripts.
+ resistance patrol groups.
	+ **DynamicInitializationGroup** execute the script in Start folder.
		+ Recover the script design, remove those trial settings in recent versions.
		  Using loadFile to gain start pos and patrol pos. Set SQF roll position at most 112 times.
		  In destroy part the group will halt for a period, if enemy structure is far away and all towns is occupying by resistance.
		  In destroy and take town part the "forEach" is abandoned and "goto" with 2s delay is applied for all units of group.
			+ Probably delay is necessary, or server might crash.
		+ Create a new script **Common\DelayMove.sqs** for resistance tank in destroy part. They'll first shoot then move, to make their attacking base more precisely.

Apply the loop design for other scripts. However this can't completely raise server FPS to keep mostly at about 60.
New design, with only resistance patrol groups, can keep FPS at about 60. If AI's 18×2 groups doing simple order the FPS is still high, but complex order still will reduce it.
Delay is necessary for loop scripts in the beginning, to make old ones exit and release resources.
+ AI Order scripts.
*Abandoned. They'll be restart if leader update the order.*
+ AI Leader scripts
	+ Pass status to new script every 3 minutes.
+ <c>AICO script.</c>
	+ Too many status for this script thus give up it's modification in this way in v08, and use old design.
+ KnowsAbout
+ Town Group
+ InitUnitFactory.sqs
+ worker and support vehicle script
+ Server script
	+ UpdateServer, UpdateIncome

Those cycling scripts on Player client should be modified as well. Some player's game often crash, and the reason might related to cycling script.
Besides, the camera of spectator become not smooth when game started for a while, and the reason may be same.
	+ UpdatePlayer(Spectator)，UpdatePlayerVehicle。
	+ Marker scripts.
		+ The feeling that map dragging and camera moving do become smoother.
		+ *But even though modify all scripts of spectator into loop mode, the whole game of spectator will be not smooth after having played tens of minutes.*

Server FPS will decrease with the increasing of players' number. Try to decouple knowsAbout design, ask player to calculate how its group knowsAbout other units.
+ <c>The change of Server FPS can't be felt thus this design and activating town is removed in v08. Server is still asked to check all units including players'.</c>

Set unit as the parameter of string of busy and temporary.
+ *This cause brackets required by "not" command, or error occur. This bug is fixed in v06.*

Add group name in the end of leader marker when choosing displaying player's name, and the color is set to be orange.
Add IDC of NVG and QUIT button of spectator in **InitGUIControlIDs.sqs**.
Recover the model of T80_TZK.
Move those codes of AI Order and Setting from **Init.sqs** to individual script in Common.
## 2.12 v04
Dialog TZK Setting
+ The "_last" array should response to the change of some options.
+ Set **Player\Info\GroupIsAI.sqs** rename the leader's marker.

Set sdDist of Light Factory as 35 (same as Air's), aiming to make plane not be blocked by the structure.

String and SQF files.
+ <s>Modify some lightly SQF into string.</s>
	+ Abandoned in v08. No feeling of improvement.
+ Remove some SQF files.
	+ AddToUnitMatrix.sqf is for searching index. We have find now.
	+ AddToStructMatrix.sqf is removed. See below.
	+ The money calculating on server don't use SQF any longer.
		+ The mutex in InitUnitFactory should be filled up.
	+ GetIdleFactory.sqf.
+ Adjust some string and SQF files.
	+ *grpSetting* often report error. It's widely used and can hardly be located. Thus it's removed in all *.SQF files.
	+ The dot product of vector don't support 3D-vector. This is fixed.
	+ String can receive parameters as well. Some of them are modified in this way.

Structures Design.
This adjust is aiming for optimize auto-buy.
+ The very first principle: Although mostly structures won't explode and died again like vehicles when being *setDamage 0*, we should still insist using new object replace ruined old one.
+ StructMatrix
	+ Since we insist to "replace" old one, we can't apply "find" to the object gong to be removed on remote client, because lag might exist in MP games.
	+ The building of structure is made by server. Thus we should broadcast index as well when broadcasting the sturcture.
	+ In this way we don't plan to remove "objNull" in the front of arrays. The size of array thus possible be unlimited.
		+ Factories' number is limited. Thus we should only pay attention to other structures like wall or roof. Their order is unimportant and we can fill structures from the beginning of the array.
	+ AddToStructMatrix
		+ Structure will be added only in **BuildStruct.sqf** and **StructuresServerRemove.sqs**. New design requiring broadcast index as well.
		+ Removing structure in **ReplacePrimStruct** needs delay since we need to *find* old one to get its index.
			+ Make use of **DeleteVehicleAfterDelay.sqs**.
			+ Executing **StructuresServerRemove** in the end, getting old object's  index and set new object in the matrix (using mutex at this step). Pass the index to broadcasting script.
			+ Abandon writing into matrix in **StructuresServerRemove**. Move the old structure out of the map and delete it after 10 seconds.
		+ Record the index at higher digit than si in **SendStructBuilt**. If passing -1 as index, the index will be the size of current array.
		+ Structures whose type recorded in structsShelter will fill the first objNull found in array.
	+ SendStructMatrixRemove.sqs
		+ Since player only receive the index and set the element directly, and the effect of deleteVehicle is global, it's unnecessary to remove objNull from matrix on players' client.
		+ Abandon the executing of **SendStructMatrixRemove.sqs**.
+ The *structuresServer* array on server.
	+ This array is for remove other components when main structure being deleted.
	+ Aiming to apply "find" command, it should be decoupled into 2 arrays.
	+ Adjust corresponding scripts.
+ The *repairableStructureMatrix* matrix on server.
	+ This matrix is for structures need repair. Old design using SQF files to repair them. It would be better to use SQS files combining with mutex.
		+ Old design will delete the destroyed structure immediately when it's repaired. Since new design remove the structure from matrix but not delete it immediately, error will occur. Thus modification is necessary.
	+ Decouple the matrix to fit "find" command, define a new *repairableStructureInfo* array.
		+ Aiming to make workers repair structures in order, new destroyed one should be added in the end. A new SQF is required to search objNull from the end.
	+ Modify RepairStructure.sqf into SQS syntax. The codes is executed by worker and support vehicles. mutexRepairStructure is taken form ReplacePrimStruct to their scripts.
		+ The codes will "set" objNull to repairableSturcture when having repaired the structure, unlike old design which wait till old structure being deleted.
	+ Other relating scripts' modifications.
	
AI auto-buy
+ New design of StructMatrix make the repaired factory's order not changed. This make auto-buy unnecessary to adjust setting if a factory once destroyed but soon repaired.
+ In **UpdateLeader.sqs** the auto-buy script will be executed on each 5 seconds. Since server FPS might reduce to 6 or 5, it's better transplanting codes into **UpdateLeader.sqs.**
	+ For groups being set auto-buy factory, it'll always buy from the factory whose index same as being set in setting.
		+ The index of factories is fixed. Ruined factory won't be replaced by next one, unless it's destructured or disappeared because of not repaired for long.
	+ The random number for "select" should minus 0.5.
		+ An array in OFP whose size is "a" can ***select a***, but the return value is nil.
		+ 0.5 is special for "select". It's not rounding as common sense. Selecting .5 is equivalent to selecting closest **even (not odd)** number.
			+ Since 0 <= random x < x, selecting (ramdom x - 0.5) is always legal, when x is the size of the array.
+ Set AICO will buy special units when dev is true and getworld == "eden", for experiment.
	
AI order system.
+ Abandon the minus and applying "find" with "set" when removing elements from arrays of busy and temporary. So do "*CheckSupportUnits* array.
+ Use pointer to optimize the scripts of aiSetting, orderMatrix and orderTempMatrix. 
	+ Define a local pointer pointing orderMatrix select _si select _gi, etc.
+ Turn off the hit-EH of AI infantry. Remain the Fired-EH.

AI satchel. This is a trial when exploring the reason causing "no-response" server. Problem is solved in v08 version.

Add delay in Town Group script and resistance patrol group script.
+ Not proved, but it seems not bad adding delay in ergodic parts.

Overlap function.
+ This function is unnecessary. One can simply use *"_x in A" count B > 0* to judge whether A and B have same element.

Dialog Spectator.
+ Add bFreeMode in **InitSpectator.sqs** for spectator's 1st mode.
+ In the "#Quit" part of **Dialog Spectator.sqs**, use switchCamera to switch camera to player, use cameraEffect to take control, and set 1 second delay.
	+ If lacking cameraEffect player can't control its role.
	+ If lacking delay the camera switch might error and missing target.
	+ In OFP the camera is on for player, thus can't turn off all cameras (by "terminate" parameter).
		+ *Bug in right upper corner, the groups list, has been fixed in v08 version.*
+ **UpdateSpectator.sqs**
	+ Variable "_posFreeMove" is for recording position in 1st mode. It's initialized as player's start position. It'll be recorded when exiting 1st mode and used for place player on next time entering 1st mode.
	+ Add a condition in main loop after condition of gameOver and alive to pause position reseting.
	+ Not allow spectator enter any vehicle in 1st mode in order to avoid spectator affect the game.
	+ Keep on removing spectator's weapon in 1st mode.
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