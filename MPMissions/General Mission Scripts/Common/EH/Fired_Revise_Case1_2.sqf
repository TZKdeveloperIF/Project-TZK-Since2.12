private ["_theta"];

_i = 0; _try = 5; _error = 100;
while "abs(_error) > 8 && _i < _try" do {
	_res = [_vx, _vy, _distX, -0.0005, _deltaY] call loadFile "Common\SQF\RK4_Vel_X.sqf"; _range = _res select 2; _error = _range - _distX;
	_res = [_res select 0, -(_res select 1), -_deltaY, +0.0005] call loadFile "Common\SQF\RK4_Vel_Y_0.sqf";
	_theta = abs(_res select 1) atan2 (_res select 0); _vx = _speed * cos(_theta); _vy = _speed * sin(_theta);
	_i = _i + 1
};
_theta