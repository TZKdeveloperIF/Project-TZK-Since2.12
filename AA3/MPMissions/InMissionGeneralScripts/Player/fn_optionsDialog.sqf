// TZK CTI - Options Dialog Controller (Client only)
// Mirrors OFP: TZK_Patch5_4_0_6/s/UI/Options.sqs
// SQS state-machine → SQF spawned loop with string-based TZK_optResult dispatch.
// Called via addAction from initPlayerLocal.sqf.

if (!hasInterface) exitWith {};

private _unit = player;

waitUntil {!isNull (findDisplay 46)};

if (dialog) exitWith { systemChat "Another dialog is already open" };

TZK_optResult = "";
createDialog "TZK_OptionsDialog";

private _disp = uiNamespace getVariable ["TZK_OptionsDisplay", displayNull];
if (isNull _disp) exitWith { diag_log "TZK CTI: Options dialog failed to create" };

// Player side/group indices
private _si = switch (side _unit) do { case west: { si0 }; case east: { si1 }; default { -1 } };
if (_si < 0) exitWith { closeDialog 0 };

private _gi = -1;
{
	if (group _unit == _x) exitWith { _gi = _forEachIndex };
} forEach (groupMatrix select _si);
if (_gi < 0) exitWith { closeDialog 0 };

private _groups = groupMatrix select _si;
private _groupsAI = groupAiMatrix select _si;
private _groupsName = groupNameMatrix select _si;
private _groupsMoney = groupMoneyMatrix select _si;
private _groupCommander = groupCommander select _si;

// One-time listbox init
[_disp, _si, _gi, _groups, _groupsAI, _groupsName, _groupCommander] call TZK_fnc_optionsInit;

// Pre-hide commander-only controls for non-commanders
private _cmdOnlyBtns = [
	TZK_IDC_OPT_BTN_CMD_XFER, TZK_IDC_OPT_BTN_GIVE_AI, TZK_IDC_OPT_BTN_GIVE_ALL,
	TZK_IDC_OPT_BTN_TAKE, TZK_IDC_OPT_BTN_DESTRUCT,
	TZK_IDC_OPT_BTN_UPGRADE, TZK_IDC_OPT_BTN_UPG_CANCEL
];

