// TZK CTI - Sync money status to clients
// Mirrors OFP: Net/sMoneyStatus.sqs
// Args: [si, gi]
// Broadcasts groupMoneyMatrix entry so clients can read their balance.

params ["_si", "_gi"];

if (!isServer) exitWith {};

private _money = groupMoneyMatrix select _si select _gi;
private _varName = format ["TZK_money_%1_%2", _si, _gi];
missionNamespace setVariable [_varName, _money, true];
