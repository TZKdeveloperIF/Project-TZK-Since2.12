

_vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
_height = [_vx, _vy, _distX] call loadFile "Common\SQF\RK4_X2_Y.sqf";
if (_height == -1) Then {_i = 0, _try = 3, while "_i < _try && _theta0 < 83 && _height == -1" do {
	_theta0 = _theta0 + 7, _vx = _speed * cos(_theta0); _vy = _speed * sin(_theta0);
	_height = [_vx, _vy, _distX] call loadFile "Common\SQF\RK4_X2_Y.sqf"; _i = _i + 1
}}; _error0 = _height - _deltaY;

if (_height == -1) Then {_vehicle groupChat "Failed to shoot long. Shell deleted.", deleteVehicle _shell, exit} Else {
	_theta1 = _theta0 + 0.5; _vx = _speed * cos(_theta1); _vy = _speed * sin(_theta1);
	_height = [_vx, _vy, _distX] call loadFile "Common\SQF\RK4_X2_Y.sqf"; _error1 = _height - _deltaY;

	if (_height == -1) Then {_vehicle groupChat "Failed to shoot long. Shell deleted.", deleteVehicle _shell, exit} Else {
		_theta = (_error0*_theta1 - _error1*_theta0) / (_error0 - _error1);
		_i = 0; _try = 5; _theta1 = [_theta0, _theta1] select (abs _error0 > abs _error1); _error1 = [_error0, _error1] select (abs _error0 > abs _error1);

		_error = 100; while "abs(_error) > 8 && _i < _try" do {
			_vx = _speed * cos(_theta); _vy = _speed * sin(_theta); _height = [_vx, _vy, _distX] call loadFile "Common\SQF\RK4_X2_Y.sqf"; _error = _height - _deltaY;

			if ( abs(_error) > 10 + 1.05*abs(_error1) || _height == -1 ) Then {
				_vehicle groupChat "Improper initial speed in upward case3. Shell deleted.", deleteVehicle _shell, _i = _try, exit
			};
			_theta0 = _theta; _theta = (_error*_theta1 - _error1*_theta) / (_error - _error1);
			_theta1 = _theta0; _error1 = _error; _i = _i + 1
		};
		_theta
	}
}