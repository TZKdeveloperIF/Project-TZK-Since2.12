// args: units
// load other variables from caller as well
// returns: string

// generate precise string of an array contains plural "NetworkID"
// the content of this string is NetworkID[]
// don't pass too many units

private [{_units}, {_str}, {_i}, {_c}];
_units = _this;
_str = ""; _i = 0; _c = count _units; while {_i < _c} do {
	_unit = _units select _i;
	_str = _str + (_unit call funcGenNetIdStr) + ",";
	_i = _i + 1;
};
if (_c > 0) then {
	if (sizeofstr _str <= 0) then {
		"Fetal error in generating netId array string." call fDebugLog;
	} else {
		_str = format ["%1%2%3", "[", substr [_str, 0, sizeofstr _str - 1], "]"]
	};
};
_str