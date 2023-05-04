_speed0 = _speed;
_vx = _speed0 * cos(_theta0); _vy = _speed0 * sin(_theta0);
_r0_r1_bH = [_vx, _vy, _deltaY, false] call loadFile "Common\EH\RK4_Range_H.sqf"; _error0 = (_r0_r1_bH select 1) - _distX;

_speed1 = _speed * 1.2; _vx = _speed1 * cos(_theta0); _vy = _speed1 * sin(_theta0);
_r0_r1_bH = [_vx, _vy, _deltaY, false] call loadFile "Common\EH\RK4_Range_H.sqf"; _error1 = (_r0_r1_bH select 1) - _distX;

_speed = (_error0*_speed1 - _error1*_speed0) / (_error0 - _error1);
if (abs _error1 > abs _error0) Then {["_speed0", "_speed1"] call funcSwapV};


_vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
_r0_r1_bH = [_vx, _vy, _deltaY, false] call loadFile "Common\EH\RK4_Range_H.sqf"; _error0 = (_r0_r1_bH select 1) - _distX;

_theta1 = _theta0 + 0.5; _vx = _speed * cos(_theta1); _vy = _speed * sin(_theta1);
_r0_r1_bH = [_vx, _vy, _deltaY, false] call loadFile "Common\EH\RK4_Range_H.sqf"; _error1 = (_r0_r1_bH select 1) - _distX;

_theta0 = (_error0*_theta1 - _error1*_theta0) / (_error0 - _error1);
if (abs _error0 > abs _error1) Then {["_error0", "_error1"] call funcSwapV};

_speed0 = _speed;
_speed1 = _speed * 1.1; _vx = _speed1 * cos(_theta0); _vy = _speed1 * sin(_theta0);
_r0_r1_bH = [_vx, _vy, _deltaY, false] call loadFile "Common\EH\RK4_Range_H.sqf"; _error1 = (_r0_r1_bH select 1) - _distX;

_speed = (_error0*_speed1 - _error1*_speed0) / (_error0 - _error1);
_i = 0; _try = 5; if (abs _error1 > abs _error0) Then {["_speed0", "_speed1"] call funcSwapV, ["_error0", "_error1"] call funcSwapV};

_error = _error0; while "abs(_error) > 8 && _i < _try" do {
	_vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
	_r0_r1_bH = [_vx, _vy, _deltaY, false] call loadFile "Common\EH\RK4_Range_H.sqf"; _error = (_r0_r1_bH select 1) - _distX;

	_speed0 = _speed; _speed = (_error*_speed1 - _error1*_speed) / (_error - _error1); if (_speedMax < _speed) Then {_speed = _speedMax, _i = _try};
	_speed1 = _speed0; _error1 = _error; _i = _i + 1
};