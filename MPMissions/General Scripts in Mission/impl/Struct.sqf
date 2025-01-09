

// ============================ Added structure items ============================
_oldCount = count structDefs;
// Add items below


// add to global variables like structsRespawn


// Add items above
_index = _oldCount; _count = count structDefs; while {_index < _count} do {
	structMatrix select si0 set [_index, []];
	structMatrix select si1 set [_index, []];

	structsBuilt select si0 set [_index, 0];
	structsBuilt select si1 set [_index, 0];

	_index = _index + 1;
};

// define global variable for server to adjust style. This is temporary codes
TzkAdjustStyleStructIdx = [_wall, _walls, _roof, _roofHigh, _tanktr, _artPlain];