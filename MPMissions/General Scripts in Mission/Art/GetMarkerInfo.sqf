// args: [index, for server: bool]
private [{_idx}, {_si}, {_4Server}];
_idx = _this select 0; _si = _this select 1; _4Server = _this select 2;

private [{_enum}];
_enum = "Art" call preprocessFile "Rts\Marker\EnumOfType.sqf";
// ASSERT(_enum >= 0)
if _4Server then {
	TzkSvrRtsAreaInfo select _si select _enum select _idx
} else {
	TzkPplRtsAreaInfo select _enum select _idx
}