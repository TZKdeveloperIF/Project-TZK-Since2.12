// args: none
// return: bool (use this languange)

// english should always "match". It serves for all general languages

	private [{_i}, {_capacity}];
	_i = 0; _capacity = 4;
	TzkInGameText resize _capicity;

	_f = {
		if (_i >= _capacity) then {
			_capacity = _capacity * 2;
			TzkInGameText resize _capacity;
		};
		TzkInGameText set [_i, _this];
		_i = _i + 1;
	};

	// All exist item's index and their order CAN'T BE CHANGED
	[
		  "The shell you shot has flied for 3s. Since there're critical structures within %1 meters, enemy AI art can't attack you, so your shell will be deleted. Move your art vehicle if wish to shoot at far target."
		, "Not allow shooting art near base within %1 meters."
		, "Not allow shooting at position that near enemy base."
		, "Failed in prepare legal position. Order aborted."
		, "Preparing legal target position. Please wait..."
		, "Moving to ordered position, distance %1m." // 5
		, "Target is far. Probably missing."
		, "Moving to support vehicle for more magazines."
		, "Rearming at remote object. If I'm far away from you, probably I can't receive supplemented magazines. In this case, please use Unit Camera and look at me."
		, "Switching magazine at remote object. Again, if I'm far away, use Unit Camera and look at me."
		, "Auto detect pause. Wait until get rearmed." // 10
	] call _f; // 000
	[
		  "Helicopter"
		, "APC"
		, "Truck"
		, "Ship"
		, "Plane"
		, "Support APC"
		, "Repair Truck"
		, "Jeep"
	] call _f; // 001
	[
		  "Howitzer"
		, "Mortar"
		, "MG Ground"
		, "MG Tower"
		, "Gun Fort"
	] call _f; // 002
	[
		  "Heavy Tank"
		, "Light Tank"
		, "Artillery"
		, "AT APC"
		, "AA Vehicle"
		, "Gunship"
		, "Plane"
		, "Support APC"
		, "Transport Car"
		, "Transport Ship"
		, "Transport APC"
		, "Transport Air"
		, "Battle Ship"
		, "Battle Car"
		, "Radar Car"
		, "Repair Truck"
	] call _f; // 003

	"Disband Player Only" call _f; // 004

	"Alt-Click and Shift-Alt-Click for RTS style interaction. See notepad for more info.
	\n\n
	Radio System available. You're free to press 0-0 to call channels in different vehicles.
	\n
	0-0-1 is always for switching RTS map click mode.
	\n
	0-0-2 is always for TZK Setting Interface." call _f; // 005

	"" call _f; // 006
	"" call _f; // 007

	"Please choose points near land enough." call _f; // 008

	"This dialog provides few buttons to query or correct data on some CTI bugs." call _f; // 009
	"Group Units Check" call _f; // 010
	"Mine Param Check" call _f; // 011

	{This request will try to remove abnormal "ghost" units in your group (probably created by JOIN).} call _f; // 012

	[
		  "To modify the key of function, click the button after the function and read the hint."
		, "Press desired key."
		, "Succeeded. Click other buttons to continue your configuration."
		, "The %1 is conflict with %2. Assignment failed. Please use another key instead."
		, "The %1 is reserved. Please use another key instead."
		, {The "Space" is reserved ONLY for CONFIRM. You can't modify it.}
	] call _f; // 013
	"Custom Shortkey" call _f; // 014
	[
		  "move"
		, "clear"
		, "stop"
		, "board"
		, "occupy"
		, "reclaim"
		, "shoot area"
		, "equip soldiers"

		, "group display"

		, "select player units"

		, "join"
		, "disband"
		, "art mag"

		, "attach center"
		, "attach right"
		, "attach left"
		, "detach center"
		, "detach right"
		, "detach left"

		, "Area"
		, "WP/CO"
		, "Order"
		, "Point"
	] call _f; // 015
	[
		  "destruction"
		, "bridge"

		, "group display"

		, "Rts"
		, "WP/CO"
		, "Order"
		, "Point"

		, "AI art area"
		, "player art"
		, "AI mine area"
		, "player mine"

		, "obstruct"

		, "clockwise 30"
		, "anti-clock 30"
		, "clockwise 10"
		, "anti-clock 10"
	] call _f; // 016
	[
		  "worker"
		, "build"

		, "group display"

		, "Rts"
		, "Area"
		, "WP/CO"
		, "Order"
	] call _f; // 017
	[
		  "set"
		, "clear"

		, "group display"

		, "co"
		, "wp"

		, "Rts"
		, "Area"
		, "Point"
		, "Order"
	] call _f; // 018
	[
		  "move"
		, "clear"
		, "stop"
		, "shoot area"
		, "equip soldiers"

		, "heal/repair"
		, "rearm"
		, "board"

		, "join"
		, "disband"
		, "art mag"

		, "attach center"
		, "attach right"
		, "attach left"
		, "detach center"
		, "detach right"
		, "detach left"

		, "Rts"
		, "Area"
		, "Point"
		, "Order"
	] call _f; // 019
	// RTS dialog display text 1
	[
		  "Point"
		, "MG Tower"
		, "Destroy Enemy Struct"
		, "At the clicked position, no enemy structure within 100 meters or no our tank/howitzers within 30 meters"
		, "Clear Markers"				// 4
		, "Remove"
		, "intersected"
		, "direction"
		, "distance"
		, "Not realized yet."			// 9
		, "This order isn't allowed on other players' units."
		, "This trigger isn't allowed on other players' units."
		, "Eject cargos.\nDriver, gunner and commander won't eject."
		, "Ask all units to disembark.\nIf there're player's units in vehicle, they might prevernt subsequent AI units' disembark."
		, "This button displays message only. Click other buttons please." // 14
		, "Exception caught."
		, "There're bug in area-build-roof now. Temporary disable this design."
		, "No order selected"
		, "Not implemented. Please use 4-1."
		, "Not implemented. Please use Alt + Click." // 19
		, "Not implemented. Please use 3-6."
		, "Build Struct"
		, "Structure Type"
		, "Direction"
		, "Correction"					// 24
		, "Factory"
		, "Building"
		, "Defend"
		, "Art"
		, "Walls"						// 29
		, "Obstruct"
		, "No structure selected"
		, "Switch Seat"
		, "Seats"
		, "Available if vehicle has only 1 crew and vehicle is local" // 34
		, "Driver"
		, "Gunner"
		, "Cargo"
		, "No selected seat"
	] call _f; // 020
	// Structure name list
	[
		  "Air Radar - 4000m range"
		, "Map Marker Tower"
		, "Unit Camera Tower"
		, "Light Vehicle Factory"
		, "Command Center"
		, "Barracks"
		, "Heavy Vehicle Factory"
		, "Aircraft Factory"
		, "Shipyard"
		, "Field Hospital"
		, "Fuel Station"
		, "Mortar 81 (82) mm"
		, "M119 105mm Howitzer"
		, "D30-A Howitzer"
		, "MG Fort"
		, "MG Tower"
		, "MG Tower"
		, "MG 12.7mm"
		, "Static Launcher"
		, "Static MG 12.7mm"
		, "Static GL"
		, "Static AT-Launcher"
		, "Gunfort"
		, "Wall"
		, "Wall Low"
		, localize {TZK_LANG_ROOF}
		, format ["%1 %2", localize {TZK_LANG_HIGH}, localize {TZK_LANG_ROOF}]
		, "Tank Trench"
		, "Artillery Plain"
		, "Sand Bags"
		, "Tank Trap"
		, "Ammo Crate"
		, "Heli H"
		, "Wire fence"
		, localize {TZK_LANG_GAP_GENERATOR}
		, "Bridge"
		, format ["%1 10m %2", localize {TZK_LANG_ROOF}, localize {TZK_LANG_HEIGHT}]
		, format ["%1 20m %2", localize {TZK_LANG_ROOF}, localize {TZK_LANG_HEIGHT}]
		, "MHQ Wall"
	] call _f; // 021
	[
		  "confirm"

		, "class 1"
		, "class 2"
		, "class 3"
		, "class 4"
		, "class 5"
		, "class 6"

		, "item 1"
		, "item 2"
		, "item 3"
		, "item 4"
		, "item 5"
		, "item 6"
		, "item 7"
		, "item 8"
		, "item 9"
	] call _f; // 022
	[
		  "confirm"

		, "item 1"
		, "item 2"
		, "item 3"
		, "item 4"
		, "item 5"
		, "item 6"
		, "item 7"
		, "item 8"
		, "item 9"
		, "item 10"
	] call _f; // 023
	// CMD rules
	[
		  "All aircrafts are banned by CMD rule. Ask CMD(s) to decide the rule again (left column in Options dialog)."
		, "Gap Generator is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog)."
		, "CMD rule allow only build 3 factories at most. Ask CMD(s) to decide the rule again (left colume in Options dialog)."
		, "CMD rule menu"
	] call _f; // 024
	// radio
	[
		  "Mission Setting"
		, "Self-Medic"
		, "MHQ Build Menu"
		, "Sup Build Menu"
		, "Buy Better NVG"
		, "Rearm AA" // 5
		, "Rearm AT"
		, "Rearm RPG"
		, "Refresh Radio List"
		, "Turn ON Rts Map Mode"
		, "Turn OFF Rts Map Mode" // 10
	] call _f; // 025
	// tg
	[
		  "Time limit reached in %1 minute(s)."
		, "Artillery detected (%1 detections). Estimated pos: %2"
		, "Don't disconnect! Server ping received. Current time: %1"
		, "Waiting commanders selected start position..."
		, "Waiting for start data ..."
		, "Group %1 Full (including units building/queued), Aborting build of %2" // 5
		, "Worker can't reach building. DAMN NOOB COM"
		, "Start data received."
		, "You are BLOCKED.\nYou are NOT Receiving.\nDon't leave. Wait for a while."
		, "You are UNBLOCKED.\nYou are Receiving."
		, "%1 is under enemy fire send reinforcements" // 10
		, "No enemy near %1 (2x VD). Town Group hibernates."
		, "Enemy approaching %1 (2x VD). Town Group Spawn."
	] call _f; // 026
	[
		  "confirm"

		, "button 1"
		, "button 2"
		, "button 3"

		, "marker 1"
		, "marker 2"
		, "marker 3"
		, "marker 4"
		, "marker 5"
		, "marker 6"
		, "marker 7"
		, "marker 8"
		, "marker 9"
		, "marker 0"
	] call _f; // 027
	[
		  "confirm"

		, "big angle 1"
		, "big angle 2"
		, "big angle 3"
		, "big angle 4"

		, "marker 1"
		, "marker 2"
		, "marker 3"
		, "marker 4"
		, "marker 5"
		, "marker 6"
		, "marker 7"
		, "marker 8"
		, "marker 9"
		, "marker 0"
	] call _f; // 028
	// Area marker
	[
		  "Art"
		, "Mine"
		, "Player"
		, "Side"
		, "Area"
		, "Marker too large. Can't be set as %1 area." // 5
		, "No area selected."
	] call _f; // 029
	// RTS dialog display text 2
	[
		  "Do nothing"
		, "Switch Art Mags"
		, "Select AI groups"
		, "Select workers"
		, "Select base units"
		, "Select player units"
	] call _f; // 030
	// RTS message on commander order
	[
		"artillery shooting area at side art area %1"
	] call _f; // 031

	// script count check. Check index with last literal value
	if (_i != 31 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;

true