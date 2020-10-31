private ["_distMin", "_array", "_i", "_c", "_found", "_step", "_pos0", "_pos1", "_center2","_j"];

_distMin = _this select 0;

_array = []; _i = 0; _c = 0; _found = false; _step = 10;
_center2 = [posCenter select 0, posCenter select 1];

while "_c < _step*2 && !_found" do {
	_c = _c + _step;
	while "count _array < _c" do {
		_pos0 = [_center2, _distMin*2/3, _distMin*4/3] call funcGetRandomPos; if ([_pos0] call funcStartPos) Then {_pos0 resize 2, _array set [count _array, _pos0]};
	};
	_j = 0; while "_j < _c && !_found" do {
		_pos0 = _array select _j; _vector0 = [_pos0, _center2] call funcVectorSub;
		_i = 0; while "_i < _c && !_found" do {
			_pos1 = _array select _i;
			_vector1 = [_pos1, _center2] call funcVectorSub;
			if (_i != _j) Then {
				if ( ([_vector0, _vector1] call funcVectorDot)/(_vector0 call funcVectorLength)/(_vector1 call funcVectorLength) < -1/8 ) Then {_found = true};
			};
			_i = _i + 1;
		};
		_j = _j + 1;
	};
};
if (!_found) Then {_pos0 = getPosASL (_this select 1), _pos1 = getPosASL (_this select 2)};
[_pos0, _pos1]