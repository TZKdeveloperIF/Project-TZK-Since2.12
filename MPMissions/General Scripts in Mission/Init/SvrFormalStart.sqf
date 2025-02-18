// Only when game is formally start will this script be executed

// args: [west mhq pos, east mhq pos]
_mhqWestX = _this select 0 select 0;
_mhqWestY = _this select 0 select 1;
_mhqEastX = _this select 1 select 0;
_mhqEastY = _this select 1 select 1;

_mhqWestX = _mhqWestX - _mhqWestX % 1;
_mhqWestY = _mhqWestY - _mhqWestY % 1;
_mhqEastX = _mhqEastX - _mhqEastX % 1;
_mhqEastY = _mhqEastY - _mhqEastY % 1;


// inform "start vehicles can deploy"
svrGblStates set [0, true];

// inform clients
tzkMatchStartTime = time; tzkMatchStartTime = tzkMatchStartTime - tzkMatchStartTime % 0.25;
_music0 = (-0.5 + random count Musics0) call preprocessFile "Math\Round.sqf";

[[tzkMatchStartTime, _music0], [_mhqWestX, _mhqWestY, _mhqEastX, _mhqEastY]] exec "Init\ClientFormalStart.sqs";
publicExec format [{[[%1, %2], [%3, %4, %5, %6]] exec "Init\ClientFormalStart.sqs"}
	, tzkMatchStartTime, _music0
	, _mhqWestX call preprocessFile "Util\Num2Str.sqf", _mhqWestY call preprocessFile "Util\Num2Str.sqf"
	, _mhqEastX call preprocessFile "Util\Num2Str.sqf", _mhqEastY call preprocessFile "Util\Num2Str.sqf"
];

0 exec "Init\SvrDelayBroadcast.sqs";


// playable groups. Init AI leaders and begin detecting disconnected players
{
	_si = _x; _mhqPos = [[_mhqWestX, _mhqWestY], [_mhqEastX, _mhqEastY]] select _si;
	_groups = groupMatrix select _si; _groupsAI = groupAiMatrix select _si;
	_i = 0; _c = count _groups; while {_i < _c} do {
		_group = _groups select _i;
		if (_group in _groupsAI) then {
			_leader = leader _group;
			[_leader, _si, _i, _mhqPos] exec (TzkScripts select 004);
		} else {
			// player might disconnect after groupAiMatrix initialized and before match formal start
			[_group, _si, _i] exec "Server\Loop\DetectPlayerDisconnect.sqs";
		};
		_i = _i + 1;
	};
} forEach [si0, si1];


// distribute money to groups
call loadFile "\TZK_Patch4_4_0_6\s\Net\sStartMoney.sqf";

// special process on AICO
call preprocessFile "Init\SvrAicoUpg.sqf";

// start work town flag trigger
0 exec "Init\SvrTownTrigger.sqs";

// start AI groups initialization
0 exec "Init\svrGroupsRes.sqs";
0 exec "Init\SvrFunctionalGrps.sqs";
0 exec "Init\svrGroupsWorker.sqs";

// start server looping
{_x exec "Server\UpdateRespawnAI.sqs"} forEach [si0, si1];
0 exec "Server\Loop\Income.sqs";
0 exec "Server\Loop\Server.sqs";
{_x exec "Server\Loop\ProcessFinishedOrder.sqs"} forEach [si0, si1];
0 exec "Server\PingClients.sqs";
0 exec "Server\Loop\SneakAttackCheck.sqs";
west exec "Server\Loop\PlaneBuilt.sqs";
east exec "Server\Loop\PlaneBuilt.sqs";

{_x exec "Server\Loop\MhqOutOfMapCheck.sqs"} forEach [si0, si1];

// start generate town civ vehicles
0 exec "Server\Init\TownCivVehs.sqs";


// start deploy res patrol groups

// start deploy each town groups

// process temp/join group
if bool_TZK_199_Mode then {
	{
		[_x] exec (TzkScripts select 123)
	} forEach [leaderTemp0, leaderJoin0, leaderTemp1, leaderJoin1];
};

// vote module
// Vote System. Server Design. Requiring "AI group leader" judged results. No problem for after-start delay, but msg script should start after variables having defined.
voteRate = 0.66; VoteMassComm = [2, 1] select bool_TZK_199_Mode; VoteMassAdmin = 1000; Vote_Result = [];
{Vote_Result set [count Vote_Result, []]} forEach Vote_Matrix;
call loadFile "\TZK_Scripts_4_0_4\Server\Init\Vote.sqf";
// format of Vote_Result elements: [voted value, mass of voter, si, gi]
// Vote_Options_Name = []; {Vote_Options_Name set [count Vote_Options_Name, _x select 0]} forEach Vote_Matrix

["Server\Msg\hVoteReceived.sqs"] exec "\TZK_Scripts_4_0_5\Server\Msg\mVoteReceived.sqs";
[] exec "\TZK_Scripts_4_0_4\Server\Vote\Mass_Reset.sqs";

estimatedTimeLeft 7200;