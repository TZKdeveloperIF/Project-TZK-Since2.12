pingTimes = [[], []]; blockedPlayers = [[], []];
{
	_si = _x; _gi = 0;
	{
		pingTimes select _si set [_gi, -1];
		blockedPlayers select _si set [_gi, false];
		_gi = _gi + 1;
	} foreach (groupMatrix select _si);
} forEach [si0, si1];

// It seems verifying locality of players don't have to be determined after game start on server
{
	_si = _x;
	_groups = groupMatrix select _si; _groupsAI = [];
	_index = 0; _count = count _groups; while {_index < _count} do {
		_group = _groups select _index;
		_leader = leader _group;
		if (local _leader && player != _leader) then {
			_groupsAI set [count _groupsAI, _group];
			[_leader, _si, _index] exec "Server\InitLeaderAI.sqs";
		};
		if !(local _leader) then {
			[_group, _si, _index] exec "Server\Loop\DetectPlayerDisconnect.sqs";
		};
		scoreMoney select _si set [_index, 0];
		_index = _index + 1;
	};
	groupAiMatrix set [_si, _groupsAI];
} forEach [si0, si1];

{
	call format [
		{
			_spec%1exists = if (isNull Spec%1) then {false} else {true};
			if (_spec%1exists && local Spec%1 && player != Spec%1) then {deleteVehicle Spec%1};
		}, _x
	]
} forEach [0,1,2,3,4,5,6,7,8,9];
// 4.0.5.18 update;
call preprocessFile "Server\InitCustomInitialInfo.sqf";
// impl
call preprocessFile "impl\Server_Group.sqf"