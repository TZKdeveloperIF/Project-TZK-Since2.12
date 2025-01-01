// args: [group, si]

private [{_group}, {_si}];

_group = _this select 0;
_si = _this select 1;

(functionalGroups select _si) set [count (functionalGroups select _si), _group];

// remove all units. Remain group only
{deleteVehicle _x} forEach units _group;