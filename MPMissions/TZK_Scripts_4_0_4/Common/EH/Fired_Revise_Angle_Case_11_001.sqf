_speed0 = _speed;
_vx = _speed0 * cos(_theta0); _vy = _speed0 * sin(_theta0);
_height = [_vx, _vy, _distX] call loadFile "\TZK_Scripts_4_0_4\Common\SQF\RK4_X_Y.sqf"; _error0 = _height - _deltaY;

_speed1 = _speed * 1.2; _vx = _speed1 * cos(_theta0); _vy = _speed1 * sin(_theta0);
_height = [_vx, _vy, _distX] call loadFile "\TZK_Scripts_4_0_4\Common\SQF\RK4_X_Y.sqf"; _error1 = _height - _deltaY;

_speed = (_error0*_speed1 - _error1*_speed0) / (_error0 - _error1);
_i = 0; _try = 5; if (abs _error1 > abs _error0) Then {["_speed0", "_speed1"] call funcSwapV, ["_error0", "_error1"] call funcSwapV};

_error = 100; while "abs(_error) > 8 && _i < _try" do {
	_vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
	_height = [_vx, _vy, _distX] call loadFile "\TZK_Scripts_4_0_4\Common\SQF\RK4_X_Y.sqf"; _error = _height - _deltaY;

	_speed0 = _speed; _speed = (_error*_speed1 - _error1*_speed) / (_error - _error1); if (_speedMax < _speed) Then {_speed = _speedMax, _i = _try};
	_speed1 = _speed0; _error1 = _error; _i = _i + 1
};
_theta0