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

	call format ["RtsArea%1%2Idx = -1", _markerType, _webShort];

	_i = _i + 1;
};