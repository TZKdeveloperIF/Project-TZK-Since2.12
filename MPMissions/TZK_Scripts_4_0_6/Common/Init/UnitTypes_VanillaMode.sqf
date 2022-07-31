{unitDefs select _x set [udFactoryType, -1]} forEach [
	_M82A1W, _KSVKE, _quadW, _quadE, _hummerW2, _hummerW3, _brdmE2, _brdmE3, 
	_jetskiW, _jetskiE, _zodiacW, _zodiacE, _boatW2, _boatE2, 
	_vulcanTransp, _bmp2Cannon,  _tankHeavyW02, _tankHeavyW03, _m109W, _m270W, 
	_tankHeavyE02, _tankHeavyE03, _plz05E, _tos1E,  _irNO_mh6, _irNO_uh60, _uh60WMG2, 
	_c130W, _tigerW, _tigerW2, _c130supportW, _irNO_mi2, _irNO_mi17, _mi17EMG2, _an72E, _an72supportE
];

if !bool_TZK_199_Mode then {
	_i = 0; {
		_desc = _x, if (count (_desc select udCrew) == 0) then {
			_str = _desc select udModel, _size = sizeofstr _str;
			if (substr [_str, _size - 6, _size] == "_xj400") then {_str = substr [_str, 0, _size - 6]}, _
			desc set [udModel, _str]
		}, 
		_i = _i + 1;
	} forEach unitDefs;
	{_desc = unitDefs select _x, _str = _desc select udModel, _size = sizeofstr _str, if (substr [_str, _size - 6, _size] == "_xj400") then {_str = substr [_str, 0, _size - 6] + "_Vanilla" + "_xj405"}, _desc set [udModel, _str] } forEach ([_jeepW, jeepaW, _hummerW, _truckW, _supportTruckW, _supportTruckW2, _supportAPCW, _supportAPCWminer, _m113W, _m2a2W, _m3a2W, _m2a2d, _m2a2at, _m2a2aa, _m2a2townat, _m2a2townaad, utMCVW, utMHQ0, _uazE, uazaE, _brdmE, _truckE, _supportTruckE, _supportTruckE2, _supportAPCE, _supportAPCEminer, _bmpE, _bmp2E, _bmp2_EE, _bmp2d, _bmp2at, _bmp2Cannon, _bmp2aa, _bmp2townat, _bmp2townaad, utMCVE, utMHQ1] + [_a10gun, _a10LGB4, _a10bombs, _a10, _a10FFAR, _a10LGB8, _a10AA, _a10BB, _a10Tomahawk, _an72supportE, _su25gun, _su25LGB4, _su25bombs, _su25, _su25Rocket, _su25LGB8, _su25AA, _su25BB, _su25Raduga]);
};

if bool_TZK_199_Mode then {call loadFile "Extra\199\UnitTypes_ACWA_Redefine.sqf"};


{unitDefs select _x set [udCost, (unitDefs select _x select udCost)*4/5]; unitDefs select _x set [udModel, "M1Abrams"];} forEach [_tankHeavyW01, _m1a1townW];
{unitDefs select _x set [udCost, (unitDefs select _x select udCost)/2]; unitDefs select _x set [udModel, "T80"]} forEach [_tankHeavyE01, _t80townE];
unitDefs select _t80R set [udModel, "T80Res"];
unitDefs select _tankLightW01 set [udModel, "M60"]; unitDefs select _tankLightW02 set [udFactoryType, -1]; 
unitDefs select _tankLightE01 set [udFactoryType, -1]; unitDefs select _tankLightE02 set [udModel, "T72"];
{unitDefs select _x set [udModel, "Vulcan"]} forEach [_vulcanBaseW, _vulcanBaseW2, _vulcanAutoW, _vulcanW2];
{unitDefs select _x set [udModel, "ZSU"]} forEach [_shilkaBaseE, _tunguskaBaseE, _shilkaAutoE, _tunguskaE];
unitDefs select _tunguskaE set [udName, "4xAA"]; unitDefs select _tunguskaE set [udImage, "izsu"];

unitDefs select _ah1W set [udModel, "AH1_xj400"]; unitDefs select _ah1W set [udName, "AH1"]; unitDefs select _ah1W set [udImage, "icobra"];
unitDefs select _ah1W2 set [udModel, "AH1_AT_xj400"]; unitDefs select _ah1W2 set [udName, "AH1 AT"]; unitDefs select _ah1W2 set [udImage, "icobra"];
unitDefs select _ah64W set [udModel, "AH64_xj400"];
unitDefs select _ah64W2 set [udModel, "AH64_AT_xj400"];
unitDefs select _ah64townW2 set [udModel, "AH64_xj400"];
unitDefs select _v80E set [udModel, "Ka50_Vanilla_xj405"];
unitDefs select _v80E2 set [udModel, "Ka50_AT_Vanilla_xj405"];
unitDefs select _mi24E set [udModel, "Mi24_xj400"]; unitDefs select _mi24E set [udImage, "imi24"];
unitDefs select _mi24E2 set [udModel, "Mi24_AT_xj400"]; unitDefs select _mi24E2 set [udImage, "imi24"];
unitDefs select _mi24townE2 set [udModel, "Mi24_xj400"]; unitDefs select _mi24townE2 set [udImage, "imi24"];
{unitDefs select _x set [udModel, "Mi17_Vanilla_xj405"]} forEach [_mi17E, _mi17supE];
{unitDefs select _x set [udModel, "UH60_Vanilla_xj405"]} forEach [_uh60W, _uh60supW];
unitDefs select _mi17E30 set [udModel, "Mi17_MG_Vanilla_xj405"];
unitDefs select _uh60W30 set [udModel, "UH60_MG_Vanilla_xj405"];
unitDefs select _mi17EL set [udModel, "Mi17_LGB_Vanilla_xj405"];
unitDefs select _uh60WL set [udModel, "UH60_LGB_Vanilla_xj405"];

{unitDefs select _x set [udModel, "Su25_xj400"]} forEach [_planeatR, _planeatR2];


call preprocessFile "impl\Unit_Vanilla_Redef.sqf"
