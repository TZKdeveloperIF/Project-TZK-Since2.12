// TZK CTI - Transfer Commander Role (Server only)
// Mirrors OFP: Net/sChangeCo.sqs
// Args: [si, newCommanderGi]

if (!isServer) exitWith {};

params ["_si", "_newGi"];

private _groups = groupMatrix select _si;
if (_newGi < 0 || _newGi >= count _groups) exitWith {};

private _newGrp = _groups select _newGi;
if (isNull _newGrp) exitWith {};
if (_newGrp in (groupAiMatrix select _si)) exitWith {};

groupCommander set [_si, _newGrp];
publicVariable "groupCommander";

private _sideName = ["WEST", "EAST"] select _si;
diag_log format ["TZK CTI: Commander transferred to gi=%1 (%2) side=%3", _newGi, groupNameMatrix select _si select _newGi, _sideName];

[format ["%1 is now the Commander", name leader _newGrp]] remoteExec ["systemChat"];
