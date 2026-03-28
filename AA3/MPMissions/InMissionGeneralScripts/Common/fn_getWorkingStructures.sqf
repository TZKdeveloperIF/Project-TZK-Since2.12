// TZK CTI - Get alive structures of a type for a side
// Mirrors OFP: TZK_Scripts_4_0_4/Common/SQF/GetWorkingStructures.sqf
// Args: [si, structType]
// Returns: array of alive structure objects

params ["_si", "_structType"];

private _structs = structMatrix select _si select _structType;
_structs = _structs - [objNull];

private _res = [];
{ if (alive _x) then { _res pushBack _x } } forEach _structs;

_res
