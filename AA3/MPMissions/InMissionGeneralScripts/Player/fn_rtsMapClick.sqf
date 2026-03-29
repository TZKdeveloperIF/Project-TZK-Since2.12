// TZK CTI - RTS Map Click Handler (Client only)
// Mirrors OFP: Player/Marker/MapClickPlayer.sqf + Rts/Ui/MapCtrl.sqf
// Spawned from initPlayerLocal.sqf.
//
// Interaction design (matching OFP TZK):
//   Alt+click (1st):  set first corner of rectangle selection
//   Alt+click (2nd):  complete rectangle, select AI leaders inside
//   Alt+Shift+click:  open RTS command dialog for selected groups
//   Click near leader (no mod): exclusive select that group
//   Shift+click near leader: toggle add/remove from selection
//   Click empty (no mod): deselect all
//
// NO addAction commands. All ordering is through the map dialog.
// 注意：凡带 Alt 的点击必须单独分支结束，不可再执行下方「无 Alt」队长检测，否则会覆盖框选多队结果。

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

// ========== Rectangle selection state ==========
TZK_rtsRectClick1    = false;   // first corner placed?
TZK_rtsRect1         = [0, 0];  // first corner pos
TZK_rtsRect2         = [0, 0];  // second corner pos
TZK_rtsRectCreated   = false;   // rectangle completed?
TZK_rtsRectTime      = 0;       // time of first click (timeout)

// 与 OFP TZK PplInteraction.sqf 一致：25600m 半轴，任意缩放下图上仍为整图十字
private _tzkRtsGuideHalf = 25600;

// 框选完成后的区域（A3 无 OFP 自定义色，用 ColorBlue + Cross 画刷代替 ColorCyan）
createMarkerLocal ["TZK_rtsArea", [0, 0]];
"TZK_rtsArea" setMarkerShapeLocal "RECTANGLE";
"TZK_rtsArea" setMarkerColorLocal "ColorBlue";
"TZK_rtsArea" setMarkerBrushLocal "Cross";
"TZK_rtsArea" setMarkerSizeLocal [0, 0];
"TZK_rtsArea" setMarkerAlphaLocal 0;

// 第一次 Alt 点击：蓝底粗十字 + 红细十字（矩形条旋转 90° 成十字）
{
	createMarkerLocal [_x, [0, 0]];
	_x setMarkerShapeLocal "RECTANGLE";
	_x setMarkerColorLocal "ColorBlue";
	_x setMarkerSizeLocal [10, _tzkRtsGuideHalf];
	_x setMarkerAlphaLocal 0;
} forEach ["TZK_rtsGuideBgX", "TZK_rtsGuideBgY"];
"TZK_rtsGuideBgY" setMarkerDirLocal 90;

{
	createMarkerLocal [_x, [0, 0]];
	_x setMarkerShapeLocal "RECTANGLE";
	_x setMarkerColorLocal "ColorRed";
	_x setMarkerSizeLocal [2, _tzkRtsGuideHalf];
	_x setMarkerAlphaLocal 0;
} forEach ["TZK_rtsGuideLineX", "TZK_rtsGuideLineY"];
"TZK_rtsGuideLineY" setMarkerDirLocal 90;

// 第二次点击后：对角条 + 第一角点椭圆（同 OFP AreaDraw.sqf / TzkRtsStartPos）
createMarkerLocal ["TZK_rtsDiag", [0, 0]];
"TZK_rtsDiag" setMarkerShapeLocal "RECTANGLE";
"TZK_rtsDiag" setMarkerColorLocal "ColorOrange";
"TZK_rtsDiag" setMarkerSizeLocal [0, 0];
"TZK_rtsDiag" setMarkerAlphaLocal 0;

createMarkerLocal ["TZK_rtsCorner1", [0, 0]];
"TZK_rtsCorner1" setMarkerShapeLocal "ELLIPSE";
"TZK_rtsCorner1" setMarkerColorLocal "ColorOrange";
"TZK_rtsCorner1" setMarkerSizeLocal [0, 0];
"TZK_rtsCorner1" setMarkerAlphaLocal 0;

// ========== Helpers ==========
TZK_fnc_rtsClearRect = {
	TZK_rtsRectClick1 = false;
	TZK_rtsRectCreated = false;
	"TZK_rtsArea" setMarkerSizeLocal [0, 0];
	"TZK_rtsArea" setMarkerAlphaLocal 0;
	{ _x setMarkerAlphaLocal 0 } forEach [
		"TZK_rtsGuideBgX", "TZK_rtsGuideBgY",
		"TZK_rtsGuideLineX", "TZK_rtsGuideLineY"
	];
	"TZK_rtsDiag" setMarkerSizeLocal [0, 0];
	"TZK_rtsDiag" setMarkerAlphaLocal 0;
	"TZK_rtsCorner1" setMarkerSizeLocal [0, 0];
	"TZK_rtsCorner1" setMarkerAlphaLocal 0;
};

