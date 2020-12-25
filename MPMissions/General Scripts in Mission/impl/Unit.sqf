comment "Fix su25 error on basic TZK missions.";
if (!bool_TZK_Vanilla_Mode && !bool_TZK_SEMod_Mode) Then {
	{_entry = unitDefs select _x, _entry set [udModel, "Su25_xj400"]} forEach [_su25gun, _su25LGB4, _su25LGB8, _su25Rocket, _su25BB, _su25Raduga];
	_entry = unitDefs select _su25Rocket, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Rocket.sqs"];
	_entry = unitDefs select _su25BB, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25BB.sqs"];
	_entry = unitDefs select _su25Raduga, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Raduga.sqs"];
};


comment "After having called the 'impl\Unit.sqf', the unitTypeData and unitTypeArray should be re-defined.";
unitTypeArray resize 0; unitTypeData resize 0;
_type = 0;
{if ((_x select udModel) in unitTypeArray) then {_i = unitTypeArray find (_x select udModel); _list = unitTypeData select _i; _list set [count _list, _type]} else {unitTypeData set [_type, [_type]]}; unitTypeArray set [_type, _x select udModel], _type = _type + 1} forEach unitDefs;