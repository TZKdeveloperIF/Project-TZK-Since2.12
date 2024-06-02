private [{_i},{_c}, {_arr},{_unit}, {_j}];
_arr = _this; _i = 0; _c = count _arr; _j = true;
while {_i < _c && _j} do {
	_j = alive (_arr select _i);
	_i = _i + 1;
};
if (not _j) then {
	_j = 0; _i = 0;
	while {_i < _c} do {
		_unit = _arr select _i;
		if (alive _unit) then {_arr set [_j, _unit]; _j = _j + 1};
		_i = _i + 1;
	};
	_arr resize _j;
};