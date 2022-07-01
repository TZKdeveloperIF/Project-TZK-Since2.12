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

// The unitTypeData and unitTypeArray should ALWAYS be defined AFTER HAVING CALLED THIS SCRIPT
unitTypeArray resize 0; unitTypeData resize 0; _type = 0;
{
	if ((_x select udModel) in unitTypeArray) then {
		_i = unitTypeArray find (_x select udModel); 
		_list = unitTypeData select _i; 
		_list set [count _list, _type]
	} else {
		unitTypeData set [_type, [_type]]
	}; 
	unitTypeArray set [_type, _x select udModel];
	_type = _type + 1;
} forEach unitDefs;