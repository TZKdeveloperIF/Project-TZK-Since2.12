// args: none
// load variables from caller
// directly edit _units and _giFromArr external variables

// bracket
private [{_gis}, {_gi}];
_gis = []; _i = 0; _c = count _groups;
while {_i < _c} do {_gis set [_i, false], _i = _i + 1};

_i = 0; {
	// units should alive, not group leader, and not belongs to destination group
	if (alive _x && _x != leader _x && group _x != _groupTo) then {
		_gi = _groups find group _x;
		if (-1 != _gi) then {
			_units set [_i, _x];
			_gis set [_gi, true];

			_i = _i + 1;
		};
	}
} forEach _top;

_i = 0; _j = 0; while {_i < _c} do {
	if (_gis select _i) then {_giFromArr set [_j, _i], _j = _j + 1};
	_i = _i + 1;
};