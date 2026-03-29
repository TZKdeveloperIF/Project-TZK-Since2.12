// TZK CTI - BuildStruct (Server only, TzkScripts 210)
// Mirrors OFP: Server/SQF/BuildStruct.sqf
// Places structure objects, registers in structMatrix, deducts cost, starts factory loop.
// Args: [type, si, gi, pos, dir]
// Optional 6th arg: free (bool, default false) — if true, skip cost deduction.
// Returns: objects array

if (!isServer) exitWith {[]};

params ["_type", "_si", "_gi", "_pos", "_dir", ["_free", false]];

private _desc = structDefs select _type;
_pos set [2, 0];

private _parts = _desc select ([sdObjects0, sdObjects1] select (_si == si1));
private _objects = [];

{
	private _partClass = _x select 0;
	private _partRot = _x select 1;
	private _partRel = if (count (_x select 2) > 0) then { _x select 2 } else { [0, 0, 0] };

	private _px = (_pos select 0) + (_partRel select 0) * (cos _dir) + (_partRel select 1) * (sin _dir);
	private _py = (_pos select 1) + (_partRel select 1) * (cos _dir) - (_partRel select 0) * (sin _dir);
	private _pz = (_pos select 2) + (_partRel select 2);
	private _posPart = [_px, _py, _pz];
	private _dirPart = (_dir + _partRot) % 360;

	private _obj = createVehicle [_partClass, [0, 0, 0], [], 0, "CAN_COLLIDE"];
	_obj setDir _dirPart;
	_obj setPosATL _posPart;
	_obj setVectorUp [0, 0, 1];

	_objects pushBack _obj;
} forEach _parts;

// MHQ Wall tracking
if (_type == stMhqWall) then {
	private _i = TzkMhqWallObjs find objNull;
	if (_i == -1) then { _i = count TzkMhqWallObjs };
	TzkMhqWallObjs set [_i, _objects select 0];
	TzkMhqWallInfos set [_i * 2, _pos];
	TzkMhqWallInfos set [_i * 2 + 1, _dir];
};

// Register in structMatrix
(structMatrix select _si select _type) pushBack (_objects select 0);

// Track count
structsBuilt select _si set [_type, (structsBuilt select _si select _type) + 1];

// Reveal to AI groups
{
	private _grp = _x;
	{ _grp reveal _x } forEach _objects;
} forEach (groupAiMatrix select _si);

// Deduct cost
if (!_free) then {
	[_si, _gi, _desc select sdCost] call TZK_fnc_moneySpend;
};

// If this structure type has a factory (light/heavy/air/barracks), start factory loop
private _svrScripts = _desc select sdScriptsServer;
if (count _svrScripts > 0) then {
	// Convention: if structDefs has factory scripts, spawn the factory loop
	// Check sdScriptsServer for factory path presence
};

// Start factory loop + client buy-actions for production-capable structures
private _facTypes = [stLight, stHeavy, stBarracks, stAir];
if (_type in _facTypes) then {
	[_type, _si, _objects] spawn TZK_fnc_factory;

	// 通知所有客户端（含 JIP）往这栋建筑挂购买 Action
	// 第 3 参数 = 建筑对象 → 建筑被摧毁/删除后 JIP 自动移除
	[_objects select 0, _type, _si] remoteExec ["TZK_fnc_addFactoryActions", 0, _objects select 0];
};

// Destruction tracking
if (_type in structsDestroy) then {
	// Phase B+: destruction victory bookkeeping (structsDestroy is currently empty/placeholder)
};

publicVariable "structMatrix";
publicVariable "structsBuilt";

diag_log format ["TZK CTI: Structure built type=%1 si=%2 gi=%3 pos=%4", _type, _si, _gi, _pos];

_objects
