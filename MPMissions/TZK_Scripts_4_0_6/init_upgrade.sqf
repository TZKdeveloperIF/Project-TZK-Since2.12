comment {args: string (script interface)};

comment {UPGRADES};
comment {upgDefs entry format: [sName, nCost, nMinutes]};
comment {The constant used for passing upg is 100 thus quite enough up till now};
_type = 0; upgDefs = [];

upgTL = _type;
upgDefs set [_type, [
	"Update Leader Weapons",
	[4000, 4] select dev,
	[1, 0] select dev
]];
_type = _type + 1;

upgTownGroup = _type;
upgDefs set [_type, [
	"Town Groups",
	[4000, 4] select dev,
	[1, 0] select dev
]];
_type = _type + 1;

upgTownGroupb = _type;
upgDefs set [_type, [
	"Town Groups Armor",
	[15000, 15] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgTownGroupH = _type;
upgDefs set [_type, [
	"Town Armors Heavy",
	[60000 + 5000*restanksx, 6] select dev,
	[5, 0] select dev
]];
_type = _type + 1;

upgRadarArtillery = _type;
upgDefs set [_type, [
	"Artillery Radar",
	[5000, 5] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgLongWeaponRange = _type;
upgDefs set [_type, [
	format [{%1m Range Weapons}, 2 *viewDistance],
	[30000, 30] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgCCdistance = _type;
upgDefs set [_type, [
	format [{%1m CC range}, distMaxCCUpgraded],
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgNumBuildings = _type;
upgDefs set [_type, [
	"More Buildings",
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgSatCam = _type;
upgDefs set [_type, [
	"Satellite Camera",
	[35000, 35] select dev,
	[5, 0] select dev
]];
_type = _type + 1;

upgSatCamZoom = _type;
upgDefs set [_type, [
	"Satellite Camera Zoom",
	[20000, 20] select dev,
	[1, 0] select dev
]];
_type = _type + 1;

upgSpySat = _type;
upgDefs set [_type, [
	"Spy Satellite",
	[95000, 95] select dev,
	[6, 0] select dev
]];
_type = _type + 1;

upgWorkers = _type;
upgDefs set [_type, [
	"Upgrade Workers",
	[5000, 5] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgGunshipRocket = _type;
upgDefs set [_type, [
	"Helicopter Rockets",
	[25000, 25] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgPlaneAfterBurner = _type;
upgDefs set [_type, [
	"Plane After Burner",
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
	"Aircraft Spoof Missile",
	[20000, 20] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgAltFlight = _type;
upgDefs set [_type, [
	"1500m Flight Altitude",
	[30000, 30] select dev,
	[3, 0] select dev
]];
_type = _type + 1;

upgVehicleAirRadar = _type;
upgDefs set [_type, [
	"Vulcan/Shilka AirRadar",
	[8000, 8] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgRedTopRange = _type;
upgDefs set [_type, [
	"4xAA 4000m Missile",
	[8000, 8] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

upgRedTopMagazines = _type;
upgDefs set [_type, [
	"4xAA 2x Magazines",
	[8000, 8] select dev,
	[2, 0] select dev
]];
_type = _type + 1;

if ("" != _this) then {call preprocessFile _this};

comment {upgMatrix entry format: 0=not begun, 1=in progress, 2=upgraded};
upgMatrix = [ [], [] ];
{
	_si = _x;
	_i = 0; _c = count upgDefs; while {_i < _c} do {
		upgMatrix select _si set [_i, 0];
		_i = _i + 1;
	};
} forEach [si0, si1];