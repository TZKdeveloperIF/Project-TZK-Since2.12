// args: [array (reference), begin, end, comparer, <need preprocess comparer>]
// comparer is func(elem1, elem2) => bool
// if need preprocess, comparer should be "preprocessFile"
// return: none (array passed by reference)
private [{_array}, {_bPreprocess}, {_begin}, {_end}, {_mid}];
_array = _this select 0; _begin = _this select 1; _end = _this select 2;
_bPreprocess = if (count _this > 4) then {_this select 4} else {false};

if (_begin >= _end || _begin < 0 || _end > count _array) then {
	"ERROR: Invalid iterator in merge sort." call fDebugLog;
} else {
	if (_end - _begin <= 16) then {
		[_array, _begin, _end, _this select 3, _bPreprocess] call preprocessFile "Util\stdInsertSort.sqf";
	} else {
		_mid = (_begin + _end) / 2;
		_mid = _mid - (_mid % 1) + 1;

		[_array, _begin, _mid, _this select 3, _bPreprocess] call preprocessFile "Util\stdMergeSort.sqf";
		[_array, _mid, _end, _this select 3, _bPreprocess] call preprocessFile "Util\stdMergeSort.sqf";

		[_array, _begin, _mid, _end, _this select 3, _bPreprocess] call preprocessFile "Util\stdInplaceMerge.sqf";
	};
};