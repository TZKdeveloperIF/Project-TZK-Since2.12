// args: vehicle
// return: mag name

private [{_mag},{_magArr}, {_found},{_i},{_c}, {_name}];

_mag = "";
_magArr = magazinesArray _this; _found = false;
_i = 0; _c = count _magArr; while {_i < _c && not _found} do {
	_name = _magArr select _i;
	if (sizeofstr _name == 21) then {
		if (substr [_name, 0, 8] == "Shrapnel") then {_found = true, _mag = _name};
	};

	_i = _i + 2;
};