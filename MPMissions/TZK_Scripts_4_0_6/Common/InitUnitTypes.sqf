comment { unitDefs defines all buildable units; };

comment { IMPORTANT: all vehicles must have a non empty crew array; };
comment { Must wait till stShip has been defined; };

unitDefs = []; unitTypeArray = []; unitTypeData = [];
comment { ? bool_TZK_Yugo_Mode: [] exec "Extra\199\InitUnitTypes_Yugo_Redef.sqs", exit; };
TzkUnitMarkerIdx = []; TzkUnitMarkerAzimuth = [];
TzkUnitSkillIdx = []; TzkUnitSkillVal = [];

udName = 0;
udCost = 1;
udSide = 2;
udBuildTime = 3;
udModel = 4;
udImage = 5;
udFactoryType = 6;
udCrew = 7;
udMarkerType = 8;
udScripts = 9;

comment { knowsAbout level for infantry and vehicle enemy reports; };
kaUnit = 1;

comment { VEHICLE MARKERS; };
_mBike = "Bike_Marker_xj400";
_mCar = "Car_Marker_xj400";
_mRadarCar = "RadarCar_Marker_xj400";
_mAtCar = "AtCar_Marker_xj400";
_mTruck = "Truck_Marker_xj400";
_mBoat= "Boat_Marker_xj400";
_mLst = "LST_Marker_xj400";
_mAPC = "APC_Marker_xj400";
_mTank = "Tank_Marker_xj400";
_mTd = "TD_Marker_xj400";
_mHowitzer = "Howitzer_Marker_xj400";
_mMLRS = "Rocket_Marker_xj400";
_mRocketMiner = "RocketMiner_Marker_xj400";
_mEngineerVeh = "EngineerVeh_Marker_xj400";

_mHeli = "Helicopter_Marker_xj400";
_mOrca = "Orca_Marker_xj400";
_mSmallHeli = "SmallHeli_Marker_xj400";
_mPlane = "Plane_Marker_xj400";

_mSupport = "RepairVehicle_Marker_xj400";
_mSupportPlane = "RepairStructure_Marker_xj400";
_mAmmo = "AmmoVehicle_Marker_xj400";
_mFuel = "FuelVehicle_Marker_xj400";
_mMHQ = "MedicStructure_Marker_xj400";
_mMCV = "MedicVehicle_Marker_xj400";
_mAA = "AAVehicle_Marker_xj400";
_quad ="Dot";

_mWZR = "WZR2_Marker_xj400";
_mWAP = "WAP_Marker_xj400";

_costSupportAPC = [1400, 700] select bool_TZK_MF_Mode; if bool_TZK_Yugo_Mode then {_costSupportAPC = 1000};
_costRepTruck = [1000, 500] select bool_TZK_MF_Mode;

countInfCustom = 10; costCustom = 150;

_type = 0;

comment { WEST; };
_si = si0;

comment { INFANTRY WEST; };
_st = stBarracks;

unitDefs set [_type, ["Worker", costWorker, _si, 10, "SoldierWAA_xj400", "isaa", -1, [], "", ["Server\Loop\Worker.sqs"]] ];
utWorkerW = _type;
_type = _type + 1;

unitDefs set [_type, ["Javelin", 2000, _si, 10, "DVDUS_SoldierWJAV", "isat", -1, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\AT3ai.sqs"]] ];
_javW = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier I", 50, _si, 5, "SoldierWB_I_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier II", 50, _si, 5, "SoldierWB_II_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier III", 200, _si, 15, "SoldierWB_III_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierW3 = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier IV", 250, _si, 20, "SoldierWB_IV_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierW4 = _type;
_type = _type + 1;

unitDefs set [_type, ["RKG I", 50, _si, 5, "SoldierWB_RKG_xj400", "ivojak", 2^_st, [], "", []] ];
_rkgSoldierW = _type;
_type = _type + 1;

unitDefs set [_type, ["MG I", 70, _si, 7, "SoldierWMG_I_xj400", "ismg", 2^_st, [], "", []] ];
_mgW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["MG II", 100, _si, 10, "SoldierWMG_II_xj400", "ismg", 2^_st, [], "", []] ];
_mgW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["MG III", 200, _si, 15, "SoldierWMG_III_xj400", "ismg", 2^_st, [], "", []] ];
_mgW3 = _type;
_type = _type + 1;

unitDefs set [_type, ["MG IV", 250, _si, 20, "SoldierWMG_IV_xj400", "ismg", 2^_st, [], "", []] ];
_mgW4 = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper", 100, _si, 10, "SoldierWSniper_xj400", "isniper", 2^_st, [], "", []] ];
_sniperW = _type;
_type = _type + 1;

unitDefs set [_type, ["Heavy Sniper", 200, _si, 20, "SoldierWSniperHeavy_xj400", "isniper", 2^_st, [], "", []] ];
_heavySniperW = _type;
_type = _type + 1;

