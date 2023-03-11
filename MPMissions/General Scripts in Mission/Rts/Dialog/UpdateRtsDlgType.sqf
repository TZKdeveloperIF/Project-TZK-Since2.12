// args: [idc, select type level (stack idx), base type status cache]
private [{_idc}, {_level}, {_btnVal}, {_array}, {_processed}];
_idc = _this select 0; _level = _this select 1; _btnVal = _this select 2;
_processed = false;

// Hide all buttons
{ctrlShow [_idc + _x, false]} forEach [0,1,2,3,4,5,6,7,8];
if (_level > 0) then {ctrlShow [_idc + 8, true], ctrlSetText [_idc + 8, "Return"]}; // return button
// move stack top
TzkSelStackIdx = _level;

// Soldier: 0, Tank: 1, Art: 2, Support: 3, AA: 4, Transport: 5
private [{_isAaInf}, {_isArtInf}];
_isAaInf = {
	_this hasWeapon "AALauncher" || _this hasWeapon "9K32Launcher" ||
	_this hasWeapon "AA_TZK_xj400" || _this hasWeapon "9k32_TZK_xj400"
};
_isArtInf = {
	_this hasWeapon "M16MortarLauncher_TZK_xj400" || _this hasWeapon "AK74MortarLauncher_TZK_xj400" ||
	_this hasWeapon "M4_M203_ACOG_SD_xj400" || _this hasWeapon "AK74M_GP25_1P29_SD_xj400"
};

if (not _processed && 0 == _level) then {
	if (not _processed && 2^8 == _btnVal) then {
		if (0 != count _cache0) then { // load from cache
			_processed = true;
		};
	};
	if (not _processed && 0 == count _cache0) then {
		_processed = true;
		private [{_bSoldier}, {_bTank}, {_bArt}, {_bSup}, {_bAA}, {_bTransp}, {_type}];
		_bSoldier = false; _bTank = false; _bArt = false; _bSup = false; _bAA = false; _bTransp = false;

		_array = TzkSelUnitsStack select _level;
		_i = 0; _c = count _array; while {_i < _c} do {
			_unit = _array select _i;
			if (_unit == vehicle _unit) then {
				_bSoldier = true;
				if (_unit call _isArtInf) then {_bArt = true};
				if (_unit call _isAaInf) then {_bAA = true};
				if (_unit hasWeapon "SupportBox_xj400") then {_bSup = true};
				// todo: AI leader
			} else {
				_vehicle = vehicle _unit;
				_type = _vehicle call funcGetUnitTypeFromObject;
				if (-1 != _type) then {
					if (-1 != typesHeavyTank find _type || -1 != typesLightTank find _type) then {_bTank = true};
					if (-1 != typesHowitzer find _type || -1 != typesRocketLauncher find _type) then {_bArt = true};
					if (-1 != (typesSupport select si0) find _type || -1 != (typesSupport select si1) find _type) then {_bSup = true};
					if (_type == jeepaW || _type == uazaE) then {_bSup = true};
					if (-1 != typesAAAPC find _type) then {_bAA = true};
					if (-1 != typesTransportCar find _type || -1 != typesTransportShip find _type) then {_bTransp = true};
					if (-1 != typesTransportAPC find _type || -1 != typesTransportHeli find _type) then {_bTransp = true};
				} else {
					_type = _vehicle call funcGetStructTypeFromObject;
					if (-1 != structsOccupiableArtilleryMortar find _type || -1 != structsOccupiableHowitzer find _type) then {_bArt = true};
				};
			};
			_i = _i + 1;
		};

		_cache0 set [0, _bSoldier];
		_cache0 set [1, _bTank];
		_cache0 set [2, _bArt];
		_cache0 set [3, _bSup];
		_cache0 set [4, _bAA];
		_cache0 set [5, _bTransp];
	};
	ctrlSetText [_idc + 0, "Soldier"];
	ctrlSetText [_idc + 1, "Tank"];
	ctrlSetText [_idc + 2, "Art"];
	ctrlSetText [_idc + 3, "Support"];
	ctrlSetText [_idc + 4, "AA"];
	ctrlSetText [_idc + 5, "Transport"];
	{ctrlShow [_idc + _x, _cache0 select _x]} forEach [0,1,2,3,4,5];
};

