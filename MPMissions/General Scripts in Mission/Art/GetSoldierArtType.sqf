// args: unit

private [{_mags}, {_weapons}, {_ret}];

_mags = ((_this call funcGetRearmData) select 1) + magazines _this;
_weapons = weapons _this;

_ret = -1;
if (-1 == _ret) then {
	if ([["M16MortarLauncher_TZK_xj400", "AK74MortarLauncher_TZK_xj400"], _mags] call funcArrayOverlap) then {
		_ret = 2;
	};
};
if (-1 == _ret) then {
	if ([[
		"M16GrenadeLauncher_TZK_xj400", "AK74GrenadeLauncher_TZK_xj400", 
		"M4_M203_ACOG_SD_xj400", "AK74M_GP25_1P29_SD_xj400", "MM1", "6G30"], _weapons] call funcArrayOverlap) then {
		_ret = 1;
	};
};
if (-1 == _ret) then {
	if ({_x in [{HandGrenade},{RKG3M_xj400}, {SmokeShell}, {SmokeShellGreen}, {SmokeShellRed}]} count (_mags) > 0) then {
		_ret = 0;
	};
};
_ret