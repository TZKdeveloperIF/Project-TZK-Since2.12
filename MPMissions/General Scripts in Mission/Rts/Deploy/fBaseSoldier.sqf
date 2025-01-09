// inline function

_group = baseGroup select _si;
if (isNull _group) then {false} else {
	{
		if (not alive _x) then {
			deleteVehicle _x;
		};
	} forEach units _group;
	if (count units _group >= maxGroupSize) then {
		[_si, _gi, "Base defend group is full. Soldier not deployed."] call preprocessFile "Util\MsgSender.sqf";
		false
	} else {
		[_si, _gi, _cost] exec (TzkScripts select 167);

		_dir = random 360;
		_inf = [_type, 0, 0, 0, _pos, random 360, _si, -1, _group, 0, 0] call funcAddServerUnit;
		[_inf, _type, _si] exec format ["\TZK_Scripts_4_0_4\Common\InitSpawnchute%1.sqs", if (_si == si0) then {"W"} else {"E"}];
		[_inf, _cc, _si] exec "Server\Loop\BaseUnit.sqs";
		_group setCombatMode "RED"; _group setBehaviour "COMBAT"; _group setSpeedMode "NORMAL";
		true
	}
}