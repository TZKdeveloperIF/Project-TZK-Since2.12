// args: [destination position, (player group selected units)]
private [{_pos}, {_bRts}, {_units}
	, {_j}, {_vehicles}, {_vehicle}, {_wrap}
	, {_drivers}, {_driver}
];

_pos = _this select 0;
_bRts = count _this == 1;
_units = (if _bRts then {call preprocessFile (TzkScripts select 371)} else {_this select 1});

_j = 0; _vehicles = []; _vehicles resize count(_units); {
	_vehicle = vehicle _x;
	if (_vehicles find _vehicle == -1 && not isNull driver _vehicle) then {
		_wrap = [_vehicle];
		if ("LandVehicle" countType _wrap > 0) then {
			_vehicles set [_j, _vehicle];
			_j = _j + 1;
		};
	};
} forEach _units;
_vehicles resize _j;

_drivers = []; _drivers resize _j; _j = 0; {
	_driver = driver _x;
	if (not isNull _driver) then {
		_drivers set [_j, _driver]; _j = _j + 1;
	};
} forEach _vehicles;
_drivers resize _j;

[_drivers, [_pos], "ForceMoveLand", "Order"] exec "Rts\FrameWork\GenArrayCommand.sqs";

TitleText [localize {TZK_LANG_BRIEF_MOVE_LAND}, "Plain DOWN", 1];