// TZK CTI - Set Income Rate (Server only)
// Mirrors OFP: Net/sIncomeRateCo.sqf + Net/sIncomeRatePpl.sqf
// Args: [si, rateCo, ratePlayer]
//   Pass -1 for the rate you don't want to change.

if (!isServer) exitWith {};

params ["_si", "_rateCo", "_ratePlayer"];

if (_rateCo >= 0) then {
	incomeRateCo set [_si, _rateCo];
	publicVariable "incomeRateCo";
};

if (_ratePlayer >= 0) then {
	incomeRatePlayer set [_si, _ratePlayer];
	publicVariable "incomeRatePlayer";
};
