stWall = _wall;
stLowWall = _walls;
stSandBag = _sandbag;
stBaseMg = _mg;
stBaseTowerMg = _mgTowerWood;
stBaseT55 = _gunf;

structMarker set [stAmmoCrate, "AmmoStructure_Marker_xj400"];
_scripts = structDefs select stAmmoCrate select sdScriptsPlayer;
_scripts set [count _scripts, localize {TZK_MARKER_STRUCT}];

structMarker set [stBaseT55, "TD_Marker_xj400"];
_scripts = structDefs select stBaseT55 select sdScriptsPlayer;
_scripts set [count _scripts, localize {TZK_MARKER_STRUCT}];

structDefs select _tankt set [sdLimit, 500];
structDefs select _tankt set [sdMaxRadius, 5];
stTankTrap = _tankt;

// Init howtizer structures with 120m/s magazine
_entry = structDefs select _m119 select sdScriptsServer;
_entry set [count _entry, "Common\Equip\M119Svr.sqs"];
_entry = structDefs select _d30 select sdScriptsServer;
_entry set [count _entry, "Common\Equip\D30ASvr.sqs"];

// Add structure items
_oldCount = count structDefs;

_price = [20, 40] select PricingMode;
_objects = [["WireFence", 0, []]];
_image = [_texPath + "Image\Struct\fence.jpg",_texPath + "Image\Struct\fence.jpg"];
structDefs set [_type, [
	"Wire fence",
	_price,
	siBoth,
	_image,
	false,
	false,
	500, 2, 10, _objects, _objects,
	[localize {TZK_SERVER_INIT_STRUCT_SEC}], []]
];
structMarker set [_type, ""];
stWireFence = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 8] ];
_type = _type + 1;

_price = [1500, 3000] select PricingMode;
_objects0 = [["GapGenerator_W_xj400", 0, []]];
_objects1 = [["GapGenerator_E_xj400", 0, []]];
_image = [_texPath + "Image\Struct\MGTower.jpg",_texPath + "Image\Struct\MGTower.jpg"];
structDefs set [_type, [
	localize {TZK_LANG_GAP_GENERATOR},
	_price,
	siBoth,
	_image,
	false,
	false,
	2, 5, 15, _objects0, _objects1,
	[localize {TZK_SERVER_INIT_STRUCT_SEC}],
	[localize {TZK_MARKER_STRUCT}]]
];
structMarker set [_type, "RadarCar_Marker_xj400"];
stGapGenerator = _type;
_type = _type + 1;

_price = 200;
_objects = [["Bridge", 0, []]];
_image = [_texPath + "Image\Struct\WallH.jpg",_texPath + "Image\Struct\WallH.jpg"];
structDefs set [_type, [
	"Bridge",
	_price,
	-1,
	_image,
	false,
	false,
	100, 0, 0, _objects, _objects,
	[localize {TZK_SERVER_INIT_STRUCT_PRIM}, "Bridge\AddEh.sqs"],
	[]]
];
stBridge = _type;
_type = _type + 1;

_price = 100;
_objects = [["roof_xj400", 0, [0,0,10]]];
_image = [_texPath + "Image\Struct\Roof.jpg",_texPath + "Image\Struct\Roof.jpg"];
structDefs set [_type, [
	format ["%1 10m %2", localize {TZK_LANG_ROOF}, localize {TZK_LANG_HEIGHT}],
	_price,
	-1,
	_image,
	false,
	false,
	75, 1, 20, _objects, _objects,
	[localize {TZK_SERVER_INIT_STRUCT_SEC}],
	[]]
];
st10mHeightRoof = _type;
_type = _type + 1;

_price = 100;
_objects = [["roof_xj400", 0, [0,0,20]]];
_image = [_texPath + "Image\Struct\Roof.jpg",_texPath + "Image\Struct\Roof.jpg"];
structDefs set [_type, [
	format ["%1 20m %2", localize {TZK_LANG_ROOF}, localize {TZK_LANG_HEIGHT}],
	_price,
	-1,
	_image,
	false,
	false,
	75, 1, 20, _objects, _objects,
	[localize {TZK_SERVER_INIT_STRUCT_SEC}],
	[]]
];
st20mHeightRoof = _type;
_type = _type + 1;

// define special wall ONLY for "wall MHQ"
_price = [300, 600] select PricingMode;
_objects = [["wall_xj400", 90, [0,0,0]]];
_image = [_texPath + "Image\Struct\WallH.jpg",_texPath + "Image\Struct\WallH.jpg"];
structDefs set [_type, [
	"MHQ Wall",
	_price,
	-1,
	_image,
	false,
	false,
	75, 0.5, 15, _objects, _objects,
	[localize {TZK_SERVER_INIT_STRUCT_SEC}], []]
];
structMarker set [_type, ""];
stMhqWall = _type;
_type = _type + 1; 

// add to structsShelter
structsShelter set [count structsShelter, st10mHeightRoof];
structsShelter set [count structsShelter, st20mHeightRoof];
structsShelter set [count structsShelter, stMhqWall];

// Support roof with multiple language
structDefs select _roof set [sdName, localize {TZK_LANG_ROOF}];
structDefs select _roofHigh set [sdName, format ["%1 %2", localize {TZK_LANG_HIGH}, localize {TZK_LANG_ROOF}]];
// // Add count limit of roof
// structDefs select _roof set [sdLimit, 75];
// structDefs select _roofHigh set [sdLimit, 75];
// // Reduce roof price
// structDefs select _roof set [sdCost, 100];
// structDefs select _roofHigh set [sdCost, 100];

structsShelter set [count structsShelter, stWireFence];
structsShelter set [count structsShelter, stGapGenerator];
// [structsShelter, [stWireFence, stGapGenerator]] call preprocessFile "Util\ArrayAppend.sqf";

// for RTS build structure classify
structsWalls = [_wall, _walls, _roof, _roofHigh, _tanktr, _artPlain, _sandbag];
structBuilding = []; structBuilding resize count structDefs;
_i = 0; while {_i < count structDefs} do {structBuilding set [_i, _i]; _i = _i + 1};
structBuilding = structBuilding - structsCritcal - structsDefence - structsWalls - [stTankTrap, stWireFence];

_index = _oldCount; _count = count structDefs; while {_index < _count} do {
	structMatrix select si0 set [_index, []];
	structMatrix select si1 set [_index, []];

	structsBuilt select si0 set [_index, 0];
	structsBuilt select si1 set [_index, 0];

	_index = _index + 1;
};

// define global variable for server to adjust style. This is temporary codes
TzkAdjustStyleStructIdx = [_wall, _walls, _roof, _roofHigh, _tanktr, _artPlain];

// CWA_CE doesn't have "res.pbo" addon. Need redefine markers
if (UsedVersion >= 2020) then {
	_mCC = "UnknownStructure_Marker_xj400";
	structMarker set [stComm, _mCC];

	_mRadar = "Orca_Marker_xj400";
	{structMarker set [_x, _mRadar]} forEach [stradarair, stradar, stSatRec];
};