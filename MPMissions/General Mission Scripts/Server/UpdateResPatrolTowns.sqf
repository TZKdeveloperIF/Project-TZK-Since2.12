private ["_group", "_x", "_town0List", "_town0", "_distance0", "_town0Index", "_town1List", "_town1", "_distance1", "_town1Index", "_town2List", "_town2", "_town"];

_group = _this select 0;

{
	if (_x == driver vehicle _x) then
	{ 
		_town0List = [ getPos _x, [siRes], [] ] call funcGetClosestTown;
		_town0 = _town0List select 0;
		_distance0 = _town0List select 1;
		_town0Index = _town0List select 2;
		
		_town1List = [ getPos _x, [siRes], [_town0Index] ] call funcGetClosestTown;
		_town1 = _town1List select 0;
		_distance1 = _town1List select 1;
		_town1Index = _town1List select 2;
		
		_town2List = [ getPos _x, [siRes], [_town0Index, _town1Index] ] call funcGetClosestTown;
		_town2 = _town2List select 0;
		
		_town = [_town0, [_town1,_town2] select ((random 1) < 0.667)] select (_distance0 * 4 < _distance1);
		_x doMove ([getPos (_town select 0), 150, 150] call funcGetRandomPos);
	};
} forEach (units _group);