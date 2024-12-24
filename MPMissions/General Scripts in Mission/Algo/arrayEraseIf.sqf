// args: [array, valid condition: lambda]
// load other variables from caller as well
// returns: none

private [{_array},{_cond}, {_str}, {_i}, {_c}];
_array = _this select 0; _cond = _this select 1;
_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
	_elem = _array select _i;
	if not (_elem call _cond) then {
		if (_j != _i) then {_array set [_j, _elem]};
		_j = _j + 1;
	};
	_i = _i + 1;
};
_array resize _j;