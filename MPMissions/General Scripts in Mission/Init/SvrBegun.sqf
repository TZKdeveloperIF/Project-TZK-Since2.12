// AI groups
// It seems verifying locality of players don't have to be determined after game start on server
// However this is wrong. Wait for a while then exec this script is necessary
// refer to commit 401fc9e6fe7378f47675ffa866c0fce9583471c7
_remoteGrpLeaderNames = ""; // for 
{
	_si = _x;
	_groups = groupMatrix select _si; _groupsAI = [];
	_i = 0; _c = count _groups; while {_i < _c} do {
		_group = _groups select _i;
		_leader = leader _group;
		if (local _leader && player != _leader) then {
			_groupsAI set [count _groupsAI, _group];
		};
		if !(local _leader) then {
			_remoteGrpLeaderNames = _remoteGrpLeaderNames + (name leader _group) + ", ";
		};
		_i = _i + 1;
	};
	groupAiMatrix set [_si, _groupsAI];
} forEach [si0, si1];
if (sizeofstr _remoteGrpLeaderNames > 0) then {
	_remoteGrpLeaderNames = substr [_remoteGrpLeaderNames, 0, sizeofstr _remoteGrpLeaderNames - 2];
};

// broadcast AI groups info
call preprocessFile "Init\SvrBroadcastAiGrps.sqf";

// Remove non-player spectator
{
	call format [
		{
			_spec%1exists = if (isNull Spec%1) then {false} else {true};
			if (_spec%1exists && local Spec%1 && player != Spec%1) then {deleteVehicle Spec%1};
		}, _x
	]
} forEach [0,1,2,3,4,5,6,7,8,9];

// process "custom match (for PVE now)"
call preprocessFile "Init\SvrCustomPveInfo.sqf";
// End here. Server will continue initialization on "custom match" processed