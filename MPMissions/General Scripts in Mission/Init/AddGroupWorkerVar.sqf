// args: group

private [{_group}, {_si}];

_group = _this;
_si = sides find (side _group);

(workerGroups select _si) set [count (workerGroups select _si), _group];

if (_si == si0 || _si == si1) then {
	(tzkAllGroups select _si) set [count (tzkAllGroups select _si), _group];
};

// remove all units. Remain group only
{deleteVehicle _x} forEach units _group;