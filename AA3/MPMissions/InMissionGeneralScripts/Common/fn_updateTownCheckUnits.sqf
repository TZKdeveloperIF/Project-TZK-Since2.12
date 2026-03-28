// TZK CTI - Count units in trigger area by side
// Mirrors OFP: TZK_Scripts_4_0_4/Server/SQF/UpdateTownCheckUnits.sqf
// Args: array of objects (from `list triggerObj`)
// Returns: [unitsPerSide, groupsPerSide]
//   unitsPerSide = [westCount, eastCount, resCount]
//   groupsPerSide = [westGroups[], eastGroups[], resGroups[]]

private _units = [0, 0, 0];
private _groups = [[], [], []];

{
	private _unit = _x;
	if ((getPosATL _unit) select 2 < 3) then {
		{
			if (side _unit == (sides select _x)) then {
				_units set [_x, (_units select _x) + 1];
				private _grp = group _unit;
				if !(_grp in (_groups select _x)) then {
					(_groups select _x) pushBack _grp;
				};
			};
		} forEach [si0, si1, siRes];
	};
} forEach _this;

[_units, _groups]
