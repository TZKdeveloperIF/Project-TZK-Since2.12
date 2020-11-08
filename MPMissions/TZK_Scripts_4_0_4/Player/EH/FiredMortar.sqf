// args: [Fired-EH-Array, LimitWeaponRangeFactor]
// _vehicle addEventHandler ["Fired", {[_this, LimitWeaponRangeFactor] call <this function>}]
// return: none

// private list
private ["_Fired_EH_Array", "_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_limitWeaponRangeFactor", "_shell", 
"_position", "_velocity", "_dir", "_scale"
];

_Fired_EH_Array = _this select 0;
_vehicle = _Fired_EH_Array select 0;
_weapon  = _Fired_EH_Array select 1;
_muzzle  = _Fired_EH_Array select 2;
_mode    = _Fired_EH_Array select 3;
_ammo    = _Fired_EH_Array select 4;

_limitWeaponRangeFactor = _this select 1;

_shell = nearestObject [_vehicle, _ammo];

if (local _shell) then {
	if (player == gunner _vehicle) then {
		_scale = 0;
		if (_weapon == "Mortar_500m_xj400") then {_scale = 80};
		if (_weapon == "Mortar_1000m_xj400") then {_scale = 120};
		if (_weapon == "Mortar_1500m_xj400") then {_scale = 140};
		
		if (_scale > 0) then {
		// Important. Don't forget the return value of "speed" is km/h
			_position = getPos _shell; _velocity = velocity _shell; _dir = vectorDir _shell; _scale = 3.6 * _scale/(speed _shell);
			deleteVehicle _shell;
			_velocity = [_velocity, _scale] call funcVectorScale;
			_shell = createShell [_ammo, _position, _velocity, _vehicle, objNull]; _shell setVectorDirAndUp [_dir, [0,0,1]];
		} else {player vehicleChat "Shooting illegal weapon. EventHandler no work."};
	};

	[_vehicle, _shell, _limitWeaponRangeFactor] exec "\TZK_Scripts_4_0_4\Player\Effect\LimitWeaponRangeNew.sqs";
};

