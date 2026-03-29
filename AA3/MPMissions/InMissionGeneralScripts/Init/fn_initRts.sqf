// TZK CTI - RTS System Initialization
// Mirrors OFP: Rts/Init/PplInteraction.sqf + init_AiGrpOptions.sqf
// Called from init.sqf after groupMatrix is built (all machines).

// ========== Order type indices ==========
ordTakeTowns  = 0;
ordHoldTown   = 1;
ordGuardArea  = 2;
ordAdvance    = 3;
ordHalt       = 4;
ordNone       = -1;

// ========== Order definitions ==========
// [name, markerType, function]
// Functions pre-compiled in fn_initMissionEnv.sqf to avoid runtime file-not-found issues.
orderDefs = [
	["Take Towns",  "b_inf",          TZK_fnc_ordTakeTowns],
	["Hold Town",   "b_installation", TZK_fnc_ordHoldTown],
	["Guard Area",  "b_support",      TZK_fnc_ordGuardArea],
	["Advance",     "b_mech_inf",     TZK_fnc_ordAdvance],
	["Halt",        "b_hq",           TZK_fnc_ordHalt]
];

// ========== Per-group order tracking (server authoritative) ==========
// orderMatrix[si][gi] = [orderId, orderType, params]
// orderId increments each time a new order is given; running scripts use it to detect superseded orders.
orderMatrix = [[], []];
orderIdNext = [0, 0];

// Pre-size per group
{
	private _si = _x;
	private _c = count (groupMatrix select _si);
	private _i = 0;
	while {_i < _c} do {
		orderMatrix select _si set [_i, [-1, ordNone, []]];
		_i = _i + 1;
	};
} forEach [si0, si1];

// ========== AI group settings ==========
// aiSetting[si][gi] = [moveMode, combatMode, formation, ...]
// moveMode: 0 = direct, 1 = leapfrog (limit step distance)
aisMoveMode = 0;
aisCombatMode = 1;
aisFormation = 2;

aiSetting = [[], []];
{
	private _si = _x;
	private _c = count (groupMatrix select _si);
	private _i = 0;
	while {_i < _c} do {
		aiSetting select _si set [_i, [0, 0, 0]];
		_i = _i + 1;
	};
} forEach [si0, si1];

// ========== Commander waypoints (used by GuardArea/Advance) ==========
// wpCO[si] = array of positions the commander has placed
wpCO = [[], []];

// ========== Selection state (client-side, set per player) ==========
// rtsSelectedGroups: array of [si, gi] pairs currently selected
rtsSelectedGroups = [];

// ========== Icon textures ==========
rtsIconLeader   = "\A3\ui_f\data\map\markers\military\dot_CA.paa";
rtsIconMember   = "\A3\ui_f\data\map\markers\military\dot_CA.paa";
rtsIconSelected = "\A3\ui_f\data\map\markers\military\circle_CA.paa";

// ========== Order lock (prevents overriding another commander's orders) ==========
aisLockOrder = [];
{
	private _si = _x;
	private _c = count (groupMatrix select _si);
	private _i = 0;
	aisLockOrder set [_si, []];
	while {_i < _c} do {
		(aisLockOrder select _si) set [_i, false];
		_i = _i + 1;
	};
} forEach [si0, si1];

diag_log format ["TZK CTI: RTS system initialized - %1 order types", count orderDefs];
