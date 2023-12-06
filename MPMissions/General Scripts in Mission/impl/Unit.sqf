// The skill seems senseless in CTI thus set all values at 1
TzkSkillLevel = [1, 1, 1, 1, 1];
_i = 0; _c = count TzkUnitSkillVal; while {_i < _c} do {
	_val = TzkUnitSkillVal select _i;
	TzkUnitSkillVal set [_i, 1];
	_i = _i + 1;
};

// explicitly mark "auto cannon ship" as "AI" unit
{unitDefs select _x set [udName, "Boat 30mm gun (AI)"]} forEach [_boatW3, _boatE3];
// Recover cannon 2-crew ship for player using boat2 slots
{
	_entry = unitDefs select _x;
	_entry set [udName, "Boat 30mm gun"];
	if (_x == _boatW2) then {
		_entry set [udScripts, [localize {TZK_EQUIP_UNIT_TRUCK}, "\TZK_Scripts_4_0_6\Common\Equip\BoatW.sqs"]];
	} else {
		_entry set [udScripts, [localize {TZK_EQUIP_UNIT_TRUCK}, "\TZK_Scripts_4_0_6\Common\Equip\BoatE.sqs"]];
	};
} forEach [_boatW2, _boatE2];
// Recover HE/AP 2-crew ship for player using custom boat slots
{
	_entry = unitDefs select _x;
	_entry set [udName, "Boat HE/AP gun"];
	_entry set [udCost, 1500];
	if (_x == _boatCustomW) then {
		_entry set [udModel, "GunBoatW_xj400"];
	} else {
		_entry set [udModel, "GunBoatE_xj400"];
	};
	_entry set [udScripts, [localize {TZK_EQUIP_UNIT_TRUCK}]];
} forEach [_boatCustomW, _boatCustomE];
// Add HE cannon for FFAR APC
_scripts = unitDefs select _m2a2d select udScripts;
_scripts set [0, "Common\Equip\M2A2farr.sqs"];
_scripts = unitDefs select _bmp2d select udScripts;
_scripts set [0, "Common\Equip\BMP2farr.sqs"];

// Init howtizer with 120m/s magazine
{
	_entry = unitDefs select _x;
	_entry set [udScripts, ["Common\Equip\Art155.sqs"]];
} forEach [_m109W, _plz05E];
// Init MLRS with 120m/s magazine
{
	_entry = unitDefs select _x;
	_entry set [udScripts, ["Common\Equip\ArtMLRS.sqs"]];
} forEach [_m270W, _tos1E];

// fix plane price bug
unitDefs select _a10 set [udCost, 15000];

if true then {
	_name0 = []; _i = 0; _c = count (groupMatrix select si0); while {_i < _c} do {
		_name0 set [_i, name leader (groupMatrix select si0 select _i)];
		_i = _i + 1;
	};
	_name1 = []; _i = 0; _c = count (groupMatrix select si1); while {_i < _c} do {
		_name1 set [_i, name leader (groupMatrix select si1 select _i)];
		_i = _i + 1;
	};
	if (-1 != _name0 find "J10A" && -1 == _name1 find "IF") then {
		unitDefs select _a10 set [udCost, 25000];
	};
	if (!bool_TZK_199_Mode && !bool_TZK_Vanilla_Mode) then {unitDefs select _a10 set [udModel, "A10_xj400"]};
	if (-1 != _name1 find "J10A" && -1 == _name0 find "IF") then {
		unitDefs select _su25 set [udCost, 25000];
	};
	if (!bool_TZK_199_Mode && !bool_TZK_Vanilla_Mode) then {unitDefs select _su25 set [udModel, "Su25_xj400"]};
};

// Extend typesATAPC definition since $1800 APC weapon more useful
typesATAPC = [ _m2a2at, _bmp2at, _m2a2W, _bmp2E ];
// definition for RTS reclaim
typesBattlePlane = [ _a10gun, _su25gun, _a10, _su25 ];
typesBattleCar = [ _hummerW2, _hummerM134W, _m151a1cW, _brdmE2, _brdmGsghE, _uazSpg9E ];
typesRadarCar = [ _jeepRadarW, _uazRadarE ];
// definition for crew/pilot
typesCrew = [_crewW, _crewAAW, _pilotW, _crewE, _crewAAE, _pilotE];

// Ban mannual building orca since its ground radar not well-designed
{
	unitDefs select _x set [udFactoryType, -1];
} forEach [_orcaW, _orcaE];

utSupportInf = [_supportCarrierW, _supportCarrierE];
{
	_scripts = unitDefs select _x select udScripts;
	_scripts set [count _scripts, "Common\Init\SoldierSupportCarrier.sqs"]
} forEach utSupportInf;

// M88/BREM unbanned
typesEngineeringVeh = [_m88W, _bremE]; {
	unitDefs select _x set [udFactoryType, 2^stLight + 2^stHeavy];
	unitDefs select _x select udCrew set [0, 2];
	_entry = unitDefs select _x select udScripts;
	_entry set [count _entry, "Common\InitEngineerVeh.sqs"];
} forEach typesEngineeringVeh;

