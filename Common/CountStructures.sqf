// args: [si, structType] (e.g. [si0, stBarracks])
// return: count (e.g. 3)

private ["_res", "_structs"];

_structs = (structMatrix select (_this select 0)) select (_this select 1);
_structs = _structs - [objNull];

_res = count _structs;

_res