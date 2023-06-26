// args: [si, gi, groupSize]
// return: slots

// this script counts how many slots are left in the first groupSize ids of specific group
// For example, groupSize is 4, group name is ALPHA and there're ALPHA 1, ALPHA 4, ALPHA 5
// in the group, then result should be 2

private [{_si}, {_gi}, {_groupSize}, {_units}, {_i}, {_c}, {_cnt}, {_breakBySize}, {_id}];
_si = _this select 0;
_gi = _this select 1;
_groupSize = _this select 2;

// analysis how many slots left in the first groupSize ids
_units = units (groupMatrix select _si select _gi); _i = 1; _c = count _units;
_cnt = 1; _breakBySize = false; _func = preprocessFile "Util\UnitIdInGroup.sqf";
while {_i < _c && not _breakBySize} do {
	_id = (_units select _i) call _func;
	if (_id <= _groupSize) then {_cnt = _cnt + 1};
	if (_id >= _groupSize) then {_breakBySize = true};
	_i = _i + 1;
};

_groupSize - _cnt - (groupUnitsBuildingMatrix select _si select _gi)