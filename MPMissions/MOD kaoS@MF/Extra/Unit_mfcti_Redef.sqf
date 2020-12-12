_entry = unitDefs select _m2a2W; _entry set [udModel, "MFCTI116M2A2"]; _entry set [udName, "M2A2"]; _entry set [udCost, 1300]; _entry set [udBuildTime, 40]; _entry set [udScripts, []];
_entry = unitDefs select _m3a2W; _entry set [udModel, "MFCTI116M3A2"]; _entry set [udName, "M3A2"]; _entry set [udCost, 1500]; _entry set [udBuildTime, 40]; _entry set [udFactoryType, 2^stHeavy]; _entry set [udScripts, []];
_entry = unitDefs select _tankLightW01; _entry set [udModel, "MFCTI116M60"]; _entry set [udName, "M60"]; _entry set [udCost, 1000]; _entry set [udBuildTime, 40];
_entry = unitDefs select _tankLightW02; _entry set [udModel, "MFCTI116M60A3"]; _entry set [udName, "M60A3"]; _entry set [udCost, 1400]; _entry set [udBuildTime, 40]; _entry set [udFactoryType, 2^stHeavy];
_entry = unitDefs select _tankHeavyW01; _entry set [udModel, "MFCTI116M1"]; _entry set [udName, "M1"]; _entry set [udCost, 3000]; _entry set [udBuildTime, 50];
_entry = unitDefs select _tankHeavyW02; _entry set [udModel, "MFCTI116M1A1"]; _entry set [udName, "M1A1"]; _entry set [udCost, 4000]; _entry set [udBuildTime, 50]; _entry set [udImage, "iabrams"]; _entry set [udFactoryType, 2^stHeavy];

_entry = unitDefs select _bmpE; _entry set [udModel, "MFCTI116BMP1"]; _entry set [udName, "BMP"]; _entry set [udCost, 1000]; _entry set [udBuildTime, 35]; _entry set [udScripts, []];
_entry = unitDefs select _bmp2E; _entry set [udModel, "MFCTI116BMP2"]; _entry set [udName, "BMP2"]; _entry set [udCost, 1300]; _entry set [udBuildTime, 40]; _entry set [udScripts, []];
_entry = unitDefs select _bmp2_EE; _entry set [udModel, "MFCTI116BMP2E"]; _entry set [udName, "BMP2E"]; _entry set [udCost, 1500]; _entry set [udBuildTime, 40]; _entry set [udFactoryType, 2^stHeavy]; _entry set [udScripts, []];
_entry = unitDefs select _tankLightE01; _entry set [udModel, "MFCTI116T72"]; _entry set [udName, "T72"]; _entry set [udCost, 1700]; _entry set [udBuildTime, 40];
_entry = unitDefs select _tankLightE02; _entry set [udModel, "MFCTI116T72A"]; _entry set [udName, "T72A"]; _entry set [udCost, 1900]; _entry set [udBuildTime, 40]; _entry set [udFactoryType, 2^stHeavy];
_entry = unitDefs select _tankLightE03; _entry set [udModel, "MFCTI116T72B"]; _entry set [udName, "T72B"]; _entry set [udCost, 2200]; _entry set [udBuildTime, 40]; _entry set [udFactoryType, 2^stHeavy];
_entry = unitDefs select _tankHeavyE01; _entry set [udModel, "MFCTI116T80"]; _entry set [udName, "T80"]; _entry set [udCost, 2600]; _entry set [udBuildTime, 50];
_entry = unitDefs select _tankHeavyE02; _entry set [udModel, "MFCTI116T80B"]; _entry set [udName, "T80B"]; _entry set [udCost, 3000]; _entry set [udBuildTime, 50]; _entry set [udImage, "it80"]; _entry set [udFactoryType, 2^stHeavy];
_entry = unitDefs select _tankHeavyE03; _entry set [udModel, "MFCTI116T80U"]; _entry set [udName, "T80U"]; _entry set [udCost, 3400]; _entry set [udBuildTime, 50]; _entry set [udImage, "it80"]; _entry set [udFactoryType, 2^stHeavy];

comment "Recover build-able units banned in vanilla mode.";
{unitDefs select _x set [udFactoryType, 2^stHeavy]} forEach [_tankLightE01, _tankLightW02];


if bool_TZK_ETON_Mod Then {
	_entry = unitDefs select _tankLightE01; _entry set [udModel, "T62_mfcti_Eton508_xj400"]; _entry set [udName, "T62"]; _entry set [udCost, 1000];
	_entry = unitDefs select _tankLightE02; _entry set [udModel, "T72A_mfcti_Eton508_xj400"];
	_entry = unitDefs select _tankLightE03; _entry set [udModel, "T72B_mfcti_Eton508_xj400"];
	_entry = unitDefs select _tankHeavyE01; _entry set [udModel, "T80_mfcti_Eton508_xj400"];
};
	