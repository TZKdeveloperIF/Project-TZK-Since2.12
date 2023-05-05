_range = [_vx, _vy, _deltaY] call loadFile "Common\EH\RK4_Range_Y_0.sqf"; _error0 = _range - _distX;
if (_error0 < -0.5 * _distX) Then {_vehicle groupChat "Improper initial elevation angle. Shell deleted.", deleteVehicle _shell, exit} Else {

	_step = [-0.5, +0.5] select (_error0 < 0 && _theta0 < 30 || _error0 > 0 && _theta0 > 30); _theta1 = _theta0 + _step; _vx = _speed * cos(_theta1); _vy = _speed * sin(_theta1);
	_range = [_vx, _vy, _deltaY] call loadFile "Common\EH\RK4_Range_Y_0.sqf"; _error1 = _range - _distX;

	_theta = (_error0*_theta1 - _error1*_theta0) / (_error0 - _error1);
	_i = 0; _try = 5; _theta1 = [_theta0, _theta1] select (abs _error0 > abs _error1); _error1 = [_error0, _error1] select (abs _error0 > abs _error1);

	_error = 100; while "abs(_error) > 8 && _i < _try" do {
		_vx = _speed * cos(_theta); _vy = _speed * sin(_theta); _range = [_vx, _vy, _deltaY] call loadFile "Common\EH\RK4_Range_Y_0.sqf"; _error = _range - _distX;
		if ( abs(_error) > 10 + 1.05*abs(_error1) ) Then {_vehicle groupChat "Improper initial speed. Shell deleted.", deleteVehicle _shell, _i = _try, exit};

		_theta0 = _theta; _theta = (_error*_theta1 - _error1*_theta) / (_error - _error1);
		_theta1 = _theta0; _error1 = _error; _i = _i + 1
	};
	_theta
};