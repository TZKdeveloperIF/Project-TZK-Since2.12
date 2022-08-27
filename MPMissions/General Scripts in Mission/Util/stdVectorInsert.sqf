// args: [array (reference), begin(idx), end(idx), iterator (idx), element]
// return: none

private [{_array}, {_begin}, {_end}, {_itr}, {_elem}];
_array = _this select 0;
_begin = _this select 1;
_end = _this select 2;
_itr = _this select 3;
_elem = _this select 4;
if (_itr < _begin || _itr > _end) then {
	"ERROR: invalid iterator in std::vector::insert" call fDebugLog;
} else {
	_j = _end;
	while {_j > _itr} do {
		_array set [_j, _array select _j - 1];
		_j = _j - 1;
	};
	_array set [_itr, _elem];
};