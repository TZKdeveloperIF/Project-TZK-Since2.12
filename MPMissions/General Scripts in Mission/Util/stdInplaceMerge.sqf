// args: [array1 (as return value), begin, mid, end, comparer, <need preprocess comparer>]
// comparer is func(elem1, elem2) => bool
// if need preprocess, comparer should be "preprocessFile"
// return: none
private [{_array}, {_array1}, {_array2}, {_comp}, {_bPreprocess}, {_begin}, {_end}, {_mid}];
_array = _this select 0; _begin = _this select 1; _mid = _this select 2; _end = _this select 3;
_bPreprocess = if (count _this > 5) then {_this select 5} else {false};
_comp = if (_bPreprocess) then {preprocessFile (_this select 4)} else {_this select 4};

// allocating extra space
_array1 = []; _array1 resize (_mid - _begin);
_array2 = []; _array2 resize (_end - _mid);
_i = 0; _ci = count _array1; while {_i < _ci} do {
	_array1 set [_i, _array select _i + _begin], _i = _i + 1
};
_j = 0; _cj = count _array2; while {_j < _cj} do {
	_array2 set [_j, _array select _j + _mid], _j = _j + 1
};

_i = 0; _j = 0;
while {_i < _ci && _j < _cj} do {
	if ([_array1 select _i, _array2 select _j] call _comp) then {
		_array set [_i + _j + _begin, _array1 select _i]; _i = _i + 1;
	} else {
		_array set [_i + _j + _begin, _array2 select _j]; _j = _j + 1;
	};
};
while {_i < _ci} do {
	_array set [_i + _j + _begin, _array1 select _i]; _i = _i + 1;
};
while {_j < _cj} do {
	_array set [_i + _j + _begin, _array2 select _j]; _j = _j + 1;
};