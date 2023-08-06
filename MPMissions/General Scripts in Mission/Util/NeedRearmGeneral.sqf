// args: vehicle
private [{_rearm}, {_checked}, {_weapons}, {_i}, {_c}];
_rearm = false; _checked = false;

// Unnecessary to check rearmdata for all objs. Only for those empty mag objs
if (not _checked && 0 == count magazines _this) then {
	if (count ((_this call funcGetRearmData) select 1) == 0) then {
		_checked = true; _rearm = false;
	};
};

if not _checked then {
	_weapons = weapons _this; _i = 0, _c = count _weapons; while {_i < _c && not _rearm} do {
		if (_this ammo (_weapons select _i) == 0) then {_rearm = true};
		_i = _i + 1;
	};
};

_rearm