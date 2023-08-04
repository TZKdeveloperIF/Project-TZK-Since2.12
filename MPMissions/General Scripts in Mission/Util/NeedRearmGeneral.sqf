// args: vehicle
private [{_rearm}, {_weapons}, {_i}, {_c}];
_rearm = false;

_weapons = weapons _this; _i = 0, _c = count _weapons; while {_i < _c && not _rearm} do {
	if (_this ammo (_weapons select _i) == 0) then {_rearm = true};
	_i = _i + 1;
};

_rearm