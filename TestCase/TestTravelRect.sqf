// args: [idx of player mine area, index, step length]

_area = TzkPplRtsAreaInfo select ("Mine" call preprocessFile "Rts\Marker\EnumOfType.sqf") select (_this select 0);
_res = [_area, _this select 1, _this select 2] call preprocessFile "Util\TravelRect.sqf";
if (count _res > 0) then {
	[_res, rtsMouseId] exec "Player\Loop\CmdMarker.sqs";
} else {
	hint "invalid result";
};