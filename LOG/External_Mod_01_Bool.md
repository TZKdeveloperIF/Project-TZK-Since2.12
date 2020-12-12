There're some bool variables defined in mission.sqm and standardized in init.sqs to control the mode of TZK mission.
+ dev: Missions for developer to test and for player to get familiar with new designs quickly.
+ bool_TZK_Vanilla_Mode: Missions relying TZK AddOns only on TZK_Objects.pbo (and subsequent config pbos).

+ bool_TZK_199_Mode: Missions for 1.99 version. It shall control script commands (many 2.01 script commands applied in TZK mission. They won't work and will display debug error in 1.99 ACWA).
	+ bool_TZK_MF_Mode: Missions for mfcti mod.
		+ bool_TZK_ETON_Mod: Means @ETON85 mod being applied. By now this is for MF mode redefine, introduce T62, T72A, T72B model there.
	+ bool_TZK_Yugo_Mode: Missions for totalYugoWar mod.
	+ bool_TZK_SEMod_Mode: Missions for TZK_SE mod.

+ boole_Infantry_Mode: Missions with infantry-only mode. It's not widely applied.

##4.0.5.00
+ Commented "UnitTypes_MFCTI116_TZK_Units.sqf" and add impl in "Common\Init\UnitTypes_VanillaMode.sqf".
+ Merged implements for Yugo mode in TZK basic unit/struct/equip scripts.

##4.0.4.05
+ bool_TZK_199_Mode decouple and redefine (if game is on 2.01, reassign the bool_TZK_199_Mode value and make the game using 2.01 script commands).
	+ Need decouple bool_TZK_199_Mode with other mods. This bool shall indicate only the version but not actual mod like mfcti/totalYugoWar.
		+ Scripts checked. However many of them are contained in AddOns. By now 1.99 missions can't apply 2.01 feature under 2.01 game on those scripts.
			+ Critical scripts, unit/structure/equip, are started by init.sqs and prepared entrance for them.
			+ MF is the 1st 199 ver, where 199 bool is applied to redefine units. It shall be modified using MF bool. Since the script is hard-coded in TZK_Scripts_4_0_4, it's necessary to re-link initUnitTypes in Extra folder. ***Have been merged in 4.0.5 version.***
		+ The special NVG is available in 2.01 game. But it isn't contained in yugo mod equipment list in earlier version. By now it's filled.
		+ **Need check stability in 1.99 game.**
			+ New anim change for soldier rapid rearm shouldn't contained in 1.99 version.
	+ Need a method to remove 1.99 radio/town sensors and thousands of markers.
		+ Markers done. deleteMarker available.
			+ Markers in mission.sqm about TZK info, town name and teleporter shall be standardized and renamed. **"remain_marker"** should be renamed and removed by 2.01 script.
				+ **MarkerTownName, MarkerTeleporter**.
			+ It'll cost many times to create marker in-game. Thus vehicle marker in this mode should wait until all marker created.
		+ Sensor done. Their "name" is reversed and can't be assigned in-game. Name of trigger is required since its statement is global. Rename them using extra "Dym" prefix.
+ bool_TZK_Yugo_Mode update.
  When bool_TZK_Yugo_Mode = true, the mission will execute unit/structure script via extra folder. In this way it's unnecessary to remake the 4.0.5 mod.
  ***Have been merged in 4.0.5 version.***
+ bool_TZK_Vanilla_Mode update.
	+ Fix bugs.
		+ typesPlane is defined later after sqf loaded. It shouldn't appear in redefine-unitDefs scripts.
	+ anim-EH limiting player running when equipping weapons should be excluded in this case.
