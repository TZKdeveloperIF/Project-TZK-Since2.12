// args: [_group]
// return: none


private [ "_group", "_res1", "_res0", "_object", "_x"];

_group = _this select 0;

{
	_res1 = [getPos _x, si0] call funcGetClosestEnemyObject;
	_res0 = [getPos _x, si1] call funcGetClosestEnemyObject;
	_object = [_res1 select 0, _res0 select 0] select ((_res0 select 1) < (_res1 select 1));
 	if ( (_res0 select 1) < (1 + time/3600)*viewDistance || (_res1 select 1) < (1 + time/3600)*viewDistance ) then
	{
		if (_x == driver vehicle _x) then { _x doMove ([getPos _object, 50, 100] call funcGetRandomPos) };
		if ( _x != vehicle _x && _x == gunner vehicle _x && (_x distance _object) < 200) then { [_x, _object] exec "Server\DestroyObject.sqs" };
	}
	else
	{
		if (_x == driver vehicle _x) then
		{
			_res0 = [getPos _x, siRes, []] call funcGetClosestEnemyTown;
			if ((_res0 select 0) != -1) then { _flag = (towns select (_res0 select 0)) select tdFlag; _x doMove ([getPos _flag, 4, 4] call funcGetRandomPos) };
		} 
	}
} forEach (units _group);