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
	if (_unit == _v) then {
		_wpnPrim = primaryWeapon _unit;
		_wpnSec = secondaryWeapon _unit;
		_magazines = _unit call loadFile "Common\SQF\GetNotEmptyMags.sqf";
		if (_wpnSec != "") then {
			_validMags = [_wpnSec] call loadFile "Common\SQF\WeaponValidMags.sqf";
			if ("_x in _validMags" count _magazines == 0) then {_rearm = true};
		} else {
			if (_wpnPrim != "") then {
				_validMags = [_wpnPrim] call loadFile "Common\SQF\WeaponValidMags.sqf";
				if ("_x in _validMags" count _magazines == 0) then {_rearm = true};
			} else {
				if (count _magazines < 1) then {_rearm = true};
			};
		};
// It's sase-inensitive when comparing strings, but it's cASe-seNsItiVE when applying "in" or "find" to strings.
// Do not check if soldier is out of Satchel or Mine. The result of secondaryWeapon is rely on particular weapons thus should be edit if soldiers' weapons redefined.
	} else {
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
						if ((_v ammo (_guns select _index)) < (((aiSetting select _si) select _gi) select aisAutoRearmSabot)) then {_rearm = true};
					};
					_index = _index + 1;
				};
			};
		};
		// Do not check if vehicle is out of a magazine, such as Sabot/Heat to Tank Gun.
	};
};
_rearm