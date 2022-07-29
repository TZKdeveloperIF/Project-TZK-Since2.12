private [{_si}, {_type}];
_si = _this select 0; _type = _this select 1;

_canBuy = true;
_infLevel = _si call loadFile "Util\InfLevel.sqf";
_levelIdx = TzkInfLevelIdx find _type;
if (-1 != _levelIdx) then {
	if (TzkInfLevelVal select _levelIdx > _infLevel) then {_canBuy = false};
};
if (_canBuy) then {if (-1 == _levelIdx) then {
	_selfUpdateIdx = TzkSelfUpdateIdx find _type;
	if (-1 != _selfUpdateIdx) then {
		if (TzkSelfUpdateVal select _selfUpdateIdx select 0 > _infLevel) then {_canBuy = false};
	};
}};
_canBuy