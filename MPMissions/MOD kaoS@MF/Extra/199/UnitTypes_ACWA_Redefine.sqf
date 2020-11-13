comment "Hide custom ship.";
{ unitDefs select _x set [udFactoryType, -1] } forEach [_boatCustomW, _boatCustomE];

comment "Clumsy redefine soldiers and vehicles.";
{_str = "SoldierWAA", unitDefs select _x set [udModel, _str]} forEach [utWorkerW, _soldierAAW, _soldierAAW1];
{_str = "SoldierWB", unitDefs select _x set [udModel, _str]} forEach [_soldierW, _MortarW];
{_str = "SoldierWG", unitDefs select _x set [udModel, _str]} forEach [_soldierGLW];
{_str = "HeavyGW", unitDefs select _x set [udModel, _str]} forEach [_MM1W];
{_str = "SoldierWMG", unitDefs select _x set [udModel, _str]} forEach [_soldierMGW, _soldierMGW1];
{_str = "SoldierWSniper", unitDefs select _x set [udModel, _str]} forEach [_sniperW, _sniperW1];
{_str = "SoldierWLAW", unitDefs select _x set [udModel, _str]} forEach [_soldierLAWW, _soldierLAWW2, _soldierLAWW1];
{_str = "SoldierWAT", unitDefs select _x set [udModel, _str]} forEach [_soldierATW, _soldierATW2, _soldierATW1];
{_str = "SoldierWSaboteurDay", unitDefs select _x set [udModel, _str]} forEach [_bomberW, _customW];
{_str = "SoldierWMiner", unitDefs select _x set [udModel, _str]} forEach [_minerW];
{_str = "SoldierWMedic", unitDefs select _x set [udModel, _str]} forEach [_medicW];
{_str = "SoldierWCrew", unitDefs select _x set [udModel, _str]} forEach [_crewW];
{_str = "SoldierWPilot", unitDefs select _x set [udModel, _str]} forEach [_pilotW];

{_str = "SoldierEAA", unitDefs select _x set [udModel, _str]} forEach [utWorkerE, _soldierAAE, _soldierAAE1];
{_str = "SoldierEB", unitDefs select _x set [udModel, _str]} forEach [_soldierE, _MortarE];
{_str = "SoldierEG", unitDefs select _x set [udModel, _str]} forEach [_soldierGLE];
{_str = "HeavyGrenadier", unitDefs select _x set [udModel, _str]} forEach [_6G30E];
{_str = "SoldierEMG", unitDefs select _x set [udModel, _str]} forEach [_soldierMGE, _soldierMGE1];
{_str = "SoldierESniper", unitDefs select _x set [udModel, _str]} forEach [_sniperE, _sniperE1];
{_str = "SoldierELAW", unitDefs select _x set [udModel, _str]} forEach [_soldierLAWE, _soldierLAWE2, _soldierLAWE1];
{_str = "SoldierEAT", unitDefs select _x set [udModel, _str]} forEach [_soldierATE, _soldierATE2, _soldierATE1];
{_str = "SoldierESaboteurBizon", unitDefs select _x set [udModel, _str]} forEach [_bomberE, _customE];
{_str = "SoldierEMiner", unitDefs select _x set [udModel, _str]} forEach [_minerE];
{_str = "SoldierEMedic", unitDefs select _x set [udModel, _str]} forEach [_medicE];
{_str = "SoldierECrew", unitDefs select _x set [udModel, _str]} forEach [_crewE];
{_str = "SoldierEPilot", unitDefs select _x set [udModel, _str]} forEach [_pilotE];

{_str = "SoldierGG", unitDefs select _x set [udModel, _str]} forEach [_soldierGLG];
{_str = "SoldierGMedic", unitDefs select _x set [udModel, _str]} forEach [_medicR];
{_str = "SoldierGCrew", unitDefs select _x set [udModel, _str]} forEach [_crewR];
{_str = "SoldierGMG", unitDefs select _x set [udModel, _str]} forEach [_soldierMGR];
{_str = "SoldierGSniper", unitDefs select _x set [udModel, _str]} forEach [_sniperR];
{_str = "SoldierGLAW", unitDefs select _x set [udModel, _str]} forEach [_soldierLAWR];
{_str = "SoldierGAT", unitDefs select _x set [udModel, _str]} forEach [_soldierATR];
{_str = "SoldierGAA", unitDefs select _x set [udModel, _str]} forEach [_soldierAAR];
{_str = "OfficerG", unitDefs select _x set [udModel, _str]} forEach [_officerR];


{_str = "Jeep_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_jeepW, jeepaW];
{_str = "HMMWV_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_hummerW];
{_str = "Truck5t_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_truckW];
{_str = "Truck5tRepair_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_supportTruckW, _supportTruckW2];
{_str = "Truck5tRefuel", unitDefs select _x set [udModel, _str]} forEach [_truckRefuelW];
{_str = "M113Ambul_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_supportAPCW, _supportAPCWminer];
{_str = "M113_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_m113W];
{_str = "M2A2_AA_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_m2a2W, _m3a2W, _m2a2d, _m2a2at, _m2a2aa];
{_str = "M2A2_AA_Town_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_m2a2townat, _m2a2townaad];
{_str = "MCVW_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [utMCVW];
{_str = "MHQW_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [utMHQ0];

{_str = "UAZ_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_uazE, uazaE];
{_str = "BRDM_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_brdmE];
{_str = "Ural_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_truckE];
{_str = "UralRepair_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_supportTruckE, _supportTruckE2];
{_str = "UralRefuel", unitDefs select _x set [udModel, _str]} forEach [_truckRefuelE];
{_str = "BMPAmbul_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_supportAPCE, _supportAPCEminer];
{_str = "M113_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_bmpE];
{_str = "BMP2_AA_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_bmp2E, _bmp2_EE, _bmp2d, _bmp2at, _bmp2Cannon, _bmp2aa];
{_str = "BMP2_AA_Town_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_bmp2townat, _bmp2townaad];
{_str = "MCVE_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [utMCVE];
{_str = "MHQE_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [utMHQ1];

{_str = "A10_AAOnly_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_a10gun];
{_str = "A10_LGB_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_a10LGB4, _a10LGB8];
{_str = "A10_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_a10bombs, _a10, _a10AA];
{_str = "A10_FFAR_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_a10FFAR];
{_str = "A10_Buster_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_a10BB];
{_str = "A10_Tomahawk_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_a10Tomahawk];
{_str = "Su25_AAOnly_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_su25gun];
{_str = "Su25_LGB_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_su25LGB4, _su25LGB8];
{_str = "Su25_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_su25bombs, _su25, _su25AA];
{_str = "Su25_Rocket_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_su25Rocket];
{_str = "Su25_Buster_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_su25BB];
{_str = "Su25_Raduga_Vanilla_xj400", unitDefs select _x set [udModel, _str]} forEach [_su25Raduga];