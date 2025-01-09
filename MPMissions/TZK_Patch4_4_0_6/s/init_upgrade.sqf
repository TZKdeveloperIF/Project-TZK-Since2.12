comment {args: string (script interface)} ;

comment {UPGRADES} ;
comment {upgDefs entry format: [sName, nCost, nMinutes]} ;
comment {The constant used for passing upg is 100 thus quite enough up till now} ;
_type = 0; upgDefs = [];

upgTL = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_WEAPON},
	[4000, 4] select dev,
	[1, 0] select dev
]];
_type = _type + 1;

upgTownGroup = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_TG},
	[4000, 4] select dev,
	[1, 0] select dev
]];
_type = _type + 1;

upgTownGroupb = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_TGA},
	[15000, 15] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgTownGroupH = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_TGAH},
	[60000 + 5000*restanksx, 6] select dev,
	[5, 0] select dev
]];
_type = _type + 1;

upgInfLevel2 = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_INF_LV2},
	[2000, 20] select dev,
	[1, 0] select dev
]];
_type = _type + 1;

upgInfLevel3 = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_INF_LV3},
	[5000, 50] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgInfLevel4 = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_INF_LV4},
	[10000, 100] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgRadarArtillery = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_ART_RADAR},
	[5000, 5] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgLongWeaponRange = _type;
upgDefs set [_type, [
	format [{%1m %2}, 2 *viewDistance, localize {TZK_LANG_UPG_LONG_RANGE}],
	[30000, 30] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgCCdistance = _type;
upgDefs set [_type, [
	format [{%1m %2}, distMaxCCUpgraded, localize {TZK_LANG_UPG_CC_DIST}],
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgNumBuildings = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_BUILDINGS},
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgSatCam = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_SATELLITE},
	[35000, 35] select dev,
	[5, 0] select dev
]];
_type = _type + 1;

upgSatCamZoom = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_SAT_ZOOM},
	0,
	0
]];
_type = _type + 1;

upgSpySat = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_SPY_SAT},
	[95000, 95] select dev,
	[6, 0] select dev
]];
_type = _type + 1;

upgWorkers = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_WORKER},
	[5000, 5] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgGunshipRocket = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_HELI_ROC},
	[25000, 25] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgPlaneAfterBurner = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_PLANE_AB},
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;
if bool_TZK_SEMod_Mode then {
	upgDefs select upgPlaneAfterBurner set [1, 0];
	upgDefs select upgPlaneAfterBurner set [2, 0];
};

upgSpoofMissile = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_SPOOF},
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgAltFlight = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_FLY_HEIGHT},
	[30000, 30] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgVehicleAirRadar = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_AA_RADAR},
	[8000, 8] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgRedTopRange = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_4000m_AA},
	[8000, 8] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgRedTopMagazines = _type;
upgDefs set [_type, [
	localize {TZK_LANG_UPG_2x_MAG},
	[8000, 8] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

if ("" != _this) then {call preprocessFile _this};

comment {upgMatrix entry format: 0=not begun, 1=in progress, 2=upgraded} ;
upgMatrix = [ [], [] ];
{
	_si = _x;
	_i = 0; _c = count upgDefs; while {_i < _c} do {
		upgMatrix select _si set [_i, 0];
		_i = _i + 1;
	};
	comment {Init the upgRedTopRange upgrade, recover 4xAA 4000m range as in crcti@res2c3c8};
	upgMatrix select _si set [upgRedTopRange, 2];
} forEach [si0, si1];