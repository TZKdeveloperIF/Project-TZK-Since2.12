private [{_infLevel}];
_infLevel = 1; {
	if (2 == upgMatrix select _this select (call format ["upgInfLevel%1", _x])) then {_infLevel = _x};
} forEach [2, 3, 4];
_infLevel