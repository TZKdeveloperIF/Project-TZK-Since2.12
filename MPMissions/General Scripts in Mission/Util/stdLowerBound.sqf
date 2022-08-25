// args: [array (reference), begin (idx), end (idx), comparer script (script path. Comparer is func(elem1, elem2) => bool)]
// return: idx
// the range is [begin, end)
// the array must has been sorted by comparer
// No parameter check
private [{_array}, {_begin}, {_end}, {_comp}];
_array = _this select 0; _begin = _this select 1; _end = _this select 2;
if (_end <= _begin) then {
	"ERROR: invalid iterator in std::lower_bound" call fDebugLog;
	-1
} else {
	while (_end - _begin > 1) do {

	};
	_begin
}