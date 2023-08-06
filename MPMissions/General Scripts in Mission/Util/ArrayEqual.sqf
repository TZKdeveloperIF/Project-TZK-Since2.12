// args: [array1, array2] 
// return: equal or not
// elements must be non-array type and all elements in 2 array must be same type

private [{_lhs}, {_rhs}, {_c}, {_ret}];
_lhs = _this select 0;
_rhs = _this select 1;

_c = count _lhs; _ret = true;
if (_c != count _rhs) then {_ret = false};
if _ret then {
	private [{_i}]; _i = 0; while {_i < _c && _ret} do {
		if ((_lhs select _i) != (_rhs select _i)) then {_ret = false};
		_i = _i + 1;
	};
};
_ret