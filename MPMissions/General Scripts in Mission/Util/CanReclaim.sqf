// args: [unit, vehicle]
// returns: bool

private [{_unit}, {_vehicle}, {_res}, {_group}];
_unit = _this select 0; _vehicle = _this select 1;
_res = true; _group = group _unit;

_members = [driver _vehicle, gunner _vehicle, commander _vehicle];
[_members, [objNull]] call preprocessFile "Algo\arraySubtract.sqf";
{
	if (group _x != _group) then {_res = false};
} forEach _members;
_res