// ============================ Adjust existed items ============================
structDefs select _artPlain set [sdLimit, 30];
structDefs select _artPlain set [sdMaxRadius, 10];
_scriptsPpl = structDefs select _artPlain select sdScriptsPlayer;
_scriptsPpl set [count _scriptsPpl, (TzkScripts select 162)];
structMarker set [_artPlain, "MineAPE_Marker_xj400"];

// remove redundant marker script
_scriptsPpl = structDefs select _gunf select sdScriptsPlayer;
_scriptsPpl resize 1;

// Support localized name
_nameTextList = TzkInGameText select 021; _i = 0; _c = count structDefs; while {_i < _c} do {
	structDefs select _i set [sdName, _nameTextList select _i];
	_i = _i + 1;
};

// ============================ Added structure items ============================
_oldCount = count structDefs;
// Add items below


// add to global variables like structsRespawn

// cfg_todo: should prepare another attribute to define vehicle distance limit
structsNoVehCheck = [_artPlain];


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