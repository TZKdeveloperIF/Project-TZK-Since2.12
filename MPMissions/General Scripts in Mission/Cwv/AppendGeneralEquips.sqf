private [{_bNeedEquip}, {_typeName}];
_bNeedEquip = true; _typeName = typeOf _this;

if _bNeedEquip then {if (_typeName in ["AH1_xj400", "AH64_xj400"]) then {
	_bNeedEquip = false;
	_m set [count _m, "MachineGun30W"]; _w set [count _w, "MachineGun30W"];
}};
if _bNeedEquip then {if (_typeName in ["AH1W_Vit_xj400", "AH64_MPIV_xj400"]) then {
	_bNeedEquip = false;
	_m set [count _m, "M197_xj400"]; _w set [count _w, "M197_xj400"];
}};
if _bNeedEquip then {if (_typeName in ["Mi24_xj400", "Mi24_RHS_xj400"]) then {
	_bNeedEquip = false;
	_m set [count _m, "MachineGun30E"]; _w set [count _w, "MachineGun30E"];
}};
if _bNeedEquip then {if (_typeName in ["Ka50_xj400"]) then {
	_bNeedEquip = false;
	_m set [count _m, "Cannon30HE_Kamov_xj400"]; _m set [count _m, "Cannon30AP_Kamov_xj400"]; 
	_w set [count _w, "Cannon30_Kamov_xj400"];
}};
if _bNeedEquip then {if (_typeName in [
	"AH1_AT_xj400", "AH1W_Vit_AT_xj400", "AH64_AT_xj400", "AH64_MPIV_AT_xj400", "Mi24_AT_xj400", "Mi24_RHS_AT_xj400", "Ka50_AT_xj400"
	]) then {
	_bNeedEquip = false;
	_m set [count _m, "Mag_20HE_800_01_xj400"]; _m set [count _m, "Mag_20AP_200_01_xj400"];
	_w set [count _w, "CannonE_20HE_xj400"]; _w set [count _w, "CannonE_20AP_xj400"];
}};
if _bNeedEquip then {if (_typeName in ["Tiger_HOT3_xj400", "Tiger_PARS3_xj400"]) then {
	_bNeedEquip = false;
	_m set [count _m, "Mag_RMKHETiger_400_xj400"]; _m set [count _m, "Mag_RMKAPTiger_300_xj400"];
	_w set [count _w, "RMKHETiger_DVD_xj400"]; _w set [count _w, "RMKAPTiger_DVD_xj400"];
}};

if ("Helicopter" countType [_this] > 0) then {
	{_m set [count _m, _x]} forEach SpoofMagazines;
};
if (_this call loadFile "Util\IsTZKModelPlane.sqf") then {
	_m set [count _m, "AfterBurnerSwitch_xj400"];
};