unitDefs set [_type, ["LAW Soldier", 150, _si, 10, "SoldierWLAW_xj400", "islaw", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\RPG2ai.sqs"]] ];
_lawSoldierW = _type;
_type = _type + 1;

unitDefs set [_type, ["AT I", 150, _si, 8, "SoldierWAT_I_xj400", "isat", 2^_st, [], "", []] ];
_atW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT II", 180, _si, 10, "SoldierWAT_II_xj400", "isat", 2^_st, [], "", []] ];
_atW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT III", 250, _si, 15, "SoldierWAT_III_xj400", "isat", 2^_st, [], "", []] ];
_atW3 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT IV", 400, _si, 25, "SoldierWAT_IV_xj400", "isat", 2^_st, [], "", []] ];
_atW4 = _type;
_type = _type + 1;

unitDefs set [_type, ["Stinger", 250, _si, 10, "SoldierWAA_xj400", "isaa", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\AAai.sqs"]] ];
_soldierAAW = _type;
_type = _type + 1;

unitDefs set [_type, ["AA Commando", 300, _si, 20, "SoldierWAA_Commando_III_xj400", "isaa", 2^_st, [], "", []] ];
_aaCommandoW = _type;
_type = _type + 1;

unitDefs set [_type, ["Saboteur", 150, _si, 10, "SoldierWSaboteurDay_xj400", "isaboteur", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Spec.sqs"]] ];
_bomberW = _type;
_type = _type + 1;

unitDefs set [_type, ["Miner", 200, _si, 10, "SoldierWMiner_xj400", "iminer", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Miner.sqs"]] ];
_minerW = _type;
_type = _type + 1;

unitDefs set [_type, ["Crew", 50, _si, 10, "SoldierWCrew_xj400", "icrew", 2^stBarracks + 2^stLight + 2^stShip + 2^stHeavy, [], "", []] ];
_crewW = _type;
_type = _type + 1;

unitDefs set [_type, ["AA Crew", 250, _si, 10, "SoldierWCrewAA_xj400", "icrew", 2^stBarracks + 2^stLight + 2^stShip + 2^stHeavy, [], "", []] ];
_crewAAW = _type;
_type = _type + 1;

unitDefs set [_type, ["Pilot", 50, _si, 10, "SoldierWPilot_xj400", "ipilot", 2^stBarracks + 2^stAir, [], "", []] ];
_pilotW = _type;
_type = _type + 1;

unitDefs set [_type, ["Grenade Vest", 130, _si, 10, "SoldierWG_xj400", "igrenadier", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\GL.sqs"]] ];
_vestW = _type;
_type = _type + 1;

unitDefs set [_type, ["Mortar", 130, _si, 10, "SoldierWB_xj400", "igrenadier", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Mortar.sqs"]] ];
_MortarW = _type;
_type = _type + 1;

unitDefs set [_type, ["Support Carrier", 500, _si, 10, "SoldierWSupport_xj400", "imedic", 2^_st, [], "", []] ];
_supportCarrierW = _type;
_type = _type + 1;

unitDefs set [_type, ["Custom", 150, _si, 10, "SoldierWSaboteurDay_xj400", "isaboteur", -1, [], "", []] ];
_customW = _type;
_type = _type + 1;




comment { LIGHT WEST; };
_st = stLight;

unitDefs set [_type, ["QUAD", 250, _si, 20, "QUAD_xj400", "\GST_KawaP\KPpict", 2^_st, [1, _crewW], _mBike, []] ];
_quadW = _type;
_type = _type + 1;

unitDefs set [_type, ["Jeep", 400, _si, 20, "Jeep_xj400", "ijeepMUTT", 2^_st, [1, _crewW], _mCar, [localize {TZK_EQUIP_UNIT_CARGOCAR}]] ];
_jeepW = _type;
_type = _type + 1;

unitDefs set [_type, ["Jeep Ammo", 700, _si, 20, "Jeep_xj400", "ijeepMUTT", 2^_st, [1, _crewW], _mAmmo, ["\TZK_Scripts_4_0_5\Common\InitAmmojeep.sqs"]] ];
jeepaW = _type;
_type = _type + 1;

unitDefs set [_type, ["Jeep Radar", 800, _si, 20, "Jeep_Radar_xj400", "ijeepMUTT", 2^_st, [1, _crewW], _mRadarCar, []] ];
_jeepRadarW = _type;
_type = _type + 1;

unitDefs set [_type, ["M151A1C", 1200, _si, 30, "M151A1C_htr_xj400", "\tzk_texture_4_0_6\ui\iM151a1c.paa", 2^_st, [2, _crewW], _mAtCar, []] ];
_m151a1cW = _type;
_type = _type + 1;

unitDefs set [_type, ["Jeep MG", 500, _si, 30, "JeepMG_xj400", "ijeepmg", -1, [2, _crewW], _mCar, [localize {TZK_EQUIP_UNIT_CARGOCAR}]] ];
_jeepMGW = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV", 400, _si, 30, "HMMWV_xj400", "\humr\ihmmwv", 2^_st, [1, _crewW], _mCar, []] ];
_hummerW = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV M2", 500, _si, 30, "HMMWV_M2wS_xj400", "\TZK_Texture_4_0_0\icon\iHMMWV_M2wS.paa", 2^_st, [2, _crewW], _mCar, []] ];
_hummerW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV M134", 1200, _si, 30, "HMMWV_M134_xj400", "\TZK_Texture_4_0_0\icon\iHMMWV_M2wS.paa", 2^_st, [2, _crewW], _mCar, []] ];
_hummerM134W = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV M19", 1100, _si, 30, "wood_hmmwv_m19", "\TZK_Texture_4_0_0\icon\iHMMWV_M2wS.paa", -1, [2, _crewW], _mCar, ["Extra\ppl\Action EntrenchTank.sqs"]] ];
_hummerWG = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV (TOW-2A)", 800, _si, 30, "HMMMV_TOW2A_xj400", "\TZK_Texture_4_0_0\icon\iHMMWV_TOW2A.paa", 2^_st, [2, _crewW], _mCar, []] ];
_hummerW3 = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV Avenger AA", 1300, _si, 30, "wood_hmmwv_avenger", "\TZK_Texture_4_0_0\icon\iHMMWV_TOW2A.paa", -1, [2, _crewW], _mCar, ["Extra\ppl\Action EntrenchTank.sqs"]] ];
_hummerWAA = _type;
_type = _type + 1;

unitDefs set [_type, ["AMX-10RC", 1500, _si, 30, "OFrP_AMX10RC", "im60", -1, [3, _crewW], _mAPC, ["Extra\ppl\Action EntrenchTank.sqs"]] ];
_AMX10W = _type;
_type = _type + 1;

unitDefs set [_type, ["AMX-10RC", 2000, _si, 40, "AMX10RC_OFrP_xj400", "\tzk_texture_4_0_6\ui\iAmx10rc.paa", 2^stHeavy + 2^stLight, [2, _crewW], _mTd, []] ];
_amx10RcW = _type;
_type = _type + 1;

unitDefs set [_type, ["5t Truck", 500, _si, 30, "Truck5t_xj400", "itruck5t", 2^_st, [1, _crewW], _mTruck, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_truckW = _type;
_type = _type + 1;

_price = [_costRepTruck, 2*_costRepTruck] select PricingMode;
unitDefs set [_type, ["Support 5t Truck", _price, _si, 30, "Truck5tRepair_xj400", "itruck5trepair", 2^stLight + 2^stAir, [1, _crewW], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportTruckW = _type;
_type = _type + 1;

_price = [_costRepTruck, 2*_costRepTruck] select PricingMode;
unitDefs set [_type, ["Support 5t Truck - miner", _price, _si, 30, "Truck5tRepair_xj400", "itruck5trepair", 2^_st, [1, _minerW], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportTruckW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Fuel 5t Truck", 500, _si, 30, "Truck5tRefuel_xj400", "iTruck5tfuel", 2^_st, [1, _crewW], _mTruck, ["\TZK_Scripts_4_0_4\Common\InitFuelTruck.sqs"]] ];
_truckRefuelW = _type;
_type = _type + 1;

unitDefs set [_type, ["Jet Ski", 300, _si, 30, "PCSFWjetski_xj400", "\TZK_Texture_4_0_0\icon\iJetSki.paa", 2^stLight + 2^stShip, [1, _bomberW], _mBike, ["\TZK_Scripts_4_0_6\Common\Equip\jetski.sqs"]] ];
_jetskiW = _type;
_type = _type + 1;

unitDefs set [_type, ["Zodiac", 500, _si, 30, "ZodiacW_xj400", "ipbr", 2^stLight + 2^stShip, [1, _bomberW], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_zodiacW = _type;
_type = _type + 1;

unitDefs set [_type, ["Zodiac Hurricane", 1200, _si, 30, "zod", "ipbr", -1, [2, _bomberW], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK},"\TZK_Scripts_4_0_6\Common\Equip\BoatWmg.sqs"]] ];
_zodiacHW = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat Tug", 700, _si, 30, "GunBoatW_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewW], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK},"\TZK_Scripts_4_0_6\Common\Equip\BoatWmg.sqs"]] ];
_boatW = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat HE/AP gun", 1500, _si, 30, "GunBoatW_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewW], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_boatW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat 30mm gun", 1500, _si, 30, "GunBoatW_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewW], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}, "\TZK_Scripts_4_0_6\Common\Equip\BoatW.sqs"]] ];
_boatW3 = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat Sup", 1200, _si, 30, "GunBoatW_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewW], _mSupport, ["Common\InitSupportVehicle.sqs","\TZK_Scripts_4_0_6\Common\Equip\BoatWmg.sqs"]] ];
_boatsupW = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat Custom", 2000, _si, 30, "GunBoatW_Custom_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewW], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_boatCustomW = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat", 4000, _si, 30, "ADF_FCPB", "ipbr", -1, [2, _crewW], _mBoat, []] ];
_patrolboatW = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Ship", 10000, _si, 30, "FLK_Guerrico_New", "ipbr", -1, [2, _crewW], _mBoat, []] ];
_patrolshipW = _type;
_type = _type + 1;


comment { HEAVY WEST; };
_st = stHeavy;

_price = [_costSupportAPC, 2*_costSupportAPC] select PricingMode;
unitDefs set [_type, ["Support M113", _price, _si, 30, "M113Ambul_xj400", "im113_ambu", 2^stHeavy + 2^stLight, [1, _crewW], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportAPCW = _type;
_type = _type + 1;

_price = [_costSupportAPC, 2*_costSupportAPC] select PricingMode;
unitDefs set [_type, ["Support M113 + miner", _price, _si, 30, "M113Ambul_xj400", "im113_ambu", 2^stHeavy + 2^stLight, [1, _minerW], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportAPCWminer = _type;
_type = _type + 1;

unitDefs set [_type, ["M113", 500, _si, 30, "M113_xj400", "im113", 2^_st, [2, _crewW], _mAPC, []] ];
_m113W = _type;
_type = _type + 1;

unitDefs set [_type, ["Warrior MCV-80", 1800, _si, 30, "DKMM_WarriorGU", "\M2A2\im2a2", -1, [3, _crewW], _mAPC, []] ];
_warrior80W = _type;
_type = _type + 1;

unitDefs set [_type, ["M2A2 30mm/AT", 1800, _si, 30, "M2A2_AA_xj400", "\M2A2\im2a2", 2^_st, [3, _crewW], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\M2AT_standard.sqs"]] ];
_m2a2W = _type;
_type = _type + 1;

unitDefs set [_type, ["(Empty)", 1800, _si, 30, "M2A2_AA_xj400", "\M2A2\im2a2", -1, [3, _crewW], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\M2AT_standard.sqs"]] ];
_m3a2W = _type;
_type = _type + 1;

unitDefs set [_type, ["M2A2 FFAR", 3500, _si, 30, "M2A2_AA_xj400", "\M2A2\im2a2", 2^_st, [3, _crewW], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\M2A2farr.sqs"]] ];
_m2a2d = _type;
_type = _type + 1;

unitDefs set [_type, ["M2A2 AT", 7500, _si, 30, "M2A2_AA_xj400", "\M2A2\im2a2", 2^_st, [3, _crewW], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\M2AT.sqs"]] ];
_m2a2at = _type;
_type = _type + 1;

unitDefs set [_type, ["Vulcan", 1500, _si, 30, "Vulcan_Auto_xj406", "\VULCAN\ivulcan", 2^_st, [1, _crewW], _mAA, []] ];
_vulcanW = _type;
_type = _type + 1;

unitDefs set [_type, ["M113 Cannon", 2000, _si, 30, "Vulcan_TZK_xj400", "\VULCAN\ivulcan", 2^_st, [2, _crewW], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\M2A2_AA2.sqs"]] ];
_vulcanTransp = _type; _m113Cannon = _vulcanTransp;
_type = _type + 1;

unitDefs set [_type, ["M2A2 AA", 3500, _si, 30, "M2A2_AA_xj400", "\VULCAN\ivulcan", 2^_st, [3, _crewW], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\M2A2_AA1.sqs"]] ];
_m2a2aa = _type;
_type = _type + 1;

unitDefs set [_type, ["4xAA", 8000, _si, 30, "Vulcan_TZK_xj400", "\VULCAN\ivulcan", -1, [2, _crewW], _mAA, ["\TZK_Scripts_4_0_5\Common\Equip\DefAA.sqs"]] ];
_vulcanW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["M88 (ARV)", _costSupportAPC, _si, 30, "M88arv_mfm_xj400", "\tzk_texture_4_0_6\m88\m88pic.paa", 2^_st, [1, _crewW], _mEngineerVeh, []] ];
_m88W = _type;
_type = _type + 1;

unitDefs set [_type, ["M60", 1000, _si, 30, "M60_xj400", "im60", 2^_st, [3, _crewW], _mTank, []] ];
_tankLightW01 = _type;
_type = _type + 1;

unitDefs set [_type, ["M60-120S", 2000, _si, 30, "M60_120S_xj400", "im60", 2^_st, [3, _crewW], _mTank, []] ];
_tankLightW02 = _type;
_type = _type + 1;

unitDefs set [_type, ["M1A1", 5000, _si, 60, "M1A1_Info_xj400", "iabrams", 2^_st, [3, _crewW], _mTank, []] ];
_tankHeavyW01 = _type;
_type = _type + 1;

unitDefs set [_type, ["M1A2 SEP", 5000, _si, 60, "M1A2_Info_xj400", "\TZK_Texture_4_0_0\icon\iM1A2.paa", -1, [3, _crewW], _mTank, []] ];
_tankHeavyW02 = _type;
_type = _type + 1;

unitDefs set [_type, ["Leopard 2A6", 5000, _si, 60, "Leo2A6_Info_xj400", "\TZK_Texture_4_0_0\icon\iLeo2A6.paa", 2^_st, [3, _crewW], _mTank, []] ];
_tankHeavyW03 = _type;
_type = _type + 1;

unitDefs set [_type, ["Challenger 2", 7000, _si, 60, "DKMM_CR2GU", "iabrams", -1, [3, _crewW], _mTank, []] ];
_tankHyperW01 = _type;
_type = _type + 1;

unitDefs set [_type, ["XM1082 WAP", 10000, _si, 60, "WAP2A_BOH_xj400", "\BOHJSDF5\wzr2\pic.paa", -1, [1, _crewW], _mWZR, []] ];
if (bool_TZK_BOH_WAP) then {unitDefs select _type set [udFactoryType, 2^_st]};
wapW01 = _type;
_type = _type + 1;

unitDefs set [_type, ["GrkPbv 120", 3750, _si, 40, "Grkpbv_Coc_xj400", "\tzk_texture_4_0_6\ui\iGrkpbv.paa", 2^stHeavy + 2^stLight, [2, _crewW], _mHowitzer, []] ];
_grkpbvE = _type;
_type = _type + 1;

unitDefs set [_type, ["M109A6-G", 7500, _si, 60, "M109A6G_xj400", "\TZK_Texture_4_0_0\icon\iM109A6G.paa", 2^_st, [2, _crewW], _mHowitzer, []] ];
_m109W = _type;
_type = _type + 1;

unitDefs set [_type, ["M109 Paladin", 4000, _si, 60, "M109_CoC_paladin_xj400", "\TZK_Objects\Texture\Paladin.paa", -1, [2, _crewW], _mHowitzer, []] ];
_tdW = _type;
_type = _type + 1;

unitDefs set [_type, ["MIM-72A", 2500, _si, 40, "MIM72_scf_xj400", "\tzk_texture_4_0_6\ui\iMim72.paa", 2^stHeavy + 2^stLight, [2, _crewW], _mRocketMiner, []] ];
_mim72aW = _type;
_type = _type + 1;

unitDefs set [_type, ["M270 MLRS", 25000, _si, 60, "M270_M29064_xj400", "\TZK_Texture_4_0_0\icon\iM270.paa", 2^_st, [3, _crewW], _mMLRS, []] ];
_m270W = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 0, _si, 90, "M1Abrams", "", -1, [3, _crewW], _mTank,  []] ];
_type = _type + 1;

unitDefs set [_type, ["(empty)", 0, _si, 90, "m1abrams", "", -1, [3, _crewW], _mHowitzer,  []] ];
_type = _type + 1;

_price = [1.5*costRepairMHQ, 3.0*costRepairMHQ] select PricingMode;
unitDefs set [_type, ["MCV West", _price, _si, 120, "MCVW_xj400", "im113_ambu", -1, [1, _crewW], _mMCV,  ["Common\InitMCV.sqs"]] ];
utMCVW = _type;
_type = _type + 1;

_price = [_costSupportAPC, 2*_costSupportAPC] select PricingMode;
unitDefs set [_type, ["MHQ West", 1500, _si, 10, "MHQW_xj400", "im113_ambu", -1, [1, _crewW], _mMHQ, ["Common\InitMHQ.sqs"]] ];
utMHQ0 = _type;
_type = _type + 1;



comment { AIR WEST; };
_st = stAir;

unitDefs set [_type, ["Orca95", 2000, _si, 20, "Orca95_W_xj400", "\tzk_texture_4_0_6\ui\iOrca95.paa", 2^_st, [1, _pilotW], _mOrca, []] ];
_orcaW = _type;
_type = _type + 1;

unitDefs set [_type, ["MH-6", 2000, _si, 20, "MH6_irNo_TZK_xj400", "\TZK_Texture_4_0_0\icon\imh6.paa", 2^_st, [1, _pilotW], _mSmallHeli, []] ];
_mh6W = _type;
_type = _type + 1;

unitDefs set [_type, ["MH-6 M60", 3000, _si, 30, "MH6_irNo_M60_xj400", "\TZK_Texture_4_0_0\icon\imh6.paa", 2^_st, [2, _pilotW], _mSmallHeli, []] ];
_mh6M60W = _type;
_type = _type + 1;

unitDefs set [_type, ["MH-6 M134", 5000, _si, 40, "MH6_irNo_M134_xj400", "\TZK_Texture_4_0_0\icon\imh6.paa", 2^_st, [2, _pilotW], _mSmallHeli, []] ];
_mh6M134W = _type;
_type = _type + 1;

unitDefs set [_type, ["UH60 (transp)", 4000, _si, 60, "UH60_irNo_TZK_xj400", "iuh60", 2^_st, [1, _pilotW], _mHeli, []] ];
_irNO_uh60 = _type;
_type = _type + 1;

unitDefs set [_type, ["UH60 (Tug)", 4000, _si, 60, "UH60_CSLA_xj400", "iuh60", 2^_st, [1, _pilotW], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\UH60.sqs", "Common\InitHelicopter.sqs", "Common\Equip\UH60.sqs"]] ];
_uh60W = _type;
_type = _type + 1;

unitDefs set [_type, ["Support UH60", 5000, _si, 60, "UH60_CSLA_xj400", "iuh60", 2^_st, [1, _pilotW], _mSupport, ["Common\InitSupportVehicle.sqs", "\TZK_Scripts_4_0_6\Common\Equip\UH60.sqs", "Common\InitHelicopter.sqs", "Common\Equip\UH60.sqs", "\TZK_Scripts_4_0_4\Common\InitAmmoDrop.sqs"]] ];
_uh60supW = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 7000, _si, 60, "UH60_CSLA_MG_xj400", "iuh60", -1, [2, _pilotW], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\UH60.sqs", "Common\InitHelicopter.sqs"]] ];
_uh60W30 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 7000, _si, 60, "UH60_CSLA_LGB_xj400", "iuh60", -1, [1, _pilotW], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\UH60.sqs", "Common\InitHelicopter.sqs"]] ];
_uh60WL = _type;
_type = _type + 1;

unitDefs set [_type, ["UH60 30mm MG", 10000, _si, 60, "UH60MG_CSLA_xj400", "iuh60", 2^_st, [2, _pilotW], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\UH60.sqs", "Common\InitHelicopter.sqs", "Common\Equip\UH60.sqs"]] ];
_uh60WMG2 = _type;
_type = _type + 1;

unitDefs set [_type, ["CH47 (Tug)", 4000, _si, 60, "BAS_MH47E", "\ch47\ich47.paa", -1, [1, _pilotW], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\UH60.sqs", "Common\InitHelicopter.sqs", "Common\Equip\UH60.sqs"]] ];
_ch47W = _type;
_type = _type + 1;

unitDefs set [_type, ["C-130 Hercules", 5000, _si, 60, "C130_xj400", "\TZK_Texture_4_0_0\icon\iC130.paa", 2^_st, [2, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_c130W = _type;
_type = _type + 1;

unitDefs set [_type, ["AH1W", 15000, _si, 90, "AH1W_Vit_xj400", "\TZK_Texture_4_0_0\icon\iAH1W_vit.paa", 2^_st, [2, _pilotW], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_ah1W = _type;
_type = _type + 1;

unitDefs set [_type, ["AH64", 17000, _si, 90, "AH64_MPIV_xj400", "\APAC\iah64", 2^_st, [2, _pilotW], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_ah64W = _type;
_type = _type + 1;

unitDefs set [_type, ["Tiger HOT", 20000, _si, 90, "Tiger_HOT3_xj400", "\TZK_Texture_4_0_0\icon\iTigerRMK.paa", 2^_st, [2, _pilotW], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_tigerW = _type;
_type = _type + 1;

unitDefs set [_type, ["AH1W AT", 20000, _si, 90, "AH1W_Vit_AT_xj400", "\TZK_Texture_4_0_0\icon\iAH1W_vit.paa", 2^_st, [2, _pilotW], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_ah1W2 = _type;
_type = _type + 1;

unitDefs set [_type, ["AH64 AT", 20000, _si, 90, "AH64_MPIV_AT_xj400", "\APAC\iah64", 2^_st, [2, _pilotW], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_ah64W2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Tiger PARS3", 23000, _si, 90, "Tiger_PARS3_xj400", "\TZK_Texture_4_0_0\icon\iTigerRMK.paa", 2^_st, [2, _pilotW], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_tigerW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["C130 Support", 5000, _si, 60, "C130_Support_xj400", "\TZK_Texture_4_0_0\icon\iC130.paa", 2^_st, [1, _pilotW], _mSupport, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs", "Common\InitSupportVehicle.sqs"]] ];
_c130supportW = _type;
_type = _type + 1;

unitDefs set [_type, ["A10 (AA Only)", 5000, _si, 90, "A10_AAOnly_xj406", "ia10", 2^_st, [1, _pilotW], _mPlane, ["Common\Equip\PlaneGun.sqs", "\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_a10gun = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 12000, _si, 90, "A10_LGB_xj400", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10LGB4 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 14000, _si, 90, "A10_xj406", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10bombs = _type;
_type = _type + 1;

unitDefs set [_type, ["A10", 20000, _si, 90, "A10_xj406", "ia10", 2^_st, [1, _pilotW], _mPlane, ["Common\Equip\PlaneCustom.sqs", "Common\InitSpawnPlane.sqs"]] ];
_a10 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 20000, _si, 90, "A10_LGB_xj400", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10LGB8 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 25000, _si, 90, "A10_xj406", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10AA = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 30000, _si, 90, "A10_FFAR_xj400", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10FFAR = _type;
_type = _type + 1;

unitDefs set [_type, ["B2 Bomber", 30000, _si, 90, "B2", "\rktf15c\modpic.paa", -1, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_B2 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 45000, _si, 90, "A10_Buster_xj400", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10BB = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 90000, _si, 90, "A10_Tomahawk_xj400", "ia10", -1, [1, _pilotW], _mPlane, []] ];
_a10Tomahawk = _type;
_type = _type + 1;



comment { EAST; };
_si = si1;

comment { INFANTRY EAST; };
_st = stBarracks;


unitDefs set [_type, ["Worker", costWorker, _si, 10, "SoldierEAA_xj400", "isaa", -1, [], "", ["Server\Loop\Worker.sqs"]] ];
utWorkerE = _type;
_type = _type + 1;

unitDefs set [_type, ["RPG29 Soldier", 2000, _si, 10, "icp_infRPG", "isat", -1, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\AT3ai.sqs"]] ];
_javE = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier I", 50, _si, 5, "SoldierEB_I_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier II", 50, _si, 5, "SoldierEB_II_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier III", 200, _si, 15, "SoldierEB_III_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierE3 = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier IV", 250, _si, 20, "SoldierEB_IV_xj400", "ivojak", 2^_st, [], "", []] ];
_soldierE4 = _type;
_type = _type + 1;

unitDefs set [_type, ["RKG I", 50, _si, 5, "SoldierEB_RKG_xj400", "ivojak", 2^_st, [], "", []] ];
_rkgSoldierE = _type;
_type = _type + 1;

unitDefs set [_type, ["MG I", 70, _si, 7, "SoldierEMG_I_xj400", "ismg", 2^_st, [], "", []] ];
_mgE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["MG II", 100, _si, 10, "SoldierEMG_II_xj400", "ismg", 2^_st, [], "", []] ];
_mgE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["MG III", 200, _si, 15, "SoldierEMG_III_xj400", "ismg", 2^_st, [], "", []] ];
_mgE3 = _type;
_type = _type + 1;

unitDefs set [_type, ["MG IV", 250, _si, 20, "SoldierEMG_IV_xj400", "ismg", 2^_st, [], "", []] ];
_mgE4 = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper", 100, _si, 10, "SoldierESniper_xj400", "isniper", 2^_st, [], "", []] ];
_sniperE = _type;
_type = _type + 1;

unitDefs set [_type, ["Heavy Sniper", 200, _si, 20, "SoldierESniperHeavy_xj400", "isniper", 2^_st, [], "", []] ];
_heavySniperE = _type;
_type = _type + 1;

unitDefs set [_type, ["RPG Soldier", 150, _si, 10, "SoldierELAW_xj400", "islaw", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\RPG2ai.sqs"]] ];
_rpgSoldierE = _type;
_type = _type + 1;

unitDefs set [_type, ["AT I", 150, _si, 8, "SoldierEAT_I_xj400", "isat", 2^_st, [], "", []] ];
_atE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT II", 180, _si, 10, "SoldierEAT_II_xj400", "isat", 2^_st, [], "", []] ];
_atE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT III", 250, _si, 15, "SoldierEAT_III_xj400", "isat", 2^_st, [], "", []] ];
_atE3 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT IV", 400, _si, 25, "SoldierEAT_IV_xj400", "isat", 2^_st, [], "", []] ];
_atE4 = _type;
_type = _type + 1;

unitDefs set [_type, ["Strela", 250, _si, 10, "SoldierEAA_xj400", "isaa", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\AAai.sqs"]] ];
_soldierAAE = _type;
_type = _type + 1;

unitDefs set [_type, ["AA Commando", 300, _si, 20, "SoldierEAA_Commando_III_xj400", "isaa", 2^_st, [], "", []] ];
_aaCommandoE = _type;
_type = _type + 1;

unitDefs set [_type, ["Saboteur", 150, _si, 10, "SoldierESaboteurBizon_xj400", "isaboteur", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Spec.sqs"]] ];
_bomberE = _type;
_type = _type + 1;

unitDefs set [_type, ["Miner", 200, _si, 10, "SoldierEMiner_xj400", "iminer", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Miner.sqs"]] ];
_minerE = _type;
_type = _type + 1;

unitDefs set [_type, ["Crew", 50, _si, 10, "SoldierECrew_xj400", "icrew", 2^stBarracks + 2^stLight + 2^stShip + 2^stHeavy, [], "", []] ];
_crewE = _type;
_type = _type + 1;

unitDefs set [_type, ["AA Crew", 250, _si, 10, "SoldierECrewAA_xj400", "icrew", 2^stBarracks + 2^stLight + 2^stShip + 2^stHeavy, [], "", []] ];
_crewAAE = _type;
_type = _type + 1;

unitDefs set [_type, ["Pilot", 50, _si, 10, "SoldierEPilot_xj400", "ipilot", 2^stBarracks + 2^stAir, [], "", []] ];
_pilotE = _type;
_type = _type + 1;

unitDefs set [_type, ["Grenade Vest", 130, _si, 10, "SoldierEG_xj400", "igrenadier", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\GL.sqs"]] ];
_vestE = _type;
_type = _type + 1;

unitDefs set [_type, ["Mortar", 130, _si, 10, "SoldierEB_xj400", "igrenadier", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Mortar.sqs"]] ];
_MortarE = _type;
_type = _type + 1;

unitDefs set [_type, ["Support Carrier", 500, _si, 10, "SoldierESupport_xj400", "imedic", 2^_st, [], "", []] ];
_supportCarrierE = _type;
_type = _type + 1;

unitDefs set [_type, ["Custom", 150, _si, 10, "SoldierESaboteurBizon_xj400", "isaboteur", -1, [], "", []] ];
_customE = _type;
_type = _type + 1;



comment { LIGHT EAST; };
_st = stLight;

unitDefs set [_type, ["QUAD", 250, _si, 20, "QUAD_xj400", "\GST_KawaP\KPpict", 2^_st, [1, _crewE], _mBike, []] ];
_quadE = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ", 400, _si, 20, "UAZ_xj400", "iuaz", 2^_st, [1, _crewE], _mCar, [localize {TZK_EQUIP_UNIT_CARGOCAR}]] ];
_uazE = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ Ammo", 700, _si, 20, "UAZ_xj400", "iuaz", 2^_st, [1, _crewE], _mAmmo, ["\TZK_Scripts_4_0_5\Common\InitAmmojeep.sqs"]] ];
uazaE = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ Radar", 800, _si, 20, "UAZ_Radar_xj400", "iuaz", 2^_st, [1, _crewE], _mRadarCar, []] ];
_uazRadarE = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ SPG9", 1200, _si, 30, "UAZ_SPG_FDF_xj400", "\tzk_texture_4_0_6\ui\iUazSpg.paa", 2^_st, [2, _crewE], _mAtCar, []] ];
_uazSpg9E = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ DShK", 650, _si, 20, "BAS_RUSUAZ_DShK", "iuaz", -1, [2, _crewE], _mCar, [localize {TZK_EQUIP_UNIT_CARGOCAR}]] ];
_uazMGE = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM", 400, _si, 30, "BRDM_xj400", "\BRMD\ibrmd", 2^_st, [1, _crewE], _mCar, []] ];
_brdmE = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM PK", 500, _si, 30, "BRDM_PK_xj400", "\TZK_Texture_4_0_0\icon\iBRDMPK.paa", 2^_st, [2, _crewE], _mCar, []] ];
_brdmE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM GShG", 1200, _si, 30, "BRDM_GShG_xj400", "\TZK_Texture_4_0_0\icon\iBRDMPK.paa", 2^_st, [2, _crewE], _mCar, []] ];
_brdmGsghE = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM Gaskin", 800, _si, 30, "BRDM2_MNF_xj400", "\TZK_Texture_4_0_0\icon\ibrdm2.paa", 2^_st, [2, _crewE], _mCar, []] ];
_brdmE3 = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM2 AT", 1300, _si, 30, "MNF_BRDM2_AT4", "\BRMD\ibrmd", -1, [2, _crewE], _mCar, ["Extra\ppl\Action EntrenchTank.sqs"]] ];
_brdmEAT = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM2 AA", 1300, _si, 30, "MNF_SA9", "\BRMD\ibrmd", -1, [2, _crewE], _mCar, ["Extra\ppl\Action EntrenchTank.sqs"]] ];
_brdmEAA = _type;
_type = _type + 1;

unitDefs set [_type, ["2S25 Sprut-SD", 3500, _si, 40, "2S25_mfm_xj400", "\tzk_texture_4_0_6\ui\i2s25.paa", 2^stHeavy + 2^stLight, [2, _crewE], _mTd, []] ];
_2s25E = _type;
_type = _type + 1;


unitDefs set [_type, ["Ural", 500, _si, 30, "Ural_xj400", "iural", 2^_st, [1, _crewE], _mTruck, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_truckE = _type;
_type = _type + 1;

_price = [_costRepTruck, 2*_costRepTruck] select PricingMode;
unitDefs set [_type, ["Support Ural", _price, _si, 30, "UralRepair_xj400", "iuralrepair", 2^stLight + 2^stAir, [1, _crewE], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportTruckE = _type;
_type = _type + 1;

_price = [_costRepTruck, 2*_costRepTruck] select PricingMode;
unitDefs set [_type, ["Support Ural-miner", _price, _si, 30, "UralRepair_xj400", "iuralrepair", 2^_st, [1, _minerE], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportTruckE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Fuel Ural", 500, _si, 30, "UralRefuel_xj400", "iuralfuel", 2^_st, [1, _crewE], _mTruck, ["\TZK_Scripts_4_0_4\Common\InitFuelTruck.sqs"]] ];
_truckRefuelE = _type;
_type = _type + 1;

unitDefs set [_type, ["Jet Ski", 300, _si, 30, "PCSFEjetski_xj400", "\TZK_Texture_4_0_0\icon\iJetSki.paa", 2^stLight + 2^stShip, [1, _bomberE], _mBike, ["\TZK_Scripts_4_0_6\Common\Equip\jetski.sqs"]] ];
_jetskiE = _type;
_type = _type + 1;

unitDefs set [_type, ["Zodiac", 500, _si, 30, "ZodiacE_xj400", "ipbr", 2^stLight + 2^stShip, [1, _bomberE], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_zodiacE = _type;
_type = _type + 1;

unitDefs set [_type, ["Zodiac Hurricane", 1200, _si, 30, "zode", "ipbr", -1, [2, _bomberE], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK},"\TZK_Scripts_4_0_6\Common\Equip\BoatEmg.sqs"]] ];
_zodiacHE = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat Tug", 700, _si, 30, "GunBoatE_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewE], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK},"\TZK_Scripts_4_0_6\Common\Equip\BoatEmg.sqs"]] ];
_boatE = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat HE/AP gun", 1500, _si, 30, "GunBoatE_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewE], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_boatE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat 30mm gun", 1500, _si, 30, "GunBoatE_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewE], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}, "\TZK_Scripts_4_0_6\Common\Equip\BoatE.sqs"]] ];
_boatE3 = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat Sup", 1200, _si, 30, "GunBoatE_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewE], _mSupport, ["Common\InitSupportVehicle.sqs","\TZK_Scripts_4_0_6\Common\Equip\BoatEmg.sqs"]] ];
_boatsupE = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat Custom", 2000, _si, 30, "GunBoatE_Custom_xj400", "ipbr", 2^stLight + 2^stShip, [2, _crewE], _mBoat, [localize {TZK_EQUIP_UNIT_TRUCK}]] ];
_boatCustomE = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat", 4000, _si, 30, "MX_Mirage", "ipbr", -1, [2, _crewE], _mBoat, []] ];
_patrolboatE = _type;
_type = _type + 1;

unitDefs set [_type, ["Patrol Ship", 10000, _si, 30, "FABoat", "ipbr", -1, [2, _crewE], _mBoat, []] ];
_patrolshipE = _type;
_type = _type + 1;


comment { HEAVY EAST; };
_st = stHeavy;

_price = [_costSupportAPC, 2*_costSupportAPC] select PricingMode;
unitDefs set [_type, ["Support BMP", _price, _si, 30, "BMPAmbul_xj400", "ibmp_abu", 2^stHeavy + 2^stLight, [1, _crewE], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportAPCE = _type;
_type = _type + 1;

_price = [_costSupportAPC, 2*_costSupportAPC] select PricingMode;
unitDefs set [_type, ["Support BMP + miner", _price, _si, 30, "BMPAmbul_xj400", "ibmp_abu", 2^stHeavy + 2^stLight, [1, _minerE], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportAPCEminer = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP", 800, _si, 30, "BMP_xj400", "ibmp", 2^_st, [3, _crewE], _mAPC, []] ];
_bmpE = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 30mm/AT", 1800, _si, 30, "BMP2_AA_xj400", "ibmp", 2^_st, [3, _crewE], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\BMP_standard.sqs"]] ];
_bmp2E = _type;
_type = _type + 1;

unitDefs set [_type, ["(Empty)", 1800, _si, 30, "BMP2_AA_xj400", "ibmp", -1, [3, _crewE], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\BMP_standard.sqs"]] ];
_bmp2_EE = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 Rocket", 3500, _si, 30, "BMP2_AA_xj400", "ibmp", 2^_st, [3, _crewE], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\BMP2farr.sqs"]] ];
_bmp2d = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 AT", 7500, _si, 30, "BMP2_AA_xj400", "ibmp", 2^_st, [3, _crewE], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\BMPAT.sqs"]] ];
_bmp2at = _type;
_type = _type + 1;

unitDefs set [_type, ["Shilka", 1500, _si, 30, "ZSU_Auto_xj400", "izsu", 2^_st, [1, _crewE], _mAA, []] ];
_shilkaE = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP3", 2000, _si, 30, "DVD_BMP3", "ibmp", -1, [3, _crewE], _mAPC, ["Extra\ppl\Action EntrenchTank.sqs"]] ];
_bmp3 = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 Cannon", 2000, _si, 30, "BMP2_AA_xj400", "izsu", 2^_st, [2, _crewE], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\BMP_AA2.sqs"]] ];
_bmp2Cannon = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 AA", 3500, _si, 30, "BMP2_AA_xj400", "izsu", 2^_st, [2, _crewE], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\BMP_AA1.sqs"]] ];
_bmp2aa = _type;
_type = _type + 1;

unitDefs set [_type, ["Tunguska", 8000, _si, 30, "2S6_DKM_xj400", "\TZK_Texture_4_0_0\icon\i2s6.paa", -1, [3, _crewE], _mAA, ["\TZK_Scripts_4_0_5\Common\Equip\Tunguska.sqs"]] ];
_tunguskaE = _type; _shilkaE2 = _tunguskaE;
_type = _type + 1;

unitDefs set [_type, ["BREM-1", _costSupportAPC, _si, 30, "BREM_mfm_xj400", "\tzk_texture_4_0_6\brem1\ic_brem1.paa", 2^_st, [1, _crewE], _mEngineerVeh, []] ];
_bremE = _type;
_type = _type + 1;

unitDefs set [_type, ["T55", 1000, _si, 30, "T55E_xj400", "it55", 2^_st, [3, _crewE], _mTank, []] ];
_tankLightE01 = _type;
_type = _type + 1;

unitDefs set [_type, ["T72", 2000, _si, 30, "T72_xj400", "it72", 2^_st, [3, _crewE], _mTank, []] ];
_tankLightE02 = _type;
_type = _type + 1;

unitDefs set [_type, ["(Empty)", 2000, _si, 30, "T72_xj400", "it72", -1, [3, _crewE], _mTank, []] ];
_tankLightE03 = _type;
_type = _type + 1;

unitDefs set [_type, ["T80", 5000, _si, 60, "T80_Info_xj400", "it80", 2^_st, [3, _crewE], _mTank, []] ];
_tankHeavyE01 = _type;
_type = _type + 1;

unitDefs set [_type, ["T90", 5000, _si, 60, "T90_Info_xj400", "\TZK_Texture_4_0_0\icon\iT90.paa", -1, [3, _crewE], _mTank, []] ];
_tankHeavyE02 = _type;
_type = _type + 1;

unitDefs set [_type, ["ZTZ-99G", 5000, _si, 60, "ZTZ99_Info_xj400", "\TZK_Texture_4_0_0\icon\iZTZ99.paa", 2^_st, [3, _crewE], _mTank, []] ];
_tankHeavyE03 = _type;
_type = _type + 1;

unitDefs set [_type, ["T90MS", 7000, _si, 60, "mfm_cfg_t90ms_gca", "\TZK_Texture_4_0_0\icon\iT90ms.paa", -1, [3, _crewE], _mTank, []] ];
_tankHyperE01 = _type;
_type = _type + 1;

unitDefs set [_type, ["TypeXX WAP", 10000, _si, 60, "WAPE_BOH_xj400", "\BOHJSDF5\wap\pic.paa", -1, [1, _crewE], _mWAP, []] ];
if (bool_TZK_BOH_WAP) then {unitDefs select _type set [udFactoryType, 2^_st]};
wapE01 = _type;
_type = _type + 1;

unitDefs set [_type, ["PLZ-89", 3750, _si, 40, "PLZ89_TZK_xj400", "\tzk_texture_4_0_6\ui\iPlz89.paa", 2^stHeavy + 2^stLight, [3, _crewE], _mHowitzer, []] ];
_plz89E = _type;
_type = _type + 1;

unitDefs set [_type, ["PLZ-05", 7500, _si, 60, "PLZ05_TZK_xj400", "\TZK_Texture_4_0_0\icon\iPLZ05.paa", 2^_st, [3, _crewE], _mHowitzer, []] ];
_plz05E = _type;
_type = _type + 1;

unitDefs set [_type, ["2S19 Msta-S", 4000, _si, 60, "2S19M1_CoC_xj400", "\TZK_Texture_4_0_0\icon\iPLZ05.paa", -1, [3, _crewE], _mHowitzer, []] ];
_tdE = _type;
_type = _type + 1;

unitDefs set [_type, ["SA-13", 2500, _si, 40, "SA13_MAF_xj400", "\tzk_texture_4_0_6\ui\iSa13.paa", 2^stLight + 2^stHeavy, [2, _crewE], _mRocketMiner, []] ];
_sa13E = _type;
_type = _type + 1;

unitDefs set [_type, ["TOS-1 Buratino", 25000, _si, 60, "TOS1_TZK_xj400", "\TZK_Texture_4_0_0\icon\iTOS_1.paa", 2^_st, [3, _crewE], _mMLRS, []] ];
_tos1E = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 0, _si, 90, "t80", "", -1, [3, _crewE], _mTank, []] ];
_type = _type + 1;

unitDefs set [_type, ["(empty)", 0, _si, 90, "t80", "", -1, [3, _crewE], _mHowitzer, []] ];
_type = _type + 1;

_price = [1.5*costRepairMHQ, 3.0*costRepairMHQ] select PricingMode;
unitDefs set [_type, ["MCV East", _price, _si, 120, "MCVE_xj400", "ibmp_abu", -1, [1, _crewE], _mMCV,  ["Common\InitMCV.sqs"]] ];
utMCVE = _type;
_type = _type + 1;

_price = [_costSupportAPC, 2*_costSupportAPC] select PricingMode;
unitDefs set [_type, ["MHQ East", 1500, _si, 10, "MHQE_xj400", "ibmp_abu", -1, [1, _crewE], _mMHQ, ["Common\InitMHQ.sqs"]] ];
utMHQ1 = _type;
_type = _type + 1;



comment { AIR EAST; };
_st = stAir;

unitDefs set [_type, ["Orca95", 2000, _si, 20, "Orca95_E_xj400", "\tzk_texture_4_0_6\ui\iOrca95.paa", 2^_st, [1, _pilotE], _mOrca, []] ];
_orcaE = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi-2", 2000, _si, 20, "Mi2NOE_irNo_TZK_xj400", "\TZK_Texture_4_0_0\icon\iMi2.paa", 2^_st, [1, _pilotE], _mSmallHeli, []] ];
_mi2E = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi-2 PKT", 3000, _si, 30, "Mi2NOE_irNo_PKT_xj400", "\TZK_Texture_4_0_0\icon\iMi2.paa", 2^_st, [2, _pilotE], _mSmallHeli, []] ];
_mi2M60E = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi-2 GShG", 5000, _si, 40, "Mi2NOE_irNo_GShG_xj400", "\TZK_Texture_4_0_0\icon\iMi2.paa", 2^_st, [2, _pilotE], _mSmallHeli, []] ];
_mi2GshgE = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 (transp)", 4000, _si, 60, "Mi17_irNo_TZK_xj400", "imi17", 2^_st, [1, _pilotE], _mHeli, []] ];
_irNO_mi17 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 (tug)", 4000, _si, 60, "Mi17_owp_xj400", "imi17", 2^_st, [1, _pilotE], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\Mi17.sqs", "Common\InitHelicopter.sqs", "Common\Equip\Mi17.sqs"]] ];
_mi17E = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 support", 5000, _si, 60, "Mi17_owp_xj400", "imi17", 2^_st, [1, _pilotE], _mSupport, ["Common\InitSupportVehicle.sqs", "\TZK_Scripts_4_0_6\Common\Equip\Mi17.sqs", "Common\InitHelicopter.sqs", "Common\Equip\Mi17.sqs", "\TZK_Scripts_4_0_4\Common\InitAmmoDrop.sqs"]] ];
_mi17supE = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 7000, _si, 60, "Mi17_owp_MG_xj400", "imi17",-1, [1, _pilotE], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\Mi17.sqs", "Common\InitHelicopter.sqs", "Common\Equip\Mi17.sqs"]] ];
_mi17E30 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 7000, _si, 60, "Mi17_owp_LGB_xj400", "imi17",-1, [1, _pilotE], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\Mi17.sqs", "Common\InitHelicopter.sqs", "Common\Equip\Mi17.sqs"]] ];
_mi17EL = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 30mm MG", 10000, _si, 60, "Mi17_owp_PKT_xj400", "imi17", 2^_st, [2, _pilotW], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\Mi17.sqs", "Common\InitHelicopter.sqs", "Common\Equip\Mi17.sqs"]] ];
_mi17EMG2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi26 (tug)", 4000, _si, 60, "OWP_MI26ps", "\OWP_Mi26\pics\OWP_Mi26.paa", -1, [1, _pilotE], _mHeli, ["\TZK_Scripts_4_0_6\Common\Equip\Mi17.sqs", "Common\InitHelicopter.sqs", "Common\Equip\Mi17.sqs"]] ];
_mi26E = _type;
_type = _type + 1;

unitDefs set [_type, ["An-72 Coaler", 5000, _si, 60, "AN72_xj400", "\TZK_Texture_4_0_0\icon\iAN72.paa", 2^_st, [2, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_an72E = _type;
_type = _type + 1;

unitDefs set [_type, ["V80", 20000, _si, 90, "Ka50_xj400", "\TZK_Objects\Texture\icon\iKa50.paa", 2^_st, [1, _pilotE], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs", "\TZK_Scripts_4_0_4\Common\Init\V80.sqs"]] ];
_v80E = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi24", 23000, _si, 90, "Mi24_RHS_xj400", "\TZK_Texture_4_0_0\icon\iMi24_RHS", 2^_st, [2, _pilotE], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_mi24E = _type;
_type = _type + 1;

unitDefs set [_type, ["V80 AT", 23000, _si, 90, "Ka50_AT_xj400", "\TZK_Objects\Texture\icon\iKa50.paa", 2^_st, [1, _pilotE], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs", "\TZK_Scripts_4_0_4\Common\Init\V80.sqs"]] ];
_v80E2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi24 AT", 25000, _si, 90, "Mi24_RHS_AT_xj400", "\TZK_Texture_4_0_0\icon\iMi24_RHS", -1, [2, _pilotE], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_mi24E3 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi24 AT", 25000, _si, 90, "Mi24_RHS_AT_xj400", "\TZK_Texture_4_0_0\icon\iMi24_RHS", 2^_st, [2, _pilotE], _mHeli, ["Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"]] ];
_mi24E2 = _type;
_type = _type + 1;

unitDefs set [_type, ["An-72 Support", 5000, _si, 60, "AN72_Support_xj400", "\TZK_Texture_4_0_0\icon\iAN72.paa", 2^_st, [2, _pilotE], _mSupport, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs", "Common\InitSupportVehicle.sqs"]] ];
_an72supportE = _type;
_type = _type + 1;

unitDefs set [_type, ["Su25 (AA Only)", 8000, _si, 90, "Su25_AAOnly_xj406", "\Su25\isu25", 2^_st, [1, _pilotE], _mPlane, ["Common\Equip\PlaneGun.sqs", "\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_su25gun = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 12000, _si, 90, "Su25_LGB_xj400", "\Su25\isu25", -1, [1, _pilotE], _mPlane, []] ];
_su25LGB4 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 14000, _si, 90, "Su25_xj406", "\Su25\isu25", -1, [1, _pilotE], _mPlane, []] ];
_su25bombs = _type;
_type = _type + 1;

unitDefs set [_type, ["Su25", 15000, _si, 90, "Su25_xj406", "\Su25\isu25", 2^_st, [1, _pilotE], _mPlane, ["Common\Equip\PlaneCustom.sqs", "Common\InitSpawnPlane.sqs"]] ];
_su25 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 20000, _si, 90, "Su25_LGB_xj400", "\Su25\isu25", -1, [1, _pilotE], _mPlane, []] ];
_su25LGB8 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 25000, _si, 90, "Su25_xj406", "\Su25\isu25", -1, [1, _pilotE], _mPlane, ["TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_su25AA = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 30000, _si, 90, "Su25_Rocket_xj400", "\Su25\isu25", -1, [1, _pilotE], _mPlane, []] ];
_su25Rocket = _type;
_type = _type + 1;

unitDefs set [_type, ["Su39 Bomber", 30000, _si, 90, "su39", "\rktf15c\modpic.paa", -1, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_su39 = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 45000, _si, 90, "Su25_Buster_xj400", "\Su25\isu25", -1, [1, _pilotE], _mPlane, []] ];
_su25BB = _type;
_type = _type + 1;

unitDefs set [_type, ["(empty)", 90000, _si, 90, "Su25_Raduga_xj400", "\Su25\isu25", -1, [1, _pilotE], _mPlane, []] ];
_su25Raduga = _type;
_type = _type + 1;


comment { RESISTANCE; };
_si = siRes;
_st = -1;

comment { INFANTRY RES; };


unitDefs set [_type, ["Soldier", 50, _si, 0, "SoldierGG_xj400", "ivojak", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_soldierGLG = _type;
_type = _type + 1;

unitDefs set [_type, ["Crew", 50, _si, 0, "SoldierGCrew_xj400", "icrew", _st, [], "", []] ];
_crewR = _type;
_type = _type + 1;

unitDefs set [_type, ["PK", 100, _si, 0, "SoldierGMG_xj400", "ismg", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResMG.sqs"]] ];
_soldierMGR = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper", 100, _si, 0, "SoldierGSniper_xj400", "isniper", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResSniper.sqs"]] ];
_sniperR = _type;
_type = _type + 1;

unitDefs set [_type, ["RPG", 250, _si, 0, "SoldierGLAW_xj400", "islaw", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResistanceRPG.sqs"]] ];
_soldierLAWR = _type;
_type = _type + 1;

unitDefs set [_type, ["AT4", 280, _si, 10, "SoldierGAT_xj400", "isat", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResistanceAT.sqs"]] ];
_soldierATR = _type;
_type = _type + 1;

unitDefs set [_type, ["Strela", 250, _si, 10, "SoldierGAA_xj400", "isaa", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResistanceAA.sqs"]] ];
_soldierAAR = _type;
_type = _type + 1;

unitDefs set [_type, ["Officer", 2000, _si, 10, "OfficerG_xj400", "ivojak", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_officerR = _type;
_type = _type + 1;


comment { ARMOR RES; };


unitDefs set [_type, ["RES HUNTER", 5000, _si, 90, "RKTHunterGAG", "\Su25\isu25", _st, [1, _crewR], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlaneRes.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResPlanebombs.sqs"]] ];
_planeatR = _type;
_type = _type + 1;

unitDefs set [_type, ["RES HUNTER", 5000, _si, 90, "RKTHunterBAG", "\Su25\isu25", _st, [1, _crewR], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlaneRes.sqs","\TZK_Scripts_4_0_6\Common\Equip\ResPlanegun.sqs"]] ];
_planeatR2 = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP Res", 800, _si, 0, "BMPRes", "ibmp", _st, [3, _crewR], _mAPC, [localize {TZK_EQUIP_UNIT_TOWNVEH}]] ];
_bmpR = _type;
_type = _type + 1;

unitDefs set [_type, ["T72 Res", 2000, _si, 0, "T72Res", "it72", _st, [3, _crewR], _mTank, [localize {TZK_EQUIP_UNIT_TOWNVEH}]] ];
_t72R = _type;
_type = _type + 1;

unitDefs set [_type, ["T80 Res", 5000, _si, 0, "T80Res_TZK_xj406", "it80", _st, [3, _crewR], _mTank, [localize {TZK_EQUIP_UNIT_TOWNVEH}]] ];
_t80R = _type;
_type = _type + 1;

unitDefs set [_type, ["2S9 Nona Res", 3000, _si, 0, "2s9", "it80", _st, [3, _crewR], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\2S9.sqs"]] ];
_TDR = _type;
_type = _type + 1;


comment { VEHICLE CIV; };
_si = siCIV;
_st = -1;

unitDefs set [_type, ["Bike", 100, _si, 0, "Kolo_xj400", "\Kolo\ikolo", _st, [1, _crewR], _mBike, []] ];
_bikeC = _type;
_type = _type + 1;

unitDefs set [_type, ["Motorcycle", 200, _si, 0, "Jawa_xj400", "\o\vehl\ijawa", _st, [1, _crewR], _mBike, []] ];
_motorC = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZG", 200, _si, 0, "UAZG", "iuaz", _st, [1, _crewR], _mCar, []] ];
_uazG = _type;
_type = _type + 1;





comment { ? _type > maxUnitTypes : player globalchat format["Max unit types (%1) exceeded: %1", maxUnitTypes, _type]; };

comment { PLAYER CUSTOM INFANTRY; };
infCustom = [];
_i = 0; while "_i < countInfCustom" do { infCustom set [_i, [] ]; _i=_i+1 };
utCustom = [_customW, _customE];


comment { TOWN UNITS; };

_si = si0;

unitDefs set [_type, ["M60 Town", 100, _si, 10, "SoldierWMG_xj400", "ismg", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs"]] ];
_soldierMGW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper Town", 100, _si, 10, "SoldierWSniper_xj400", "isniper", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs"]] ];
_sniperW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["LAW Town", 250, _si, 10, "SoldierWLAW_xj400", "islaw", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\RPGai.sqs"]] ];
_soldierLAWW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Carl Gustav Town", 400, _si, 10, "SoldierWAT_xj400", "isat", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\ATai.sqs"]] ];
_soldierATW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Javelin Town", 400, _si, 10, "DVDUS_SoldierWJAV", "isat", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\AT3ai.sqs"]] ];
_javW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Stinger Town", 400, _si, 10, "SoldierWAA_xj400", "isaa", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\AAai.sqs"]] ];
_soldierAAW1 = _type;
_type = _type + 1;


unitDefs set [_type, ["M2A2 AT Town", 2000, _si, 30, "M2A2_AA_Town_xj400", "\M2A2\im2a2", _st, [3, _crewW], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\TownM2A2_AT.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_m2a2townat = _type;
_type = _type + 1;

unitDefs set [_type, ["M2A2 AA Town", 2000, _si, 30, "M2A2_AA_Town_xj400", "\M2A2\im2a2", _st, [3, _crewW], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\TownM2A2_AA.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_m2a2townaad = _type;
_type = _type + 1;

unitDefs set [_type, ["M1A1 Town", 5000, _si, 60, "M1A1_xj400", "iabrams", _st, [3, _crewW], _mTank, [localize {TZK_EQUIP_UNIT_TOWNVEH}, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_m1a1townW = _type;
_type = _type + 1;
unitDefs set [_type, ["AH64 Town", 6000, _si, 90, "AH64_AT_xj400", "\APAC\iah64", _st, [2, _pilotW], _mHeli, [localize {TZK_EQUIP_UNIT_TOWNVEH}, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_ah64townW2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Static-AT Town", 6000, _si, 90, "una_m220tow_Static", "\APAC\iah64", _st, [1, _crewW], _quad, ["\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_staticATW = _type;
_type = _type + 1;

unitDefs set [_type, ["Vulcan Base", 1500, _si, 30, "Vulcan_xj400", "\VULCAN\ivulcan", -2, [2, _crewW], _mAA, []] ];
_vulcanBaseW = _type;
_type = _type + 1;

unitDefs set [_type, ["4xAA Base", 8000, _si, 30, "Vulcan_TZK_xj400", "\VULCAN\ivulcan", -2, [2, _crewW], _mAA, ["\TZK_Scripts_4_0_5\Common\Equip\DefAA.sqs"]] ];
_vulcanBaseW2 = _type;
_type = _type + 1;



_si = si1;

unitDefs set [_type, ["PK Town", 150, _si, 10, "SoldierEMG_xj400", "ismg", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs"]] ];
_soldierMGE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper Town", 150, _si, 10, "SoldierESniper_xj400", "isniper", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs"]] ];
_sniperE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["RPG Town", 250, _si, 10, "SoldierELAW_xj400", "islaw", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs","\TZK_Scripts_4_0_6\Common\Equip\RPGai.sqs"]] ];
_soldierLAWE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT4 Town", 400, _si, 10, "SoldierEAT_xj400", "isat", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs","\TZK_Scripts_4_0_6\Common\Equip\ATai.sqs"]] ];
_soldierATE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Javelin Town", 400, _si, 10, "icp_infRPG", "isat", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs","\TZK_Scripts_4_0_6\Common\Equip\AT3ai.sqs"]] ];
_javE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Strela Town", 400, _si, 10, "SoldierEAA_xj400", "isaa", _st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs"]] ];
_soldierAAE1 = _type;
_type = _type + 1;


unitDefs set [_type, ["BMP2 AT Town", 2000, _si, 30, "BMP2_AA_Town_xj400", "ibmp", _st, [3, _crewE], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\TownBMP2_AT.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_bmp2townat = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 AA Town", 2000, _si, 30, "BMP2_AA_Town_xj400", "ibmp", _st, [3, _crewE], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\TownBMP2_AA.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_bmp2townaad = _type;
_type = _type + 1;

unitDefs set [_type, ["T80 Town", 5000, _si, 60, "T80_xj400", "it80", _st, [3, _crewE], _mTank, [localize {TZK_EQUIP_UNIT_TOWNVEH}, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_t80townE = _type;
_type = _type + 1;
unitDefs set [_type, ["Mi24 Town", 8000, _si, 90, "Mi24_RHS_AT_xj400", "imi24", _st, [2, _pilotE], _mHeli, [localize {TZK_EQUIP_UNIT_TOWNVEH}, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_mi24townE2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Static-AT Town", 6000, _si, 90, "Static_Metis_88", "\APAC\iah64", _st, [1, _crewE], _quad, ["\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_staticATE = _type;
_type = _type + 1;

unitDefs set [_type, ["Shilka Base", 1500, _si, 30, "ZSU_xj400", "izsu", -2, [2, _crewE], _mAA, []] ];
_shilkaBaseE = _type;
_type = _type + 1;

unitDefs set [_type, ["Tunguska Base", 8000, _si, 30, "2S6_DKM_xj400", "\TZK_Texture_4_0_0\icon\i2s6.paa", -2, [3, _crewE], _mAA, ["\TZK_Scripts_4_0_5\Common\Equip\Tunguska.sqs"]] ];
_tunguskaBaseE = _type;
_type = _type + 1;


if (bool_TZK_Vanilla_Mode) then {call loadFile "\TZK_Scripts_4_0_6\Common\Init\UnitTypes_VanillaMode.sqf"};
if (bool_TZK_SEMod_Mode) then {call loadFile "Extra\UnitTypes_SE_Redef.sqf"};
if (bool_TZK_MF_Mode) then {call loadFile "Extra\Unit_mfcti_Redef.sqf"};
if (bool_TZK_Yugo_Mode) then {call loadFile "Extra\Unit_Yugo_Redef.sqf"};


infTown = [ [], [], [] ];
infTownH = [ [], [], [] ];
armorTown = [ [], [], [] ];
if (bool_TZK_SEMod_Mode) then {armorTownTD = [ [], [], [] ]};
armorTownH = [ [], [], [] ];
armorTownHIsle = [ [], [], [] ];
comment {planeTown = [ [], [], [] ]; };
airTown = [ [], [], [] ];

_si = si0;
infTown set [_si, [ [_soldierLAWW1, 1], [_soldierATW1, 1], [_soldierAAW1, 0.5],[_soldierMGW1, 0.1] ] ];
if (bool_TZK_SEMod_Mode) then {infTown set [_si, [ [_soldierLAWW1, 1], [_soldierATW1, 1], [_soldierAAW1, 0.5], [_soldierMGW1, 0.1], [_javW1, 0.5] ] ]};
infTownH set [_si, [ [_soldierAAW1, 1] ] ];
armorTown set [_si, [ [_m2a2townat, 1], [_m2a2townaad,1] ] ];
if (bool_TZK_SEMod_Mode) then {armorTown set [_si, [ [_m2a2attown, 1], [_vulcanW, 0.5], [_staticATW, 0.5], [_tdW, 0.5], [_m2a2aa, 0.5] ] ]};
armorTownH set [_si, [ [_m1a1townW, 1] ] ];
armorTownHIsle set [_si, [ [_m1a1townW, 1], [_ah64townW2, 1]] ];


_si = si1;
infTown set [_si, [ [_soldierLAWE1, 1], [_soldierATE1, 1], [_soldierAAE1, 0.5], [ _soldierMGE1, 0.1] ] ];
if (bool_TZK_SEMod_Mode) then {infTown set [_si, [ [_soldierLAWE1, 1], [_soldierATE1, 1], [_soldierAAE1, 0.5], [ _soldierMGE1, 0.1], [_javE1, 0.5] ] ]};
infTownH set [_si, [ [_soldierAAE1, 1] ] ];
armorTown set [_si, [ [_bmp2townat, 1], [_bmp2townaad,1] ] ];
if (bool_TZK_SEMod_Mode) then {armorTown set [_si, [ [_bmp2attown, 1], [_shilkaE, 0.5], [_staticATE, 0.5], [_tdE, 0.5], [_bmp2aa, 0.5] ] ] };
armorTownH set [_si, [ [_t80townE, 1] ] ];
armorTownHIsle set [_si, [ [_t80townE, 1], [_mi24townE2, 1]] ];


_si = siRes;
infTown set [_si, [ [_sniperR, 0.1], [_soldierMGR, 0.1], [_soldierLAWR, 1], [_soldierATR, 1], [_soldierAAR, 1] ] ];
armorTown set [_si, [ [_t80R, 1] ] ];
if (bool_TZK_MF_Mode) then {armorTown set [_si, [ [_bmpR, 1], [_t72R, 0.5], [_t80R, 0.2] ] ]};
if (bool_TZK_SEMod_Mode) then {armorTownTD set [_si, [ [_TDR, 1] ] ]};
airTown set [_si, [ [_planeatR, 1] ,[_planeatR2, 1] ] ];



civTown = [_motorC, _motorC, _bikeC]; if bool_TZK_SEMod_Mode then "civTown set [count civTown, _uazG]";
if (bool_TZK_Yugo_Mode) then {call loadFile "Extra\Unit_Town_Yugo_Redef.sqf"};


comment { AI UNITS - units bought by ai leaders, this must match aisBuy in aiSettingDefs in init.sqs; };
_bSkipBuyDef = false;
if (bool_TZK_SEMod_Mode) then {call loadFile "Extra\UnitTypes_SE_aisBuy.sqf", _bSkipBuyDef = true};
if (bool_TZK_Yugo_Mode) then {call loadFile "Extra\Unit_Yugo_aisBuy.sqf", _bSkipBuyDef = true};

if !_bSkipBuyDef then {
	unitsBuyAI = [ [], [] ];
	_i = 0;

	utbNone = _i;
	_list = [];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbSoldier = _i;
	_list = [ [_soldierW1, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierE1, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;


	utbinfMGSnip = _i;
	_list = [[_soldierMGW, 1],[_sniperW, 0.5] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierMGE, 1],[_sniperE, 0.5] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;


	utbinfRPGLAW = _i;
	_list = [[_soldierLAWW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfRPGLAW2 = _i;
	_list = [[_soldierLAWW2, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE2, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfRPGLAW3 = _i;
	_list = [ [_soldierLAWW, 1], [_soldierLAWW2, 0.5] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE, 1], [_soldierLAWE2, 0.5] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfAt = _i;
	_list = [[_soldierLAWW, 1], [_soldierATW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE, 1], [_soldierATE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfAt2 = _i;
	_list = [[_soldierLAWW2, 1], [_soldierATW2, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE2, 1], [_soldierATE2, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfAt3 = _i;
	_list = [ [_soldierLAWW2, 0.5], [_soldierATW2, 0.5], [_soldierLAWW, 1], [_soldierATW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE2, 0.5], [_soldierATE2, 0.5], [_soldierLAWE, 1], [_soldierATE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbAA = _i;
	_list = [ [_soldierAAW, 0.5] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierAAE, 0.5] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfAASnip = _i;
	_list = [[_sniperW, 0.5], [_soldierAAW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_sniperE, 0.5], [_soldierAAE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbinfAAATSnip = _i;
	_list = [ [_soldierLAWW2, 1], [_soldierATW2, 1], [_soldierAAW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_soldierLAWE2, 1], [_soldierATE2, 1], [_soldierAAE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbInfMixed = _i;
	_list = [ [_sniperW, 0.5], [_bomberW, 1], [_soldierAAW, 0.5], [_soldierMGW, 1], [_soldierLAWW, 1], [_soldierATW, 1], [_soldierLAWW2, 1], [_soldierATW2, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_sniperE, 0.5], [_bomberE, 1], [_soldierAAE, 0.5], [_soldierMGE, 1], [_soldierLAWE, 1], [_soldierATE, 1], [_soldierLAWE2, 1], [_soldierATE2, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbTanksMixed = _i;
	_list = [ [_tankLightW01, 0.2], [_m2a2at, 0.2], [_m2a2aa, 0.2], [_tankHeavyW01, 1] ];
	if (bool_TZK_MF_Mode) then {_list = [ [_m2a2W, 0.5], [_m3a2W, 0.5], [_tankHeavyW02, 1] ]};
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_tankLightE01, 0.2], [_bmp2at, 0.2], [_bmp2aa, 0.2], [_tankHeavyE01, 1] ];
	if (bool_TZK_MF_Mode) then {_list = [ [_tankLightE01, 0.2], [_tankLightE02, 0.4], [_tankLightE03, 0.8], [_bmp2E, 0.5], [_bmp2_EE, 0.5], [_tankHeavyE01, 0.5], [_tankHeavyE02, 0.5], [_tankHeavyE03, 1] ]};
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbTanksL = _i;
	_list = [ [_tankLightW01, 0.5] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_tankLightE01, 0.5] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbTanksHeavy = _i;
	_list = [ [_tankHeavyW01, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_tankHeavyE01, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbTanksAT = _i;
	_list = [ [_m2a2at, 0.5] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_bmp2at, 0.5] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbAAHeavy = _i;
	_list = [ [_vulcanW2, 0.3] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_tunguskaE, 0.3] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbAAvehicles = _i;
	_list = [ [_vulcanW, 0.5], [_m2a2aa, 0.5], [_vulcanTransp, 0.5] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_shilkaE, 0.5], [_bmp2aa, 0.5], [_bmp2Cannon, 0.5] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbBombers = _i;
	_list = [ [_bomberW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_bomberE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbminers = _i;
	_list = [ [_minerW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_minerE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbtransl = _i;
	_list = [ [_m2a2W, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_bmp2E, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbtransa = _i;
	_list = [ [_uh60W, 0.5], [_uh60supW, 0.8] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_mi17E, 0.5], [_mi17supE, 0.8] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbSupport = _i;
	_list = [ [_supportAPCW, 1], [_supportTruckW, 0.1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_supportAPCE, 1], [_supportTruckE, 0.1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbPlane = _i;
	_list = [ [_a10, 1] ];
	if (bool_TZK_MF_Mode) then {_list = [ [_a10, 1], [_ah64W2, 0.5] ]};
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_su25, 1] ];
	if (bool_TZK_MF_Mode) then {_list = [ [_su25, 1], [_mi24E2, 0.5] ]};
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbMortar = _i;
	_list = [ [_MortarW, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_MortarE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;

	utbM82KSVK = _i;
	_list = [ [_M82A1W, 1] ];
	(unitsBuyAI select si0) set [_i, _list];
	_list = [ [_KSVKE, 1] ];
	(unitsBuyAI select si1) set [_i, _list];
	_i = _i + 1;
};

comment { EXTRA START VEHICLES; };
comment { will not be placed when no players exist on side; };
comment { entry format: [type, posRelMhq]; };
vehiclesStart = []; _startType = -1;
if (bool_TZK_Yugo_Mode) then {
	vehiclesStart set [si0, [ [ _supportAPCW, [0, -25]] ] ],
	vehiclesStart set [si1, [ [ _supportAPCE, [0, -25]] ] ]
};

if (restanksx == 1) then {_startType = 0};
if (restanksx == 2) then {_startType = 0};
if (restanksx == 3) then {_startType = 1};
if (restanksx == 4) then {_startType = 2};
if (restanksx == 5) then {_startType = 3};

if (0 == _startType) then {
	vehiclesStart set [si0, [ [ _truckW, [0, -25]],[[_hummerW3,_hummerW] select bool_TZK_Vanilla_Mode, [20, -40]], [ _jeepW, [0, -40]] ] ];
	vehiclesStart set [si1, [ [ _truckE, [0, -25]],[[  _brdmE3,  _brdmE] select bool_TZK_Vanilla_Mode, [20, -40]],  [ _uazE, [0, -40]] ] ];
};

if (1 == _startType) then {
	vehiclesStart set [si0, [ [ _truckW, [0, -25]],[[_hummerW3,_hummerW] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportTruckW, [0, -40]] ] ];
	vehiclesStart set [si1, [ [ _truckE, [0, -25]],[[  _brdmE3,  _brdmE] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportTruckE, [0, -40]] ] ];
};

if (2 == _startType) then {
	vehiclesStart set [si0, [ [ _truckW, [0, -25]],[[_hummerW3,_hummerW] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportAPCW, [-20, -25]],  [ _supportTruckW, [20, -25]]  ] ];
	vehiclesStart set [si1, [ [ _truckE, [0, -25]],[[  _brdmE3,  _brdmE] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportAPCE, [-20, -25]],  [ _supportTruckE, [20, -25]]  ] ];
};

if (3 == _startType) then {
	vehiclesStart set [si0, [ [ _truckW, [0, -25]],[[_hummerW3,_hummerW] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportAPCW, [-20, -25]], [ _supportAPCW, [20, -25]], [ _m2a2d, [0, -50]], [ _supportTruckW, [40, -25]]  ] ];
	vehiclesStart set [si1, [ [ _truckE, [0, -25]],[[  _brdmE3,  _brdmE] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportAPCE, [-20, -25]], [ _supportAPCE, [20, -25]], [ _bmp2d, [0, -50]], [ _supportTruckE, [40, -25]]  ] ];
	if (bool_TZK_SEMod_Mode) then {vehiclesStart set [si0, [ [ _truckW, [0, -25]],[[_hummerW2,_hummerW] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportAPCW, [-20, -25]], [ _supportAPCW, [20, -25]], [ _m2a2aa, [0, -50]], [ _supportTruckW, [40, -25]]  ] ]};
	if (bool_TZK_SEMod_Mode) then {vehiclesStart set [si1, [ [ _truckE, [0, -25]],[[  _brdmE2,  _brdmE] select bool_TZK_Vanilla_Mode, [20, -40]], [ _supportAPCE, [-20, -25]], [ _supportAPCE, [20, -25]], [ _bmp2aa, [0, -50]], [ _supportTruckE, [40, -25]]  ] ]};
};

comment { CLASSIFY VEHICLES FOR MORE APPLICATION; };
comment { TRANSPORT VEHICLES; };
comment { AI groups will use (board) these if using PickupWait Settings; };
comment { define which vehicles have the Eject function; };
comment { AI CO will only buy first type of air types for transport missions.; };
airTransport = [[], []];
groundTransport = [[], []];
driverAssigned = [[], []];
TransportCarW = [ _jeepW, jeepaW, _hummerW, _hummerW2, _hummerW3, _hummerWG, _hummerWAA ];	TransportCarE = [ _uazE, uazaE, _brdmE, _brdmE2, _brdmE3, _brdmEAT, _brdmEAA ];
TransportTruckW = [ _truckW ];								TransportTruckE = [ _truckE ];
TransportShipE = [_boatE,_boatsupE,_boatE2,_boatE3,_boatCustomE, _patrolboatE, _patrolshipE];
TransportShipW = [_boatW,_boatsupW,_boatW2,_boatW3,_boatCustomW, _patrolboatW, _patrolshipW];
TransportZodiacW = [ _zodiacW, _zodiacHW ];				TransportZodiacE = [ _zodiacE, _zodiacHE ];
Transport6APCW = [ _m2a2W, _m3a2W, _m2a2aa, _m2a2at, _m2a2d,  _warrior80W ];		Transport6APCE = [ _bmp2E, _bmp2_EE, _bmp2aa, _bmp2at, _bmp2d, _bmp2Cannon,  _bmp3 ];
Transport8APCW = [ _m113W, _vulcanTransp, _vulcanW2 ]; 					Transport8APCE = [ _bmpE ];
TransportHeliW = [ _uh60W, _uh60supW, _uh60W30,_uh60WMG2,_uh60WL,  _ch47W ]; 	TransportHeliE = [ _mi17E, _mi17supE, _mi17E30, _mi17EL, _mi17EMG2,  _mi26E ];
TransportirNOHeliW = [_mh6W, _irNO_uh60]; TransportirNOHeliE = [_mi2E, _irNO_mi17]; TransportHindE = [ _mi24E, _mi24E2, _mi24E3 ];
TransportPlaneW = [ _c130W, _c130supportW ]; 				TransportPlaneE = [ _an72E, _an72supportE ];
TransportRepairTruckW = [_supportTruckW, _supportTruckW2]; 		TransportRepairTruckE = [_supportTruckE, _supportTruckE2];
TransportSupAPCW = [_supportAPCW, _supportAPCWminer];
TransportSupAPCE = [_supportAPCE, _supportAPCEminer];
TransportActivatedVehicles = [];
if (bool_TZK_SEMod_Mode) then {typesGuns = [_staticATW, _staticATE]};

_si = si0;
airTransport set [ _si, TransportHeliW + TransportirNOHeliW + TransportPlaneW ];
groundTransport set [ _si, TransportCarW + TransportTruckW + TransportShipW + TransportZodiacW + Transport6APCW + Transport8APCW + TransportRepairTruckW + TransportSupAPCW ];
_si = si1;
airTransport set [ _si, TransportHeliE + TransportirNOHeliE + TransportHindE + TransportPlaneE ];
groundTransport set [ _si, TransportCarE + TransportTruckE + TransportShipE + TransportZodiacE + Transport6APCE + Transport8APCE + TransportRepairTruckE + TransportSupAPCE ];

comment { SUPPORT VEHICLES; };
comment { AI units will get close to them for heal, repair and rearm. planeSupport defines support planes used in plane's support; };
typesSupport = [ [_supportTruckW,_supportTruckW2,_boatsupW,_supportAPCW,_supportAPCWminer,_uh60supW], [_supportTruckE,_supportTruckE2,_boatsupE,_supportAPCE, _supportAPCEminer,_mi17supE] ];
typesSupportPlus = [ [], [] ]; typesSupportPlus set [0, (typesSupport select 0) + [_c130supportW] ]; typesSupportPlus set [1, (typesSupport select 1) + [_an72supportE] ];
planeSupport = [ [_c130supportW], [_an72supportE] ];
typesMHQ = [utMHQ0, utMHQ1]; typesHQ = [];

comment { Units Type. These classifications are used for new orders and temporary orders as a category parameter.; };
comment { typesPlane is also used in a script for planes belonging to same side to get each other's flying parameters.; };
typesTransportCar = TransportCarW + TransportCarE + TransportTruckW + TransportTruckE;
typesTransportShip = TransportShipE + TransportShipW + TransportZodiacW + TransportZodiacE;
typesTransportAPC = Transport6APCW + Transport6APCE + Transport8APCW + Transport8APCE;
typesTransportHeli = TransportHeliW + TransportHeliE + TransportirNOHeliW + TransportirNOHeliE;
typesSupportAPC = [ _supportAPCW, _supportAPCWminer, _supportAPCE, _supportAPCEminer ];
typesBattleShip = (TransportShipE+TransportShipW) - ((typesSupport select 0)+(typesSupport select 1));
typesHowitzer = [ _m109W, _plz05E ]; typesRocketLauncher = [_m270W, _tos1E];
typesHeavyTank = [ _tankHeavyW01, _tankHeavyW02, _tankHeavyW03, _tankHyperW01,  _tankHeavyE01, _tankHeavyE02, _tankHeavyE03, _tankHyperE01 ];
typesLightTank = [ _tankLightW01, _tankLightW02, _tankLightE01, _tankLightE02, _tankLightE03,  _AMX10W, _tdW, _tdE];
typesATAPC = [ _m2a2at, _bmp2at ];
typesAAAPC = [ _vulcanW2, _m2a2aa, _vulcanTransp, _vulcanW, _tunguskaE, _bmp2aa, _bmp2Cannon, _shilkaE ];
typesGunshipOrigin = [_ah1W, _ah64W, _v80E, _mi24E, _tigerW];
typesGunshipAT = [_ah1W2, _ah64W2, _v80E2, _mi24E2, _mi24E3, _tigerW2];
typesKa50 = [ _v80E, _v80E2 ];
typesPlane =[ _c130supportW, _a10gun, _a10LGB4, _a10bombs, _a10, _a10FFAR, _a10LGB8, _a10AA, _a10BB, _a10Tomahawk, _an72supportE, _su25gun, _su25LGB4, _su25bombs, _su25, _su25Rocket, _su25LGB8, _su25AA, _su25BB, _su25Raduga, _c130W, _an72E,  _B2, _su39 ];
typesGunPlane = [_a10gun, _su25gun];
typesInfantryAll = [_soldierW1, _MM1W, _soldierMGW, _sniperW, _MortarW, _M82A1W, _soldierLAWW, _soldierLAWW2, _soldierATW, _soldierATW2, _soldierAAW, _bomberW, _minerW, _crewW, _pilotW, _soldierE1, _6G30E, _soldierMGE, _sniperE, _MortarE, _KSVKE, _soldierLAWE, _soldierLAWE2, _soldierATE, _soldierATE2, _soldierAAE, _bomberE, _minerE, _crewE, _pilotE];
typesInfantryAT = [_soldierLAWW, _soldierLAWW2, _soldierATW, _soldierATW2, _soldierAAW, _soldierLAWE, _soldierLAWE2, _soldierATE, _soldierATE2, _soldierAAE];
comment { Anti Plane Vehicle Type Constant; };
typesAntiPlane3500 = [[_m2a2aa, _m2a2townaad], [_bmp2aa, _bmp2townaad]];
typesAntiPlane8000 = [[_vulcanW2], [_tunguskaE]];
comment { Define global variable for nuke planes; };
typesNuke = [_a10Tomahawk, _su25Raduga];
comment { Define global variable for general planes; };
typesTzkGenearlPlane = [[_a10], [_su25]];

comment { AIRCRAFTS WITH WEAPONS; };
AggressiveAircrafts = [ [], [] ];
AggressiveAircrafts set [ si0, [_uh60W30,_uh60WMG2, _uh60WL, _ah1W, _ah64W, _tigerW, _ah1W2, _ah64W2, _tigerW2, _a10gun,  _a10LGB4,  _a10bombs,  _a10,  _a10LGB8,  _a10AA,  _a10FFAR,	 _a10BB, _a10Tomahawk, _B2] ];
AggressiveAircrafts set [ si1, [_mi17E30, _mi17EL, _mi17EMG2, _v80E, _mi24E, _v80E2, _mi24E2, _mi24E3, _su25gun, _su25LGB4, _su25bombs, _su25, _su25LGB8, _su25AA, _su25Rocket, _su25BB, _su25Raduga, _su39] ];
comment { AA System; };
AASystem = [ [_vulcanBaseW, _vulcanBaseW2], [_shilkaBaseE, _tunguskaBaseE] ];

comment { VEHICLES WITH UNLIMITED/SPECIAL WEAPON RANGE; };
vUnlimitedRange = [_vulcanW2, _vulcanBaseW2, _tunguskaE, _tunguskaBaseE];
vDoubledRange = [_vulcanW, _shilkaE, _m2a2aa, _bmp2aa, _vulcanTransp, _bmp2Cannon, _boatW3, _boatE3, _vulcanBaseW, _shilkaBaseE, _uh60W, _uh60supW, _uh60WMG2, _mi17E, _mi17supE, _mi17EMG2];
if (bool_TZK_SEMod_Mode) then {vDoubledRange = [_vulcanW, _shilkaE, _m2a2aa, _bmp2aa, _vulcanTransp, _bmp2Cannon, _boatW3, _boatE3, _vulcanBaseW, _shilkaBaseE, _patrolboatW, _patrolboatE]; vUnlimitedRange = [_vulcanW2, _vulcanBaseW2, _tunguskaE, _tunguskaBaseE, _patrolshipW, _patrolshipE]};

comment { VEHICLES WITH LONGER REARM TIME; };
vDoubleRearmTime = [_ah1W, _ah1W2, _ah64W, _ah64W2, _tigerW, _tigerW2, _mi24E, _mi24E2, _mi24E3, _a10, _a10FFAR, _a10LGB8, _su25, _su25Rocket, _su25LGB8];
vTripleRearmTime = [_v80E, _v80E2, _a10BB, _su25BB, _B2, _su39];
vSixfoldRearmTime = [_a10Tomahawk, _su25Raduga];
vTenfoldRearmTime = [_m270W, _tos1E];

comment { VEHICLES CAN CAUSE MINE EXPLOSION; };
vMinerAvoid = (typesSupportAPC + typesLightTank + typesHeavyTank + typesHowitzer + typesTransportAPC - typesAAAPC) + typesAAAPC + typesPlane + [_bmpR, _t72R, _t80R, _TDR,utMCVW, utMCVE, utMHQ0, utMHQ1];

comment { VEHICLES USED FOR EXTEND AIR RADAR; };
vRadarAir = [ [_vulcanW, _vulcanW2, _vulcanBaseW, _vulcanBaseW2], [_shilkaE, _tunguskaE, _shilkaBaseE, _tunguskaBaseE] ];

comment { VEHICLES Equipping RedTop; };
vRedTop = [ [_vulcanW2, _vulcanBaseW2, _a10AA], [_tunguskaE, _tunguskaBaseE, _su25AA] ];


utSoldier = [_soldierW1, _soldierE1];
utMiner = [_minerW, _minerE];
unitMatrix = [ [], [], [], [], [] ];
unitsBuilt = [ [], [], [], [], [] ];
unitsFarAction = [];

rDataMatrix = []; rdID = 0; rdWea = 1; rdMag = 2;
comment { rearmData entry format: [object, [weapon1, weapon2, ... ], [mag1, mag2, ...] ]; };
comment { this array will be filled automatically during game when units are built; };
rearmData = []; rearmDataObj = []; rearmDataEquip = [];

_index = 0; _count = count unitDefs; while {_index < _count} do {
	(unitMatrix select si0) set [_index, []];
	(unitMatrix select si1) set [_index, []];
	(unitMatrix select siRes) set [_index, []];
	(unitMatrix select siCIV) set [_index, []];

	rDataMatrix set [_index, []];

	(unitsBuilt select si0) set [_index, 0];
	(unitsBuilt select si1) set [_index, 0];
	(unitsBuilt select siRes) set [_index, 0];
	(unitsBuilt select siCIV) set [_index, 0];

	unitsFarAction set [_index, objNull];

	_index = _index + 1;
};

comment { TOWN GROUP VEHICLES; };
TownGroupVehicles = [];

comment { Radio List Classification(Relating to How Actions Defined); };
RadioTypesCustomCarShips = [_hummerW2, _brdmE2, _hummerW3, _brdmE3, _boatCustomW, _boatCustomE];
RadioTypesShips = TransportShipW + TransportShipE;
RadioTypesSupport = (typesSupportPlus select 0) + (typesSupportPlus select 1);
RadioTypesTransportPlane = [ _c130supportW, _an72supportE, _c130W, _an72E ];
RadioTypesPlane = typesPlane - RadioTypesTransportPlane;
RadioTypesTransportHeli = TransportHeliW + TransportHeliE + TransportirNOHeliW + TransportirNOHeliE;
RadioTypesGunships = typesGunshipOrigin + typesGunshipAT;

if (boole_Infantry_Mode) then {call loadFile "\TZK_Scripts_4_0_4\Common\Init\InfantryMode.sqf", (upgDefs select upgTownGroupH) set [1, 999999]};
comment { ? bool_ExtentArmor_Mode: _i = 0, _names = ["M1A1_TZK_Gun_ExtentArmor_xj400", "M1A2_TZK_Gun_ExtentArmor_xj400", "Leo2A6_Gun_ExtentArmor_xj400", "T80_TZK_Gun_ExtentArmor_xj400", "T90ms_Gun_ExtentArmor_xj400", "ZTZ99_Gun_ExtentArmor_xj400"], {_model = unitDefs select _x select udModel, _j = unitTypeArray find _model, unitTypeArray set [_j, _names select _i], unitDefs select _x set [udModel, _names select _i], _i = _i + 1} forEach typesHeavyTank; };


comment { CLEANUP - mags, weapons and vehicles. (Added by TZK_4.0.0) Should be placed in the bottom of file.; };
typesCleanup = ["WeaponHolder", "SecondaryWeaponHolder"];
{ if ( count (_x select udCrew) > 0 ) then { typesCleanup set [count typesCleanup, _x select udModel] } } forEach unitDefs;

maxUnitTypes = count unitDefs; TotalUnitTypes = maxUnitTypes + countInfCustom;

call preprocessFile "impl\Unit.sqf";
comment { EOF; };