
_nil = "<null>";
_i = 0; _c = count upgChnDefs; while {_i < _c} do {
	if (_nil == format ["%1", upgChnDefs select _i]) then {
		upgChnDefs set [_i, ""];
	};
	_i = _i + 1;
};