// arg: vehicle
// return: weapon name (string)

private [{_weapons},{_weapon}, {_i}, {_c}, {_found}];
_weapons = weapons _this; _weapon = "";

_i = 0, _c = count _weapons, _found = false; while {_i < _c && not _found} do {
	if ((_weapons select _i) in ArtVehWeapons) then {_found = true, _weapon = _weapons select _i};
	_i = _i + 1;
};

_weapon