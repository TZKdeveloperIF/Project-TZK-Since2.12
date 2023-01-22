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

if _ret then {
	// Calculate turbulence
	// 用弧长除以半径获得方位角的范围; 考虑散布范围的最近点，计算命中它所需的角度，以修正量作为俯仰角的扰动范围
	_distX = [_posV, _posT] call funcDistH;
	_angleDelta = (_dispersion/2)/_distX * 180/pi;
	_vector = [_posT, _posV] call funcVectorSub;
	_nearestPoint = [_posT, [_vector, - _dispersion/_distX] call funcVectorScale] call funcVectorAdd;
	_nearestPoint set [2, _nearestPoint call funcHASL];
	_calc = [_posV, _nearestPoint, _speed, _biggerAngle] call funcElevArt406;
	if (_calc >= 180) then {_angleDelta = 0, _thetaDelta = 0} else {_thetaDelta = abs(_calc - _elev)};
};

_ret