// args: artillery_unit_side_index (si)
// return: enemy_struct_info: array reference

private [{_si}, {_siEnemy}, {_object}];

_si = _this;
_siEnemy = siEnemy select _si; _object = TzkArtEnemyStructCaches select _siEnemy;

// update data if outdated
if (time > (_object select 0)) then {
	private [{_data}, {_type}, {_typeIdx}, {_typeCnt}];
	_data = _object select 1;

	// data is compressed. For example, structsCritcal is [1, 4, 10], then data will have only 3 rows
	// by the way, it seems we need only an 1-d array of positions but not a 2-d matrix

	// lazy-load
	if (0 == count _data) then {
		_typeCnt = count structsCritcal; _data resize _typeCnt;
		_typeIdx = 0; while {_typeIdx < _typeCnt} do {
			_data set [_typeIdx, []];
			_typeIdx = _typeIdx + 1;
		};
	};

	// update data
	_typeIdx = 0; _typeCnt = count structsCritcal; while {_typeIdx < _typeCnt} do {
		_type = structsCritcal select _typeIdx;

		_row = _data select _typeIdx;
		_structs = structMatrix select _siEnemy select _type;
		_i = 0; _c = count _structs; _j = 0; while {_i < _c} do {
			_struct = _structs select _i;
			if (not isNull _struct) then {
				_row set [_j, getPosASL _struct];
				_j = _j + 1;
			};

			_i = _i + 1;
		};
		_row resize _j;

		_typeIdx = _typeIdx + 1;
	};

	// update time stamp
	_object set [0, time + 15];
};

_object select 1