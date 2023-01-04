// enum commandType {throw, grenadeL, mortar}
_speed = [22, 60, 70] select _commandType;
_range = [50, 150, 450] select _commandType;
_text = ["Throw_xj400", "Grenade", "Mortar"] select _commandType;
_weapon = ["Throw_xj400", primaryWeapon _unit, primaryWeapon _unit] select _commandType;
_weaponCheck = [
	{_this hasWeapon "Throw_xj400"},
	{(primaryWeapon _this) in ["M16GrenadeLauncher_TZK_xj400", "AK74GrenadeLauncher_TZK_xj400", "M4_M203_ACOG_SD_xj400", "AK74M_GP25_1P29_SD_xj400", "MM1", "6G30"]},
	{(primaryWeapon _this) in ["M16MortarLauncher_TZK_xj400", "AK74MortarLauncher_TZK_xj400"]}
] select _commandType;
_validMags = [
	[{HandGrenade},{RKG3M_xj400}, {SmokeShell}, {SmokeShellGreen}, {SmokeShellRed}],
	["GrenadeLauncher", "GP25_Grenade_xj400", "GP25_Vest_xj400", "M203_Grenade_xj400", "M203_Vest_xj400", "MM1Magazine", "6G30Magazine", primaryWeapon _unit],
	["M16MortarLauncher_TZK_xj400", "AK74MortarLauncher_TZK_xj400"]
] select _commandType;
_rldTime = [3.5, if (_weapon == "MM1" || _weapon == "6G30") then {0.6} else {5.5}, 5.5] select _commandType;
_fireCommand = [
	"(_this select 0) fire (_this select 1)",
	"(_this select 0) fire (_this select 1)",
	"(_this select 0) fire [_this select 1, _this select 1, _this select 1]"
] select _commandType;