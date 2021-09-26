if (!bool_TZK_Vanilla_Mode && !bool_TZK_SEMod_Mode) Then {
	comment "Fix su25 error on basic TZK missions.";
	{_entry = unitDefs select _x, _entry set [udModel, "Su25_xj400"]} forEach [_su25gun, _su25LGB4, _su25LGB8, _su25Rocket, _su25BB, _su25Raduga];
	_entry = unitDefs select _su25Rocket, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Rocket.sqs"];
	_entry = unitDefs select _su25BB, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25BB.sqs"];
	_entry = unitDefs select _su25Raduga, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Raduga.sqs"];
	comment "Band a error-defined unit";
	unitDefs select _irNO_mi2 set [udFactoryType, -1];
};

comment "Remove redundant planes and redefine remained ones.";
_type = _a10bombs; while {_type <= _a10Tomahawk} do {
	unitDefs select _type set [udFactoryType, -1]; _type = _type + 1;
};
_type = _su25bombs; while {_type <= _su25Raduga} do {
	unitDefs select _type set [udFactoryType, -1]; _type = _type + 1;
};
unitDefs select _a10LGB4 set [udName, "A10"];
unitDefs select _a10LGB4 set [udCost, 15000];
unitDefs select _a10LGB4 set [udModel, "A10_xj400"];
unitDefs select _a10LGB4 set [udScripts, [
	"\TZK_Scripts_4_0_4\Common\Equip\A10bombs.sqs",  "Common\InitSpawnPlane.sqs"
]];
unitDefs select _su25LGB4 set [udName, "Su25"];
unitDefs select _su25LGB4 set [udCost, 15000];
unitDefs select _su25LGB4 set [udModel, "Su25_xj400"];
unitDefs select _su25LGB4 set [udScripts, [
	"\TZK_Scripts_4_0_4\Common\Equip\Su25bombs.sqs", "Common\InitSpawnPlane.sqs"
]];
unitsBuyAI select si0 select utbPlane select 0 set [0, _a10LGB4];
unitsBuyAI select si1 select utbPlane select 0 set [0, _su25LGB4];
unitDefs select _a10gun set [udName, "A10 (AA Only)"];	unitDefs select _su25gun set [udName, "Su25 (AA Only)"];


comment "SE requrests.";
if bool_TZK_SEMod_Mode then {
	vDoubledRange = [_vulcanW, _shilkaE, _m2a2aa, _bmp2aa, _vulcanTransp, _bmp2Cannon, _boatW3, _boatE3, _vulcanBaseW, _shilkaBaseE, _patrolboatW, _patrolboatE];
	vUnlimitedRange = [_m1a1artW, _m109artW, _t80artE, _plz05artE, _vulcanW2, _vulcanBaseW2, _tunguskaE, _tunguskaBaseE, _patrolshipW, _patrolshipE];
};
comment "Define global variable for nuke planes";
typesNuke = [_a10Tomahawk, _su25Raduga];

comment "After having called the 'impl\Unit.sqf', the unitTypeData and unitTypeArray should be re-defined.";
unitTypeArray resize 0; unitTypeData resize 0;
_type = 0;
{if ((_x select udModel) in unitTypeArray) then {_i = unitTypeArray find (_x select udModel); _list = unitTypeData select _i; _list set [count _list, _type]} else {unitTypeData set [_type, [_type]]}; unitTypeArray set [_type, _x select udModel], _type = _type + 1} forEach unitDefs;