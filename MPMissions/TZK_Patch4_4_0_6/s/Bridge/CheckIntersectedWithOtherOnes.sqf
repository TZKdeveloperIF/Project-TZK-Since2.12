// args: [_beginPos, _endPos]
private [{_i}, {_c}
	, {_funcGenerator}, {_funcGetHead}, {_funcGetValid}, {_funcGetBegin}, {_funcGetEnd}
	, {_funcIntersected}
	, {_intersected}
	, {_project}, {_headInfo}
];

_funcGenerator = preprocessFile "Bridge\InfoFunc.sqf";
	_funcGetHead = "GetHeadInfo" call _funcGenerator;
	_funcGetValid = "GetValidStatus" call _funcGenerator;
	_funcGetBegin = "GetBeginPos" call _funcGenerator;
	_funcGetEnd = "GetEndPos" call _funcGenerator;

_funcIntersected = preprocessFile "Math\SegmentIntersected.sqf";

_i = 0; _c = count TzkBrdigeProjects; _intersected = false;
while {_i < _c && not _intersected} do {
	_project = TzkBrdigeProjects select _i;
	_headInfo = _project call _funcGetHead;
	if (_headInfo call _funcGetValid) then {
		_intersected = [_this, [_headInfo call _funcGetBegin, _headInfo call _funcGetEnd]] call _funcIntersected;
	};

	_i = _i + 1;
};
_intersected