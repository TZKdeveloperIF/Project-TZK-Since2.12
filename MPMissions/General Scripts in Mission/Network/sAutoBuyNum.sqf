// args: [[si, gi, giSender], [auto buy enum, index of auto buy items], [new params]]
// should be a sqf file for local synchronization

_this call preprocessFile "Network\hAutoBuy.sqf";
publicExec format [
	{%1 call preprocessFile "Network\hAutoBuy.sqf"}
	, _this
];