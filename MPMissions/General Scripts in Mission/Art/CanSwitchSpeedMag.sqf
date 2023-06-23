// args: vehicle
// return: mag name

// this script works for magazines that are equipped on artillerys using deploy design
// (M109/PLZ05/TOS1 by now). Other magazines wil be ignored

private [{_mag},{_magArr}, {_found},{_i},{_c}, {_name},{_len}];

_mag = "";
_magArr = magazinesArray _this; _found = false;
_i = 0; _c = count _magArr; while {_i < _c && not _found} do {
	_name = _magArr select _i;
	_len = sizeofstr _name;
	if (_len == 21) then { // Shrapnel_W_0080_xj400, Shrapnel_E_0080_xj400
		if (substr [_name, 0, 8] == "Shrapnel") then {_found = true, _mag = _name};
	};
	if (_len == 17) then { // FAE220_0300_xj400
		if (substr [_name, 0, 6] == "FAE220") then {_found = true, _mag = _name};
	};
	if (_len == 16) then { // HE155_0827_xj400. General since many mags uses this len
		if (substr [_name, 0, 5] == "HE155") then {_found = true, _mag = _name};
	};

	_i = _i + 2;
};
_mag