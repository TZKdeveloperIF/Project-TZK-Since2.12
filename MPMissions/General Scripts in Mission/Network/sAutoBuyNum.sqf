// args: [si, gi, index, new num, gi sender]
// should be a sqf file for local synchronization

_this call preprocessFile "Network\hAutoBuyNum.sqf";
publicExec format [
	{%1 call preprocessFile "Network\hAutoBuyNum.sqf"}
	, _this
];