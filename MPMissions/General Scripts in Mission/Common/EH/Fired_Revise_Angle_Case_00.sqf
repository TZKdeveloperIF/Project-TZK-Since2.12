_speed0 = _speed;
_vx = _speed0 * cos(_theta0); _vy = _speed0 * sin(_theta0);
_range = [_vx, _vy, _deltaY] call loadFile "Common\EH\RK4_Range_Y_0.sqf"; _error0 = _range - _distX;

_speed1 = _speed0 * ( 1 + 0.2*([-1, +1] select (_error0 < 0)) ); _vx = _speed1 * cos(_theta0); _vy = _speed1 * sin(_theta0);
_range = [_vx, _vy, _deltaY] call loadFile "Common\EH\RK4_Range_Y_0.sqf"; _error1 = _range - _distX;

_speed = (_error0*_speed1 - _error1*_speed0) / (_error0 - _error1);
_i = 0; _try = 5; if (abs _error1 > abs _error0) Then {["_speed0", "_speed1"] call funcSwapV, ["_error0", "_error1"] call funcSwapV};

_error = 100; while "abs(_error) > 8 && _i < _try" do {
	_vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
	_range = [_vx, _vy, _deltaY] call loadFile "Common\EH\RK4_Range_Y_0.sqf"; _error = _range - _distX;
	
	_speed0 = _speed; _speed = (_error*_speed1 - _error1*_speed) / (_error - _error1); if (_speedMax < _speed) Then {_speed = _speedMax, _i = _try};
	_speed1 = _speed0; _error1 = _error; _i = _i + 1
};
_theta0