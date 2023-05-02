stWall = _wall;
stBaseMg = _mg;

structMarker set [stAmmoCrate, "AmmoStructure_Marker_xj400"];
_scripts = structDefs select stAmmoCrate select sdScriptsPlayer;
_scripts set [count _scripts, localize {TZK_MARKER_STRUCT}];

structDefs select _tankt set [sdLimit, 500];

// Add structure items
_oldCount = count structDefs;

_price = [1500, 3000] select PricingMode;
_objects0 = [["GapGenerator_W_xj400", 0, []]];
_objects1 = [["GapGenerator_E_xj400", 0, []]];
_image = [_texPath + "Image\Struct\MGTower.jpg",_texPath + "Image\Struct\MGTower.jpg"];
structDefs set [_type, [
	"Gap Generator",
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

structsShelter set [count structsShelter, stGapGenerator];

_index = _oldCount; _count = count structDefs; while {_index < _count} do {
	structMatrix select si0 set [_index, []];
	structMatrix select si1 set [_index, []];

	structsBuilt select si0 set [_index, 0];
	structsBuilt select si1 set [_index, 0];

	_index = _index + 1;
};

// define global variable for server to adjust style. This is temporary codes
TzkAdjustStyleStructIdx = [_wall, _walls, _roof, _roofHigh, _tanktr, _artPlain];