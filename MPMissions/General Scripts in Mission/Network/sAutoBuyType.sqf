// args: [si, gi, bind, new type, gi sender]
// should be a sqf file for local synchronization

_this call preprocessFile "Network\hAutoBuyType.sqf";
publicExec format [
	{%1 call preprocessFile "Network\hAutoBuyType.sqf"}
	, _this
];