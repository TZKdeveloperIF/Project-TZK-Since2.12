// args: group

private [{_group}];

_group = _this;

patrolGroups set [count patrolGroups, _group];

// remove all units. Remain group only
{deleteVehicle _x} forEach units _group;