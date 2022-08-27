// args: [array (reference), begin, end, comparer, <need preprocess comparer>]
// comparer is func(elem1, elem2) => bool
// if need preprocess, comparer should be "preprocessFile"
// return: none (array passed by reference)
private [{_array}, {_begin}, {_end}, {_bPreprocess}];
_array = _this select 0; _begin = _this select 1; _end = _this select 2;
_bPreprocess = if (count _this > 4) then {_this select 4} else {false};
if (_end - _begin > 16) then {
	"WARNING: handling more than 16 elements in insert sort." call fDebugLog;
};
if (_begin >= _end) then {
	"ERROR: Invalid iterator in insert sort." call fDebugLog;
} else {
	private [{_i}, {_c}];
	_i = _begin + 1; while {_i < _end} do {
		_elem = _array select _i;
		_j = [_array, _begin, _i, _elem, _this select 3, _bPreprocess] call preprocessFile "Util\stdLowerBound.sqf";
		[_array, _i, _j, _elem] call preprocessFile "Util\stdVectorInsert.sqf";
		_i = _i + 1;
	};
}