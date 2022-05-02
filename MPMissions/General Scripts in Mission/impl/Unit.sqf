if (!bool_TZK_Vanilla_Mode && !bool_TZK_SEMod_Mode) Then {
	comment "Fix su25 error on basic TZK missions.";
	{_entry = unitDefs select _x, _entry set [udModel, "Su25_xj400"]} forEach [_su25gun, _su25LGB4, _su25LGB8, _su25Rocket, _su25BB, _su25Raduga];
	_entry = unitDefs select _su25Rocket, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Rocket.sqs"];
	_entry = unitDefs select _su25BB, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25BB.sqs"];
	_entry = unitDefs select _su25Raduga, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Raduga.sqs"];
	comment "Band a error-defined unit";
	unitDefs select _irNO_mi2 set [udFactoryType, -1];
};

if true then {
	comment "Remove redundant planes and redefine remained ones.";
	_name0 = []; _i = 0; _c = count (groupMatrix select si0); while {_i < _c} do {
		_name0 set [_i, name leader (groupMatrix select si0 select _i)];
		_i = _i + 1;
	};
	_name1 = []; _i = 0; _c = count (groupMatrix select si1); while {_i < _c} do {
		_name1 set [_i, name leader (groupMatrix select si1 select _i)];
		_i = _i + 1;
	};

	_type = _a10LGB4; while {_type <= _a10Tomahawk} do {
		if (_type != _a10) then {unitDefs select _type set [udFactoryType, -1], unitDefs select _type set [udName, "(empty)"]};
		_type = _type + 1;
	};
	_type = _su25LGB4; while {_type <= _su25Raduga} do {
		if (_type != _su25) then {unitDefs select _type set [udFactoryType, -1], unitDefs select _type set [udName, "(empty)"]};
		_type = _type + 1;
	};
	unitDefs select _a10 set [udName, "A10"];
	unitDefs select _a10 set [udCost, 15000];
	if (-1 != _name0 find "J10A" && -1 == _name1 find "IF") then {
		unitDefs select _a10 set [udCost, 25000];
	};
	if (!bool_TZK_199_Mode && !bool_TZK_Vanilla_Mode) then {unitDefs select _a10 set [udModel, "A10_xj400"]};
	unitDefs select _a10 set [udScripts, [
		"Common\Equip\PlaneCustom.sqs",  "Common\InitSpawnPlane.sqs"
	]];
	unitDefs select _su25 set [udName, "Su25"];
	unitDefs select _su25 set [udCost, 15000];
	if (-1 != _name1 find "J10A" && -1 == _name0 find "IF") then {
		unitDefs select _su25 set [udCost, 25000];
	};
	if (!bool_TZK_199_Mode && !bool_TZK_Vanilla_Mode) then {unitDefs select _su25 set [udModel, "Su25_xj400"]};
	unitDefs select _su25 set [udScripts, [
		"Common\Equip\PlaneCustom.sqs", "Common\InitSpawnPlane.sqs"
	]];
	unitDefs select _a10gun set [udName, "A10 (AA Only)"];
	unitDefs select _su25gun set [udName, "Su25 (AA Only)"];
	unitDefs select _su25gun set [udName, "Su25 (AA Only)"];

	comment "Adjust gunships.";
	{
		unitDefs select _x set [udCost, (unitDefs select _x select udCost) - 5000];
		unitDefs select _x set [udScripts, [
			"Common\Equip\Gunship.sqs", "Common\InitGunship.sqs", "\TZK_Scripts_4_0_4\Common\Init\V80.sqs"
		]];
	} forEach [_v80E, _v80E2];
	{
		unitDefs select _x set [udCost, (unitDefs select _x select udCost) - 5000];
		unitDefs select _x set [udScripts, [
			"Common\Equip\Gunship.sqs", "Common\InitGunship.sqs"
		]];
	} forEach [_mi24E, _mi24E2, _mi24E3, _ah1W, _ah64W, _tigerW, _ah1W2, _ah64W2, _tigerW2];
	comment "Adjust helicopters.";
	{
		unitDefs select _x set [udFactoryType, -1], unitDefs select _x set [udName, "(empty)"]
	} forEach [_uh60W30, _uh60WL, _mi17E30, _mi17EL];
	{
		_scripts = unitDefs select _x select udScripts;
		_idx = _scripts find "\TZK_Scripts_4_0_4\Common\Equip\UH60.sqs";
		if (-1 != _idx) then {
			_scripts set [_idx, "Common\Equip\UH60.sqs"];
		};
		_idx = _scripts find "\TZK_Scripts_4_0_4\Common\Equip\Mi17.sqs";
		if (-1 != _idx) then {
			_scripts set [_idx, "Common\Equip\Mi17.sqs"];
		};
		_scripts set [count _scripts, "Common\InitHelicopter.sqs"];
		vDoubledRange set [count vDoubledRange, _x];
	} forEach [_uh60W, _uh60supW, _uh60WMG2, _mi17E, _mi17supE, _mi17EMG2];

	comment "Allow buy support truck in air factory";
	{
		unitDefs select _x set [udFactoryType, 2^stLight + 2^stAir];
	} forEach [_supportTruckW, _supportTruckE];
};

comment "Anti Plane Vehicle Type Constant.";
typesAntiPlane3500 = [[_m2a2aa, _m2a2townaad], [_bmp2aa, _bmp2townaad]];
typesAntiPlane8000 = [[_vulcanW2], [_tunguskaE]];

comment "Remove AA missile for Gun-Plane.";
unitDefs select _a10gun select udScripts set [0, "Common\Equip\PlaneGun.sqs"];
unitDefs select _su25gun select udScripts set [0, "Common\Equip\PlaneGun.sqs"];
comment "Remove Su25 gun unit in-game.";
unitDefs select _su25gun set [udFactoryType, -1];

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