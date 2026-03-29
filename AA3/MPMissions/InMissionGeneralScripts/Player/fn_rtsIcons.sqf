// TZK CTI - RTS Unit Icons (Client only)
// Spawned from initPlayerLocal.sqf after init completes.
// Draws 3D overhead icons for friendly AI group leaders/members.
// Selected groups blink. Also maintains map markers per group leader.

if (!hasInterface) exitWith {};

waitUntil {!isNull player};
waitUntil {!isNil "TZK_initComplete"};
waitUntil {tzkMatchStartTime >= 0};

private _si = switch (side player) do {
	case west:  { si0 };
	case east:  { si1 };
	default     { -1 };
};
if (_si < 0) exitWith {};

// Store for Draw3D handler access
TZK_rts_playerSi = _si;

// --- Colors (missionNamespace for Draw3D handler) ---
TZK_rts_colLeader   = [0.2, 0.6, 1,   0.9];
TZK_rts_colMember   = [0.5, 0.8, 1,   0.55];
TZK_rts_colCmd      = [1,   0.85, 0.2, 0.9];
TZK_rts_colSelected = [1,   0.2,  0.2, 1.0];

// --- Create map markers for each group leader (local only) ---
private _groups = groupMatrix select _si;
private _markerNames = [];
{
	private _gi = _forEachIndex;
	private _mName = format ["tzk_grpLdr_%1_%2", _si, _gi];
	createMarkerLocal [_mName, [0, 0, 0]];
	_mName setMarkerTypeLocal "mil_dot";
	_mName setMarkerColorLocal (
		if (_x == groupCommander select _si) then {"ColorYellow"} else {"ColorBLUFOR"}
	);
	_mName setMarkerSizeLocal [0.7, 0.7];
	_mName setMarkerTextLocal (groupNameMatrix select _si select _gi);
	_markerNames pushBack _mName;
} forEach _groups;

// --- Draw3D event handler: 3D icons above units ---
// All reads are from global variables (set above or by fn_initRts)
addMissionEventHandler ["Draw3D", {
	private _si = TZK_rts_playerSi;
	if (isNil "_si" || {_si < 0}) exitWith {};

	private _groups = groupMatrix select _si;
	private _cmdGrp = groupCommander select _si;
	private _cam    = positionCameraToWorld [0, 0, 0];
	private _tick   = diag_tickTime;

	private _colLdr = TZK_rts_colLeader;
	private _colMem = TZK_rts_colMember;
	private _colCm  = TZK_rts_colCmd;
	private _colSel = TZK_rts_colSelected;

	{
		private _gi  = _forEachIndex;
		private _grp = _x;
		if (isNull _grp || {_grp == group player}) then { continue };

		private _ldr = leader _grp;
		if (isNull _ldr || {!alive _ldr}) then { continue };

		// Check selection state
		private _isSelected = false;
		{
			if (_x isEqualTo [_si, _gi]) exitWith { _isSelected = true };
		} forEach rtsSelectedGroups;

		{
			if (!alive _x) then { continue };

			private _posU = getPosATLVisual _x;
			_posU set [2, (_posU select 2) + 2.3];

			private _dist = _cam distance _posU;
			if (_dist > 1500) then { continue };

			private _isLdr = (_x == _ldr);
			private _sz = if (_isLdr) then {0.65} else {0.35};
			private _alpha = linearConversion [200, 1500, _dist, 1, 0.15, true];

			private _col = if (_isLdr) then {
				if (_grp == _cmdGrp) then {+_colCm} else {+_colLdr}
			} else {
				+_colMem
			};

			if (_isSelected) then {
				private _blink = 0.65 + 0.35 * sin (_tick * 540);
				_col = [_colSel select 0, _colSel select 1, _colSel select 2, _blink * _alpha];
				_sz  = _sz * (1 + 0.15 * sin (_tick * 540));
			} else {
				_col set [3, (_col select 3) * _alpha];
			};

			drawIcon3D [
				rtsIconLeader, _col, _posU, _sz, _sz, 0,
				if (_isLdr) then { groupNameMatrix select _si select _gi } else { "" },
				1, 0.035, "RobotoCondensedBold"
			];
		} forEach (units _grp);
	} forEach _groups;
}];

diag_log "TZK CTI: Draw3D icon handler registered";

// --- Map marker update loop (periodic, not per-frame) ---
while {pvGameOver == -1} do {
	sleep 2;

	{
		private _gi = _forEachIndex;
		private _grp = _groups select _gi;
		private _mName = _markerNames select _gi;

		if (isNull _grp || {_grp == group player}) then {
			_mName setMarkerPosLocal [-10000, -10000];
			continue
		};

		private _ldr = leader _grp;
		if (isNull _ldr || {!alive _ldr}) then {
			_mName setMarkerPosLocal [-10000, -10000];
			continue
		};

		_mName setMarkerPosLocal (getPosATL _ldr);

		private _ordType = (orderMatrix select _si select _gi) select 1;
		private _isSelected = false;
		{
			if (_x isEqualTo [_si, _gi]) exitWith { _isSelected = true };
		} forEach rtsSelectedGroups;

		private _mCol = if (_isSelected) then {
			"ColorRed"
		} else {
			switch (_ordType) do {
				case ordTakeTowns: { "ColorGreen" };
				case ordHoldTown:  { "ColorBLUFOR" };
				case ordGuardArea: { "ColorBLUFOR" };
				case ordAdvance:   { "ColorYellow" };
				case ordHalt:      { "ColorWhite" };
				default            { "ColorBLUFOR" };
			}
		};
		_mName setMarkerColorLocal _mCol;

		private _ordName = if (_ordType >= 0 && {_ordType < count orderDefs}) then {
			(orderDefs select _ordType) select 0
		} else { "—" };
		_mName setMarkerTextLocal format ["%1 [%2]",
			groupNameMatrix select _si select _gi, _ordName];
	} forEach _groups;
};
