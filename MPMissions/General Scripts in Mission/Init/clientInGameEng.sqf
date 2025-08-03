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
	"The shell you shot has flied for 3s. Since there're critical structures within 50 meters, enemy AI art can't attack you, so your shell will be deleted. Move your art vehicle if wish to shoot at far target." call _f; // 000
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

	"Turn ON Rts Map Mode" call _f; // 006
	"Turn OFF Rts Map Mode" call _f; // 007

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

	// script count check. Check index with last literal value
	if (_i != 19 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;

true