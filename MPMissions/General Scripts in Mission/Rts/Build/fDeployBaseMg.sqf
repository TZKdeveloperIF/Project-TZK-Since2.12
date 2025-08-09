// args: [si, gi, pos, enum, free]
_si = _this select 0; _gi = _this select 1; _pos = _this select 2; _enum = _this select 3; _free = _this select 4;

_st = stBaseMg;
if (1 == _enum) then {_st = stBaseTowerMg};
if (2 == _enum) then {_st = stBaseT55};

_structName = localize {TZK_LANG_SHORT_MACHINEGUN};
if (1 == _enum) then {_structName = (TzkInGameText select 020 select 1)};
if (2 == _enum) then {_structName = "T55 fort"};

_group = baseGroup select _si;
if (isNull _group) then {false} else {
	{
		if (not alive _x) then {
			deleteVehicle _x;
		};
	} forEach units _group;
	if (count units _group >= maxGroupSize) then {
		[_si, _gi, format ["Base defend group is full. %1 not deployed.", _structName]] call preprocessFile "Util\MsgSender.sqf";
		false
	} else {
		_dir = random 360;
		_mg = ([_st, _si, giCo select _si, _pos, _dir, _free] call fBuildStruct) select 0;
		_inf = [utCrew select _si, 0, 0, 0, _pos, random 360, _si, -1, _group, 0, 0] call funcAddServerUnit;
		_inf moveInGunner _mg;
		_group setCombatMode "RED"; _group setBehaviour "COMBAT"; _group setSpeedMode "NORMAL";
		true
	}
}