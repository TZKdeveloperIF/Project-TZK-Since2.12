// TZK CTI - AI Leader Behavior Initialization (Server only)
// Called from fn_svrFormalStart after MHQs are deployed.
// Assigns default orders to all AI-controlled groups and spawns their order loops.

if (!isServer) exitWith {};

diag_log "TZK CTI: Initializing AI leader behaviors...";

{
	private _si = _x;
	private _groups = groupMatrix select _si;
	private _aiGroups = groupAiMatrix select _si;

	{
		private _gi = _forEachIndex;
		private _grp = _x;

		if (isNull _grp) then { continue };
		if !(_grp in _aiGroups) then { continue };

		private _ldr = leader _grp;
		if (isNull _ldr || {!alive _ldr}) then { continue };

		// Commander group gets HoldTown by default; others get TakeTowns
		private _isCmd = (_grp == groupCommander select _si);
		private _defaultOrder = if (_isCmd) then { ordHalt } else { ordTakeTowns };

		[_si, _gi, _defaultOrder, []] call TZK_fnc_aiGrpOrder;

		diag_log format ["TZK CTI: AI leader si=%1 gi=%2 (%3) → %4",
			_si, _gi, groupNameMatrix select _si select _gi,
			(orderDefs select _defaultOrder) select 0];

	} forEach _groups;
} forEach [si0, si1];

diag_log "TZK CTI: All AI leader behaviors started";
