comment {args: none} ;
private [
	{_idxOfBridgeId}
	, {_i}, {_c}, {_project}, {_headInfo}, {_beginPos}, {_endPos}, {_centerPos}, {_marker}
];

_idxOfBridgeId = 0;
_i = 0; _c = count TzkBrdigeProjects; while {_i < _c} do {
	_project = TzkBrdigeProjects select _i;
	_headInfo = _project call _funcGetHead;

	if ((_headInfo call _funcGetValid) && ((_headInfo call _funcGetSi) == _si)) then {
		_beginPos = _headInfo call _funcGetBegin;
		_endPos = _headInfo call _funcGetEnd;
		_centerPos = [
			((_beginPos select 0) + (_endPos select 0)) / 2,
			((_beginPos select 1) + (_endPos select 1)) / 2
		];

		_marker = format ["Bridge_Id_%1", _idxOfBridgeId];
		if (_idxOfBridgeId >= _allocatedIdMarkerCnt) then {
			createMarker [_marker, hiddenMarkerPos];
			_marker setMarkerSize [0,0];
			_marker setMarkerType "Warning";
			_marker setMarkerColor "ColorDarkPurple_xj400";

			_allocatedIdMarkerCnt = _allocatedIdMarkerCnt + 1;
		};
		_marker setMarkerPos _centerPos;
		_marker setMarkerText format ["Bridge: %1", _headInfo call _funcGetId];

		_idxOfBridgeId = _idxOfBridgeId + 1;
	};
	_i = _i + 1;
};

while {_idxOfBridgeId < _allocatedIdMarkerCnt} do {
	_marker = format ["Bridge_Id_%1", _idxOfBridgeId];
	_marker setMarkerPos hiddenMarkerPos;
	_idxOfBridgeId = _idxOfBridgeId + 1;
};