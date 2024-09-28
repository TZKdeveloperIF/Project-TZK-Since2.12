// args: si
// read position info from "TzkRtsAreadiagonal" marker
private [{_si}, {_markerPos}, {_markerDir}, {_markerSize}, {_vec}, {_diagonal}
	, {_funcGenerator}, {_funcGetHead}, {_funcGetValid}, {_funcGetSi}, {_funcGetBegin}, {_funcGetEnd}, {_funcIntersected}
	, {_intersectedProjects}, {_i}, {_c}, {_project}, {_headInfo}
];
_si = _this;

_markerPos = markerPos "TzkRtsAreadiagonal"; _markerPos resize 2;
_markerDir = getMarkerDir "TzkRtsAreadiagonal";
_markerSize = markerSize "TzkRtsAreadiagonal";
_vec = [[_markerSize select 0, _markerSize select 1], _markerDir] call funcVectorRot2D;
_diagonal = [[_markerPos, _vec] call funcVectorSub, [_markerPos, _vec] call funcVectorAdd];

_funcGenerator = preprocessFile "Bridge\InfoFunc.sqf";
	_funcGetHead = "GetHeadInfo" call _funcGenerator;
	_funcGetValid = "GetValidStatus" call _funcGenerator;
	_funcGetSi = "GetSi" call _funcGenerator;
	_funcGetBegin = "GetBeginPos" call _funcGenerator;
	_funcGetEnd = "GetEndPos" call _funcGenerator;
_funcIntersected = preprocessFile "Math\SegmentIntersected.sqf";

_intersectedProjects = [];
_i = 0; _c = count TzkBrdigeProjects; while {_i < _c} do {
	_project = TzkBrdigeProjects select _i;
	_headInfo = _project call _funcGetHead;

	if ((_headInfo call _funcGetValid) && ((_headInfo call _funcGetSi) == _si)) then {
		if ([_diagonal, [_headInfo call _funcGetBegin, _headInfo call _funcGetEnd]] call _funcIntersected) then {
			_intersectedProjects set [count _intersectedProjects, _project];
		};
	};
	_i = _i + 1;
};
_intersectedProjects