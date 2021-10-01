private [{_bNeedEquip}, {_typeName}];
_bNeedEquip = true; _typeName = typeOf _vehicle;

if (_bNeedEquip && _typeName in ["AH1_xj400", "AH64_xj400"]) then {
	_bNeedEquip = true;
	_vehicle addMagazine "MachineGun30W"; _vehicle addWeapon "MachineGun30W";
};
if (_bNeedEquip && _typeName in ["AH1W_Vit_xj400", "AH64_MPIV_xj400"]) then {
	_bNeedEquip = true;
	_vehicle addMagazine "M197_xj400"; _vehicle addWeapon "M197_xj400";
};
if (_bNeedEquip && _typeName in ["Mi24_xj400", "Mi24_RHS_xj400"]) then {
	_bNeedEquip = true;
	_vehicle addMagazine "MachineGun30E"; _vehicle addWeapon "MachineGun30E";
};
if (_bNeedEquip && _typeName in ["Ka50_xj400"]) then {
	_bNeedEquip = true;
	_vehicle addMagazine "Cannon30HE_Kamov_xj400"; _vehicle addMagazine "Cannon30AP_Kamov_xj400"; 
	_vehicle addWeapon "Cannon30_Kamov_xj400";
};
if (_bNeedEquip && _typeName in [
	"AH1_AT_xj400", "AH1W_Vit_AT_xj400", "AH64_AT_xj400", "AH64_MPIV_AT_xj400", "Mi24_AT_xj400", "Mi24_RHS_AT_xj400", "Ka50_AT_xj400"
	]) then {
	_bNeedEquip = true;
	_vehicle addMagazine "Mag_20HE_800_01_xj400"; _vehicle addMagazine "Mag_20AP_200_01_xj400";
	_vehicle addWeapon "CannonE_20HE_xj400"; _vehicle addWeapon "CannonE_20AP_xj400";
};
if (_bNeedEquip && _typeName in ["Tiger_HOT3_xj400", "Tiger_PARS3_xj400"]) then {
	_bNeedEquip = true;
	_vehicle addMagazine "Mag_RMKHETiger_400_xj400"; _vehicle addMagazine "Mag_RMKAPTiger_300_xj400";
	_vehicle addWeapon "RMKHETiger_DVD_xj400"; _vehicle addWeapon "RMKAPTiger_DVD_xj400";
};
