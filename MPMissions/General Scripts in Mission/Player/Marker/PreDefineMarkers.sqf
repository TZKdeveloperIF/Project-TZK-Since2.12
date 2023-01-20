// args: none
// define markers BEFORE "DynamicInitializationMarker.sqs" is executed
// markers defined here can thus be displayed BELOW other markers defined later

private [{_i}, {_c}, {_marker}];
_i = 0; _c = 10; while {_i < _c} do {
	_marker = createMarker [format ["ArtSvrArea%1", _i], [-10, -10]];
	_marker setMarkerSize [0,0];
	_marker setMarkerColor "ColorOrange_xj400";
	_marker setMarkerShape "RECTANGLE";
	_marker setMarkerBrush "fDiagonal";

	_marker = createMarker [format ["ArtSvrText%1", _i], [-10, -10]];
	_marker setMarkerSize [0,0];
	_marker setMarkerColor "ColorOrange_xj400";
	_marker setMarkerType "Warning";
	_marker setMarkerText format ["Server Art Area %1", _i];

	_i = _i + 1;
};