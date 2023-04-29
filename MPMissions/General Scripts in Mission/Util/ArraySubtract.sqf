// imitating array subtraction in OFP without modifying referenct count but using double index
// args: [array1, array2] 
// return: none
// Effect: array1 -= array2

private [{_lhs}, {_rhs}];
_lhs = _this select 0;
_rhs = _this select 1;
_this = 0;

if (count _lhs > 0 && count _rhs > 0) then {
	private [{_i}, {_j}, {_c}, {_elem}];
	_i = 0, _j = 0; _c = count _lhs; while {_i < _c} do {
		_elem = _lhs select _i;
		if !(_elem in _rhs) then {
			_lhs set [_j, _elem];
			_j = _j + 1;
		};
		_i = _i + 1;
	};
	_lhs resize _j;
};