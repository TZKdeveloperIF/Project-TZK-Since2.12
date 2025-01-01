// SCORE
_type = 0;
scoreDefs = [];
scInfantry = _type; scoreDefs set [_type, ["Infantry", 1]]; _type = _type + 1;
scVehicle = _type; scoreDefs set [_type, ["Vehicle", 2]]; _type = _type + 1;
scMHQ = _type; scoreDefs set [_type, ["MHQ", 10]]; _type = _type + 1;
scStruct = _type; scoreDefs set [_type, ["Struct", 4]]; _type = _type + 1;
scTown = _type; scoreDefs set [_type, ["Town", 4]]; _type = _type + 1;

_scoreStart = [];
_scoreStart resize (count scoreDefs);
_index = 0; { _scoreStart set [_index, 0]; _index = _index+1 } foreach _scoreStart;

groupMatrix = [[], [], []];
groupNameMatrix = [[], []];
groupUnitIDMatrix = [[], []];
groupAiMatrix = [[], []];
groupMoneyMatrix = [[], []];
groupUnitsBuildingMatrix = [[], []];
groupScoreMatrix = [[], []];
groupCommander = [grpNull, grpNull];
giCO = [0, 0];

_groups = []; _groupNames = [];
{
    _si = _x;
    _i = 0; _c = count callsigns; while {_i < _c} do {
        _groups = groupMatrix select _si;
        _groupNames = groupNameMatrix select _si;
        _group = format["Group%1%2", callsigns select _i, _si];
        if (call format["%1 != grpNull", _group]) then {
            call format["%1 setGroupId [""%2"", ""GroupColor0""]", _group, callsigns select _i];
            call format["_groups set [count _groups, %1]", _group];
            call format["_groupNames set [count _groupNames, ""%1""]", callsigns select _i];
            _ids = []; _j = 0; while {_j <= 12} do {
                _ids set [
                    _j, format["%1 %2:%3", sideNames select _si, callsigns select _i, _j]
                ];
                _j = _j + 1;
            };
            _UID = groupUnitIDMatrix select _si; _UID set [count _UID, _ids];
        };
        _i = _i + 1;
    };
} forEach [si0, si1];

comment {Planning to Initialize worker and town groups};
{
    _si = _x;
    _i = 0; _c = count (groupMatrix select _si);
    if (_c > 0) then {groupCommander set [_si, groupMatrix select _si select 0]};
    while {_i < _c} do {
        groupMoneyMatrix select _si set [_i, 0];
        groupUnitsBuildingMatrix select _si set [_i, 0];
        groupScoreMatrix select _si set [_i, +_scoreStart];
        _i = _i + 1;
    };
} forEach [si0, si1];

// init tzkAllGroups
{
    _si = _x; _i = 0; _groups = tzkAllGroups select _si;
	{
		_groups set [_i, _x];
		_i = _i + 1;
	} forEach (groupMatrix select _si);
} forEach [si0, si1];

// define global variable for auto-buy info
// store infomations in a matrix
AutoBuyInfo = [[],[]];
_eStruct = 0; _eType = 1; _eNum = 2;
{
	_si = _x; _gi = 0;
	{
		_entry = [];

		_structs = [objNull, objNull, objNull, objNull]; _entry set [_eStruct, _structs];
		_types = [-1,-1,-1,-1]; _entry set [_eType, _types];
		_nums = [0,0,0,0]; _entry set [_eNum, _nums];

		AutoBuyInfo select _si set [_gi, _entry];
		_gi = _gi + 1;
	} forEach (groupMatrix select _si);
} forEach [si0, si1];