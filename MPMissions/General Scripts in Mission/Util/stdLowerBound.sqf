// args: [array (reference), begin (idx), end (idx), element, comparer, <need preprocess comparer>]
// comparer is func(elem1, elem2) => bool
// if need preprocess, comparer should be "preprocessFile"
// return: idx
// the range is [begin, end)
// the array must has been sorted by comparer
// No more parameter check
private [{_array}, {_begin}, {_end}, {_elem}, {_comp}, {_bPreprocess}];
_array = _this select 0; _begin = _this select 1; _end = _this select 2; _elem = _this select 3;
_bPreprocess = if (count _this > 5) then {_this select 5} else {false};
_comp = if (_bPreprocess) then {preprocessFile (_this select 4)} else {_this select 4};
if (_end <= _begin) then {
	"ERROR: invalid iterator in std::lower_bound" call fDebugLog;
	-1
} else {
	while {_end - _begin > 1} do {
		_mid = (_begin + _end) / 2;
		_mid = _mid - (_mid % 1);
		if ([_array select _mid, _elem] call _comp) then {_begin = _mid + 1} else {
			// don't use operator== directly for we defines operator< only
			if ([_elem, _array select _mid] call _comp) then {
				_end = _mid;
			} else {
				_end = _mid + 1;
				if ([_array select (_mid - 1), _elem] call _comp) then {_begin = _mid};
			};
		};
	};
	if ([_array select _begin, _elem] call _comp) then {_begin + 1} else {_begin}
}