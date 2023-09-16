// args: [[si, gi, giSender], [auto buy enum, index of auto buy items], [new params]]
// should be a sqf file for local synchronization

_this call preprocessFile "Network\hAutoBuy.sqf";
publicExec format [
	{[%1,%2,[UnitById %3,%4]] call preprocessFile "Network\hAutoBuy.sqf"}
	, _this select 0
	, _this select 1
	, (_this select 2 select 0) call funcGenNetIdStr
	, _this select 2 select 1
];