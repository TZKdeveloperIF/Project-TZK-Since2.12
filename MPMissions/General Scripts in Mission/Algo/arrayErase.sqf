// imitating erase operation in OFP without modifying referenct count but using double index
// args: [array, idx] 
// return: none
// Effect: "array.erase(idx)" as in C++

private [{_lhs}, {_idx}, {_c}];
_lhs = _this select 0;
_idx = _this select 1;
_this = 0;
_c = count _lhs;
if (_c > 0) then {
	_i = _idx + 1, _j = _idx; while {_i < _c} do {
		_lhs set [_j, _lhs select _i];
		_j = _j + 1;
		_i = _i + 1;
	};
	_lhs resize _j;
};