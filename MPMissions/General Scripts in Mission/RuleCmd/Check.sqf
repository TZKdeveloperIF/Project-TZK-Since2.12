// args: rule name
// return value: bool

private [{_found}, {_i}, {_c}, {_ret}];
_ret = false; _found = false; _i = 0; _c =count TzkCmdRules;

while {_i < _c && not _found} do {
	if (TzkCmdRules select _i select 0 == _this) then {
		_found = true;
		private [{_entry}]; _entry = TzkCmdRules select _i;
		_ret = _entry select 2;
	};
	_i = _i + 1;
};

_ret