if (not _processed && 1 == _level) then {
	if (2^8 != _btnVal) then {TzkSelLv1Btn = _btnVal} else {_btnVal = TzkSelLv1Btn};
	_array = TzkSelUnitsStack select _level - 1;

	if (not _processed && 2^8 == _btnVal) then {
		if (0 != count _cache1) then { // load from cache
			_processed = true;
			private [{_i},{_c}];
			_i = 0; _c = count _cache1; while {_i < _c} do {
				ctrlShow [_idc + _i, _cache1 select _i];
				ctrlSetText [_idc + _i, _cacheText1 select _i];
				_i = _i + 1;
			};
		};
	};

	private [{_validElem}, {_top}];
	_top = TzkSelUnitsStack select _level;
	if (not _processed && 2^0 == _btnVal) then {
		_processed = true;
		private [{_bAT}, {_bAA}, {_bSniper}, {_bArt}, {_type}];
		_bAT = false; _bAA = false; _bSniper = false; _bArt = false;

		private [{_unitArr}]; _unitArr = [];
		_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
			_validElem = false;
			_unit = _array select _i;
			if (_unit == vehicle _unit) then {
				_validElem = true;
				_unitArr set [0, _unit];
				if not _bSniper then {
					if ("SoldierWSniper" countType _unitArr > 0 || "SoldierESniper" countType _unitArr > 0) then {_bSniper = true};
				};
				if not _bAA then {
					if (_unit call _isAaInf) then {_bAA = true};
				};
				if not _bArt then {
					if (_unit call _isArtInf) then {_bArt = true};
				};
				if not _bAT then {
					_type = _unit call funcGetUnitTypeFromObject;
					if (-1 != _type) then {
						if (-1 != typesInfantryAT find _type && not (_unit call _isAaInf)) then {_bAT = true};
					} else {
						if (_unit == leader _unit && not (_unit call _isAaInf)) then {_bAT = true};
					};
				};
			};
			if _validElem then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;

		_cache1 resize 4; _cacheText1 resize 4;
		_cache1 set [0, _bAT]; _cacheText1 set [0, "RPG/AT"];
		_cache1 set [1, _bAA]; _cacheText1 set [1, "AA"];
		_cache1 set [2, _bSniper]; _cacheText1 set [2, "Sniper"];
		_cache1 set [3, _bArt]; _cacheText1 set [3, "Art"];
		{ctrlShow [_idc + _x, _cache1 select _x]} forEach [0,1,2,3];
		{ctrlSetText [_idc + _x, _cacheText1 select _x]} forEach [0,1,2,3];

		_j = 0;
		_i = 0; _c = count _array; while {_i < _c} do {
			_unit = _array select _i;
			if (_unit == vehicle _unit) then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;
	};
	if (not _processed && 2^1 == _btnVal) then {
		_processed = true;
		private [{_bLight}, {_bHeavy}, {_type}];
		_bLight = false; _bHeavy = false;

		_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
			_validElem = false;
			_unit = _array select _i;
			_vehicle = vehicle _unit;
			_type = _vehicle call funcGetUnitTypeFromObject;
			if (-1 != _type) then {
				if (-1 != typesLightTank find _type) then {_bLight = true; _validElem = true};
				if (-1 != typesHeavyTank find _type) then {_bHeavy = true; _validElem = true};
				if (-1 != typesATAPC find _type) then {_validElem = true};
			};
			if _validElem then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;

		_cache1 resize 2; _cacheText1 resize 2;
		_cache1 set [0, _bLight]; _cacheText1 set [0, "Light"];
		_cache1 set [1, _bHeavy]; _cacheText1 set [1, "Heavy"];
		{ctrlShow [_idc + _x, _cache1 select _x]} forEach [0,1];
		{ctrlSetText [_idc + _x, _cacheText1 select _x]} forEach [0,1];
	};
	if (not _processed && 2^2 == _btnVal) then {
		_processed = true;
		private [{_bInf}, {_bStruct}, {_bHowitzer}, {_bRocket}, {_type}];
		_bInf = false; _bStruct = false; _bHowitzer = false; _bRocket = false;

		_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
			_validElem = false;
			_unit = _array select _i;
			_vehicle = vehicle _unit;
			if (_unit == _vehicle) then {
				if (_unit call _isArtInf) then {_bInf = true; _validElem = true};
			} else {
				_type = _vehicle call funcGetUnitTypeFromObject;
				if (-1 != typesHowitzer find _type) then {_bHowitzer = true; _validElem = true};
				if (-1 != typesRocketLauncher find _type) then {_bRocket = true; _validElem = true};
				if (-1 == _type) then {
					_type = _vehicle call funcGetStructTypeFromObject;
					if (-1 != structsOccupiableArtilleryMortar find _type || -1 != structsOccupiableHowitzer find _type) then {_bStruct = true; _validElem = true};
				};
			};
			if _validElem then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;

		_cache1 resize 4; _cacheText1 resize 4;
		_cache1 set [0, _bInf]; _cacheText1 set [0, "Soldier"];
		_cache1 set [1, _bStruct]; _cacheText1 set [1, "Struct"];
		_cache1 set [2, _bHowitzer]; _cacheText1 set [2, "Howitzer"];
		_cache1 set [3, _bRocket]; _cacheText1 set [3, "Rocket"];
		{ctrlShow [_idc + _x, _cache1 select _x]} forEach [0,1,2,3];
		{ctrlSetText [_idc + _x, _cacheText1 select _x]} forEach [0,1,2,3];
	};
	if (not _processed && 2^3 == _btnVal) then {
		_processed = true;
		private [{_bApc}, {_bTruck}, {_bJeep}, {_bInf}, {_type}];
		_bApc = false; _bTruck = false; _bJeep = false; _bInf = false;

		private [{_vehArr}]; _vehArr = [];
		_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
			_validElem = false;
			_unit = _array select _i;
			_vehicle = vehicle _unit;
			if (_unit == _vehicle) then {
				if (_unit hasWeapon "SupportBox_xj400") then {_bInf = true; _validElem = true};
			} else {
				_type = _vehicle call funcGetUnitTypeFromObject;
				if (_type == jeepaW || _type == uazaE) then {_bJeep = true; _validElem = true};
				if (-1 != TransportRepairTruckW find _type || -1 != TransportRepairTruckE find _type) then {_bTruck = true; _validElem = true};
				if (-1 != typesSupportAPC find _type) then {_bApc = true; _validElem = true};
			};
			if _validElem then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;

		_cache1 resize 4; _cacheText1 resize 4;
		_cache1 set [0, _bApc]; _cacheText1 set [0, "APC"];
		_cache1 set [1, _bTruck]; _cacheText1 set [1, "Truck"];
		_cache1 set [2, _bJeep]; _cacheText1 set [2, "Jeep"];
		_cache1 set [3, _bInf]; _cacheText1 set [3, "Soldier"];
		{ctrlShow [_idc + _x, _cache1 select _x]} forEach [0,1,2,3];
		{ctrlSetText [_idc + _x, _cacheText1 select _x]} forEach [0,1,2,3];
	};
	if (not _processed && 2^4 == _btnVal) then {
		_processed = true;
		private [{_bInf}, {_bShilka}, {_bMissile}, {_type}];
		_bInf = false; _bShilka = false; _bMissile = false;

		private [{_vehArr}]; _vehArr = [];
		_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
			_validElem = false;
			_unit = _array select _i;
			_vehicle = vehicle _unit;
			if (_unit == _vehicle) then {
				if (_unit call _isAaInf) then {_bInf = true; _validElem = true};
			} else {
				_type = _vehicle call funcGetUnitTypeFromObject;
				if (-1 != typesAAAPC find _type) then {
					_validElem = true;
					// keep same as defined in Common\Equip\BMP_AA1.sqs and Common\Equip\M2A2_AA1.sqs
					if (_vehicle hasWeapon "Stinger_Wep_xj400" || _vehicle hasWeapon "Strela_Wep_xj400") then {_bMissile = true} else {_bShilka = true};
				};
			};
			if _validElem then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;

		_cache1 resize 3; _cacheText1 resize 3;
		_cache1 set [0, _bInf]; _cacheText1 set [0, "Soldier"];
		_cache1 set [1, _bShilka]; _cacheText1 set [1, "Cannon"];
		_cache1 set [2, _bMissile]; _cacheText1 set [2, "Missile"];
		{ctrlShow [_idc + _x, _cache1 select _x]} forEach [0,1,2];
		{ctrlSetText [_idc + _x, _cacheText1 select _x]} forEach [0,1,2];
	};
	if (not _processed && 2^5 == _btnVal) then {
		_processed = true;
		private [{_bHeli}, {_bTruck}, {_bApc}, {_bCar}, {_type}];
		_bHeli = false; _bTruck = false; _bApc = false; _bCar = false;

		_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
			_validElem = false;
			_unit = _array select _i;
			_vehicle = vehicle _unit;
			if (_unit != _vehicle) then {
				_type = _vehicle call funcGetUnitTypeFromObject;
				if (-1 != typesTransportHeli find _type) then {_bHeli = true; _validElem = true};
				if (-1 != TransportTruckW find _type || -1 != TransportTruckE find _type) then {_bTruck = true; _validElem = true};
				if (-1 != typesTransportAPC find _type) then {_bApc = true; _validElem = true};
				if (-1 != TransportCarW find _type || -1 != TransportCarE find _type) then {_bCar = true; _validElem = true};
			};
			if _validElem then {_top set [_j, _unit]; _j = _j + 1};
			_i = _i + 1;
		};
		_top resize _j;

		_cache1 resize 4; _cacheText1 resize 4;
		_cache1 set [0, _bHeli]; _cacheText1 set [0, "Helicopter"];
		_cache1 set [1, _bTruck]; _cacheText1 set [1, "Truck"];
		_cache1 set [2, _bApc]; _cacheText1 set [2, "APC"];
		_cache1 set [3, _bCar]; _cacheText1 set [3, "Car"];
		{ctrlShow [_idc + _x, _cache1 select _x]} forEach [0,1,2,3];
		{ctrlSetText [_idc + _x, _cacheText1 select _x]} forEach [0,1,2,3];
	};
};