// ==================== Main update loop ====================
while {dialog && alive _unit} do {

	_groupCommander = groupCommander select _si;
	_groupsMoney = groupMoneyMatrix select _si;
	_groupsAI = groupAiMatrix select _si;
	private _isCommander = (group _unit) == _groupCommander;

	// Commander-only visibility
	{
		private _ctrl = _disp displayCtrl _x;
		_ctrl ctrlShow _isCommander;
	} forEach _cmdOnlyBtns;

	// Commander-only combo enable
	{
		(_disp displayCtrl _x) ctrlEnable _isCommander;
	} forEach [TZK_IDC_OPT_INCOME_CO, TZK_IDC_OPT_INCOME_PLAYER, TZK_IDC_OPT_CMD_TRANSFER, TZK_IDC_OPT_WORKER_BHV, TZK_IDC_OPT_AI_RESPAWN];

	// Per-tick label refresh
	[_disp, _si, _gi, _groups, _groupsAI, _groupsName, _groupsMoney, _groupCommander, _isCommander] call TZK_fnc_optionsUpdate;

	// ==================== Dispatch TZK_optResult ====================
	private _cmd = TZK_optResult;
	TZK_optResult = "";

	switch (_cmd) do {
		case "give": {
			private _idx = lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_GRP);
			if (_idx < 0) exitWith { systemChat "No group selected" };
			if (_idx == _gi) exitWith { systemChat "Cannot give money to yourself" };
			private _amt = lbValue [TZK_IDC_OPT_TRANSFER_AMT, lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_AMT)];
			private _myMoney = _groupsMoney select _gi;
			if (_amt == 114514) then { _amt = _myMoney mod 100 };
			if (_amt == 50000)  then { _amt = _myMoney };
			[_si, _gi, _idx, _amt] remoteExec ["TZK_fnc_giveMoney", 2];
		};

		case "giveAIs": {
			if (!_isCommander) exitWith {};
			private _amt = lbValue [TZK_IDC_OPT_TRANSFER_AMT, lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_AMT)];
			private _myMoney = _groupsMoney select _gi;
			if (_amt == 114514) then { _amt = _myMoney mod 100 };
			if (_amt == 50000)  then { _amt = floor (_myMoney / (count _groupsAI max 1)) };
			[_si, _gi, -1, _amt] remoteExec ["TZK_fnc_giveMoney", 2];
		};

		case "giveAll": {
			if (!_isCommander) exitWith {};
			private _amt = lbValue [TZK_IDC_OPT_TRANSFER_AMT, lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_AMT)];
			private _myMoney = _groupsMoney select _gi;
			private _otherCount = (count _groups - 1) max 1;
			if (_amt == 114514) then { _amt = _myMoney mod 100 };
			if (_amt == 50000)  then { _amt = floor (_myMoney / _otherCount) };
			[_si, _gi, -2, _amt] remoteExec ["TZK_fnc_giveMoney", 2];
		};

		case "take": {
			private _idx = lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_GRP);
			if (_idx < 0) exitWith { systemChat "No group selected" };
			if (_idx == _gi) exitWith { systemChat "Cannot take money from yourself" };
			private _amt = lbValue [TZK_IDC_OPT_TRANSFER_AMT, lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_AMT)];
			private _tgtMoney = _groupsMoney select _idx;
			if (_amt == 114514) then { _amt = _tgtMoney mod 100 };
			if (_amt == 50000)  then { _amt = _tgtMoney };
			[_si, _gi, _idx, -_amt] remoteExec ["TZK_fnc_giveMoney", 2];
		};

		case "cmdtransfer": {
			if (!_isCommander) exitWith { systemChat "Only commander can transfer command" };
			private _sel = lbCurSel (_disp displayCtrl TZK_IDC_OPT_CMD_TRANSFER);
			if (_sel < 0) exitWith { systemChat "No target selected" };
			private _tgtGi = lbValue [TZK_IDC_OPT_CMD_TRANSFER, _sel];
			private _tgtGrp = _groups select _tgtGi;
			if (_tgtGrp == _groupCommander) exitWith {};
			if (_tgtGrp in _groupsAI) exitWith { systemChat "Cannot transfer command to AI group" };
			[_si, _tgtGi] remoteExec ["TZK_fnc_transferCommand", 2];
		};

		case "suicide": {
			player setDamage 1;
			closeDialog 0;
		};

		// Sub-menus — close and open the target dialog
		case "buyunits": {
			private _cc = [_si, stCC] call TZK_fnc_getWorkingStructures;
			if (count _cc == 0) then { systemChat "No Working Command Center" } else {
				closeDialog 0;
				systemChat "[Buy Units] Not yet migrated";
			};
		};
		case "commandai": {
			closeDialog 0;
			systemChat "[AI Group Orders] Not yet migrated";
		};
		case "customsoldiers": {
			closeDialog 0;
			systemChat "[Custom Soldiers] Not yet migrated";
		};
		case "stats": {
			closeDialog 0;
			systemChat "[Statistics] Not yet migrated";
		};
		case "unitcam": {
			private _satRec = [_si, stSatRec] call TZK_fnc_getWorkingStructures;
			if (count _satRec == 0) then { systemChat "No Working Camera Receiver" } else {
				closeDialog 0;
				systemChat "[Unit Cam] Not yet migrated";
			};
		};
		case "satcam": {
			private _satRec = [_si, stSatRec] call TZK_fnc_getWorkingStructures;
			if (count _satRec == 0) then { systemChat "No Working Camera Receiver" } else {
				if (2 != (upgMatrix select _si) select upgSatCam) then {
					systemChat "Not available yet (not upgraded)";
				} else {
					closeDialog 0;
					systemChat "[Sat Cam] Not yet migrated";
				};
			};
		};
		case "spysat": {
			private _satRec = [_si, stSatRec] call TZK_fnc_getWorkingStructures;
			if (count _satRec == 0) exitWith { systemChat "No Working Camera Receiver" };
			if (2 != (upgMatrix select _si) select upgSatCam) exitWith { systemChat "Need upgrade Satellite Camera first" };
			if (2 != (upgMatrix select _si) select upgSpySat) exitWith { systemChat "Need upgrade Spy Satellite first" };
			bSpySat = !bSpySat;
			systemChat format ["Spy Satellite %1", ["OFF", "ON"] select bSpySat];
		};
		case "numberedai": {
			bNumberedAI = !bNumberedAI;
			systemChat format ["Numbered AI %1", ["OFF", "ON"] select bNumberedAI];
		};

		case "upgrade": {
			private _idx = lbCurSel (_disp displayCtrl TZK_IDC_OPT_UPGRADE_LIST);
			if (_idx < 0) exitWith { systemChat "No upgrade selected" };
			private _cc = [_si, stCC] call TZK_fnc_getWorkingStructures;
			if (count _cc == 0) exitWith { systemChat "No Working Command Center" };
			private _cost = (upgDefs select _idx) select 1;
			if ((_groupsMoney select _gi) < _cost) exitWith { systemChat "Not Enough Cash" };
			[_si, _gi, _idx] remoteExec ["TZK_fnc_upgradeStart", 2];
		};
		case "upgcancel": {
			if (!_isCommander) exitWith { systemChat "Only commander can cancel upgrades" };
			private _idx = lbCurSel (_disp displayCtrl TZK_IDC_OPT_UPGRADE_LIST);
			if (_idx < 0) exitWith { systemChat "No upgrade selected" };
			[_si, _gi, _idx] remoteExec ["TZK_fnc_upgradeCancel", 2];
		};

		case "destruction": {
			closeDialog 0;
			systemChat "[Destruction] Not yet migrated";
		};
		case "leaderboard": {
			closeDialog 0;
			systemChat "[Leaderboard] Not yet migrated";
		};
		case "cleanup": {
			systemChat "Cleaning ground near player...";
			[getPosATL player] remoteExec ["TZK_fnc_cleanupGround", 2];
		};
		case "vote": {
			closeDialog 0;
			systemChat "[Vote] Not yet migrated";
		};
		case "cmdrule": {
			if (!_isCommander) exitWith { systemChat "Only commander in PvP can modify rules" };
			closeDialog 0;
			systemChat "[CMD Rules] Not yet migrated";
		};
		case "showngroups": {
			closeDialog 0;
			systemChat "[Shown Groups] Not yet migrated";
		};
		case "concurrentrts": {
			closeDialog 0;
			systemChat "[Concurrent Orders] Not yet migrated";
		};
		case "aicheck": {
			private _idx = lbCurSel (_disp displayCtrl TZK_IDC_OPT_TRANSFER_GRP);
			if (_idx < 0) exitWith { systemChat "No group selected" };
			if (_idx == _gi) exitWith { systemChat "You are not an AI." };
			if ((_groups select _idx) in _groupsAI) then {
				systemChat "This group is AI.";
			} else {
				systemChat "This group is human-controlled.";
			};
		};
		case "console": {
			closeDialog 0;
			systemChat "[Console] Not yet migrated";
		};
	};

	// Income rate sync (commander only, on combo change)
	if (_isCommander) then {
		private _selCo = lbValue [TZK_IDC_OPT_INCOME_CO, lbCurSel (_disp displayCtrl TZK_IDC_OPT_INCOME_CO)];
		if (_selCo >= 0 && {(incomeRateCo select _si) != (_selCo / 100)}) then {
			[_si, _selCo / 100, -1] remoteExec ["TZK_fnc_setIncomeRate", 2];
		};
		private _selPl = lbValue [TZK_IDC_OPT_INCOME_PLAYER, lbCurSel (_disp displayCtrl TZK_IDC_OPT_INCOME_PLAYER)];
		if (_selPl >= 0 && {(incomeRatePlayer select _si) != (_selPl / 100)}) then {
			[_si, -1, _selPl / 100] remoteExec ["TZK_fnc_setIncomeRate", 2];
		};

		// Worker behaviour sync
		private _selWk = lbCurSel (_disp displayCtrl TZK_IDC_OPT_WORKER_BHV);
		if (_selWk >= 0 && {(workerBehaviour select _si) != _selWk}) then {
			[_si, _selWk] remoteExec ["TZK_fnc_setWorkerBehaviour", 2];
		};

		// AI respawn sync
		private _selRsp = lbCurSel (_disp displayCtrl TZK_IDC_OPT_AI_RESPAWN);
		if (_selRsp >= 0 && _selRsp != TZK_optCurrentRespawnIdx) then {
			TZK_optCurrentRespawnIdx = _selRsp;
			if (_selRsp < count TZK_optRespawnObjects) then {
				[_si, TZK_optRespawnObjects select _selRsp] remoteExec ["TZK_fnc_setRespawnObj", 2];
			};
		};
	};

	sleep 0.2;
};
