// args: si
private [{_cnt}];
_cnt = 0;
{
	{
		// null check but not alive check. workergroups can contains limited units.
		// No gurantee that dead workers will leave group soon enouth.
		if (not isNull _x) then {_cnt = _cnt + 1};
	} forEach (units _x);
} forEach (workerGroups select _this);
_cnt