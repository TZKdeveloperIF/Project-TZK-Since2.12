// args: id
private [{_funcGetHead}, {_funcGetId}
	, {_found}, {_i}, {_c}, {_project}, {_headInfo}
	, {_ret}
];

	_funcGetHead = "GetHeadInfo" call (preprocessFile "Bridge\InfoFunc.sqf");
	_funcGetId = "GetId" call (preprocessFile "Bridge\InfoFunc.sqf");

_found = false; _i = 0; _c = count TzkBrdigeProjects;
while {_i < _c && not _found} do {
	_project = TzkBrdigeProjects select _i;
	_headInfo = _project call _funcGetHead;
	if ( _this == (_headInfo call _funcGetId)) then {
		_found = true;
	};
	_i = _i + 1;
};
_ret = []; if _found then {_ret = _project};
_ret