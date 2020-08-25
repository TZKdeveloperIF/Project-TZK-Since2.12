

_theta1 = _theta0 + 0.5; _vx = _speed * cos(_theta1); _vy = _speed * sin(_theta1);
_res = [_vx, _vy, _deltaY] call loadFile "Common\SQF\RK4_Range3.sqf"; if !(_res select 1) Then {_vehicle groupChat "Error occur in step0 of Case_1_R3.", deleteVehicle _shell, exit};
_range = _res select 0; _error1 = _range - _distX;
_theta = (_error0*_theta1 - _error1*_theta0) / (_error0 - _error1); _dTheta = _theta1 - _theta;
_i = 0; _try = 5; _theta1 = [_theta0, _theta1] select (abs _error0 > abs _error1); _error1 = [_error0, _error1] select (abs _error0 > abs _error1);
_error = 100; while "abs(_error) > 8 && _i < _try" do {
	_vx = _speed * cos(_theta); _vy = _speed * sin(_theta); _res = [_vx, _vy, _deltaY] call loadFile "Common\SQF\RK4_Range3.sqf";
	if (!(_res select 1) && _theta < _theta1 && _i < _try) Then {_theta = _theta + _dTheta*12/31, _i = _i + 0.34} Else {	
		_range = _res select 0; _error = _range - _distX
		if ( abs(_error) > 10 + 1.05*abs(_error1) ) Then {_vehicle groupChat "Improper initial speed in upward case3. Shell deleted.", deleteVehicle _shell, _i = _try, exit};

		_theta0 = _theta; _theta = (_error*_theta1 - _error1*_theta) / (_error - _error1)
		_theta1 = _theta0; _error1 = _error; _dTheta = _theta1 - _theta; _i = _i + 1
	}
};
_theta