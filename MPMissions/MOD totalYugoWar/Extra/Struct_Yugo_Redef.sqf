{
	_entry = structDefs select _x; {_entry select _x select 0 set [0, "ViewTower"]} forEach [sdObjects0, sdObjects1];
} forEach [stradarair, stradar, stSatRec];
_entry = structDefs select stLight; {_entry select _x select 0 set [0, "Housebouda3"], _entry select _x select 0 set [1, 180]} forEach [sdObjects0, sdObjects1]; _entry set [sdImage, ["\TotalYugoWarFinal\Images\LightVehicleFactory.jpg", "\TotalYugoWarFinal\Images\LightVehicleFactory.jpg"] ]; _entry set [sdDist, 20];
_entry = structDefs select stComm; {_entry select _x select 0 set [0, "Housebudova5"], _entry select _x select 0 set [1, 270]} forEach [sdObjects0, sdObjects1]; _entry set [sdImage, ["\TotalYugoWarFinal\Images\CommCenter.jpg", "\TotalYugoWarFinal\Images\CommCenter.jpg"] ]; _entry set [sdDist, 15];
_entry = structDefs select stBarracks; {_entry select _x select 0 set [0, "Housebudova4"], _entry select _x select 0 set [1, 270]} forEach [sdObjects0, sdObjects1]; _entry set [sdImage, ["\TotalYugoWarFinal\Images\Barracks.jpg", "\TotalYugoWarFinal\Images\Barracks.jpg"] ];
_entry = structDefs select stHeavy; {_entry select _x set [0, ["Housegaraz_s_tankem", 0, [1,0,0]] ]} forEach [sdObjects0, sdObjects1]; _entry set [sdImage, ["\TotalYugoWarFinal\Images\HeavyVehicleFactory.jpg","\TotalYugoWarFinal\Images\HeavyVehicleFactory.jpg"] ];
_entry = structDefs select stAir; {_entry select _x set [0, ["Hangar_Hall", 0, [-9,0,0]] ]} forEach [sdObjects0, sdObjects1]; _entry set [sdImage, ["\TotalYugoWarFinal\Images\AircraftFactory.jpg","\TotalYugoWarFinal\Images\AircraftFactory.jpg"] ]; _entry set [sdCost, 10000];
_entry = structDefs select stShip; {_entry select _x set [0, ["Houseammostore2", 0, [] ] ]} forEach [sdObjects0, sdObjects1];

{structDefs select _x set [sdSides, -1]} forEach [stShip,stHosp];

_type = stHosp; structDefs resize _type; structMarker resize _type;
_price = [1500, 3000] select PricingMode;
_objects = [["FuelStationNew2", 180, [0,0,0]]];
_image = [_texPath + "Image\Struct\FuelStation.jpg", _texPath + "Image\Struct\FuelStation.jpg"];
structDefs set [_type, ["Fuel Station", _price, siBoth, _image, false, false, 5, 10, 20, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC},  "\TZK_Scripts_4_0_4\Server\InitFuelStation.sqs"], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, "FuelStructure_Marker_xj400"];
_fuelStation = _type;
_type = _type + 1;

_price = [4500, 9000] select PricingMode
_objects0 = [["M252Mortar_TZK_xj400", 0, [0,5,0.1]]];
_objects1 = [["M252Mortar_TZK_E_xj400", 0, [0,5,0.1]]];
_image = ["\TZK_Objects\Texture\icon\iM252.paa","\TZK_Objects\Texture\icon\iM252.paa"];
structDefs set [_type, ["Mortar 81 mm", _price, siBoth, _image, false, false, 6, 2, 10, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_DEF_TOWER}], [localize {TZK_PLAYER_INIT_STRUCT_EH}, localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mMortar];
_mortar1 = _type;
_type = _type + 1;




