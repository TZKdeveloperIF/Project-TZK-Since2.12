// TZK CTI - Unit Type Definitions
// Mirrors OFP: TZK_Patch5_4_0_6/s/init_unitTypes.sqf
// Uses A3 vanilla unit/vehicle classnames

unitDefs = [];

// Unit definition field indexes (matching OFP)
udName = 0;
udCost = 1;
udSide = 2;
udBuildTime = 3;
udModel = 4;
udImage = 5;
udFactoryType = 6;
udCrew = 7;       // empty [] for infantry; [count, crewTypeIndex] for vehicles
udMarkerType = 8;
udScripts = 9;

kaUnit = 1;

private _type = 0;

// ======================== WEST (si0) ========================
private _si = si0;
private _st = 0; // will be set to stBarracks after it's defined

// --- Infantry WEST ---
unitDefs set [_type, ["Worker", costWorker, _si, 10, "B_Soldier_unarmed_F", "", -1, [], "", []]];
utWorkerW = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier I", 50, _si, 5, "B_Soldier_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Soldier II", 100, _si, 8, "B_Soldier_GL_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Soldier III", 200, _si, 15, "B_soldier_AR_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Soldier IV", 250, _si, 20, "B_Soldier_SL_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["MG", 120, _si, 10, "B_soldier_M_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Sniper", 150, _si, 12, "B_sniper_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["AT", 180, _si, 12, "B_soldier_AT_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["AA", 200, _si, 12, "B_soldier_AA_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Medic", 100, _si, 8, "B_medic_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

// --- Vehicles WEST (Light Factory) ---
unitDefs set [_type, ["MRAP", 500, _si, 20, "B_MRAP_01_F", "", 2^stLight, [2, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Truck", 300, _si, 15, "B_Truck_01_transport_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Repair Truck", 600, _si, 25, "B_Truck_01_Repair_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Ammo Truck", 700, _si, 25, "B_Truck_01_ammo_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Fuel Truck", 500, _si, 20, "B_Truck_01_fuel_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

// --- Vehicles WEST (Heavy Factory) ---
unitDefs set [_type, ["APC", 1200, _si, 40, "B_APC_Wheeled_01_cannon_F", "", 2^stHeavy, [3, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["IFV", 1800, _si, 50, "B_APC_Tracked_01_rcws_F", "", 2^stHeavy, [3, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["MBT", 3000, _si, 60, "B_MBT_01_cannon_F", "", 2^stHeavy, [3, _type + 100], "", []]];
utMBTW = _type;
_type = _type + 1;

// --- Air WEST ---
unitDefs set [_type, ["Light Heli", 1500, _si, 30, "B_Heli_Light_01_F", "", 2^stAir, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Transport Heli", 2000, _si, 40, "B_Heli_Transport_01_F", "", 2^stAir, [2, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Attack Heli", 4000, _si, 60, "B_Heli_Attack_01_F", "", 2^stAir, [2, _type + 100], "", []]];
_type = _type + 1;

// --- Special WEST ---
unitDefs set [_type, ["MHQ", 0, _si, 0, "B_Truck_01_box_F", "", -1, [1, _type + 100], "", []]];
utMHQ0 = _type;
_type = _type + 1;

private _westEnd = _type;

// ======================== EAST (si1) ========================
_si = si1;

// --- Infantry EAST ---
unitDefs set [_type, ["Worker", costWorker, _si, 10, "O_Soldier_unarmed_F", "", -1, [], "", []]];
utWorkerE = _type;
_type = _type + 1;

unitDefs set [_type, ["Soldier I", 50, _si, 5, "O_Soldier_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Soldier II", 100, _si, 8, "O_Soldier_GL_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Soldier III", 200, _si, 15, "O_soldier_AR_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Soldier IV", 250, _si, 20, "O_Soldier_SL_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["MG", 120, _si, 10, "O_soldier_M_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Sniper", 150, _si, 12, "O_sniper_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["AT", 180, _si, 12, "O_soldier_AT_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["AA", 200, _si, 12, "O_soldier_AA_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Medic", 100, _si, 8, "O_medic_F", "", 2^stBarracks, [], "", []]];
_type = _type + 1;

// --- Vehicles EAST (Light Factory) ---
unitDefs set [_type, ["MRAP", 500, _si, 20, "O_MRAP_02_F", "", 2^stLight, [2, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Truck", 300, _si, 15, "O_Truck_03_transport_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Repair Truck", 600, _si, 25, "O_Truck_03_repair_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Ammo Truck", 700, _si, 25, "O_Truck_03_ammo_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Fuel Truck", 500, _si, 20, "O_Truck_03_fuel_F", "", 2^stLight, [1, _type + 100], "", []]];
_type = _type + 1;

// --- Vehicles EAST (Heavy Factory) ---
unitDefs set [_type, ["APC", 1200, _si, 40, "O_APC_Wheeled_02_rcws_v2_F", "", 2^stHeavy, [3, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["IFV", 1800, _si, 50, "O_APC_Tracked_02_cannon_F", "", 2^stHeavy, [3, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["MBT", 3000, _si, 60, "O_MBT_02_cannon_F", "", 2^stHeavy, [3, _type + 100], "", []]];
utMBTE = _type;
_type = _type + 1;

// --- Air EAST ---
unitDefs set [_type, ["Light Heli", 1500, _si, 30, "O_Heli_Light_02_unarmed_F", "", 2^stAir, [1, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Transport Heli", 2000, _si, 40, "O_Heli_Light_02_unarmed_F", "", 2^stAir, [2, _type + 100], "", []]];
_type = _type + 1;

unitDefs set [_type, ["Attack Heli", 4000, _si, 60, "O_Heli_Attack_02_F", "", 2^stAir, [2, _type + 100], "", []]];
_type = _type + 1;

// --- Special EAST ---
unitDefs set [_type, ["MHQ", 0, _si, 0, "O_Truck_03_device_F", "", -1, [1, _type + 100], "", []]];
utMHQ1 = _type;
_type = _type + 1;

maxUnitTypes = _type;

// Helper lookups
utCustom = [_westEnd - 1, _type - 1];

diag_log format ["TZK CTI: %1 unit types defined (WEST: 0-%2, EAST: %3-%4)",
	maxUnitTypes, _westEnd - 1, _westEnd, _type - 1];
