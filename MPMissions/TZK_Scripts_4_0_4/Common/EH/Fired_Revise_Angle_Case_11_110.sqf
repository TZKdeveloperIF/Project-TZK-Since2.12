

_vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
_height = [_vx, _vy, _distX] call loadFile "\TZK_Scripts_4_0_4\Common\SQF\RK4_X_Y.sqf"; _error0 = _height - _deltaY;

_theta1 = _theta0 + 0.5; _vx = _speed * cos(_theta1); _vy = _speed * sin(_theta1);
_height = [_vx, _vy, _distX] call loadFile "\TZK_Scripts_4_0_4\Common\SQF\RK4_X_Y.sqf"; _error1 = _height - _deltaY;

_theta = (_error0*_theta1 - _error1*_theta0) / (_error0 - _error1);
_i = 0; _try = 5; _theta1 = [_theta0, _theta1] select (abs _error0 > abs _error1); _error1 = [_error0, _error1] select (abs _error0 > abs _error1);

_error = 100; while "abs(_error) > 8 && _i < _try" do {
	_vx = _speed * cos(_theta); _vy = _speed * sin(_theta); _height = [_vx, _vy, _distX] call loadFile "\TZK_Scripts_4_0_4\Common\SQF\RK4_X_Y.sqf"; _error = _height - _deltaY;

	_theta0 = _theta; _theta = (_error*_theta1 - _error1*_theta) / (_error - _error1);
	_theta1 = _theta0; _error1 = _error; _i = _i + 1
};
_theta