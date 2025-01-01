// args: group

private [{_group}, {_si}];

_group = _this;
_si = sides find (side _group);

(functionalGroups select _si) set [count (functionalGroups select _si), _group];

// remove all units. Remain group only
{deleteVehicle _x} forEach units _group;