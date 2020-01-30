// args: [unit, si, gi]
// return: whether need rearm
private ["_unit", "_rearm", "_v", "_x", "_wpnPrim", "_wpnSec", "_rearmData", "_rearmMags", "_weapons"];
private ["_SecondaryWeaponMagazines", "_magazines", "_sabots", "_guns", "_index"];
private ["_si", "_gi"];

_unit = _this select 0;
_si = _this select 1;
_gi = _this select 2;

_rearm = false;

if (_unit == driver vehicle _unit) then
{
	_v = vehicle _unit;
	if (_unit == _v) then
	{
		_wpnPrim = primaryWeapon _unit;
		_wpnSec = secondaryWeapon _unit;
		if (_wpnPrim != "") then
		{
		//	if ((_unit ammo _wpnPrim) == 0) then { _rearm = true };
		// 	The "ammo" command using muzzleName as parameter. Guns with multi-muzzles will meet problems here. Use the count of magazines instead before we have commands returning muzzleName.
			if ((count magazines _unit) < 3) then {_rearm = true};
		};
		if (_wpnSec != "") then
		{
		//	if ((_unit ammo _wpnSec) == 0) then { _rearm = true };
		// Be cautious!! It's Case-Sensitive when using STRING array to check whether unit has a specific magazine/weapon. The east infantry AA weapon is "9K32" but not "9k32". TZK defined the "9k32In4_xj200" ammo whose name is lower-case. Aiming to let editor realize this knowledge, the "9k32In4_xj200" is remained and not plan to rewrite as upper case.
			_SecondaryWeaponMagazines = ["LAWLauncher","CarlGustavLauncher","AALauncher","RPGLauncher","AT4Launcher","9K32Launcher"] + ["CarlGustavIn4_xj200","AAIn4_xj200","AT4In4_xj200","9k32In4_xj200"];
			_magazines = magazines _unit;
		//	_magazines = _magazines - (_magazines - _SecondaryWeaponMagazines);
		//	if ( ((_unit ammo _wpnSec) + (count _magazines)) <= 1 ) then { _rearm = true };
			if ( ((_unit ammo _wpnSec) + ({_x in _SecondaryWeaponMagazines} count _magazines)) <= 1 ) then { _rearm = true };
		};
		// Do not check if soldier is out of Satchel or Mine. The result of secondaryWeapon is rely on particular weapons thus should be edit if soldiers' weapons redefined.
	}
	else
	{
		_rearmData = _v call funcGetRearmData;
		_rearmMags = _rearmData select 1;
		if ((count _rearmMags) > 0) then
		{
			_weapons = weapons _v;
			{ if ((_v ammo _x) == 0) then { _rearm = true };  } foreach _weapons;
			if !(_rearm) then
			{
				_sabots = ["Heat120","M1Sabot_xj200","M12Sabot_xj200","T80Sabot_xj200","T90Sabot_xj200","LeoSabot_xj200","PLASabot_xj200","DKMM_Gun155AP_xj200","Sprut_3VBM17_xj200"];
				_guns   = ["Gun120", "M1Gun_xj200",  "M12Gun_xj200",  "T80Gun_xj200",  "T90Gun_xj200",  "LeoGun_xj200",  "PLAGun_xj200",  "Gun155_xj200",       "Sprut_2A75_xj200"];
				_index = 0;
				while "!_rearm && _index < count _sabots" do
				{
					if ( (_sabots select _index) in _rearmMags ) then
					{
						if ("_x == (_sabots select _index)" count (magazines _v) < 1) then {_rearm = true};
						if ((_v ammo (_guns select _index)) < ((call grpSetting) select aisAutoRearmSabot)) then {_rearm = true};
					};
					_index = _index + 1;
				};
			};
		};
		// Do not check if vehicle is out of a magazine, such as Sabot/Heat to Tank Gun.
	};
};
_rearm