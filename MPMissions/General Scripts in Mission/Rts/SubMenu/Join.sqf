// args: none
// load variables from caller
// return: [ai units[], ai gis[], player units[]]

// bracket
private [{_aiUnits}, {_aiGis}, {_pplUnits}
	, {_gis}, {_gi}, {_group}, {_i}, {_j}, {_c}
];

_aiUnits = [], _aiGis = [], _pplUnits = [];

_gis = []; _i = 0; _c = count _groups;
while {_i < _c} do {_gis set [_i, false], _i = _i + 1};

_i = 0; _j = 0; {
	_group = group _x;
	// units should alive, not group leader, and not belongs to destination group
	if (alive _x && _x != leader _x && _group != _groupTo) then {
		if (_group in _groupsAI) then {
			_gi = _groups find _group;
			if (-1 != _gi) then {
				_aiUnits set [_i, _x];
				_gis set [_gi, true];

				_i = _i + 1;
			};
		} else {
			_pplUnits set [_j, _x];
			_j = _j + 1;
		};
	};
} forEach _top;

_i = 0; _j = 0; while {_i < _c} do {
	if (_gis select _i) then {_aiGis set [_j, _i], _j = _j + 1};
	_i = _i + 1;
};

[_aiUnits, _aiGis, _pplUnits]