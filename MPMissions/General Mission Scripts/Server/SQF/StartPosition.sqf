private ["_distMin", "_array", "_i", "_c", "_found", "_step", "_sensor0", "_sensor1", "_x", "_y", "_pos0", "_pos1", "_center", "_dist", "_j"];

_distMin = _this select 0;

_array = []; _i = 0; _c = 0; _found = false; _step = 10;
_sensor0 = "EmptyDetector" camCreate [0,0]; _sensor1 = "EmptyDetector" camCreate [0,0];
_x = 0; _y = 0;

while "_c < _step*5 && !_found" do {
	_c = _c + _step;
	while "count _array < _c" do {
		_pos0 = [posCenter, _distMin*2/3, _distMin*4/3] call funcGetRandomPos; if ([_pos0] call funcStartPos) Then {_pos0 resize 2, _array set [count _array, _pos0]};
	};
	_i = _c - _step; while "_i < _c" do {
		_x = _x + (_array select _i select 0);
		_y = _y + (_array select _i select 1);
		_i = _i + 1;
	};
	_center = [_x/_c, _y/_c]; _sensor0 setPosASL (_center + [0]); _sensor1 setPosASL (_center + [0]); _dist = _sensor0 distance _sensor1; _j = 0;
	_i = 0; while "_i < _c" do {
		_sensor1 setPosASL ((_array select _i) + [0]);
		if ((_sensor0 distance _sensor1) > _dist) Then {_dist = _sensor0 distance _sensor1; _j = _i};
		_i = _i + 1;
	};
	_pos0 = _array select _j; _vector0 = [_pos0, _center] call funcVectorSub;
	_i = 0; while "_i < _c && !_found" do {
		_pos1 = _array select _i;
		_vector1 = [_pos1, _center] call funcVectorSub;
		if (_i != _j) Then {
			if ( ([_vector0, _vector1] call funcVectorDot)/(_vector0 call funcVectorLength)/(_vector1 call funcVectorLength) < -1/8 ) Then {_found = true};
		};
		_i = _i + 1;
	};
};
if (!_found) Then {_pos0 = getPosASL (_this select 1), _pos1 = getPosASL (_this select 2)};
deleteVehicle _sensor0; deleteVehicle _sensor1;
[_pos0, _pos1]