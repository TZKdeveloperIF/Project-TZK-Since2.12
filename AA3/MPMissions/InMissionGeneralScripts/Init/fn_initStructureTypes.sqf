// TZK CTI - Structure Type Definitions
// Mirrors OFP: TZK_Patch4_4_0_6/s/init_structureTypes.sqf
// Uses A3 vanilla building classnames

structDefs = [];
structMarker = [];

// Structure definition field indexes (matching OFP)
sdName = 0;
sdCost = 1;
sdSides = 2;
sdImage = 3;
sdOnlyCO = 4;
sdOnlyMHQ = 5;
sdLimit = 6;
sdMaxRadius = 7;
sdDist = 8;
sdObjects0 = 9;
sdObjects1 = 10;
sdScriptsServer = 11;
sdScriptsPlayer = 12;

// A3 map marker types (replacing OFP custom markers)
private _mBarrack = "b_installation";
private _mLight = "b_motor_inf";
private _mHeavy = "b_armor";
private _mAir = "b_air";
private _mCC = "b_hq";
private _mRadar = "b_recon";
private _mMortar = "b_mortar";
private _mMG = "b_support";
private _mShip = "b_naval";

// knowsAbout threshold for enemy structure reports
kaStruct = 1;

// Object format: [className, rotation, relativePos]
private _type = 0;

// === 0: Air Radar ===
private _price = 2000;
private _objects = [["Land_Cargo_Tower_V1_F", 0, []]];
structDefs set [_type, [
	"Air Radar - 4000m range", _price, siBoth, ["", ""],
	false, false, 10, 5, 15,
	_objects, _objects, [], []
]];
structMarker set [_type, _mRadar];
stradarair = _type;
_type = _type + 1;

// === 1: Map Marker Tower ===
_price = 2000;
_objects = [["Land_Cargo_Tower_V1_F", 0, []]];
structDefs set [_type, [
	"Map Marker Tower", _price, siBoth, ["", ""],
	false, false, 4, 5, 15,
	_objects, _objects, [], []
]];
structMarker set [_type, _mRadar];
stradar = _type;
_type = _type + 1;

// === 2: Unit Camera Tower ===
_price = 2000;
_objects = [["Land_Cargo_Tower_V1_F", 0, []]];
structDefs set [_type, [
	"Unit Camera Tower", _price, siBoth, ["", ""],
	false, false, 4, 5, 15,
	_objects, _objects, [], []
]];
structMarker set [_type, _mRadar];
stSatRec = _type;
_type = _type + 1;

// === 3: Light Vehicle Factory ===
_price = 2000;
_objects = [["Land_Cargo_HQ_V1_F", 0, []]];
structDefs set [_type, [
	"Light Vehicle Factory", _price, siBoth, ["", ""],
	true, true, 2, 10, 20,
	_objects, _objects, [], []
]];
structMarker set [_type, _mLight];
stLight = _type;
_type = _type + 1;

// === 4: Command Center ===
_price = 2000;
_objects = [["Land_Research_house_V1_F", 0, []]];
structDefs set [_type, [
	"Command Center", _price, siBoth, ["", ""],
	true, true, 2, 5, 20,
	_objects, _objects, [], []
]];
structMarker set [_type, _mCC];
stCC = _type;
_type = _type + 1;

// === 5: Heavy Vehicle Factory ===
_price = 3000;
_objects = [["Land_Cargo_House_V1_F", 0, []]];
structDefs set [_type, [
	"Heavy Vehicle Factory", _price, siBoth, ["", ""],
	true, true, 2, 10, 20,
	_objects, _objects, [], []
]];
structMarker set [_type, _mHeavy];
stHeavy = _type;
_type = _type + 1;

// === 6: Barracks ===
_price = 1500;
_objects = [["Land_Medevac_house_V1_F", 0, []]];
structDefs set [_type, [
	"Barracks", _price, siBoth, ["", ""],
	true, true, 2, 8, 18,
	_objects, _objects, [], []
]];
structMarker set [_type, _mBarrack];
stBarracks = _type;
_type = _type + 1;

// === 7: Air Factory ===
_price = 4000;
_objects = [["Land_Hangar_F", 0, []]];
structDefs set [_type, [
	"Air Factory", _price, siBoth, ["", ""],
	true, true, 1, 15, 25,
	_objects, _objects, [], []
]];
structMarker set [_type, _mAir];
stAir = _type;
_type = _type + 1;

// === 8: Defense Tower ===
_price = 1000;
_objects = [["Land_BagBunker_Tower_F", 0, []]];
structDefs set [_type, [
	"Defense Tower", _price, siBoth, ["", ""],
	false, false, 6, 5, 12,
	_objects, _objects, [], []
]];
structMarker set [_type, _mMG];
stDefTower = _type;
_type = _type + 1;

// === 9: MHQ Wall ===
_price = 200;
_objects = [["Land_HBarrier_Big_F", 0, []]];
structDefs set [_type, [
	"MHQ Wall", _price, siBoth, ["", ""],
	false, false, 20, 3, 8,
	_objects, _objects, [], []
]];
structMarker set [_type, _mMG];
stMhqWall = _type;
TzkMhqWallObjs = [];
TzkMhqWallInfos = [];
_type = _type + 1;

// === 10: Mortar Position ===
_price = 800;
_objects = [["Land_BagFence_Round_F", 0, []]];
structDefs set [_type, [
	"Mortar Position", _price, siBoth, ["", ""],
	false, false, 4, 5, 12,
	_objects, _objects, [], []
]];
structMarker set [_type, _mMortar];
stMortar = _type;
_type = _type + 1;

// === 11: Ship Factory (empty - no A3 vanilla equivalent) ===
_objects = [];
structDefs set [_type, [
	"Ship Factory", 0, siBoth, ["", ""],
	true, true, 0, 0, 0,
	_objects, _objects, [], []
]];
structMarker set [_type, _mShip];
stShip = _type;
_type = _type + 1;

maxStructTypes = _type;

// Critical structures for destruction victory (OFP: structsCritcal)
structsCritcal = [stBarracks, stLight, stHeavy, stAir];

// Structures where AI can respawn
structsRespawn = [stBarracks];

// Structures built/tracked per side
structsBuilt = [[], []];
structMatrix = [[], []];
{
	private _si = _x;
	private _i = 0;
	while {_i < maxStructTypes} do {
		structsBuilt select _si set [_i, 0];
		structMatrix select _si set [_i, []];
		_i = _i + 1;
	};
} forEach [si0, si1];

diag_log format ["TZK CTI: %1 structure types defined", maxStructTypes];