TZK_fnc_rtsFindGroupAtPos = {
	params ["_pos", "_si", ["_radius", 200]];
	private _best = -1;
	private _bestDist = _radius;
	private _groups = groupMatrix select _si;
	{
		private _gi = _forEachIndex;
		private _grp = _x;
		if (isNull _grp || {_grp == group player}) then { continue };
		private _ldr = leader _grp;
		if (isNull _ldr || {!alive _ldr}) then { continue };
		private _d = (getPosATL _ldr) distance2D _pos;
		if (_d < _bestDist) then { _bestDist = _d; _best = _gi };
	} forEach _groups;
	_best
};

TZK_fnc_rtsSelectInRect = {
	params ["_p1", "_p2", "_si"];
	private _minX = (_p1 select 0) min (_p2 select 0);
	private _maxX = (_p1 select 0) max (_p2 select 0);
	private _minY = (_p1 select 1) min (_p2 select 1);
	private _maxY = (_p1 select 1) max (_p2 select 1);

	rtsSelectedGroups = [];
	private _groups = groupMatrix select _si;
	{
		private _gi = _forEachIndex;
		private _grp = _x;
		if (isNull _grp || {_grp == group player}) then { continue };
		private _ldr = leader _grp;
		if (isNull _ldr || {!alive _ldr}) then { continue };
		private _p = getPosATL _ldr;
		if ((_p select 0) >= _minX && {(_p select 0) <= _maxX}
			&& {(_p select 1) >= _minY} && {(_p select 1) <= _maxY}) then {
			rtsSelectedGroups pushBack [_si, _gi];
		};
	} forEach _groups;

	if (count rtsSelectedGroups > 0) then {
		systemChat format ["%1 group(s) selected", count rtsSelectedGroups];
	} else {
		systemChat "No groups in selection area";
	};
};

// ========== Open RTS Order Dialog ==========
TZK_fnc_rtsOpenOrderDlg = {
	if (count rtsSelectedGroups == 0) exitWith {
		systemChat "No groups selected";
	};

	TZK_rtsDialogResult = -1;

	createDialog "TZK_RtsOrderDlg";

	private _disp = uiNamespace getVariable ["TZK_RtsOrderDisplay", displayNull];
	if (!isNull _disp) then {
		private _info = format ["%1 group(s) selected", count rtsSelectedGroups];
		(_disp displayCtrl 9102) ctrlSetText _info;
	};

	waitUntil {!dialog};

	if (TZK_rtsDialogResult >= 0) then {
		private _ordType = TZK_rtsDialogResult;
		{
			_x params ["_sSi", "_sGi"];
			[_sSi, _sGi, _ordType, []] remoteExec ["TZK_fnc_aiGrpOrder", 2];
		} forEach rtsSelectedGroups;
		systemChat format ["Order: %1 → %2 group(s)",
			(orderDefs select _ordType) select 0, count rtsSelectedGroups];
	};
};

