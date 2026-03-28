// TZK CTI - Money Add (Server only)
// Mirrors OFP: Server/Money/Add.sqs
// Args: [si, gi, amount, sendRepeats]
// Adds amount to groupMoneyMatrix[si][gi], then syncs to clients.

params ["_si", "_gi", "_amount", ["_sendRepeats", 0]];

if (!isServer) exitWith {};

waitUntil {!(mutexEditMoneyMatrix select _si select _gi)};
mutexEditMoneyMatrix select _si set [_gi, true];

private _current = groupMoneyMatrix select _si select _gi;
groupMoneyMatrix select _si set [_gi, _current + _amount];

if (_amount != 0) then {
	[_si, _gi] call TZK_fnc_syncMoneyStatus;
};

mutexEditMoneyMatrix select _si set [_gi, false];
