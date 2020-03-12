## 2.12 v02
Optimize the EditRearmData series scripts. Set upgrades of 4xAA edit existing units' magazines (via 2.01 support commands, ammoArray/magazinesArray/addMagazinePrecise). Fix bug in UpgState scripts as well, they should take the situation via _upg, not the matrix directly. Old bug will make existing unit double their magazines everytime when new upgrade happen.  
Add "All" for Temporary Order system. Adjust the dialog, send/msg by double the constant "GroupsNum". "All" is invalid for those groups whose "order lock" is ON.  
Add temporary order to control AI groups switch Sabot/Heat. There isn't "reload magazine" action for AI by script in OFP, thus use ammoArray/magazinesArray/addMagazinePrecise commands again here. AI gunner will activate the script unless the vehicle isn't local to server.  
All Order/OrderTemp scripts are moved into a subfolder of "Server". Some scripts have bug in their "index" and are fixed this time.  
Adjust howitzer from "fixed turret" to "limited turret".  
Remove cannon of 4xAA added in v01. The cost of RedTop missile is same as AA, namely 20,000, meanwhile the cost of bullet4x20 is only 30. AI almost never use missile unless the cost is adjusted.  
Refering to "MsgUnitBuilt", the number of "Msg" scripts for killed-tank are 5 as well. And resistance tank using game-logic pre-set by MOD to broadcast their death.  
Aiming to get avoid of bug that notepad not displaying, the options about pad is added in TZK_Mission_Setting Dialog as well.  
The marker displaying in dev mode of enemy vehicles and structures is conflict to dev-off mode. Scripts should thus be closed in dev mode.    
## 2.12 v01
Fix bug about Incoming EH. Incoming EH won't be activated by missiles that Incoming EH isn't added on their client.  
Adjust scripts about aircrafts' spoof missile. Dedicated server should never create (drop) effects.  
Fix bug about missing removing " REMOTE" in "GetUnitMarker.sqf".  
Add cannon to 4xAA.  
Introduce T80 with drum displaying switch.  
Add killed tank burning effect.  
Add mission on usmc_gala.  
## 2.12 v00
Adjust the version's name. Use "v00-v99" for future updating.  
Decouple marker's refresh mode and optimize the way markers displaying.  
Add structure markers' displaying.  
Get the marker's position when player using UC to select a unit.  