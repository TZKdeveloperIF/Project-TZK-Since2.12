// args: target object (the actual target object in auto-detect art mode)
// this is a process but not a function. script read/write local variables directly
_ret = true;

private [{_i}, {_period}, {_dest}, {_cache}, {_velocity}];
_velocity = velocity _this; _dest = _posT; _cache = [0,0,0];
_velocity set [2, 0];
_i = 0; _period = 0; while {_i < 10 && _ret} do {
	_dest = [_posT, [_velocity, _period] call funcVectorScale] call funcVectorAdd;
	_dest set [2, _dest call funcHASL];
	_calc = [_posV, _dest, _speed, _biggerAngle] call funcTimeArt406;
	if (_calc > 0) then {_period = _calc} else {
		_calc = _calc - -100;
		_bit = _calc % 2;
		if (_ret && _bit > 0) then {
			_msg = format ["%2: %1. %3", _speed
			, localize {TZK_LANG_INVALID_INITSPEED}
			, localize {TZK_LANG_SWITCH_ANOTHER_MAG}
		];
			_ret = false;
		};
		_calc = _calc - _bit;
		_bit = _calc % 4;
		if (_ret && _bit > 0) then {
			_msg = localize {TZK_LANG_INVALID_RANGE};
			_ret = false;
		};
		_calc = _calc - _bit;
		_bit = _calc % 8;
		if (_ret && _bit > 0) then {
			_msg = localize {TZK_LANG_CANT_HIT};
			_ret = false;
		};
		if _ret then {
			_msg = localize {TZK_LANG_UNEXPECTED_CASE};
			_ret = false;
		};
	};
	_i = _i + 1;
	if ([_cache, _dest] call funcDistH < 1) then {_i = 10};
	_cache = _dest;
	// _unit sideChat format ["Period: %1, velocity: %2, dest: %3", _period, _velocity, _dest];
};
if _ret then {_elev = [_posV, _dest, _speed, _biggerAngle] call funcElevArt406};
// if (_i > 0 && not _ret) then {_msg = "Predicate fail."};

if _ret then {
	_angle = ((_dest select 1) - (_posV select 1)) atan2 ((_dest select 0) - (_posV select 0));
};

if (_ret && _needAvoidStruct) then {
	if (([_dest, _si] call loadFile "Common\SQF\ClosestEnemyCritcalStruct.sqf") select 1 < 50) then {
		_ret = false;
		_msg = "Not allow shooting at position that near enemy base.";
	};
};

_ret