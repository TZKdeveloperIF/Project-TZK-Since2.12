// args: [index, for server: bool]
private [{_idx}, {_si}, {_4Server}];
_idx = _this select 0; _si = _this select 1; _4Server = _this select 2;

// ASSERT(_enum >= 0)
if _4Server then {
	TzkSvrArtAreaAnal select _si select _idx
} else {
	TzkPplArtAreaAnal select _idx
}