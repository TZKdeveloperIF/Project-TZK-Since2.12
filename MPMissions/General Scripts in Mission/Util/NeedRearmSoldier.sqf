// args: unit
private [{_rearm}, {_wpnPrim}, {_wpnSec}, {_mags}, {_validMags}];
_rearm = false;

_wpnPrim = primaryWeapon _this;
_wpnSec = secondaryWeapon _this;
_mags = _this call funcGetNotEmptyMags;

if not _rearm then {if (_wpnSec != "") then {
	_validMags = [_wpnSec] call funcWeaponValidMags;
	if ({_x in _validMags} count _mags == 0) then {_rearm = true};
}};

if not _rearm then {if (_wpnPrim != "" && _wpnPrim != "SupportBox_xj400") then {
	_validMags = [_wpnPrim] call funcWeaponValidMags;
	if ({_x in _validMags} count _mags == 0) then {_rearm = true};
}};

if not _rearm then {
	if (count _mags < 1) then {_rearm = true};
};

_rearm