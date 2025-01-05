comment {structDefs defines all buildable structures} ;
alignDefs = []; alignTypes = [];

structDefs = []; structMarker = [];

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

comment {Structure Markers} ;

_mBarrack = "Soldier_Marker_xj400";
_mLight = "Truck_Marker_xj400";
_mShip = "Boat_Marker_xj400";
_mHeavy = "Tank_Marker_xj400";
_mAir = "Plane_Marker_xj400";

_mCC = "Sign_Marker_xj400";


_mHowitzer = "FieldGun_Marker_xj400";
_mMortar = if !bool_TZK_199_Mode then {"Mortar_Marker_xj400"} else {"Bike_Marker_xj400"};
_mMG = "MachineGun_Marker_xj400";
_mRadar = "Tower_Marker_xj400";

comment {knowsAbout level for enemy structure reports} ;
kaStruct = 1;

comment {object format: [oName, nRot, aPos]} ;
_type = 0; _texPath = "\TZK_Texture_4_0_0\CTI_";
if bool_TZK_Vanilla_Mode then {_texPath = "\TZK_Objects\"};

_price = [2000, 3000] select PricingMode;
_objects = [["StromHaus1_xj400", 270, []]];
_image = [_texPath + "Image\Struct\maptower.jpg", _texPath + "Image\Struct\maptower.jpg"];
structDefs set [_type, [
	"Air Radar - 4000m range",
	_price,
	siBoth,
	_image,
	false,
	false,
	10, 5, 15, _objects, _objects,
	[(TzkScripts select 216)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mRadar];
stradarair = _type;
_type = _type + 1;


_price = [2000, 4000] select PricingMode;
_objects = [["StromHaus1_xj400", 270, []]];
_image = [_texPath + "Image\Struct\maptower.jpg", _texPath + "Image\Struct\maptower.jpg"];
structDefs set [_type, [
	"Map Marker Tower",
	_price,
	siBoth,
	_image,
	false,
	false,
	4, 5, 15, _objects, _objects,
	[(TzkScripts select 216)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mRadar];
stradar = _type;
_type = _type + 1;

_price = [2000, 4000] select PricingMode;
_objects = [["StromHaus1_xj400", 270, []]];
_image = [_texPath + "Image\Struct\camtower.jpg", _texPath + "Image\Struct\camtower.jpg"];
structDefs set [_type, [
	"Unit Camera Tower",
	_price,
	siBoth,
	_image,
	false,
	false,
	4, 5, 15, _objects, _objects,
	[(TzkScripts select 216)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mRadar];
stSatRec = _type;
_type = _type + 1;


_price = [2000, 4000] select PricingMode;
_objects = [["LF_xj400", 0, []]];
_image = [_texPath + "Image\Struct\LightVehicleFactory.jpg", _texPath + "Image\Struct\LightVehicleFactory.jpg"];
structDefs set [_type, [
	"Light Vehicle Factory", _price, siBoth, _image, true, true, 2, 10, 20, _objects, _objects,
	[(TzkScripts select 216), (TzkScripts select 075)],
	["Player\Init\LightVehicleFactory.sqs", (TzkScripts select 162)]]
];
structMarker set [_type, _mLight];
stLight = _type;
_type = _type + 1;


_price = [2000, 4000] select PricingMode;
_objects = [["CC_xj400", 0, []]];
_image = [_texPath + "Image\Struct\CommCenter.jpg", _texPath + "Image\Struct\CommCenter.jpg"];
structDefs set [_type, [
	"Command Center", _price, siBoth, _image, true, true, 2, 5, 20, _objects, _objects,
	[(TzkScripts select 216)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mCC];
stComm = _type;
_type = _type + 1;

_price = [4000, 8000] select PricingMode;
_objects = [["Bar_xj400", 180, []]];
_image = [_texPath + "Image\Struct\Barracks.jpg", _texPath + "Image\Struct\Barracks.jpg"];
structDefs set [_type, [
	"Barracks", _price, siBoth, _image, true, true, 2, 10, 20, _objects, _objects,
	[(TzkScripts select 216), (TzkScripts select 075)],
	["Player\Init\Barracks.sqs", (TzkScripts select 162)]]
];
structMarker set [_type, _mBarrack];
stBarracks = _type;
_type = _type + 1;

_price = [8000, 16000] select PricingMode;
_objects = [["HF_xj400", 0, [1,0,0]]];
_image = [_texPath + "Image\Struct\HeavyVehicleFactory.jpg",_texPath + "Image\Struct\HeavyVehicleFactory.jpg"];
structDefs set [_type, [
	"Heavy Vehicle Factory", _price, siBoth, _image, true, true, 2, 10, 20, _objects, _objects,
	[(TzkScripts select 216), (TzkScripts select 075)],
	["Player\Init\HeavyVehicleFactory.sqs", (TzkScripts select 162)]]
];
structMarker set [_type, _mHeavy];
stHeavy = _type;
_type = _type + 1;

_price = [16000, 32000] select PricingMode;
_objects = [["AirF_Green_xj400", 0, [0,0,0]]];
_image = [_texPath + "Image\Struct\AircraftFactory.jpg",_texPath + "Image\Struct\AircraftFactory.jpg"];
structDefs set [_type, [
	"Aircraft Factory", _price, siBoth, _image, true, true, 2, 20, 35, _objects, _objects,
	[(TzkScripts select 216), (TzkScripts select 075)],
	["Player\Init\AircraftFactory.sqs", (TzkScripts select 162)]]
];
structMarker set [_type, _mAir];
stAir = _type;
_type = _type + 1;


_price = [1000, 2000] select PricingMode;
_objects = [["Dach1_xj400", 180, [0,0,0]]];
_image = [_texPath + "Image\Struct\Shipyard.jpg", _texPath + "Image\Struct\Shipyard.jpg"];
structDefs set [_type, [
	"Shipyard",
	_price,
	siBoth,
	_image,
	false,
	false,
	2, 10, 20, _objects, _objects,
	[(TzkScripts select 216), (TzkScripts select 075)],
	["Player\Init\ShipyardFactory.sqs", (TzkScripts select 162)]]
];
structMarker set [_type, _mShip];
stShip = _type;
_type = _type + 1;

_price = [500, 1000] select PricingMode;
_objects = [["MASH", 180, []]];
_image = ["\TZK_Objects\Image\Struct\Hospital.paa", "\TZK_Objects\Image\Struct\Hospital.paa"];
structDefs set [_type, [
	"Field Hospital", 
	_price, 
	-1, 
	_image, 
	false, 
	false, 10, 4, 15, _objects, _objects,
	[(TzkScripts select 216)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, "MedicVehicle_Marker_xj400"];
stHosp = _type;
_type = _type + 1;

_price = [1500, 3000] select PricingMode;
_objects = [["FuelStationNew2", 180, [0,0,0]]];
_image = [_texPath + "Image\Struct\FuelStation.jpg", _texPath + "Image\Struct\FuelStation.jpg"];
structDefs set [_type, [
	"Fuel Station",
	_price,
	siBoth,
	_image,
	false,
	false,
	5, 10, 20, _objects, _objects,
	[(TzkScripts select 217),  "\TZK_Patch4_4_0_6\s\Server\InitFuelStation.sqs"],
	[(TzkScripts select 162)]]
];
structMarker set [_type, "FuelStructure_Marker_xj400"];
_fuelStation = _type;
_type = _type + 1;

_price = [4500, 9000] select PricingMode;
_objects0 = [["M252Mortar_TZK_xj400", 0, [0,5,0.1]]];
_objects1 = [["PP87_TZK_xj400", 0, [0,5,0.1]]];
_image = ["\TZK_Objects\Texture\icon\iM252.paa","\TZK_CONFIG_4_0_5\Tex\PP87.paa"];
structDefs set [_type, [
	"Mortar 81 (82) mm",
	_price,
	siBoth,
	_image,
	false,
	false,
	6, 2, 10, _objects0, _objects1,
	[(TzkScripts select 215)],
	[(TzkScripts select 193), (TzkScripts select 162)]]
];
structMarker set [_type, _mMortar];
_mortar1 = _type;
_type = _type + 1;

_price = [1500, 3000] select PricingMode;
_objects0 = [["m119_xj400", 0, []]];
_objects1 = [];
_image = ["\TZK_Texture_4_0_0\icon\iM119.paa","\TZK_Texture_4_0_0\icon\iM119.paa"];
structDefs set [_type, [
	"M119 105mm Howitzer", _price, si0, _image, false, false, 15, 2, 10, _objects0, _objects1,
	[(TzkScripts select 215), "Common\Equip\M119Svr.sqs"],
	[(TzkScripts select 193), (TzkScripts select 162)]]
];
structMarker set [_type, _mHowitzer];
_m119 = _type;
_type = _type + 1;

_price = [2500, 5000] select PricingMode;
_objects0 = [];
_objects1 = [["D30_xj400", 0, []]];
_image = ["\TZK_Texture_4_0_0\icon\iD30A.paa","\TZK_Texture_4_0_0\icon\iD30A.paa"];
structDefs set [_type, [
	"D30-A Howitzer", _price, si1, _image, false, false, 15, 2, 10, _objects0, _objects1,
	[(TzkScripts select 215), "Common\Equip\D30ASvr.sqs"],
	[(TzkScripts select 193), (TzkScripts select 162)]]
];
structMarker set [_type, _mHowitzer];
_d30 = _type;
_type = _type + 1;

_price = [500, 1000] select PricingMode;
_objects0 = [["M2StaticMG_W_xj400", 0, [1.4,1.3,2.0]], ["fort_xj400", 0, []]];
_objects1 = [["M2StaticMG_E_xj400", 0, [1.4,1.3,2.0]], ["fort_xj400", 0, []]];
_image = [_texPath + "Image\Struct\MGFort.jpg",_texPath + "Image\Struct\MGFort.jpg"];
structDefs set [_type, [
	"MG Fort",
	_price,
	siBoth,
	_image,
	false,
	false,
	20, 2, 15, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mMG];
_mgFort = _type;
_type = _type + 1;

_price = [600, 1200] select PricingMode;
_objects0 = [["M2StaticMG_W_xj400", 0, [0,0,6]], ["WoodTower_xj400", 0, []]];
_objects1 = [["M2StaticMG_E_xj400", 0, [0,0,6]], ["WoodTower_xj400", 0, []]];
_image = [_texPath + "Image\Struct\MGTowerW.jpg",_texPath + "Image\Struct\MGTowerW.jpg"];
structDefs set [_type, [
	"MG Tower",
	_price,
	siBoth,
	_image,
	false,
	false,
	20, 2, 10, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mMG];
_mgTowerWood = _type;
_type = _type + 1;

_price = [600, 1200] select PricingMode;
_objects0 = [["M2StaticMG_W_xj400", 0, [0,2,7]], ["ConcreteTower_xj400", 180, []]];
_objects1 = [["M2StaticMG_E_xj400", 0, [0,2,7]], ["ConcreteTower_xj400", 180, []]];
_image = [_texPath + "Image\Struct\MGTowerC.jpg",_texPath + "Image\Struct\MGTowerC.jpg"];
structDefs set [_type, [
	"MG Tower",
	_price,
	siBoth,
	_image,
	false,
	false,
	20, 2, 10, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mMG];
_mgTowerConcrete = _type;
_type = _type + 1;

_price = [300, 600] select PricingMode;
_objects0 = [["M2_tripod_una_xj400", 0, []]];
_objects1 = [["NSV_ICP_xj400", 0, []]];
_image = [_texPath + "Image\Struct\MG.jpg",_texPath + "Image\Struct\MG.jpg"];
structDefs set [_type, [
	"MG 12.7mm",
	_price,
	siBoth,
	_image,
	false,
	false,
	25, 2, 5, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mMG];
_mg = _type;
_type = _type + 1;

_price = [1200, 2400] select PricingMode;
_objects0 = [["M220TOW_una_xj400", 0, []]];
_objects1 = [["Metis_rcwc_xj400", 0, []]];
_image = ["\tzk_texture_4_0_6\rcwc\town_220.paa", "\tzk_texture_4_0_6\rcwc\town_220.paa"];
structDefs set [_type, [
	"Static Launcher",
	_price,
	-1,
	_image,
	false,
	false,
	25, 2, 5, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, _mMG];
_staticAaLauncher = _type;
_type = _type + 1;


_price = [300, 600] select PricingMode;
_objects0 = [["RCWC_M2_tripod", 0, []]];
_objects1 = [["ICP_NSV", 0, []]];
_image = ["Extra\ppl\MG.jpg","Extra\ppl\MG.jpg"];
structDefs set [_type, [
	"Static MG 12.7mm",
	_price,
	siBoth,
	_image,
	false,
	false,
	25, 2, 5, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]] ];
structMarker set [_type, _mMG];
_staticMG = _type;
_type = _type + 1;

_price = [800, 1200] select PricingMode;
_objects0 = [["una_Mk19_gl_static", 0, []]];
_objects1 = [["armags30East", 0, []]];
_image = ["Extra\ppl\MG.jpg","Extra\ppl\MG.jpg"];
structDefs set [_type, [
	"Static GL",
	_price,
	siBoth,
	_image,
	false,
	false,
	25, 2, 5, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]] ];
structMarker set [_type, _mMG];
_staticGL = _type;
_type = _type + 1;

_price = [1000, 2000] select PricingMode;
_objects0 = [["una_m220tow_Static", 0, []]];
_objects1 = [["Static_Metis_88", 0, []]];
_image = ["Extra\ppl\AT-Launcher.jpg","Extra\ppl\AT-Launcher.jpg"];
structDefs set [_type, [
	"Static AT-Launcher",
	_price,
	siBoth,
	_image,
	false,
	false,
	25, 2, 5, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]] ];
structMarker set [_type, _mMG];
_staticAT = _type;
_type = _type + 1;
if !bool_TZK_SEMod_Mode then {
	{structDefs select _x set [sdSides, -1]} forEach [_staticMG, _staticGL, _staticAT];
};


_price = [1000, 1000] select PricingMode;
_objects0 = [["gunfort_west_xj400", 0, []]];
_objects1 = [["gunfort_east_xj400", 0, []]];
_image = [_texPath + "Image\Struct\gunfort.jpg",_texPath + "Image\Struct\gunfort.jpg"];
structDefs set [_type, [
	"Gunfort",
	_price,
	siBoth,
	_image,
	false,
	false,
	15, 2, 25, _objects0, _objects1,
	[(TzkScripts select 217)],
	[(TzkScripts select 162), (TzkScripts select 162)]]
];
structMarker set [_type, "TD_Marker_xj400"];
_gunf = _type;
_type = _type + 1;

_price = [300, 600] select PricingMode;
_objects = [["wall_xj400", 90, [0,0,0]]];
_image = [_texPath + "Image\Struct\WallH.jpg",_texPath + "Image\Struct\WallH.jpg"];
structDefs set [_type, [
	"Wall",
	_price,
	siBoth,
	_image,
	false,
	false,
	75, 0.5, 15, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_wall = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 9.9] ];
_type = _type + 1;

_price = [100, 200] select PricingMode;
_objects = [["wall_xj400", 90, [0,0,-3.5]]];
_image = [_texPath + "Image\Struct\WallL.jpg",_texPath + "Image\Struct\WallL.jpg"];
structDefs set [_type, [
	"Wall Low",
	_price,
	siBoth,
	_image,
	false,
	false,
	75, 0.5, 15, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_walls = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 9.9] ];
_type = _type + 1;

_price = [500, 1000] select PricingMode;
_objects = [ ["roof_xj400", 0, [0,0,4.5]] ];
_image = [_texPath + "Image\Struct\Roof.jpg",_texPath + "Image\Struct\Roof.jpg"];
structDefs set [_type, [
	localize {TZK_LANG_ROOF}, _price, siBoth, _image, true, false, 30, 1, 20, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_roof = _type;
_type = _type + 1;

_price = [600, 1200] select PricingMode;
_objects = [ ["roof_xj400", 0, [0,0,9]] ];
_image = [_texPath + "Image\Struct\Roof.jpg",_texPath + "Image\Struct\Roof.jpg"];
structDefs set [_type, [
	format ["%1 %2", localize {TZK_LANG_HIGH}, localize {TZK_LANG_ROOF}], _price, siBoth, _image, true, false, 30, 1, 20, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_roofHigh = _type;
_type = _type + 1;

_price = [200, 400] select PricingMode;
_objects = [ ["trench_xj400", 0, [0,0,0]] ];
_image = [_texPath + "Image\Struct\Trench.jpg",_texPath + "Image\Struct\Trench.jpg"];
structDefs set [_type, [
	"Tank Trench", _price, siBoth, _image, true, false, 50, 5, 20, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_tanktr = _type;
if bool_TZK_SEMod_Mode then {tanktr = _tanktr};
_type = _type + 1;

_price = [600, 1200] select PricingMode;
_objects = [ ["ArtPlain_xj400", 0, [0,0,0]] ];
_image = [_texPath + "Image\Struct\Roof.jpg",_texPath + "Image\Struct\Roof.jpg"];
structDefs set [_type, [
	"Artillery Plain", _price, siBoth, _image, true, false, 12, 15, 15, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_artPlain = _type;
_type = _type + 1;

_price = [20, 40] select PricingMode;
_objects = [["sandbag_xj400", 90, []]];
_image = [_texPath + "Image\Struct\Sandbags.jpg",_texPath + "Image\Struct\Sandbags.jpg"];
structDefs set [_type, [
	"Sand Bags",
	_price,
	siBoth,
	_image,
	false,
	false,
	100, 1, 10, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_sandbag = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 2.2] ];
_type = _type + 1;

_price = [50, 100] select PricingMode;
_objects = [["Wire", 0, []]];
_image = [_texPath + "Image\Struct\Wire.jpg",_texPath + "Image\Struct\Wire.jpg"];
structDefs set [_type, [
	"Tank Trap",
	_price,
	siBoth,
	_image,
	false,
	false,
	500, 5, 10, _objects, _objects,
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
_tankt = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 6] ];
_type = _type + 1;

_price = [500, 1000] select PricingMode;
_objects0 = [["ReammoBoxWest", 0, []]];
_objects1 = [["ReammoBoxEast", 0, []]];
_image = [_texPath + "Image\Struct\ammoCr.jpg",_texPath + "Image\Struct\ammoCr.jpg"];
structDefs set [_type, [
	"Ammo Crate",
	_price,
	siBoth,
	_image,
	false,
	false,
	10, 5, 8, _objects0, _objects1,
	[(TzkScripts select 217)],
	["\TZK_Scripts_4_0_5\Common\InitAmmocrate.sqs", (TzkScripts select 162)]]
];
structMarker set [_type, "AmmoStructure_Marker_xj400"];
stAmmoCrate = _type;
_type = _type + 1;

_price = [100, 200] select PricingMode;
_objects = [["heliH", 0, []]];
_image = [_texPath + "Image\Struct\HeliH.jpg",_texPath + "Image\Struct\HeliH.jpg"];
structDefs set [_type, [
	"Heli H",
	_price,
	siBoth,
	_image,
	false,
	false,
	20, 5, 15, _objects, _objects,
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, "HeliH_Marker_xj400"];
_heliH = _type;
_type = _type + 1;

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
	[(TzkScripts select 217)], []]
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
	[(TzkScripts select 217)],
	[(TzkScripts select 162)]]
];
structMarker set [_type, "RadarCar_Marker_xj400"];
stGapGenerator = _type;
_type = _type + 1;

_price = 200;
_objects = [["Bridge2_xj400", 0, []]];
_image = [_texPath + "Image\Struct\WallH.jpg",_texPath + "Image\Struct\WallH.jpg"];
structDefs set [_type, [
	"Bridge",
	_price,
	-1,
	_image,
	false,
	false,
	100, 0, 0, _objects, _objects,
	[(TzkScripts select 216), "Bridge\AddEh.sqs"],
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
	[(TzkScripts select 217)],
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
	[(TzkScripts select 217)],
	[]]
];
st20mHeightRoof = _type;
_type = _type + 1;

comment {define special wall ONLY for "wall MHQ"} ;
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
	[(TzkScripts select 217)], []]
];
structMarker set [_type, ""];
stMhqWall = _type;
_type = _type + 1; 

stWall = _wall;
stLowWall = _walls;
stSandBag = _sandbag;
stBaseMg = _mg;
stBaseTowerMg = _mgTowerWood;
stBaseT55 = _gunf;
stTankTrap = _tankt;



structMatrix = [ [], [] ];
structsBuilt = [ [], [] ];

_index = 0; _count = count structDefs; while {_index < _count} do {
	structMatrix select si0 set [_index, []];
	structMatrix select si1 set [_index, []];

	structsBuilt select si0 set [_index, 0];
	structsBuilt select si1 set [_index, 0];

	_index = _index + 1;
};

structsRespawn = [stComm, stBarracks, stLight, stHeavy, stAir, stHosp];
structsCritcal = [stComm, stBarracks, stLight, stHeavy, stAir];
structsDestroy = [stComm, stBarracks, stLight, stHeavy, stAir, stShip, stradarair, stradar, stSatRec];
structsFactory = [stBarracks, stLight, stHeavy, stAir, stShip];

structsDefence = [
	_mgFort, _mgTowerWood, _mgTowerConcrete, _mg, _staticAaLauncher,
	_gunf, _mortar1, _m119, _d30, 
	_staticMG, _staticGL, _staticAT
];
structsShelter = [_wall, _walls, _roof, _roofHigh, _tanktr, _artPlain, _tankt, _sandbag, stAmmoCrate, _heliH, st10mHeightRoof, st20mHeightRoof, stMhqWall, stWireFence, stGapGenerator];
structsOccupiableMortar = [_mortar1];
structsOccupiableArtilleryMortar = [_mortar1];
structsOccupiableMGGround = [_mg, _mgFort,  _staticMG, _staticGL, _staticAT];
structsOccupiableMGTower = [_mgTowerWood, _mgTowerConcrete];
structsOccupiableGunfort = [_gunf, _staticAaLauncher];
structsOccupiableHowitzer = [_m119, _d30];
comment {for RTS build structure classify} ;
structsWalls = [_wall, _walls, _roof, _roofHigh, _tanktr, _artPlain, _sandbag];
structBuilding = []; structBuilding resize count structDefs;
_i = 0; while {_i < count structDefs} do {structBuilding set [_i, _i]; _i = _i + 1};
structBuilding = structBuilding - structsCritcal - structsDefence - structsWalls - [stTankTrap, stWireFence];


comment {do server stuff only} ;
if isServer then {
	comment {format [type, timeBuild, posRelMhq, dirBuilder]} ;
	comment {dirBuilder is the direction the builder faces when building the structure} ;
	bdType = 0; bdTime = 1; bdPos = 2; bdDir = 3;
	baseDefs = [];
	if !bool_TZK_MF_Mode then {
		_base = [];
		_prims = [];
		_prims set [count _prims, [stHeavy, 0.5, [-18, -60], 90] ];
		_prims set [count _prims, [stHeavy, 0.5, [0, -80], 0] ];
		_prims set [count _prims, [stHeavy, 0.5, [20, -60], 270] ];
		_prims set [count _prims, [stHeavy, 0.5, [7, 25], 180] ];
		_prims set [count _prims, [stLight, 0.5, [-9, 24.5], 90] ];
		_prims set [count _prims, [stComm, 2, [21, 24], 0] ];
		_prims set [count _prims, [stradar, 2, [30, 30], 0] ];
		_prims set [count _prims, [stSatRec, 2, [30, 40], 0] ];
		_prims set [count _prims, [stradarair, 2, [50, 50], 0] ];
		_prims set [count _prims, [stBarracks, 5, [-6.5, 0], 0] ];
		_prims set [count _prims, [stBarracks, 5, [6.5, 0], 0] ];
		_prims set [count _prims, [stAir, 5, [0, -60], 180] ];
		_base set [0, _prims];

		_secs = [];
		_secs set [count _secs, [_heliH, 0, [50, 20], 90] ];
		_secs set [count _secs, [_heliH, 0, [50, -20], 90] ];
		_secs set [count _secs, [_heliH, 0, [-50, 20], 270] ];
		_secs set [count _secs, [_heliH, 0, [-50, -20], 270] ];
		_secs set [count _secs, [_wall, 15, [-15.2, 15], 270] ];
		_secs set [count _secs, [_wall, 15, [-15.2, 5], 270] ];
		_secs set [count _secs, [_wall, 15, [-15.2, -5], 270] ];
		_secs set [count _secs, [_wall, 15, [15.2, 10], 90] ];
		_secs set [count _secs, [_wall, 15, [15.2, 0], 90] ];
		_secs set [count _secs, [_wall, 15, [15.2, -10], 90] ];
		_secs set [count _secs, [_wall, 15, [0, -8.4], 180] ];
		_secs set [count _secs, [_wall, 15, [10, -8.4], 180] ];
		_secs set [count _secs, [_roof, 15, [0, -3], 180] ];
		_secs set [count _secs, [_roof, 15, [0, 7], 180] ];
		_secs set [count _secs, [_roof, 15, [10, -3], 180] ];
		_secs set [count _secs, [_roof, 15, [10, 7], 180] ];
		_secs set [count _secs, [_roof, 15, [-10, -3], 180] ];
		_secs set [count _secs, [_roof, 15, [-10, 7], 180] ];
		_base set [1, _secs];

		baseDefs set [count baseDefs, _base];
	} else {
		_base = [];
		_prims = [];
		_prims set [count _prims, [stHeavy, 0, [-2, 15], 180] ];
		_prims set [count _prims, [stradar, 2, [30, 30], 0] ];
		_prims set [count _prims, [stSatRec, 2, [30, 40], 0] ];
		_prims set [count _prims, [stradarair, 2, [50, 50], 0] ];
		_prims set [count _prims, [stLight, 0.5, [10, 0], 180] ];
		_prims set [count _prims, [stComm, 2, [-12, 2], 90] ];
		_prims set [count _prims, [stBarracks, 5, [-12, -14.5], 0] ];
		_prims set [count _prims, [stBarracks, 5, [-1, -51], 270] ];
		_prims set [count _prims, [_mgFort, 5, [-35.2, -5], 270] ];
		_prims set [count _prims, [_mgFort, 5, [35.2, -10], 90] ];
		_prims set [count _prims, [stHeavy, 30, [-23, -10], 90] ];
		_prims set [count _prims, [stAir, 40, [60, 0], 90] ];
		_base set [0, _prims];

		_secs = [];
		_secs set [count _secs, [_heliH, 40, [50, 20], 90] ];
		_secs set [count _secs, [_heliH, 40, [50, -20], 90] ];
		_secs set [count _secs, [_heliH, 40, [-50, 20], 270] ];
		_secs set [count _secs, [_heliH, 40, [-50, -20], 270] ];
		_base set [1, _secs];
		baseDefs set [count baseDefs, _base];
	};
};

call preprocessFile "impl\Struct.sqf";

if bool_TZK_Yugo_Mode then {
	call loadFile "Extra\Struct_Yugo_Redef.sqf";
} else {
	if bool_TZK_Vanilla_Mode then {
		comment {Remove baracken/dvd_v2 structures} ;
		{structDefs select _x set [sdSides, -1]} forEach [_m119, _d30, _mgTowerConcrete, _gunf, _roof, _roofHigh, _tanktr, _artPlain];
		structDefs select _mgTowerWood set [sdImage, ["\TZK_Objects\Image\Struct\MGTower.jpg","\TZK_Objects\Image\Struct\MGTower.jpg"]];

		{structDefs select stradar set [_x, [["ViewTower", 270, []]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stSatRec set [_x, [["ViewTower", 270, []]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stradarair set [_x, [["ViewTower", 270, []]]  ]} forEach [sdObjects0, sdObjects1];

		{structDefs select stBarracks set [_x, [["Housebudova4", 90, []]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stLight set [_x, [["Housebouda3", 180, []]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stHeavy set [_x, [["Housegaraz_s_tankem", 0, [1,0,0]]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stAir set [_x, [["Hangar_Hall", 0, [-9,0,0]]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stComm set [_x, [["Housebudova5", 270, []]]  ]} forEach [sdObjects0, sdObjects1];
		{structDefs select stShip set [_x, [["Houseammostore2", 0, []]]  ]} forEach [sdObjects0, sdObjects1];

		structDefs select _mgFort set [sdObjects0, [["M2StaticMG", 0, [1.4,1.3,2.0]], ["Fortress1", 0, []]]  ];
		structDefs select _mgFort set [sdObjects1, [["M2StaticMGE", 0, [1.4,1.3,2.0]], ["Fortress1", 0, []]]  ];
		structDefs select _mgTowerWood set [sdObjects0, [["M2StaticMG", 0, [0,0.5,7]], ["ViewTower", 0, []]]  ];
		structDefs select _mgTowerWood set [sdObjects1, [["M2StaticMGE", 0, [0,0.5,7]], ["ViewTower", 0, []]]  ];
		structDefs select _mg set [sdObjects0, [["M2StaticMG", 0, []]]  ];
		structDefs select _mg set [sdObjects1, [["M2StaticMGE", 0, []]]  ];

		{structDefs select _wall set [_x, [["Fortress1", 0, []] ]  ]} forEach [sdObjects0, sdObjects1]; structDefs select _wall set [sdName, "Fortress High"];
		{structDefs select _walls set [_x, [["Fortress1", 0, [0,0,-2.0]] ]  ]} forEach [sdObjects0, sdObjects1]; structDefs select _walls set [sdName, "Fortress"];
		{structDefs select _sandbag set [_x, [["FenceWood", 90, []]]  ]} forEach [sdObjects0, sdObjects1];

		if bool_TZK_MF_Mode then {
			structDefs select stHeavy set [sdOnlyCO, false];
			structDefs select stAir set [sdOnlyCO, false];

			structDefs select stHosp set [sdSides, _siBoth];

			_entry = structDefs select _wall; _entry set [sdName, "Concrete Wall High"];
			_entry set [sdObjects0, [["MFCTI116WestLargeWall", 0, [0,0,1]], ["MFCTI116WestLargeWall", 0, [0,0.2,0]], ["MFCTI116WestLargeWall", 0, [0,-0.2,0]]] ];
			_entry set [sdObjects1, [["MFCTI116EastLargeWall", 0, [0,0,1]], ["MFCTI116EastLargeWall", 0, [0,0.2,0]], ["MFCTI116EastLargeWall", 0, [0,-0.2,0]]] ];
			alignDefs select (alignTypes find _wall) set [1, 5.6];

			_entry = structDefs select _walls; _entry set [sdName, "Concrete Wall Low"];
			_entry set [sdObjects0, [["MFCTI116WestLargeWall", 0, [0,0,-1.8]]] ];
			_entry set [sdObjects1, [["MFCTI116EastLargeWall", 0, [0,0,-1.8]]] ];
			alignDefs select (alignTypes find _walls) set [1, 5.6];
		};
	} else {
		0 exec "impl\StructAdjustStyle.sqs";
	};
};

comment {EOF} ;