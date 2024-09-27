// args: bridge project
private [{_funcGenerator}, {_funcBridgeGetObj}
	, {_headInfo}, {_bridgesInfo}, {_bridgeIdx}, {_bridgeCnt}
	, {_funcBridgeGetObj}, {_hasBrokenSegment}
];

_funcGenerator = preprocessFile "Bridge\InfoFunc.sqf";
	_funcBridgeGetObj = "BridgeGetObj" call _funcGenerator;

_headInfo = _this call ("GetHeadInfo" call _funcGenerator);
_bridgesInfo = _this call ("GetBridgeInfo" call _funcGenerator);
_bridgeIdx = 0; _bridgeCnt = (_headInfo call ("GetSegmentCnt" call _funcGenerator));
_funcBridgeGetObj = "BridgeGetObj" call _funcGenerator;
_hasBrokenSegment = false;
while {_bridgeIdx < _bridgeCnt && not _hasBrokenSegment} do {
	if (not alive ([_bridgesInfo, _bridgeIdx] call _funcBridgeGetObj)) then {
		_hasBrokenSegment = true;
	};
	_bridgeIdx = _bridgeIdx + 1;
};
_hasBrokenSegment