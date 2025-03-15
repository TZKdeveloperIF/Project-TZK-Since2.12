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

	// script count check. Check index with last literal value
	if (_i != 4 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;

true