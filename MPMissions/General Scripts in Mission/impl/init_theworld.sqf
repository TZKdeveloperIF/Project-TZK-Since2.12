if (!_found) then {
	_array = ["Arabia"];
	_i = 0; _c = count _array; while {_i < _c && !_found} do {
		if (_world == _array select _i) then {_found = true}; _i = _i + 1;
	};
	if (_found) then {TheWorld = "D"};
};