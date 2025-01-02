comment {args: project id} ;
private [{_funcGenerator}, {_funcGetHead}, {_funcGetValid}, {_funcGetId}
	, {_bridgeId}, {_i}, {_c}, {_project}, {_headInfo}
];

_funcGenerator = preprocessFile "Bridge\InfoFunc.sqf";
	_funcGetHead = "GetHeadInfo" call _funcGenerator;
	_funcGetValid = "GetValidStatus" call _funcGenerator;
	_funcGetId = "GetId" call _funcGenerator;

_bridgeId = _this;
_i = 0; _c = count TzkBrdigeProjects; while {_i < _c} do {
	_project = TzkBrdigeProjects select _i;
	_headInfo = _project call _funcGetHead;
	if ((_headInfo call _funcGetValid) && _bridgeId == (_headInfo call _funcGetId)) then {
		[_headInfo, false] call ("SetValidStatus" call _funcGenerator);
		comment {server will remove all bridge objects} ;
		comment {todo: better keep consistent with destruction} ;
		if isServer then {
			private [{_bridgesInfo}, {_bridgeIdx}, {_bridgeCnt}
				, {_dyingBridge}, {_funcBridgeGetObj}, {_delayDeleteScript}
			];
			_bridgesInfo = _project call ("GetBridgeInfo" call _funcGenerator);
			_bridgeIdx = 0; _bridgeCnt = (_headInfo call ("GetSegmentCnt" call _funcGenerator));
			_funcBridgeGetObj = "BridgeGetObj" call _funcGenerator;
			_delayDeleteScript = localize {TZK_PATH_DELAY_DELETE_UNIT};
			while {_bridgeIdx < _bridgeCnt} do {
				_dyingBridge = ([_bridgesInfo, _bridgeIdx] call _funcBridgeGetObj);
				_dyingBridge setDamage 1;
				[_dyingBridge, 10] exec _delayDeleteScript;
				_bridgeIdx = _bridgeIdx + 1;
			};
		};
	};
	_i = _i + 1;
};