// args: [Network IDs[], si, gi]
if isServer then {
	private [{_input}, {_i}, {_c}, {_validUnits}, {_units}, {_unit}];

	_input = _this select 0; _i = 0; _c = count _input;
	_validUnits = []; _validUnits resize _c;
	while {_i < _c} do {
		_validUnits set [_i, UnitById (_input select _i)];
		_i = _i + 1;
	};

	_units = units (groupMatrix select (_this select 1) select (_this select 2));
	_i = 1; _c = count _units; // skip group leader
	while {_i < _c} do {
		_unit = _units select _i;
		if not (_unit in _validUnits) then {
			// remove abnormal unit on server
			_unit setPosASL getPosASL _unit;
			deleteVehicle _unit;
		};
		_i = _i + 1;
	};
};