// Redefine type class to those objects whose dynamic texture is disabled by 4.0.6 patch2
_entry = unitDefs select _tankHeavyW01; _entry set [udModel, "M1A1_G_xj400"];
_entry = unitDefs select _tankHeavyW03; _entry set [udModel, "Leo2A6_C_xj400"];
_entry = unitDefs select _m1a1townW; _entry set [udModel, "M1A1_G_xj400"];
_entry = unitDefs select _tankHeavyE01; _entry set [udModel, "T80_G_xj400"];
_entry = unitDefs select _tankHeavyE03; _entry set [udModel, "ZTZ99_C_xj400"];
_entry = unitDefs select _t80townE; _entry set [udModel, "T80_G_xj400"];

{_entry = unitDefs select _x; _entry set [udModel, "M113Ambul_G_xj400"]} forEach [_supportAPCW, _supportAPCWminer];
{_entry = unitDefs select _x; _entry set [udModel, "BMPAmbul_G_xj400"]} forEach [_supportAPCE, _supportAPCEminer];

{_entry = unitDefs select _x; _entry set [udModel, "MHQW_G_xj400"]} forEach [utMHQ0];
{_entry = unitDefs select _x; _entry set [udModel, "MHQE_G_xj400"]} forEach [utMHQ1];

{_entry = unitDefs select _x; _entry set [udModel, "M2A2_G_AA_xj400"]} forEach [_m2a2W,_m3a2W,_m2a2d,_m2a2at,_m2a2aa];
{_entry = unitDefs select _x; _entry set [udModel, "BMP2_G_AA_xj400"]} forEach [_bmp2E,_bmp2_EE,_bmp2d,_bmp2at,_bmp2Cannon,_bmp2aa];

{_entry = unitDefs select _x; _entry set [udModel, "M2A2_G_AA_Town_xj400"]} forEach [_m2a2townat, _m2a2townaad];
{_entry = unitDefs select _x; _entry set [udModel, "BMP2_G_AA_Town_xj400"]} forEach [_bmp2townat, _bmp2townaad];

_entry = unitDefs select _t80R; _entry set [udModel, "T80Res_TZK_G_xj406"];
