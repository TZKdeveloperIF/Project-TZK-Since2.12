// TZK CTI - Add score to a group
// Mirrors OFP: Net/sScore.sqs (TzkScripts select 174)
// Args: [score, si, gi]

params ["_score", "_si", "_gi"];

if (!isServer) exitWith {};

scoreMoney select _si set [_gi, (scoreMoney select _si select _gi) + _score];
