// args: none
// this is a process but not a function. script read/write local variables directly
_ret = true;

_calc = [_posV, _posT, _speed, _biggerAngle] call funcElevArt406;
_angle = ((_posT select 1) - (_posV select 1)) atan2 ((_posT select 0) - (_posV select 0));
if (_calc < 180) then {_elev = _calc} else {
	_calc = _calc - 180;
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

_ret