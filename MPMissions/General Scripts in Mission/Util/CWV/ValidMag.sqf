private [{_availMags}, {_bValid}, {_magName}];
_availMags = _this; _bValid = true; _magName = _magInfo select _i select _piName;

if (_bValid && _magName == "Rocket") then {
	if (_enum == enum_TZK_CustomVehicle_Helicopter) then {
		_bValid = upgMatrix select _si select upgGunshipRocket == 2;
	};
};

if (_bValid && _magName == "AT") then {
	if (_bValid && _availMags select _i == "HellfireLauncherCobra_xj400") then {
		_bValid = _typeName in ["AH1W_Vit_xj400", "AH1_xj400"];
	};
	if (_bValid && _availMags select _i == "HellfireLauncherApach_xj400") then {
		_bValid = _typeName in ["AH64_MPIV_xj400", "AH64_xj400"];
	};
	if (_bValid && _availMags select _i == "HellfireLauncherHind_xj400") then {
		_bValid = _typeName in ["Mi24_xj400"];
	};
	if (_bValid && _availMags select _i == "HOT3Launcher_xj400") then {
		_bValid = _typeName in ["Tiger_HOT3_xj400"];
	};
	if (_bValid && _availMags select _i == "AT6a_RHS_xj400") then {
		_bValid = _typeName in ["Mi24_RHS_xj400"];
	};
	if (_bValid && _availMags select _i == "HellfireLauncherKamov_xj400") then {
		_bValid = _typeName in ["Ka50_xj400", "Ka50_Vanilla_xj405"];
	};
	if (_bValid && _availMags select _i == "GuidedAT_Heli_8_xj400") then {
		_bValid = _typeName in ["AH64_MPIV_AT_xj400", "AH1_AT_xj400", "AH64_AT_xj400", "Mi24_AT_xj400"];
	};
	if (_bValid && _availMags select _i == "GuidedAT_Cobra_8_xj400") then {
		_bValid = _typeName in ["AH1W_Vit_AT_xj400"];
	};
	if (_bValid && _availMags select _i == "PARS3Launcher_xj400") then {
		_bValid = _typeName in ["Tiger_PARS3_xj400"];
	};
	if (_bValid && _availMags select _i == "GuidedAT6_8_xj400") then {
		_bValid = _typeName in ["Mi24_RHS_AT_xj400"];
	};
	if (_bValid && _availMags select _i == "GuidedAT_Heli_12_xj400") then {
		_bValid = _typeName in ["Ka50_AT_xj400", "Ka50_AT_Vanilla_xj405"];
	};
};
_bValid