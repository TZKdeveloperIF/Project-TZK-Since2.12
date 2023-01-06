// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

private [{_i}, {_period}, {_dest}, {_cache}, {_velocity}];
_velocity = velocity _target; _dest = _posT; _cache = [0,0,0];
_i = 0; _period = 0; while {_i < 10 && _ret} do {
	_dest = [_posT, [_velocity, _period] call funcVectorScale] call funcVectorAdd;
	_calc = [_posV, _dest, _speed, _biggerAngle] call funcTimeArt406;
	if (_calc > 0) then {_period = _calc} else {
		_calc = _calc - -1;
		_bit = _calc % 2;
		if (_ret && _bit > 0) then {
			_msg = format ["Invalid initSpeed: %1. Switch another magazine please.", _speed];
			_ret = false;
		};
		_calc = _calc - _bit;
		_bit = _calc % 4;
		if (_ret && _bit > 0) then {
			_msg = "Invalid delta height or distance. Reassign the target please.";
			_ret = false;
		};
		_calc = _calc - _bit;
		_bit = _calc % 8;
		if (_ret && _bit > 0) then {
			_msg = "Current parameters can't hit the target. Adjust the target or switch another mag please.";
			_ret = false;
		};
		if _ret then {
			_msg = "unexpected case.";
			_ret = false;
		};
	};
	_i = _i + 1;
	if ([_cache, _dest] call funcDistH < 1) then {_i = 10};
	_cache = _dest;
};
if _ret then {_elev = [_posV, _dest, _speed, _biggerAngle] call funcElevArt406};
if (_i > 0 && not _ret) then {_msg = "Predicate fail."};

if _ret then {
	_angle = ((_dest select 1) - (_posV select 1)) atan2 ((_dest select 0) - (_posV select 0));
};

_ret