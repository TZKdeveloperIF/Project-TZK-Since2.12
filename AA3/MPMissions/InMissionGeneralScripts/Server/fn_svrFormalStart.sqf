// TZK CTI - Server Formal Start (Server only)
// Mirrors OFP: Init/SvrFormalStart.sqf
// Args: [westMhqPos, eastMhqPos]
// The hub that launches all server subsystems after MHQ positions are determined.

if (!isServer) exitWith {};

params ["_posWest", "_posEast"];

diag_log "TZK CTI: SvrFormalStart beginning...";

// ---- Deploy MHQs（两栖占位；原 OFP 由 svrStartVehs 部署）----
//
// 东侧 BMP-2 履带 + setVectorUp surfaceNormal 时，履带与起伏地面易持续“刮地”→ 碰撞伤害累加。
// 处理：用 setPosATL 贴地、世界朝上 [0,0,1]，勿强行贴合坡面法线；东侧重为轮式两栖 Marid。
//
// 原版两栖参考（config 含 canFloat / 可浮渡，仍受物理与碰撞伤害影响）：
//   WEST Gorgon B_APC_Wheeled_03_cannon_F | EAST Marid O_APC_Wheeled_02_rcws_v2_F
// 备选 EAST：O_APC_Tracked_02_cannon_F（BMP，履带更吃地形）| O_Boat_Transport_01_F（橡皮艇，无刮地问题）
// 备选 WEST：B_Boat_Transport_01_F | B_APC_Tracked_01_rcws_F（Marshall，非两栖）
//
private _fnc_placeMhq = {
	params ["_class", "_xy"];
	private _x = _xy select 0;
	private _y = _xy select 1;
	private _veh = createVehicle [_class, [0, 0, 0], [], 0, "CAN_COLLIDE"];
	// ATL：Z 为离地高度，由引擎落稳到地表，比 ASL+法线更少微碰撞
	_veh setPosATL [_x, _y, 0.45];
	_veh setVectorUp [0, 0, 1];
	_veh setVelocity [0, 0, 0];
	_veh
};

private _mhqW = ["B_APC_Wheeled_03_cannon_F", _posWest] call _fnc_placeMhq;
mhq set [si0, _mhqW];

private _mhqE = ["O_APC_Wheeled_02_rcws_v2_F", _posEast] call _fnc_placeMhq;
mhq set [si1, _mhqE];

publicVariable "mhq";

// ---- Match start time ----
tzkMatchStartTime = time;
tzkMatchStartTime = tzkMatchStartTime - (tzkMatchStartTime % 0.25);
publicVariable "tzkMatchStartTime";

diag_log format ["TZK CTI: Match start at %1, MHQ West=%2, MHQ East=%3",
	tzkMatchStartTime, _posWest, _posEast];

// ---- Notify all clients ----
private _msg = "TZK CTI Match has started!";
[_msg] remoteExec ["systemChat", 0];

// ---- Distribute starting money ----
call compile preprocessFileLineNumbers "Server\fn_startMoney.sqf";

// ---- Town triggers ----
call compile preprocessFileLineNumbers "Init\fn_svrTownTrigger.sqf";

// ---- AI group leaders initialization (placeholder for Phase D) ----
{
	private _si = _x;
	private _groups = groupMatrix select _si;
	private _aiGroups = groupAiMatrix select _si;
	{
		private _gi = _forEachIndex;
		private _grp = _x;
		if (_grp in _aiGroups) then {
			// Phase D: spawn AI leader behavior
		};
	} forEach _groups;
} forEach [si0, si1];

// ---- Server loops ----
[] spawn compile preprocessFileLineNumbers "Server\fn_incomeLoop.sqf";
[] spawn compile preprocessFileLineNumbers "Server\fn_serverLoop.sqf";

// ---- Vote system init ----
voteRate = 0.66;
VoteMassComm = 2;
VoteMassAdmin = 1000;
Vote_Result = [];
{ Vote_Result pushBack [] } forEach Vote_Matrix;

diag_log "TZK CTI: SvrFormalStart complete - all server loops running";