_objects0 = [["TYW8_MG_W", 0, []]];
_objects1 = [["TYW8_MG_E", 0, []]];
_image = ["\TotalYugoWarFinal\Images\MG.jpg","\TotalYugoWarFinal\Images\MG.jpg"];
structDefs set [_type, ["MG 12.7mm", 300, siBoth, _image, false, false, 10, 2, 5, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mMG];
_mg = _type;
_type = _type + 1;

_objects0 = [["TYW8_MG_W", 0, [1.4,1.3,2.0]], ["Fortress1", 0, []]];
_objects1 = [["TYW8_MG_E", 0, [1.4,1.3,2.0]], ["Fortress1", 0, []]];
_image = ["\TotalYugoWarFinal\Images\MGFort.jpg","\TotalYugoWarFinal\Images\MGFort.jpg"];
structDefs set [_type, ["MG 12.7mm Fort", 500, siBoth, _image, false, false, 10, 2, 10, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mMG];
_mgFort = _type;
_type = _type + 1;

_objects0 = [["TYW8_MG_W", 0, [-0.5,0.5,0]], ["ctiobjects02_pillbox1", 0, []]];
_objects1 = [["TYW8_MG_E", 0, [-0.5,0.5,0]], ["ctiobjects02_pillbox1", 0, []]];
_image = ["\TotalYugoWarFinal\Images\pillbox.jpg","\TotalYugoWarFinal\Images\pillbox.jpg"];
structDefs set [_type, ["MG 12.7mm Pillbox", 500, siBoth, _image, false, false, 10, 2, 10, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mMG];
_mgPillbox = _type;
_type = _type + 1;

_objects0 = [["TYW8_MG_W", 0, [0,0,6]], ["Grey_Turm", 0, []]];
_objects1 = [["TYW8_MG_E", 0, [0,0,6]], ["Grey_Turm", 0, []]];
_image = ["\TotalYugoWarFinal\Images\MGTowerW.jpg","\TotalYugoWarFinal\Images\MGTowerW.jpg"];
structDefs set [_type, ["MG 12.7mm Tower Wood", 600, siBoth, _image, false, false, 10, 2, 10, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mMG];
_mgTowerWood = _type;
_type = _type + 1;

_objects0 = [["TYW8_MG_W", 0, [0,2,7]], ["ctiobjects02_towerconcrete_1", 180, []]];
_objects1 = [["TYW8_MG_E", 0, [0,2,7]], ["ctiobjects02_towerconcrete_1", 180, []]];
_image = ["\TotalYugoWarFinal\Images\MGTowerC.jpg","\TotalYugoWarFinal\Images\MGTowerC.jpg"];
structDefs set [_type, ["MG 12.7mm Tower Concrete", 600, siBoth, _image, false, false, 10, 2, 5, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mMG];
_mgTowerConcrete = _type;
_type = _type + 1;

_objects0 = [["TYW8_Bkm_BumbleBee_w", 0, []]];
_objects1 = [["TYW8_Bkm_BumbleBee_e", 0, []]];
_image = ["\TotalYugoWarFinal\Images\bb.jpg","\TotalYugoWarFinal\Images\bb.jpg"];
structDefs set [_type, ["BumbleBee ATGM(no rearm!)", 800, siBoth, _image, false, false, 10, 2, 5, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mHowitzer];
_BB = _type;
_type = _type + 1;

_objects0 = [["TYW8_KONKURSM_W", 0, []]];
_objects1 = [["TYW8_KONKURSM_e", 0, []]];
_image = ["\TotalYugoWarFinal\Images\KONKURSM.jpg","\TotalYugoWarFinal\Images\KONKURSM.jpg"];
structDefs set [_type, ["KonkursM ATGM", 800, siBoth, _image, false, false, 10, 2, 5, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mHowitzer];
_KONK = _type;
_type = _type + 1;

_objects0 = [["TYW8_DKMM_M46_w", 0, []]];
_objects1 = [["TYW8_DKMM_M46_e", 0, []]];
_image = ["\TotalYugoWarFinal\Images\m46.jpg","\TotalYugoWarFinal\Images\m46.jpg"];
structDefs set [_type, ["M46 Field Gun", 800, siBoth, _image, false, false, 10, 2, 7, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mHowitzer];
_M46 = _type;
_type = _type + 1;

_objects0 = [["ctiobjects02_gunfort", 0, []]];
_objects1 = [["ctiobjects02_gunfort", 0, []]];
_image = ["\TotalYugoWarFinal\Images\GunFort.jpg","\TotalYugoWarFinal\Images\GunFort.jpg"];
structDefs set [_type, ["100mm Gun Fort", 800, siBoth, _image, false, false, 10, 2, 7, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mHowitzer];
_GunFort = _type;
_type = _type + 1;

_objects0 = [["TYW8_VIT_ZU23_W", 0, []]];
_objects1 = [["TYW8_VIT_ZU23_E", 0, []]];
_image = ["\TotalYugoWarFinal\Images\zsu23.jpg","\TotalYugoWarFinal\Images\zsu23.jpg"];
structDefs set [_type, ["AAGuns 23mmx2", 600, siBoth, _image, false, false, 10, 2, 5, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mg];
_AA = _type;
_type = _type + 1;

_objects0 = [["TYW8_VIT_ZU23M_W", 0, []]];
_objects1 = [["TYW8_VIT_ZU23M_E", 0, []]];
_image = ["\TotalYugoWarFinal\Images\zsu23m.jpg","\TotalYugoWarFinal\Images\zsu23m.jpg"];
structDefs set [_type, ["AAGuns 23mmx2+AAML", 1000, siBoth, _image, false, false, 10, 2, 5, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], [localize {TZK_MARKER_STRUCT}]]  ];
structMarker set [_type, _mg];
_AAM = _type;
_type = _type + 1;

_objects = [["ORSComPos", 90, []]];
_image = ["\TotalYugoWarFinal\Images\dugin.jpg","\TotalYugoWarFinal\Images\dugin.jpg"];
structDefs set [_type, ["Dugin Pos", 200, siBoth, _image, false, false, 10, 2, 6, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_dugin = _type;
_type = _type + 1;

_objects = [["PCfoxhole", 180, []]];
_image = ["\TotalYugoWarFinal\Images\foxhole.jpg","\TotalYugoWarFinal\Images\foxhole.jpg"];
structDefs set [_type, ["Foxhole", 200, siBoth, _image, false, false, 10, 2, 6, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_foxHole = _type;
_type = _type + 1;

_objects = [["ctiobjects02_blockconcrete_10x1x10", 90, [0,0,0]]];
_image = ["\TotalYugoWarFinal\Images\WallH.jpg","\TotalYugoWarFinal\Images\WallH.jpg"];
structDefs set [_type, ["Wall High", 200, siBoth, _image, false, false, 50, 0.5, 10, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_wall = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 9.9] ];
_type = _type + 1;

_objects = [["ctiobjects02_blockconcrete_10x1x10", 90, [0,0,-3.5]]];
_image = ["\TotalYugoWarFinal\Images\WallL.jpg","\TotalYugoWarFinal\Images\WallL.jpg"];
structDefs set [_type, ["Wall Low", 100, siBoth, _image, false, false, 50, 0.5, 10, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_walls = _type;
alignTypes set [count alignTypes, _type]; alignDefs set [ count alignDefs, [[0,0], 9.9] ];
_type = _type + 1;

_objects = [ ["ctiobjects02_blockconcrete_testroof", 0, [0,0,4.5]] ];
_image = ["\TotalYugoWarFinal\Images\Roof.jpg","\TotalYugoWarFinal\Images\Roof.jpg"];
structDefs set [_type, ["Roof", 500, siBoth, _image, false, false, 10, 1, 10, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_roof = _type;
_type = _type + 1;

_objects = [ ["ctiobjects02_trench1", 0, [0,0,0]] ];
_image = ["\TotalYugoWarFinal\Images\Trench.jpg","\TotalYugoWarFinal\Images\Trench.jpg"];
structDefs set [_type, ["Tank Trench", 600, siBoth, _image, false, false, 50, 5, 10, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_tanktr = _type;
_type = _type + 1;

_objects = [["RKSL_scudnet_US", 0, []]];
_image = ["\TotalYugoWarFinal\Images\net3.jpg","\TotalYugoWarFinal\Images\net3.jpg"];
structDefs set [_type, ["CAMO Net full", 300, siBoth, _image, false, false, 10, 2, 10, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_netFull = _type;
_type = _type + 1;

_objects = [["RKSL_HowitzNET_US", 0, []]];
_image = ["\TotalYugoWarFinal\Images\net1.jpg","\TotalYugoWarFinal\Images\net1.jpg"];
structDefs set [_type, ["CAMO Net roof", 300, siBoth, _image, false, false, 10, 2, 15, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, ""];
_netRoof = _type;
_type = _type + 1;

_objects = [["RKSL_LGE_US", 0, []]];
_image = ["\TotalYugoWarFinal\Images\net2.jpg","\TotalYugoWarFinal\Images\net2.jpg"];
structDefs set [_type, ["CAMO Net tent", 300, siBoth, _image, false, false, 10, 2, 10, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, "MedicVehicle_Marker_xj400"];
_netTent = _type;
_type = _type + 1;

_price = [500, 1000] select PricingMode;
_objects0 = [["ReammoBoxWest", 0, []]];
_objects1 = [["ReammoBoxEast", 0, []]];
_image = [_texPath + "Image\Struct\ammoCr.jpg",_texPath + "Image\Struct\ammoCr.jpg"];
structDefs set [_type, ["Ammo Crate", _price, siBoth, _image, false, false, 10, 5, 8, _objects0, _objects1, [localize {TZK_SERVER_INIT_STRUCT_SEC}], ["\TZK_Scripts_4_0_5\Common\InitAmmocrate.sqs"]]  ];
structMarker set [_type, ""];
stAmmoCrate = _type;
_type = _type + 1;
_objects = [["heliH", 0, []]];
_image = ["\TotalYugoWarFinal\Images\HeliH.jpg","\TotalYugoWarFinal\Images\HeliH.jpg"];
structDefs set [_type, ["Heli H", 100, siBoth, _image, false, false, 10, 5, 15, _objects, _objects, [localize {TZK_SERVER_INIT_STRUCT_SEC}], []] ];
structMarker set [_type, "HeliH_Marker_xj400"];
_heliH = _type;
_type = _type + 1;


structsRespawn = structsRespawn - [stHosp]; structsCritcal = structsCritcal - [stComm];

structsShelter = [_dugin, _foxHole, _wall, _walls, _roof, _tanktr, _netFull, _netRoof, _netTent, stAmmoCrate, _heliH];
structsOccupiableMortar = [_mortar1];
structsOccupiableArtilleryMortar = [_mortar1];
structsOccupiableMGGround = [_mg, _mgFort, _mgPillbox, _AA, _AAM];
structsOccupiableMGTower = [_mgTowerWood, _mgTowerConcrete];
structsOccupiableGunfort = [_GunFort, _BB, _KONK];
structsOccupiableHowitzer = [_M46];
structsDefence = structsOccupiableMortar + structsOccupiableMGGround + structsOccupiableMGTower + structsOccupiableGunfort + structsOccupiableHowitzer;

if isServer Then {
baseDefs resize 0;

_base = [];
_prims = [];
_prims set [count _prims, [stHeavy, 0, [7, 25], 180] ];
_prims set [count _prims, [stComm, 1, [0, -10], 0] ];
_prims set [count _prims, [stBarracks, 1, [-6.5, 0], 0] ];

_prims set [count _prims, [stLight, 1, [-9, 25], 90] ];
_prims set [count _prims, [stBarracks, 1, [6.5, 0], 180] ];

_prims set [count _prims, [stAir, 15, [0, -60], 180] ];

_prims set [count _prims, [stHeavy, 30, [-18, -60], 90] ];
_prims set [count _prims, [stHeavy, 90, [20, -60], 270] ];

_base set [0, _prims];

_secs = [];
_secs set [count _secs, [_roof, 5, [-5, 5], 90] ];
_secs set [count _secs, [_wall, 5, [-10.2, 5], 90] ];
_secs set [count _secs, [_roof, 5, [-5, -5], 90] ];
_secs set [count _secs, [_wall, 5, [-10.2, -5], 90] ];
_secs set [count _secs, [_roof, 5, [5, 5], 270] ];
_secs set [count _secs, [_wall, 5, [10.2, 5], 270] ];
_secs set [count _secs, [_roof, 5, [5, -5], 270] ];
_secs set [count _secs, [_wall, 5, [10.2, -5], 270] ];
_secs set [count _secs, [_heliH, 16, [40, 0], 90] ];
_secs set [count _secs, [_heliH, 16, [-40, 0], 270] ];

_base set [1, _secs];

baseDefs set [count baseDefs, _base];
};