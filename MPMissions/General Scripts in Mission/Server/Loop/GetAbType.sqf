// args: auto buy types
// return: type

private [{_type}]; _type = -1;

_validTypes = []; {
	if (_x != -1) then {_validTypes set [count _validTypes, _x]};
} forEach _this;
_c = count _validTypes;

if (_c > 0) then {
	if (_c == 1) then {
		_type = _validTypes select 0
	} else {
		_rand = random 1; _found = false;
		_i = 0; while {_i < _c && not _found} do {
			if (_rand <= (_i + 1) / _c) then {_found = true, _i = _i - 1};
			_i = _i + 1;
		};
		if (not _found) then {_i = _c - 1};
		_type = _validTypes select _i;
	};
};

_type