// TZK CTI - Options Dialog Init (Client only)
// Mirrors OFP: TZK_Patch4_4_0_6/s/UI/Options_Init.sqf
// One-time population of listboxes/combos when dialog opens.
// Args: [display, si, gi, groups, groupsAI, groupsName, groupCommander]

params ["_disp", "_si", "_gi", "_groups", "_groupsAI", "_groupsName", "_groupCommander"];

private _lbId = -1;

// ========== Transfer amount listbox ==========
private _ctrlAmt = _disp displayCtrl TZK_IDC_OPT_TRANSFER_AMT;
lbClear _ctrlAmt;
{
	_lbId = _ctrlAmt lbAdd (str _x);
	_ctrlAmt lbSetValue [_lbId, _x];
	if (_x == 500) then { _ctrlAmt lbSetCurSel _lbId };
} forEach [50, 100, 200, 500, 1000, 2000, 5000, 10000, 20000];
_lbId = _ctrlAmt lbAdd "Change";
_ctrlAmt lbSetValue [_lbId, 114514];
_lbId = _ctrlAmt lbAdd "All";
_ctrlAmt lbSetValue [_lbId, 50000];

// ========== Income ratio (Commander) ==========
private _ctrlCo = _disp displayCtrl TZK_IDC_OPT_INCOME_CO;
lbClear _ctrlCo;
private _curCo = incomeRateCo select _si;
{
	_lbId = _ctrlCo lbAdd format ["%1%2", round (_x * 100), "%"];
	_ctrlCo lbSetValue [_lbId, round (_x * 100)];
	if (_curCo == _x) then { _ctrlCo lbSetCurSel _lbId };
} forEach [0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1];

// ========== Income ratio (Player) ==========
private _ctrlPl = _disp displayCtrl TZK_IDC_OPT_INCOME_PLAYER;
lbClear _ctrlPl;
private _curPl = incomeRatePlayer select _si;
{
	_lbId = _ctrlPl lbAdd format ["%1%2", round (_x * 100), "%"];
	_ctrlPl lbSetValue [_lbId, round (_x * 100)];
	if (_curPl == _x) then { _ctrlPl lbSetCurSel _lbId };
} forEach [0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1];

// ========== Reports ==========
private _ctrlRpt = _disp displayCtrl TZK_IDC_OPT_REPORTS;
lbClear _ctrlRpt;
{ _ctrlRpt lbAdd _x } forEach ["All", "Vehicles & Structs", "Structs", "None"];
_ctrlRpt lbSetCurSel (TZK_reportLevel min 3);

// ========== Commander transfer combo ==========
private _ctrlCmd = _disp displayCtrl TZK_IDC_OPT_CMD_TRANSFER;
lbClear _ctrlCmd;
{
	private _idx = _forEachIndex;
	private _label = format ["%1 %2",
		[name leader _x, "AI"] select (_x in _groupsAI),
		_groupsName select _idx
	];
	_lbId = _ctrlCmd lbAdd _label;
	_ctrlCmd lbSetValue [_lbId, _idx];
	if (_x == _groupCommander) then { _ctrlCmd lbSetCurSel _lbId };
} forEach _groups;

// ========== Worker behaviour ==========
private _ctrlWk = _disp displayCtrl TZK_IDC_OPT_WORKER_BHV;
lbClear _ctrlWk;
{ _ctrlWk lbAdd _x } forEach ["Reckless", "Cautious"];
_ctrlWk lbSetCurSel (workerBehaviour select _si);

// ========== AI Respawn ==========
private _ctrlRsp = _disp displayCtrl TZK_IDC_OPT_AI_RESPAWN;
lbClear _ctrlRsp;

private _respawnObjects = [];
private _currentIdx = -1;
private _curRespawn = sideRespawnObjects select _si;

private _mhqObj = mhq select _si;
if (!isNull _mhqObj && alive _mhqObj) then {
	_respawnObjects pushBack _mhqObj;
	private _pStr = [getPosATL _mhqObj] call TZK_fnc_posTownLabel;
	_lbId = _ctrlRsp lbAdd format ["MHQ - %1", _pStr];
	if (_curRespawn isEqualTo _mhqObj) then { _ctrlRsp lbSetCurSel _lbId; _currentIdx = _lbId };
};

private _mcvs = MCV select _si;
{
	if (alive _x) then {
		_respawnObjects pushBack _x;
		private _pStr = [getPosATL _x] call TZK_fnc_posTownLabel;
		_lbId = _ctrlRsp lbAdd format ["MCV - %1", _pStr];
		if (_curRespawn isEqualTo _x) then { _ctrlRsp lbSetCurSel _lbId; _currentIdx = _lbId };
	};
} forEach _mcvs;

{
	private _stType = _x;
	private _structs = [_si, _stType] call TZK_fnc_getWorkingStructures;
	private _sName = (structDefs select _stType) select sdName;
	{
		_respawnObjects pushBack _x;
		private _pStr = [getPosATL _x] call TZK_fnc_posTownLabel;
		_lbId = _ctrlRsp lbAdd format ["%1 - %2", _sName, _pStr];
		if (_curRespawn isEqualTo _x) then { _ctrlRsp lbSetCurSel _lbId; _currentIdx = _lbId };
	} forEach _structs;
} forEach structsRespawn;

TZK_optRespawnObjects = _respawnObjects;
TZK_optCurrentRespawnIdx = _currentIdx;

// ========== Upgrades list (stub — populated if upgDefs exists) ==========
private _ctrlUpg = _disp displayCtrl TZK_IDC_OPT_UPGRADE_LIST;
lbClear _ctrlUpg;
if (!isNil "upgDefs") then {
	private _upgState = upgMatrix select _si;
	{
		_lbId = _ctrlUpg lbAdd format ["%1 $%2 %3min", _x select 0, _x select 1, _x select 2];
		private _state = _upgState select _forEachIndex;
		_ctrlUpg lbSetColor [_lbId,
			switch (_state) do {
				case 0: { [1,1,1,0.5] };
				case 1: { [1,1,0,0.7] };
				case 2: { [0,1,0.2,0.8] };
				default { [1,1,1,0.5] };
			}
		];
	} forEach upgDefs;
};
