// Redefine type class to those objects whose dynamic texture is disabled by 4.0.6 patch2
_entry = unitDefs select _tankHeavyW01; _entry set [udModel, "M1A1_G_xj400"];
_entry = unitDefs select _tankHeavyW03; _entry set [udModel, "Leo2A6_C_xj400"];
_entry = unitDefs select _m1a1townW; _entry set [udModel, "M1A1_G_xj400"];
_entry = unitDefs select _tankHeavyE01; _entry set [udModel, "T80_G_xj400"];
_entry = unitDefs select _tankHeavyE03; _entry set [udModel, "ZTZ99_C_xj400"];
_entry = unitDefs select _t80townE; _entry set [udModel, "T80_G_xj400"];

{_entry = unitDefs select _x; _entry set [udModel, "M113Ambul_G_xj400"]} forEach [_supportAPCW, _supportAPCWminer];
{_entry = unitDefs select _x; _entry set [udModel, "BMPAmbul_G_xj400"]} forEach [_supportAPCE, _supportAPCEminer];

{_entry = unitDefs select _x; _entry set [udModel, "MHQW_G_xj400"]} forEach [utMHQ0];
{_entry = unitDefs select _x; _entry set [udModel, "MHQE_G_xj400"]} forEach [utMHQ1];

{_entry = unitDefs select _x; _entry set [udModel, "M2A2_G_AA_xj400"]} forEach [_m2a2W,_m3a2W,_m2a2d,_m2a2at,_m2a2aa];
{_entry = unitDefs select _x; _entry set [udModel, "BMP2_G_AA_xj400"]} forEach [_bmp2E,_bmp2_EE,_bmp2d,_bmp2at,_bmp2Cannon,_bmp2aa];

{_entry = unitDefs select _x; _entry set [udModel, "M2A2_G_AA_Town_xj400"]} forEach [_m2a2townat, _m2a2townaad];
{_entry = unitDefs select _x; _entry set [udModel, "BMP2_G_AA_Town_xj400"]} forEach [_bmp2townat, _bmp2townaad];

_entry = unitDefs select _t80R; _entry set [udModel, "T80Res_TZK_G_xj406"];

// "C" vehicles should only be applied in CWA_CE. Keep same as old in ARES
_bUseStaticTexture = UsedVersion >= 2020;
// "C" vehicles has been added into unitDefs. Recover them for ARES
// cfg_todo: should prepare basic definition for ARES, and overwrite it in CWA_CE
if (not _bUseStaticTexture) then {
	unitDefs select _jeepW set [udModel, "Jeep_xj400"];
	unitDefs select jeepaW set [udModel, "Jeep_xj400"];
	unitDefs select _jeepRadarW set [udModel, "Jeep_Radar_xj400"];
	unitDefs select _jeepMGW set [udModel, "JeepMG_xj400"];
	unitDefs select _hummerW set [udModel, "HMMWV_xj400"];
	unitDefs select _truckW set [udModel, "Truck5t_xj400"];
	unitDefs select _supportTruckW set [udModel, "Truck5tRepair_xj400"];
	unitDefs select _supportTruckW2 set [udModel, "Truck5tRepair_xj400"];
	unitDefs select _truckRefuelW set [udModel, "Truck5tRefuel_xj400"];
	unitDefs select _tankLightW01 set [udModel, "M60_xj400"];

	unitDefs select _uazE set [udModel, "UAZ_xj400"];
	unitDefs select uazaE set [udModel, "UAZ_xj400"];
	unitDefs select _uazRadarE set [udModel, "UAZ_Radar_xj400"];
	unitDefs select _brdmE set [udModel, "BRDM_xj400"];
	unitDefs select _truckE set [udModel, "Ural_xj400"];
	unitDefs select _supportTruckE set [udModel, "UralRepair_xj400"];
	unitDefs select _supportTruckE2 set [udModel, "UralRepair_xj400"];
	unitDefs select _truckRefuelE set [udModel, "UralRefuel_xj400"];
	unitDefs select _tankLightE01 set [udModel, "T55E_xj400"];
	unitDefs select _tankLightE02 set [udModel, "T72_xj400"];
	unitDefs select _tankLightE03 set [udModel, "T72_xj400"];
};

typesHeavyHowitzer = [_m109W, _plz05E];

// Modify lv4 AT weapons
{
	_scripts = unitDefs select _x select udScripts;
	_scripts set [count _scripts, "Common\Equip\AT_lv4.sqs"];
} forEach [_atW4, _atE4];

// Hide useless soldiers
// _rkgW/_rkgE are undefined. Use _soldierW4/_soldierE4 plus 1 instead
{
	unitDefs select _x set [udFactoryType, -1];
} forEach [_soldierW4 + 1, _soldierE4 + 1, _pilotW, _pilotE, _laserW, _laserE, _vestW, _vestE];
// Allow buy crew from Air Factroy
{
	unitDefs select _x set [udFactoryType, 2^stBarracks + 2^stLight + 2^stShip + 2^stHeavy + 2^stAir];
} forEach [_crewW, _crewE];
// Change all pilot to crew
{
	_entry = _x select udCrew;
	if (count _entry > 0) then {
		if (_entry select 1 == _pilotW) then {_entry set [1, _crewW]};
		if (_entry select 1 == _pilotE) then {_entry set [1, _crewE]};
	};
} forEach unitDefs;

// Hide useless vehicles
{
	unitDefs select _x set [udFactoryType, -1];
} forEach [_m109ShrapnelW, _plz05ShrapnelE];