// args: [destination position, (player group selected units)]
private [{_pos}, {_bRts}, {_units}, {_legal}
	, {_j}, {_vehicles}, {_vehicle}, {_wrap}
	, {_drivers}, {_driver}
];

_pos = _this select 0;
_bRts = count _this == 1;
_units = (if _bRts then {call preprocessFile (TzkScripts select 371)} else {_this select 1});
_legal = true;

if _legal then {if not ([_pos, 20] call funcPosNearSea) then {
	_legal = false;
	TitleText [format ["%1 %2 %3 %4 %5 %6 %7 %5 %8 20m."
		, localize {TZK_LANG_END}
		, localize {TZK_LANG_POSITION}
		, localize {TZK_LANG_SHOULD}
		, localize {TZK_LANG_IN}
		, localize {TZK_LANG_SEA}
		, localize {TZK_LANG_OR}
		, localize {TZK_LANG_NEAR}
		, localize {TZK_LANG_WITHIN}
	], "Plain DOWN", 0.25];
}};

if _legal then {
	_j = 0; _vehicles = []; _vehicles resize count(_units); {
		_vehicle = vehicle _x;
		if (_vehicles find _vehicle == -1 && not isNull driver _vehicle) then {
			_wrap = [_vehicle];
			if ("Ship" countType _wrap > 0) then {
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

	[_drivers, [_pos], "ForceMoveShip.sqs", "Order"] exec "Rts\FrameWork\GenArrayCommand.sqs";

	TitleText [localize {TZK_LANG_BRIEF_MOVE_SHIP}, "Plain DOWN", 1];
};