if (not _processed && 2 == _level) then {
	// ASSERT(2^8 != _btnVal)
	if (2^8 != _btnVal) then {TzkSelLv2Btn = _btnVal}; // else {_btnVal = TzkSelLv2Btn};
	_array = TzkSelUnitsStack select _level - 1;

	private [{_lambda}, {_top}];
	_top = TzkSelUnitsStack select _level; _lambda = "";
	if (not _processed && 2^0 == TzkSelLv1Btn) then {
		if (not _processed && 2^0 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					_type = _this call funcGetUnitTypeFromObject;
					(-1 != typesInfantryAT find _type || _this == leader _this) && not (_this call _isAaInf)
				} else {false}
			};
			_processed = true;
		};
		if (not _processed && 2^1 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					_this call _isAaInf
				} else {false}
			};
			_processed = true;
		};
		if (not _processed && 2^2 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					"SoldierWSniper" countType [_this] > 0 || "SoldierESniper" countType [_this] > 0
				} else {false}
			};
			_processed = true;
		};
		if (not _processed && 2^3 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					_this call _isArtInf
				} else {false}
			};
			_processed = true;
		};
	};
	if (not _processed && 2^1 == TzkSelLv1Btn) then {
		if (not _processed && 2^0 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesLightTank find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^1 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesHeavyTank find _type
				}
			};
			_processed = true;
		};
	};
	if (not _processed && 2^2 == TzkSelLv1Btn) then {
		if (not _processed && 2^0 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					_this call _isArtInf
				} else {false}
			};
			_processed = true;
		};
		if (not _processed && 2^1 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetStructTypeFromObject;
					-1 != structsOccupiableArtilleryMortar find _type || -1 != structsOccupiableHowitzer find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^2 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesHowitzer find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^3 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesRocketLauncher find _type
				}
			};
			_processed = true;
		};
	};
	if (not _processed && 2^3 == TzkSelLv1Btn) then {
		if (not _processed && 2^0 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesSupportAPC find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^1 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != TransportRepairTruckW find _type || -1 != TransportRepairTruckE find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^2 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					_type == jeepaW || _type == uazaE
				}
			};
			_processed = true;
		};
		if (not _processed && 2^3 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					_unit hasWeapon "SupportBox_xj400"
				} else {false}
			};
			_processed = true;
		};
	};
	if (not _processed && 2^4 == TzkSelLv1Btn) then {
		if (not _processed && 2^0 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {
					_unit call _isAaInf
				} else {false}
			};
			_processed = true;
		};
		if (not _processed && 2^1 == _btnVal) then {
			_lambda = {
				_ret = false; _vehicle = vehicle _this;
				if (_this != _vehicle) then {
					_type = _vehicle call funcGetUnitTypeFromObject;
					if (-1 != typesAAAPC find _type) then {
						_ret = not (_vehicle hasWeapon "Stinger_Wep_xj400" || _vehicle hasWeapon "Strela_Wep_xj400");
					};
				};
				_ret
			};
			_processed = true;
		};
		if (not _processed && 2^2 == _btnVal) then {
			_lambda = {
				_ret = false; _vehicle = vehicle _this;
				if (_this != _vehicle) then {
					_type = _vehicle call funcGetUnitTypeFromObject;
					if (-1 != typesAAAPC find _type) then {
						_ret = _vehicle hasWeapon "Stinger_Wep_xj400" || _vehicle hasWeapon "Strela_Wep_xj400";
					};
				};
				_ret
			};
			_processed = true;
		};
	};
	if (not _processed && 2^5 == TzkSelLv1Btn) then {
		if (not _processed && 2^0 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesTransportHeli find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^1 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != TransportTruckW find _type || -1 != TransportTruckE find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^2 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != typesTransportAPC find _type
				}
			};
			_processed = true;
		};
		if (not _processed && 2^3 == _btnVal) then {
			_lambda = {
				if (_this == vehicle _this) then {false} else {
					_type = (vehicle _this) call funcGetUnitTypeFromObject;
					-1 != TransportCarW find _type || -1 != TransportCarE find _type
				}
			};
			_processed = true;
		};
	};
	_j = 0; _i = 0; _c = count _array; while {_i < _c} do {
		_unit = _array select _i;
		if (_unit call _lambda) then {_top set [_j, _unit]; _j = _j + 1};
		_i = _i + 1;
	};
	_top resize _j;
};