comment "Missed bug of SE design in InitEquipmentTypes Line 102.";
if bool_TZK_SEMod_Mode Then {
	magsRespawnPlayer4 = [ [_mSG551, _mSG551, _mSG551, "WW4_JavelinMag", _medkit], [_mRPK74SD, _mRPK74SD, _mRPK74SD, "ICPRPG29Mag", _medkit] ];
	magsRespawnPlayer9 = [ ["G36aMag", "G36aMag", "G36aMag", "WW4_JavelinMag", magSatchel], [m_TZK_AK107, m_TZK_AK107, m_TZK_AK107, "ICPRPG29Mag"] ];
};

comment "Allow buying MineAPE in game";
_type = equipSearch find "MineAPE";
if (-1 != _type) then {
	equipDefs select _type set [edSides, siBoth];
};

comment "Add few weapons with magazines in weaponSearch and equipSearch array for artillery module in ACWA. There're only few kinds so won't occupy too many items.";

_type = count equipDefs;

equipDefs set [_type, ["Heat105", -1, -1, 2, "Heat105", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atHeat105 = _type;
_type = _type + 1;
equipDefs set [_type, ["Shell105", -1, -1, 2, "Shell105", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atShell105 = _type;
_type = _type + 1;
equipDefs set [_type, ["Heat120", -1, -1, 2, "Heat120", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atHeat120 = _type;
_type = _type + 1;
equipDefs set [_type, ["Shell120", -1, -1, 2, "Shell120", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atShell120 = _type;
_type = _type + 1;
equipDefs set [_type, ["Mortar81_0200_xj400", -1, -1, 2, "Mortar81_0200_xj400", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atMortar81_0200 = _type;
_type = _type + 1;
equipDefs set [_type, ["Mortar81_0201_xj400", -1, -1, 2, "Mortar81_0201_xj400", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atMortar81_0201 = _type;
_type = _type + 1;
equipDefs set [_type, ["Mortar81_0202_xj400", -1, -1, 2, "Mortar81_0202_xj400", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atMortar81_0202 = _type;
_type = _type + 1;
equipDefs set [_type, ["Mortar81_0080_xj400", -1, -1, 2, "Mortar81_0080_xj400", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atMortar81_0080 = _type;
_type = _type + 1;
equipDefs set [_type, ["Mortar81_0120_xj400", -1, -1, 2, "Mortar81_0120_xj400", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atMortar81_0120 = _type;
_type = _type + 1;
equipDefs set [_type, ["Mortar81_0180_xj400", -1, -1, 2, "Mortar81_0180_xj400", "",0 ]];
equipSearch set [_type, equipDefs select _type select edObject];
_atMortar81_0180 = _type;
_type = _type + 1;

_type = count weaponDefs;
weaponDefs set [_type, ["Gun105", -1, -1, "Gun105", "", [[_atHeat105,0],[_atShell105,0]] ,0]];
weaponSearch set [_type, weaponDefs select _type select wdObject];
_type = _type + 1;
weaponDefs set [_type, ["Gun120", -1, -1, "Gun120", "", [[_atHeat120,0],[_atShell120,0]] ,0]];
weaponSearch set [_type, weaponDefs select _type select wdObject];
_type = _type + 1;
weaponDefs set [_type, ["Mortar81_Launcher_xj400", -1, -1, "Mortar81_Launcher_xj400", "", [[_atMortar81_0200,0],[_atMortar81_0201,0],[_atMortar81_0202,0],[_atMortar81_0080,0],[_atMortar81_0120,0],[_atMortar81_0180,0]] ,0]];
weaponSearch set [_type, weaponDefs select _type select wdObject];
_type = _type + 1;
weaponDefs set [_type, ["Mortar82_Launcher_xj400", -1, -1, "Mortar82_Launcher_xj400", "", [[_atMortar81_0200,0],[_atMortar81_0201,0],[_atMortar81_0202,0],[_atMortar81_0080,0],[_atMortar81_0120,0],[_atMortar81_0180,0]] ,0]];
weaponSearch set [_type, weaponDefs select _type select wdObject];
_type = _type + 1;