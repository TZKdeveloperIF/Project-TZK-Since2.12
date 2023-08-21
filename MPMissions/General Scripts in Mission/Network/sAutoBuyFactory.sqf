// args: [si, gi, index, new factory, factory type, gi sender]
// should be a sqf file for local synchronization

_this call preprocessFile "Network\hAutoBuyFactory.sqf";
publicExec format [
	{[%1,%2,%3,UnitById %4,%5] call preprocessFile "Network\hAutoBuyFactory.sqf"}
	, _this select 0
	, _this select 1
	, _this select 2
	, (_this select 3) call funcGenNetIdStr
	, _this select 4
	, _this select 5
];