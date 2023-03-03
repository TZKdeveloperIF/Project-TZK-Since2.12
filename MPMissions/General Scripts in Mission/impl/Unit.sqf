// The skill seems senseless in CTI thus set all values at 1
TzkSkillLevel = [1, 1, 1, 1, 1];
_i = 0; _c = count TzkUnitSkillVal; while {_i < _c} do {
	_val = TzkUnitSkillVal select _i;
	TzkUnitSkillVal set [_i, 1];
	_i = _i + 1;
};

// explicitly mark "auto cannon ship" as "AI" unit
{unitDefs select _x set [udName, "Boat 30mm gun (AI)"]} forEach [_boatW3, _boatE3];
// Recover cannon 2-crew ship for player using boat2 slots
{
	_entry = unitDefs select _x;
	_entry set [udName, "Boat 30mm gun"];
	if (_x == _boatW2) then {
		_entry set [udScripts, [localize {TZK_EQUIP_UNIT_TRUCK}, "\TZK_Scripts_4_0_6\Common\Equip\BoatW.sqs"]];
	} else {
		_entry set [udScripts, [localize {TZK_EQUIP_UNIT_TRUCK}, "\TZK_Scripts_4_0_6\Common\Equip\BoatE.sqs"]];
	};
} forEach [_boatW2, _boatE2];
// Recover HE/AP 2-crew ship for player using custom boat slots
{
	_entry = unitDefs select _x;
	_entry set [udName, "Boat HE/AP gun"];
	_entry set [udCost, 1500];
	if (_x == _boatCustomW) then {
		_entry set [udModel, "GunBoatW_xj400"];
	} else {
		_entry set [udModel, "GunBoatE_xj400"];
	};
	_entry set [udScripts, [localize {TZK_EQUIP_UNIT_TRUCK}]];
} forEach [_boatCustomW, _boatCustomE];

// fix plane price bug
unitDefs select _a10 set [udCost, 15000];

if true then {
	_name0 = []; _i = 0; _c = count (groupMatrix select si0); while {_i < _c} do {
		_name0 set [_i, name leader (groupMatrix select si0 select _i)];
		_i = _i + 1;
	};
	_name1 = []; _i = 0; _c = count (groupMatrix select si1); while {_i < _c} do {
		_name1 set [_i, name leader (groupMatrix select si1 select _i)];
		_i = _i + 1;
	};
	if (-1 != _name0 find "J10A" && -1 == _name1 find "IF") then {
		unitDefs select _a10 set [udCost, 25000];
	};
	if (!bool_TZK_199_Mode && !bool_TZK_Vanilla_Mode) then {unitDefs select _a10 set [udModel, "A10_xj400"]};
	if (-1 != _name1 find "J10A" && -1 == _name0 find "IF") then {
		unitDefs select _su25 set [udCost, 25000];
	};
	if (!bool_TZK_199_Mode && !bool_TZK_Vanilla_Mode) then {unitDefs select _su25 set [udModel, "Su25_xj400"]};
};

// Extend typesATAPC definition since $1800 APC weapon more useful
typesATAPC = [ _m2a2at, _bmp2at, _m2a2W, _bmp2E ];

// Ban mannual building orca since its ground radar not well-designed
{
	unitDefs select _x set [udFactoryType, -1];
} forEach [_orcaW, _orcaE];

utSupportInf = [_supportCarrierW, _supportCarrierE];
{
	_scripts = unitDefs select _x select udScripts;
	_scripts set [count _scripts, "Common\Init\SoldierSupportCarrier.sqs"]
} forEach utSupportInf;

// The unitTypeData and unitTypeArray should ALWAYS be defined AFTER HAVING CALLED THIS SCRIPT
unitTypeArray resize 0; unitTypeData resize 0; _type = 0; _j = 0;
{
	_i = unitTypeArray find (_x select udModel);
	if (-1 != _i) then {
		_list = unitTypeData select _i;
		_list set [count _list, _type];
	} else {
		unitTypeData set [_j, [_type]];
		unitTypeArray set [_j, _x select udModel];
		_j = _j + 1;
	};
	_type = _type + 1;
} forEach unitDefs;
_c = count TzkSelfUpdateIdx; _k = 0; while {_k < _c} do {
	_type = TzkSelfUpdateIdx select _k;
	_models = TzkSelfUpdateVal select _k select 2;
	_l = 1; if ((unitDefs select _type select udModel) != (_models select 0)) then {
		_l = 0;
		player globalChat (unitDefs select _type select udName) + " has imporper TzkSelfUpdateVal definition.";
	};
	_cm = count _models; while {_l < _cm} do {
		_i = unitTypeArray find (_models select _l);
		if (-1 != _i) then {
			_list = unitTypeData select _i;
			_list set [count _list, _type];
		} else {
			unitTypeData set [_j, [_type]];
			unitTypeArray set [_j, _models select _l];
			_j = _j + 1;
		};
		_l = _l + 1;
	};
	_k = _k + 1;
};