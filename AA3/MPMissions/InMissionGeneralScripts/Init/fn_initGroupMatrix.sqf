// TZK CTI - Group Matrix initialization
// Reads TZK_si / TZK_gi / TZK_isCmd variables set on playable units in mission.sqm
// Builds groupMatrix, groupAiMatrix, groupMoneyMatrix, groupCommander

private ["_unit", "_si", "_gi", "_grp", "_isCmd", "_maxGi"];

_maxGi = [0, 0];

// First pass: find max gi per side to size the arrays
{
	_unit = leader _x;
	_si = _unit getVariable ["TZK_si", -1];
	_gi = _unit getVariable ["TZK_gi", -1];
	if (_si >= 0 && _gi >= 0) then {
		if (_gi >= (_maxGi select _si)) then {
			_maxGi set [_si, _gi + 1];
		};
	};
} forEach allGroups;

// Pre-size arrays
{
	private _count = _maxGi select _x;
	private _i = 0;
	while {_i < _count} do {
		groupMatrix select _x set [_i, grpNull];
		groupMoneyMatrix select _x set [_i, 0];
		groupNameMatrix select _x set [_i, ""];
		_i = _i + 1;
	};
} forEach [si0, si1];

// Second pass: populate matrices
{
	_grp = _x;
	_unit = leader _grp;
	_si = _unit getVariable ["TZK_si", -1];
	_gi = _unit getVariable ["TZK_gi", -1];
	if (_si >= 0 && _gi >= 0) then {
		groupMatrix select _si set [_gi, _grp];
		groupNameMatrix select _si set [_gi, format ["Group %1", _gi]];

		_isCmd = _unit getVariable ["TZK_isCmd", false];
		if (_isCmd) then {
			groupCommander set [_si, _grp];
			groupNameMatrix select _si set [_gi, "Commander"];
		};

		// All groups start as AI-controlled; player presence removes them from AI list later
		groupAiMatrix select _si pushBack _grp;
	};
} forEach allGroups;

diag_log format ["TZK CTI: GroupMatrix built - WEST: %1 groups, EAST: %2 groups",
	count (groupMatrix select si0), count (groupMatrix select si1)];
