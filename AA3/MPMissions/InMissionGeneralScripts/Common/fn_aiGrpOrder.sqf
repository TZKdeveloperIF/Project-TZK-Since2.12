// TZK CTI - AI Group Order Dispatch
// Mirrors OFP: Common/Msg/hAiGrpOrder.sqf
// Called on server (via remoteExec from client) or directly on server.
// Writes orderMatrix and spawns the corresponding order script for the group leader.
// Args: [si, gi, orderType, params]

if (!isServer) exitWith {};

params ["_si", "_gi", "_ordType", ["_params", []]];

if (_si < 0 || _gi < 0) exitWith {
	diag_log format ["TZK CTI: aiGrpOrder rejected - invalid si=%1 gi=%2", _si, _gi];
};

private _grp = groupMatrix select _si select _gi;
if (isNull _grp) exitWith {
	diag_log format ["TZK CTI: aiGrpOrder rejected - null group si=%1 gi=%2", _si, _gi];
};

private _ldr = leader _grp;
if (isNull _ldr || {!alive _ldr}) exitWith {
	diag_log format ["TZK CTI: aiGrpOrder rejected - no leader si=%1 gi=%2", _si, _gi];
};

// Bump order ID (supersedes any running order for this group)
private _newId = (orderIdNext select _si) + 1;
orderIdNext set [_si, _newId];

orderMatrix select _si set [_gi, [_newId, _ordType, _params]];
publicVariable "orderMatrix";

// Spawn the pre-compiled order function for this group's leader
private _fnc = (orderDefs select _ordType) select 2;

if (!isNil "_fnc") then {
	[_ldr, _si, _gi, _params] spawn _fnc;
	diag_log format ["TZK CTI: Order dispatched si=%1 gi=%2 type=%3 (%4) id=%5",
		_si, _gi, _ordType, (orderDefs select _ordType) select 0, _newId];
} else {
	diag_log format ["TZK CTI: Order type %1 has no compiled function", _ordType];
};
