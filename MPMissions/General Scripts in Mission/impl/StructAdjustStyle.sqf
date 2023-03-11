_boolWinter = TheWorld == "W";
// Redefine Structures. Those simulatiion "building" CfgVehicles nested classes objects 
// don't support "setObjectTexture" command and have to design models for them.
_objects = [[
	["AirF_xj400", "AirF_Grey_xj400"] select _boolWinter, 0, [0,0,0]
]];
{
	_entry = structDefs select _x;
	_entry set [sdObjects0, _objects], _entry set [sdObjects1, _objects];
} forEach [stAir];
{
	_entry = structDefs select _x;
	_objects = _entry select sdObjects0, _name = _objects select 0 select 0, 
	_newName = substr [_name, 0, sizeofstr _name - 6] + (["_Desert", "_Grey"] select _boolWinter) + "_xj400", 
	_objects select 0 set [0, _newName], 
	_entry set [sdObjects0, _objects], _entry set [sdObjects1, _objects];
} forEach [stradarair, stradar, stSatRec, stLight, stComm, stBarracks, stHeavy, stShip] + TzkAdjustStyleStructIdx;
{
	_t = _x, 
	{
		_entry = structDefs select _t;
		_objects = _entry select _x, _name = _objects select ((count _objects) - 1) select 0, 
		_newName = substr [_name, 0, sizeofstr _name - 6] + (["_Desert", "_Grey"] select _boolWinter) + "_xj400", 
		_objects select ((count _objects) - 1) set [0, _newName], 
		_entry set [_x, _objects]
	} forEach [sdObjects0, sdObjects1];
} forEach [_mgTowerWood, _mgTowerConcrete, _gunf];