// ========== Register onMapSingleClick ==========
onMapSingleClick {
	private _si = TZK_rts_playerSi;
	if (isNil "_si" || {_si < 0}) then { true };

	// ---- 任意 Alt：只走 RTS 分支，不得落入下方队长点击（否则框选/Alt+Shift 会被覆盖成单队）----
	if (_alt) then {
		if (_shift) then {
			// Alt + Shift：命令对话框
			if (count rtsSelectedGroups > 0) then {
				[] spawn TZK_fnc_rtsOpenOrderDlg;
			} else {
				systemChat "Select groups first (Alt+click rectangle)";
			};
		} else {
			// Alt only：两角点框选
			if (!TZK_rtsRectClick1) then {
				// First corner — OFP：整图尺度十字（蓝底 + 红细线）
				TZK_rtsRect1 = _pos;
				TZK_rtsRectClick1 = true;
				TZK_rtsRectTime = time;

				"TZK_rtsGuideBgX" setMarkerPosLocal _pos;
				"TZK_rtsGuideBgX" setMarkerDirLocal 0;
				"TZK_rtsGuideBgX" setMarkerAlphaLocal 0.28;
				"TZK_rtsGuideBgY" setMarkerPosLocal _pos;
				"TZK_rtsGuideBgY" setMarkerDirLocal 90;
				"TZK_rtsGuideBgY" setMarkerAlphaLocal 0.28;

				"TZK_rtsGuideLineX" setMarkerPosLocal _pos;
				"TZK_rtsGuideLineX" setMarkerDirLocal 0;
				"TZK_rtsGuideLineX" setMarkerAlphaLocal 0.55;
				"TZK_rtsGuideLineY" setMarkerPosLocal _pos;
				"TZK_rtsGuideLineY" setMarkerDirLocal 90;
				"TZK_rtsGuideLineY" setMarkerAlphaLocal 0.55;

				systemChat "Rectangle: first corner set (Alt+click to complete)";
			} else {
				// Second corner → 区域 + 对角条 + 第一角点（对齐 OFP AreaDraw.sqf）
				TZK_rtsRect2 = _pos;
				TZK_rtsRectClick1 = false;
				TZK_rtsRectCreated = true;

				{ _x setMarkerAlphaLocal 0 } forEach [
					"TZK_rtsGuideBgX", "TZK_rtsGuideBgY",
					"TZK_rtsGuideLineX", "TZK_rtsGuideLineY"
				];

				private _x1 = TZK_rtsRect1 select 0;
				private _y1 = TZK_rtsRect1 select 1;
				private _x2 = TZK_rtsRect2 select 0;
				private _y2 = TZK_rtsRect2 select 1;

				private _cx = (_x1 + _x2) / 2;
				private _cy = (_y1 + _y2) / 2;
				private _sx = (abs (_x1 - _x2) / 2) max 1;
				private _sy = (abs (_y1 - _y2) / 2) max 1;

				"TZK_rtsArea" setMarkerPosLocal [_cx, _cy];
				"TZK_rtsArea" setMarkerSizeLocal [_sx, _sy];
				"TZK_rtsArea" setMarkerAlphaLocal 0.55;

				// 对角条厚度（OFP AreaDraw）
				private _dHalfX = _sx;
				private _dHalfY = _sy;
				private _hMark = 10;
				private _tmpMin = _dHalfX min _dHalfY;
				if (_hMark > _tmpMin / 15) then { _hMark = _tmpMin / 15 };
				if (_hMark < 5) then { _hMark = 5 };

				private _diagLen = sqrt (_dHalfX * _dHalfX + _dHalfY * _dHalfY);
				private _tmp = 0;
				if (_dHalfX != 0 && _dHalfY != 0) then {
					if (_dHalfY > _dHalfX) then {
						_tmp = _hMark * _dHalfX / _dHalfY;
					} else {
						_tmp = _hMark * _dHalfY / _dHalfX;
					};
				};

				"TZK_rtsDiag" setMarkerPosLocal [_cx, _cy];
				"TZK_rtsDiag" setMarkerSizeLocal [_diagLen - _tmp, _hMark];
				private _diagDir = if ((_x2 - _x1) == 0 && {(_y2 - _y1) == 0}) then {
					0
				} else {
					360 - ((_y2 - _y1) atan2 (_x2 - _x1))
				};
				"TZK_rtsDiag" setMarkerDirLocal _diagDir;
				"TZK_rtsDiag" setMarkerAlphaLocal 0.6;

				"TZK_rtsCorner1" setMarkerPosLocal [_x1, _y1];
				"TZK_rtsCorner1" setMarkerSizeLocal [_hMark + 2, _hMark + 2];
				"TZK_rtsCorner1" setMarkerAlphaLocal 0.65;

				[TZK_rtsRect1, TZK_rtsRect2, _si] call TZK_fnc_rtsSelectInRect;
			};
		};
	} else {
		// ---- 无 Alt：队长点击 / 空地清空（Alt 角点点击不得走这里，否则会覆盖框选结果）----
		private _gi = [_pos, _si, 200] call TZK_fnc_rtsFindGroupAtPos;

		if (_gi >= 0) then {
			private _pair = [_si, _gi];
			if (_shift) then {
				// Shift+click: toggle
				private _idx = -1;
				{ if (_x isEqualTo _pair) exitWith { _idx = _forEachIndex } } forEach rtsSelectedGroups;
				if (_idx >= 0) then {
					rtsSelectedGroups deleteAt _idx;
					systemChat format ["Deselected: %1", groupNameMatrix select _si select _gi];
				} else {
					rtsSelectedGroups pushBack _pair;
					systemChat format ["Added: %1", groupNameMatrix select _si select _gi];
				};
			} else {
				// Normal click: exclusive select
				rtsSelectedGroups = [[_si, _gi]];
				call TZK_fnc_rtsClearRect;
				systemChat format ["Selected: %1", groupNameMatrix select _si select _gi];
			};
		} else {
			// Empty area, no Alt → deselect
			if (!_shift) then {
				rtsSelectedGroups = [];
				call TZK_fnc_rtsClearRect;
				systemChat "Selection cleared";
			};
		};
	};

	true
};

// ========== Rectangle timeout (clear stale first corner) ==========
[] spawn {
	while {pvGameOver == -1} do {
		sleep 2;
		if (TZK_rtsRectClick1 && {time > TZK_rtsRectTime + 15}) then {
			call TZK_fnc_rtsClearRect;
			systemChat "Rectangle selection timed out";
		};
	};
};

diag_log "TZK CTI: RTS map click handler registered (Alt=rect, Alt+Shift=dialog)";