// Adjust AMX-10RC and 2S25 price
unitDefs select _amx10RcW set [udCost, 2500];
unitDefs select _2s25E set [udCost, 3000];

// Add MLRS equipping with shrapnel
_type = _m270W + 1;
unitDefs set [_type, ["M109A6 Shrapnel", 7500, si0, 60, "M109A6G_xj400", "\TZK_Texture_4_0_0\icon\iM109A6G.paa", 2^stHeavy, [2, _crewW], _mHowitzer, ["Common\Equip\Shrapnel.sqs"]] ];
_m109ShrapnelW = _type;
_type = _tos1E + 1;
unitDefs set [_type, ["PLZ-05 Shrapnel", 7500, si1, 60, "PLZ05_TZK_xj400", "\TZK_Texture_4_0_0\icon\iPLZ05.paa", 2^stHeavy, [2, _crewW], _mHowitzer, ["Common\Equip\Shrapnel.sqs"]] ];
_plz05ShrapnelE = _type;

typesHowitzer set [count typesHowitzer, _m109ShrapnelW];
typesHowitzer set [count typesHowitzer, _plz05ShrapnelE];

// Redefine type class to those objects whose dynamic texture is disabled by 4.0.6 patch2
_entry = unitDefs select _tankHeavyW01; _entry set [udModel, "M1A1_G_xj400"];
_entry = unitDefs select _tankHeavyW03; _entry set [udModel, "Leo2A6_C_xj400"];
_entry = unitDefs select _m1a1townW; _entry set [udModel, "M1A1_G_xj400"];
_entry = unitDefs select _tankHeavyE01; _entry set [udModel, "T80_G_xj400"];
_entry = unitDefs select _tankHeavyE03; _entry set [udModel, "ZTZ99_C_xj400"];
_entry = unitDefs select _t80townE; _entry set [udModel, "T80_G_xj400"];

{_entry = unitDefs select _x; _entry set [udModel, "M113Ambul_G_xj400"]} forEach [_supportAPCW, _supportAPCWminer];
{_entry = unitDefs select _x; _entry set [udModel, "BMPAmbul_G_xj400"]} forEach [_supportAPCE, _supportAPCEminer];

{_entry = unitDefs select _x; _entry set [udModel, "M2A2_G_AA_xj400"]} forEach [_m2a2W,_m3a2W,_m2a2d,_m2a2at,_m2a2aa];
{_entry = unitDefs select _x; _entry set [udModel, "BMP2_G_AA_xj400"]} forEach [_bmp2E,_bmp2_EE,_bmp2d,_bmp2at,_bmp2Cannon,_bmp2aa];

{_entry = unitDefs select _x; _entry set [udModel, "M2A2_G_AA_Town_xj400"]} forEach [_m2a2townat, _m2a2townaad];
{_entry = unitDefs select _x; _entry set [udModel, "BMP2_G_AA_Town_xj400"]} forEach [_bmp2townat, _bmp2townaad];

_entry = unitDefs select _t80R; _entry set [udModel, "T80Res_TZK_G_xj406"];

// The unitTypeData and unitTypeArray should ALWAYS be defined AFTER HAVING CALLED THIS SCRIPT
unitTypeArray resize 0; unitTypeData resize 0; _type = 0; _j = 0;
{
	_i = unitTypeArray find (_x select udModel);
	if (-1 != _i) then {
		_list = unitTypeData select _i;
		_list set [count _list, _type];
	} else {
		unitTypeData set [_j, [_type]];
		unitTypeArray set [_j, _x select udModel];
		_j = _j + 1;
	};
	_type = _type + 1;
} forEach unitDefs;
_c = count TzkSelfUpdateIdx; _k = 0; while {_k < _c} do {
	_type = TzkSelfUpdateIdx select _k;
	_models = TzkSelfUpdateVal select _k select 2;
	_l = 1; if ((unitDefs select _type select udModel) != (_models select 0)) then {
		_l = 0;
		player globalChat (unitDefs select _type select udName) + " has imporper TzkSelfUpdateVal definition.";
	};
	_cm = count _models; while {_l < _cm} do {
		_i = unitTypeArray find (_models select _l);
		if (-1 != _i) then {
			_list = unitTypeData select _i;
			_list set [count _list, _type];
		} else {
			unitTypeData set [_j, [_type]];
			unitTypeArray set [_j, _models select _l];
			_j = _j + 1;
		};
		_l = _l + 1;
	};
	_k = _k + 1;
};
// Same as unitTypeArray, the typesCleanup should be defined IN THE END OF THIS SCRIPT
typesCleanup resize 2;
// typesCleanup = ["WeaponHolder", "SecondaryWeaponHolder"];
{if (count(_x select udCrew) > 0) then {typesCleanup set [count typesCleanup, _x select udModel]}} forEach unitDefs;