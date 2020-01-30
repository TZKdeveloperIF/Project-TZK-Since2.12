// args: [si, structType] (e.g. [si0, stBarracks])
// return: [struct, struct, ...]

private ["_x", "_res", "_structs"];

_res = [];
_structs = (structMatrix select (_this select 0)) select (_this select 1);
_structs = _structs - [objNull];

{
	if (!(isNull _x)) then
	{
		_res = _res + [_x]
	};
} foreach _structs;


_res