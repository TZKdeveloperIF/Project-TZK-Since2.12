// args: [index + 100 * (if set marker then 1 else 0), marker type, to server: bool]
// read info from "TzkRtsArea" marker
private [{_idxInfo}, {_markerType}, {_toServer}];
_idxInfo = _this select 0; _markerType = _this select 1; _toServer = _this select 2;

private [{_param}, {_idx}];
_idx = (if (_idxInfo >= 100) then {_idxInfo - 100} else {_idxInfo});
if (_idxInfo >= 100) then {
	// Set
	_pos = getMarkerPos "TzkRtsArea";
	_size = getMarkerSize "TzkRtsArea";
	_dir = getMarkerDir "TzkRtsArea";

	private [{_func}]; _func = preprocessFile "Math\Round.sqf";
	private [{_geometryInfo}]; _geometryInfo = [];
	_geometryInfo set [0, (_pos select 0) call _func];
	_geometryInfo set [1, (_pos select 1) call _func];
	_geometryInfo set [2, (_size select 0) call _func];
	_geometryInfo set [3, (_size select 1) call _func];
	_geometryInfo set [4, _dir call _func];

	_param = [];
	_param set [0, _markerType];
	_param set [1, _geometryInfo];
	_param set [2, siPlayer];
	_param set [3, _idx];
	// record last being set marker idx
	call format [{%1 = %2}, _cachedIdxName, _idx];
} else {
	// Clear
	_param = [_markerType, [-10, -10, 0, 0, 0], siPlayer, _idx];
	// clear rts area idx cache
	call format [{%1 = %2}, _cachedIdxName, -1];
};

if _toServer then {
	// modifying markers' info should be done on server
	// and modifying markers' position should be called by server after having modified info
	_param exec "Rts\Marker\hSvrModifyArea.sqs";
	publicExec format [{%1 exec "Rts\Marker\hSvrModifyArea.sqs"}, _param];
} else {
	// On player client we can directly edit markers' info and position
	private [{_geometryInfo}]; _geometryInfo = _param select 1;
	_enum = _markerType call preprocessFile "Rts\Marker\EnumOfType.sqf";

	// marker position
	"Ppl" call preprocessFile "Rts\Marker\EditAreaMarker.sqf";

	// marker info
	_info = TzkPplRtsAreaInfo select _enum select _idx;
	{_info set [_x, _geometryInfo select _x]} forEach [0,1,2,3,4];
};