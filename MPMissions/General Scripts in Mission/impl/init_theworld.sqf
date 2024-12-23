if (!_found) then {
	_array = ["Arabia"];
	_i = 0; _c = count _array; while {_i < _c && !_found} do {
		if (_world == _array select _i) then {_found = true}; _i = _i + 1;
	};
	if (_found) then {TheWorld = "D"};
};

// Models with dynamic texture requires pre-define even 256x256 textures in 1.99/CWA_CE
// Thus temporary block this design in CWA_CE by now
if (UsedVersion >= 2020) then {
	TheWorld = "C";
};