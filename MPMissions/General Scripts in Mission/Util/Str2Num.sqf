// args: [string, return value if invalid input]
private [{_str}, {_default}, {_size}, {_i}, {_ch}, {_valid}, {_isDecimal}];
_str = _this select 0;
_default = (if (count _this > 1) then {_this select 1} else {-1});

_size = sizeofstr _str; _i = 0; _valid = _size > 0; _isDecimal = false;
while {_i < _size && _valid} do {
	_ch = substr [_str, _i, _i + 1];
	if (not (_ch call loadFile "Util\IsDIgit.sqf")) then {
		if ("." == _ch) then {
			if _isDecimal then {_valid = false} else {_isDecimal = true};
		} else {if ("-" == _ch) then {
			_valid = true;
		} else {
			_valid = false;
		}};
	};
	_i = _i + 1;
};
if _valid then {call _str} else {_default}