// TZK CTI - Free reserved building units count (Server only)
// Mirrors OFP: Server/BuyUnit/AsyncFreeBuildingUnitsCount.sqs
// Args: [si, gi, unitsToBuild]

if (!isServer) exitWith {};

params ["_si", "_gi", "_unitsToBuild"];

if (_unitsToBuild <= 0) exitWith {};

waitUntil {!(mutexBuildingQueue select _si select _gi)};
mutexBuildingQueue select _si set [_gi, true];

private _cur = groupUnitsBuildingMatrix select _si select _gi;
groupUnitsBuildingMatrix select _si set [_gi, (_cur - _unitsToBuild) max 0];

mutexBuildingQueue select _si set [_gi, false];
