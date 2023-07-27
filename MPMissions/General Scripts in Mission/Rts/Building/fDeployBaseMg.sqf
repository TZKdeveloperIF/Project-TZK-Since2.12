// args: [si, gi, pos, free]
_si = _this select 0; _gi = _this select 1; _pos = _this select 2; _free = _this select 3;

_group = functionalGroups select _si select 0;
{
	if (not alive _x) then {
		deleteVehicle _x;
	};
} forEach units _group;
if (count units _group >= maxGroupSize) then {
	[_si, _gi, "Base defend group is full. MG not deployed."] call preprocessFile "Util\MsgSender.sqf";
	false
} else {
	_dir = random 360;
	_mg = ([stBaseMg, _si, giCo select _si, _pos, _dir, _free] call fBuildStruct) select 0;
	_inf = [utCrew select _si, 0, 0, 0, _pos, random 360, _si, -1, _group, 0, 0] call funcAddServerUnit;
	_inf moveInGunner _mg;
	_group setCombatMode "RED"; _group setBehaviour "COMBAT"; _group setSpeedMode "NORMAL";
	true
}