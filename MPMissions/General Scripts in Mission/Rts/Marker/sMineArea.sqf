// args: index + 100 * (if set marker then 1 else 0)
// read info from "TzkRtsArea" marker

private [{_param}];
if (_this >= 100) then {
	// Set
	private [{_idx}];
	_idx = _this - 100;
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
	_param set [0, "Mine"];
	_param set [1, _geometryInfo];
	_param set [2, siPlayer];
	_param set [3, _idx];
	// record last being set marker idx
	call format [{%1 = %2}, _cachedIdxName, _idx];
} else {
	// Clear
	_param = ["Mine", [-10, -10, 0, 0, 0], siPlayer, _this];
	// clear rts area idx cache
	call format [{%1 = %2}, _cachedIdxName, -1];
};

_param exec "Rts\Marker\hSvrModifyArea.sqs";
publicExec format [{%1 exec "Rts\Marker\hSvrModifyArea.sqs"}, _param];