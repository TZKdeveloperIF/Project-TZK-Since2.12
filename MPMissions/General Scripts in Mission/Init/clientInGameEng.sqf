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

	// script count check. Check index with last literal value
	if (_i != 12 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;

true