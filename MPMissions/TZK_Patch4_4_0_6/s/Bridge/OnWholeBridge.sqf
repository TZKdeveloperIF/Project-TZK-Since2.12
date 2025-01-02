comment {args: [vehicle, bridge project]} ;
private [
	{_vehPosASL}, {_project}, {_headInfo}
	, {_bridgesInfo}, {_bridgeIdx}, {_bridgeCnt}
	, {_funcGenerator}, {_funcBridgeGetPos}, {_funcBridgeGetVec}, {_funcOn}
	, {_onBridge}
];

_vehPosASL = getPosASL(_this select 0);
_project = _this select 1;

_funcGenerator = preprocessFile "Bridge\InfoFunc.sqf";
_headInfo = _project call ("GetHeadInfo" call _funcGenerator);
_bridgesInfo = _project call ("GetBridgeInfo" call _funcGenerator);
_bridgeIdx = 0; _bridgeCnt = (_headInfo call ("GetSegmentCnt" call _funcGenerator));
_funcBridgeGetPos = "BridgeGetPosASL" call _funcGenerator;
_funcBridgeGetVec = "BridgeGet3dVec" call _funcGenerator;

_funcOn = loadFile "\TZK_Patch4_4_0_6\s\Bridge\OnSegment.sqf";

_onBridge = false;
while {_bridgeIdx < _bridgeCnt && not _onBridge} do {
	if ([_vehPosASL, [_bridgesInfo, _bridgeIdx] call _funcBridgeGetPos, 
		[_bridgesInfo, _bridgeIdx] call _funcBridgeGetVec] call _funcOn
	) then {
		_onBridge = true;
	};
	_bridgeIdx = _bridgeIdx + 1;
};
_onBridge