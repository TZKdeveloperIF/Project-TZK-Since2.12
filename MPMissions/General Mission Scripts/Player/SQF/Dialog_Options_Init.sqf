// args: [_idcTransferAmount, _idcIncomeRatio, _idcIncomeRatioPlayer, _idcGroupMarkers, _idcReports, _idcTransferCommandGroup, _idcWorkerBehaviour, _idcAIRespawn]
// return: [_currentAiRespawn, _respawnObjects]

private ["_idcTransferAmount", "_idcIncomeRatio", "_idcIncomeRatioPlayer", "_idcGroupMarkers", "_idcReports", "_idcTransferCommandGroup", "_idcWorkerBehaviour", "_idcAIRespawn",
"_groups", "_groupsName", "_groupsAI", "_groupCommander", "_report", "_mhq", "_MCVs", 
"_texts", "_index", "_count", 
"_id", "_x", "_respawnObject", "_respawnObjects", "_currentAiRespawn", "_textPos", "_type", "_structs"];

_idcTransferAmount = _this select 0;
_idcIncomeRatio = _this select 1;
_idcIncomeRatioPlayer = _this select 2;
_idcGroupMarkers = _this select 3;
_idcReports = _this select 4;
_idcTransferCommandGroup = _this select 5;
_idcWorkerBehaviour = _this select 6;
_idcAIRespawn = _this select 7;

_mhq = mhq select siPlayer;
_MCVs = MCV select siPlayer;
_report = report;
_groups = groupMatrix select siPlayer;
_groupsName = groupNameMatrix select siPlayer;
_groupsAI = groupAiMatrix select siPlayer;
_groupCommander = (groupCommander select siPlayer);

// AMOUNTS
{ _id = lbAdd [_idcTransferAmount, format["%1", _x] ]; lbSetValue [_idcTransferAmount, _id, _x]; if (500==_x) then { lbSetCurSel [_idcTransferAmount, _id] } } forEach [50,100,200,500,1000,2000,5000,10000,20000];
_id = lbAdd [_idcTransferAmount, "Change"]; lbSetValue [_idcTransferAmount, _id, 114514];
_id = lbAdd [_idcTransferAmount, "All"]; lbSetValue [_idcTransferAmount, _id, 50000];

// PLAYER INCOME
{ _id = lbAdd [_idcIncomeRatio, format["%1%2", 100*_x, "%"] ]; lbSetValue [_idcIncomeRatio, _id, 100*_x]; if (_incomeRatio==_x) then { lbSetCurSel [_idcIncomeRatio, _id] } } forEach [0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1];
{ _id = lbAdd [_idcIncomeRatioPlayer, format["%1%2", 100*_x, "%"] ]; lbSetValue [_idcIncomeRatioPlayer, _id, 100*_x]; if (_incomeRatioPlayer==_x) then { lbSetCurSel [_idcIncomeRatioPlayer, _id] } } forEach [0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 1];

// AI MARKERS GROUP
_texts = []; _index = 0;
{ _texts set [_index, format["%1 %2", [name leader _x, "AI"] select (_x in _groupsAI), _groupsName select _index] ]; _index=_index+1 } forEach _groups;
lbClear _idcGroupMarkers;
{ lbAdd [_idcGroupMarkers, _x];  } forEach _texts;
lbAdd [_idcGroupMarkers, "All"];
lbSetCurSel [_idcGroupMarkers, giMarkersAI];

// REPORTS
lbClear _idcReports;
{ lbAdd [_idcReports, _x] } forEach ["All", "Vehicles & Structs", "Structs", "None"];
lbSetCurSel [_idcReports, _report];

// TRANSFER COMMANDER
lbClear _idcTransferCommandGroup;
_index = 0; { _id = lbAdd [_idcTransferCommandGroup, format["%1 %2", [name leader _x, "AI"] select (_x in _groupsAI), _groupsName select _index] ]; lbSetValue[_idcTransferCommandGroup, _id, _index]; if (_x == _groupCommander) then { lbSetCurSel [_idcTransferCommandGroup, _index] }; _index=_index+1 } forEach _groups;

// WORKER BEHAVIOUR
lbClear _idcWorkerBehaviour;
{ lbAdd [_idcWorkerBehaviour, _x] } forEach ["Reckless", "Cautious"];
lbSetCurSel [_idcWorkerBehaviour, call format["pvWorkerBehaviour%1", siPlayer]];

// RESPAWN OBJECT
_respawnObject = objNull;
call format["_respawnObject = pvRespawnObjectAi%1", siPlayer];

_respawnObjects = []; _currentAiRespawn = -1;

if (alive _mhq) then
{
	_respawnObjects = [_mhq];
	_textPos = (getPos _mhq) call funcCalcTownDirDistFromPos;
	_id = lbAdd [_idcAIRespawn, format ["MHQ - %1", _textPos]];
	if (_respawnObject == _mhq) then {lbSetCurSel [_idcAIRespawn, _id]; _currentAiRespawn = _id };
};

if (("alive _x " count _MCVs) > 0) then
{
	{
		if (alive _x) then
		{
			_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
			_id = lbAdd [_idcAIRespawn, format ["MCV - %1", _textPos]];
			if (_respawnObject == _x) then {lbSetCurSel [_idcAIRespawn, _id]; _currentAiRespawn = _id};
		};
	} forEach _MCVs;
};
{ if (alive _x) then { _respawnObjects = _respawnObjects + [_x] } } forEach _MCVs;

_index = 0; _count = count structsRespawn;
while "_index < _count" do
{
	_type = structsRespawn select _index;
	_structs = [siPlayer, _type] call funcGetWorkingStructures;
	
	_name = (structDefs select _type) select sdName;
	{
		_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
		_id = lbAdd [_idcAIRespawn, format ["%1 - %2", _name, _textPos]];
		if (_respawnObject == _x) then {lbSetCurSel [_idcAIRespawn, _id]; _currentAiRespawn = _id }
	} forEach _structs;
	_respawnObjects = _respawnObjects + _structs;
	_index = _index + 1;
};
[_currentAiRespawn, _respawnObjects]