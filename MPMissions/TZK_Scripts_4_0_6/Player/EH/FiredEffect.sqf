private [
	"_Fired_EH_Array", "_vehicle", "_weapon", "_muzzle", "_mode", "_ammo", "_limitWeaponRangeFactor", 
	"_shell", "_position", "_x", "_y", "_z", "_velocity", "_dir", "_effectShell", "_bShell", "_sizeOfShell"
];

_Fired_EH_Array = _this select 0;
_vehicle = _Fired_EH_Array select 0;
_weapon  = _Fired_EH_Array select 1;
_muzzle  = _Fired_EH_Array select 2;
_mode    = _Fired_EH_Array select 3;
_ammo    = _Fired_EH_Array select 4;

_limitWeaponRangeFactor = _this select 1;
_this = 0;

_shell = nearestObject [_vehicle, _ammo]; _effectShell = objNull; _local = local _shell;

_bShell = false; _sizeOfShell = 0;
	if (not _bShell && -1 != ["M252Launcher", "Mortar81_Launcher_xj400", "Mortar82_Launcher_xj400"] find _weapon) then {
		_bShell = true; _sizeOfShell = 81;
	};
	if (not _bShell && -1 != ["Gun105_xj400", "Gun106_htr_xj400", "105RC_OFrP_xj400"] find _weapon) then {_bShell = true; _sizeOfShell = 105};
	if (not _bShell && -1 != ["Gun122_xj400", "Gun120_Grk_xj400", "Gun122_VME_xj400"] find _weapon) then {_bShell = true; _sizeOfShell = 122};
	if (not _bShell && -1 != ["Gun130_xj400"] find _weapon) then {_bShell = true; _sizeOfShell = 130};
	if (not _bShell && -1 != ["Gun155_xj400","PLA155Gun_xj400", "Gun155"] find _weapon) then {_bShell = true; _sizeOfShell = 155};
if (not bool_TZK_SEMod_Mode && not _bShell) Then {
	if (not _bShell && -1 != [
		"T80Gun_xj400","T90Gun_xj400","T90msGun_xj400","PLAGun_xj400","Gun125", "Sprut_2A75_xj400", 
		"MFCTI116T72Gun","MFCTI116T72BGun","MFCTI116T80Gun","MFCTI116T80BGun","MFCTI116T80UGun"
	] find _weapon) then {_bShell = true; _sizeOfShell = 125};
	if (not _bShell && -1 != ["Gun73", "MFCTI116BMP1Gun", "Gun_Spg_fdf_xj400"] find _weapon) then {_bShell = true; _sizeOfShell = 73};
	if (not _bShell && -1 != ["HVG90_BOH_xj400", "Zwige_BOH_xj400"] find _weapon) then {_bShell = true; _sizeOfShell = 90};
	if (not _bShell && -1 != ["Gun105", "Gun105_xj400", "MFCTI116M60Gun","MFCTI116M60A3Gun","MFCTI116M1Gun"] find _weapon) then {_bShell = true; _sizeOfShell = 105};
	if (not _bShell && -1 != ["M1Gun_xj400","M12Gun_xj400","LeoGun_xj400","Gun120", "MFCTI116M1A1Gun"] find _weapon) then {_bShell = true; _sizeOfShell = 120};
};

if _local then {
	if (typeOf _shell != ammoMine) then { [_vehicle, _shell, _limitWeaponRangeFactor] exec "\TZK_Scripts_4_0_4\Player\Effect\LimitWeaponRangeNew.sqs" };
	_effectShell = _shell;
} else {
	if (boole_Global_Bullet_Tracer || boole_Global_Cannon_Tracer || boole_Global_Shell_Tracer) then 	{
		_position = getPos _shell; _velocity = velocity _shell;
		if (_bShell) then {_x = _position select 0; _y = _position select 1; _z = _position select 2; _position = [_x, _y, _z + 1000]};
		_effectShell = "EffectBullet0_xj400" camCreate _position;
		_effectShell setVelocity _velocity;
	};
};
if ((_limitWeaponRangeFactor <= 0 && _sizeOfShell > 0) || _sizeOfShell > 125) then { _Fired_EH_Array call loadFile "\TZK_Scripts_4_0_4\Player\Effect\stvol.sqf" };
if (not isNull _effectShell) then {
	_type = typeOf _shell; _found = false;
	if (not _found && ((boole_Local_Bullet_Tracer && _local) || (boole_Global_Bullet_Tracer && not _local))) then {
		_found = true;
		if (-1 != [
			"CoaxW_xj400","CoaxE_xj400","50calW_xj400","50calE_xj400","Bullet7_6","Bullet12_7", 
			"Bullet_7_6_AI_xj400","Bullet_7_6_Player_xj400","Bullet_12_7_AI_xj400","Bullet_12_7_Player_xj400",
			"CoaxW_AI_xj400","CoaxW_Player_xj400","CoaxE_AI_xj400","CoaxE_Player_xj400",
			"50calW_AI_xj400","50calW_Player_xj400","50calE_AI_xj400","50calE_Player_xj400",
			"Gatling7_6_xj400",
			"MFCTI116Bullet12_7","MFCTI116Bullet7_6"
		] find _type) then {[_effectShell] exec "\TZK_Scripts_4_0_4\Player\Effect\Fired_SLX_MG.sqs"};
	};
	if (not _found && ((boole_Local_Cannon_Tracer && _local) || (boole_Global_Cannon_Tracer && not _local))) then {
		_found = true;
		if (-1 != [
			"MachineGun30","MachineGun30W","M197_xj400","VulcanCannon","VulcanCannon_xj400","Cannon_20HE_xj400","Cannon_20AP_xj400",
			"RMKHETiger_DVD_xj400","RMKAPTiger_DVD_xj400", "MachineGun30E","ZsuCannon","Cannon30_Kamov_xj400","CannonE_20HE_xj400","CannonE_20AP_xj400",
			"MachineGun30A10","MachineGun30A10Burst","RKTHunter_Guns_xj400","Cannon_Heli_xj400","Cannon_30APHE_xj400",
			"Tunguska_30mm_DKM_xj406", "VulcanCannon_xj406", "ZsuCannon_xj406"
		] find _weapon) then {[_effectShell, _weapon] exec localize {TZK_EFFECT_FIRED_FFUR_CANNON}};
	};
	if (_bShell) then {
		if ((boole_Local_Shell_Tracer || _sizeOfShell > 125) && _local) then {[_local, _shell, _sizeOfShell] exec localize {TZK_EFFECT_FIRED_COC_TRACER}};
		if ((boole_Global_Shell_Tracer || _sizeOfShell > 125) && not _local) then {[_local, _effectShell, _sizeOfShell, _position, _velocity, _dir, _vehicle, _shell] exec localize {TZK_EFFECT_FIRED_COC_TRACER}};
	};
};