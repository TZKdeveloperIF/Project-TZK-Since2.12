// imitating array addition in OFP without modifying referenct count but using double index
// args: [array1, array2] 
// return: none
// Effect: array1 += array2

private [{_lhs}, {_rhs}];
_lhs = _this select 0;
_rhs = _this select 1;
_this = 0;

if (count _rhs > 0) then {
	private [{_i}, {_cl}, {_cr}];
	_cl = count _lhs, _cr = count _rhs;
	_lhs resize (_cl + _cr);
	_i = 0, while {_i < _cr} do {
		_lhs set [_cl + _i, _rhs select _i];
		_i = _i + 1;
	};
};