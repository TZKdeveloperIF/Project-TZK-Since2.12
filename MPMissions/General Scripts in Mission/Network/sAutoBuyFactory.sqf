// args: [[si, gi, giSender], [auto buy enum, index of auto buy items], [new params]]
// should be a sqf file for local synchronization

private [{_factory}, {_netIdStr}, {_bNull}];
_factory = _this select 2 select 0;
_netIdStr = _factory call funcGenNetIdStr;
_bNull = isNull _factory;

_this call preprocessFile "Network\hAutoBuy.sqf";
publicExec format [
	{[%1,%2,[%5 %3,%4]] call preprocessFile "Network\hAutoBuy.sqf"}
	, _this select 0
	, _this select 1
	, if _bNull then {{objNull}} else {_netIdStr}
	, _this select 2 select 1
	, if _bNull then {""} else {{UnitById}}
];