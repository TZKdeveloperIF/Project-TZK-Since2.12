// args: [array (reference), begin (idx), end (idx), element, comparer, <need preprocess comparer>]
// comparer is func(elem1, elem2) => bool
// if need preprocess, comparer should be "preprocessFile"
// return: bool
// the range is [begin, end)
// No more parameter check
private [{_array}, {_begin}, {_end}, {_comp}, {_bPreprocess}];
_array = _this select 0; _begin = _this select 1; _end = _this select 2;
_bPreprocess = if (count _this > 4) then {_this select 4} else {false};
_comp = if (_bPreprocess) then {preprocessFile (_this select 3)} else {_this select 3};
if (_end <= _begin) then {
	"ERROR: invalid iterator in std::is_sorted" call fDebugLog;
	false
} else {
	private [{_sorted}], _sorted = true;
	while {_begin < _end - 1 && _sorted} do {
		if not ([_array select _begin, _array select _begin + 1] call _comp) then {
			if ([_array select _begin + 1, _array select _begin] call _comp) then {
				_sorted = false
			};
		};
		_begin = _begin + 1;
	};
	_sorted
}