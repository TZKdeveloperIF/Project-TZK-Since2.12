comment "Create base group markers";
_i = 0;
_j = 0; while {_j < 12} do {
	_marker = Format["Base_0_%1_%2", _i, _j]; createMarker [_marker, hiddenMarkerPos]; _marker setMarkerType "Dot";
	_marker = Format["Base_1_%1_%2", _i, _j]; createMarker [_marker, hiddenMarkerPos]; _marker setMarkerType "Dot";
	_j = _j + 1;
};
comment "Initial base group markers";
_i = 0;
_j = 0; while {_j < 12} do {
	_marker = Format["Base_0_%1_%2", _i, _j];
	_marker setMarkerSize [0.70,0.70];
	_marker setMarkerPos hiddenMarkerPos;
	_marker setMarkerColor "ColorOrange_xj400";
	
	_marker = Format["Base_1_%1_%2", _i, _j];
	_marker setMarkerSize [0.70,0.70];
	_marker setMarkerPos hiddenMarkerPos;
	_marker setMarkerColor "ColorOrange_xj400";
	_j = _j + 1;
};