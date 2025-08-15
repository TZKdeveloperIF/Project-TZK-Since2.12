// args: [marker type, web name, web short, color, count]
private [{_markerType}, {_webType}, {_webShort}, {_color}, {_cnt}];
_markerType = _this select 0;
_webType = _this select 1;
_webShort = _this select 2;
_color = _this select 3;
_cnt = _this select 4;

private [{_i}, {_marker}];
_i = 0; while {_i < _cnt} do {
	_marker = createMarker [format ["RtsArea%1%2%3", _markerType, _webShort, _i], [-10, -10]];
	_marker setMarkerSize [0,0];
	_marker setMarkerColor _color;
	_marker setMarkerShape "RECTANGLE";
	_marker setMarkerBrush "fDiagonal";

	_marker = createMarker [format ["RtsText%1%2%3", _markerType, _webShort, _i], [-10, -10]];
	_marker setMarkerSize [0,0];
	_marker setMarkerColor _color;
	_marker setMarkerType "Warning";
	_marker setMarkerText format ["%1 %2 Area %3", _webType, _markerType, _i];

	if not (isNull player) then {
		private [{_webText}, {_markerText}, {_texts}];
		_webText = _webType; _markerText = _markerType;
		_texts = TzkInGameText select 029;
		if (_webText == "Player") then {_webText = _texts select 2};
		if (_webText == "Server") then {_webText = _texts select 3};
		if (_markerText == "Art") then {_markerText = _texts select 0};
		if (_markerText == "Mine") then {_markerText = _texts select 1};
		_marker setMarkerText format ["%1 %2 %4 %3", _webText, _markerText, _i, _texts select 4];
	};

	call format ["RtsArea%1%2Idx = -1", _markerType, _webShort];

	_i = _i + 1;
};