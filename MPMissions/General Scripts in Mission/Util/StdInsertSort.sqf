// args: [array (reference), comparer, <need preprocess comparer>]
// comparer is func(elem1, elem2) => bool
// if need preprocess, comparer should be "preprocessFile"
// return: none (array passed by reference)
private [{_array}, {_bPreprocess}];
_array = _this select 0;
_bPreprocess = if (count _this > 2) then {_this select 2} else {false};
if (count _array > 16) then {
	"WARNING: array size > 16 in insert sort." call fDebugLog;
};
private [{_i}, {_c}];
_i = 1; _c = count _array; while {_i < _c} do {
	_elem = _array select _i;
	_j = [_array, 0, _i, _elem, _this select 1, _bPreprocess] call preprocessFile "Util\stdLowerBound.sqf";
	[_array, 0, _i, _j, _elem] call preprocessFile "Util\stdVectorInsert.sqf";
	_i = _i + 1;
};