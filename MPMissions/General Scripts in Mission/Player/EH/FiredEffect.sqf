private [
	"_Fired_EH_Array", "_vehicle", "_weapon", "_ammo", "_limitWeaponRangeFactor", 
	"_shell", "_position", "_x", "_y", "_z", "_velocity", "_effectShell", "_bShell", "_sizeOfShell"
];

_Fired_EH_Array = _this select 0;
_vehicle = _Fired_EH_Array select 0;
_weapon  = _Fired_EH_Array select 1;
_ammo    = _Fired_EH_Array select 4;

_limitWeaponRangeFactor = _this select 1;
_this = 0;

_shell = nearestObject [_vehicle, _ammo]; _effectShell = objNull; _local = local _shell;

_res = (UsedVersion >= 2020) call loadFile "\TZK_Patch4_4_0_6\s\Player\Effect\FireShellCheck.sqf";
_bShell = _res select 0; _sizeOfShell = _res select 1;

if ((_limitWeaponRangeFactor <= 0 && _sizeOfShell > 0) || _sizeOfShell > 125) then {
	_Fired_EH_Array call loadFile "\TZK_Scripts_4_0_4\Player\Effect\stvol.sqf";
};

_skipMg = UsedVersion >= 2020;

if _local then {
	if (typeOf _shell != ammoMine) then {
		[_vehicle, _shell, _limitWeaponRangeFactor] exec "\TZK_Scripts_4_0_4\Player\Effect\LimitWeaponRangeNew.sqs";
	};
	_effectShell = _shell;
} else {
	if (boole_Global_Bullet_Tracer || boole_Global_Cannon_Tracer || boole_Global_Shell_Tracer) then {
		if (not _skipMg || (_skipMg && _bShell)) then {
			_position = getPos _shell; _velocity = velocity _shell;
			if (_bShell) then {_x = _position select 0; _y = _position select 1; _z = _position select 2; _position = [_x, _y, _z + 1000]};
			_effectShell = "EffectBullet0_xj400" camCreate _position;
			_effectShell setVelocity _velocity;
		};
	};
};
if (not isNull _effectShell) then {
	_type = typeOf _shell; _found = false;
	if not _found then {if (boole_Local_Bullet_Tracer && _local || boole_Global_Bullet_Tracer && not _local) then {
		_found = true;
		if (-1 != TzkMgAmmo find _type) then {[_effectShell] exec "\TZK_Scripts_4_0_4\Player\Effect\Fired_SLX_MG.sqs"};
	}};
	if not _found then {if (boole_Local_Cannon_Tracer && _local || boole_Global_Cannon_Tracer && not _local) then {
		_found = true;
		if (-1 != TzkCannonGun find _weapon) then {[_effectShell, _weapon] exec (TzkScripts select 033)};
	}};
	if (_bShell) then {
		if ((boole_Local_Shell_Tracer || _sizeOfShell > 125) && _local) then {[_local, _shell, _sizeOfShell] exec (TzkScripts select 032)};
		if ((boole_Global_Shell_Tracer || _sizeOfShell > 125) && not _local) then {[_local, _effectShell, _sizeOfShell, _position, _velocity, 0, _vehicle, _shell] exec (TzkScripts select 032)};
	};
};