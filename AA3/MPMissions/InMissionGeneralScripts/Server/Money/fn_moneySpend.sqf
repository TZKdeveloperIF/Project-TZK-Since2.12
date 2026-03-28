// TZK CTI - Money Spend (Server only)
// Mirrors OFP: Server/Money/Spend.sqs
// Args: [si, gi, amount]
// Returns: true if balance >= 0 after spend (legal), false if overdrawn.

params ["_si", "_gi", "_amount"];

if (!isServer) exitWith {false};

waitUntil {!(mutexEditMoneyMatrix select _si select _gi)};
mutexEditMoneyMatrix select _si set [_gi, true];

private _result = (groupMoneyMatrix select _si select _gi) - _amount;
groupMoneyMatrix select _si set [_gi, _result];

[_si, _gi] call TZK_fnc_syncMoneyStatus;
moneySpent set [_si, _amount + (moneySpent select _si)];

mutexEditMoneyMatrix select _si set [_gi, false];

(_result >= 0)
