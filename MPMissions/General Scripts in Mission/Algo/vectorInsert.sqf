// args: [array (reference), end(idx), iterator (idx), element]
// return: none
// insert element at iterator and move elemenets in []iterator, end) to next position
// the "end" should be no more than array size

private [{_array}, {_end}, {_itr}, {_elem}];
_array = _this select 0;
_end = _this select 1;
_itr = _this select 2;
_elem = _this select 3;
if (_itr < 0 || _itr > _end || _end > count _array) then {
	format ["ERROR: invalid iterator in std::vector::insert. Params: %1", _this] call fDebugLog;
} else {
	_j = _end;
	while {_j > _itr} do {
		_array set [_j, _array select _j - 1];
		_j = _j - 1;
	};
	_array set [_itr, _elem];
};