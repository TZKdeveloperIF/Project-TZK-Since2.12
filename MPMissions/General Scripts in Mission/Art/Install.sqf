// Artillery Reverse Detect
TzkArtRdCount = 30; TzkArtRdIdx = 0; TzkArtRdMutex = false;
TzkArtRdTime = []; TzkArtRdTime resize TzkArtRdCount;

private [{_i}, {_marker}]; _i = 0; while {_i < TzkArtRdCount} do {
	TzkArtRdTime set [_i, 0];

	_marker = format ["TzkArtRd%1", _i]; createMarker [_marker, [-1000, -1000]];
	_marker setMarkerType "Marker"; _marker setMarkerSize [0.5,0.5]; _marker setMarkerColor "ColorDarkPurple_xj400";

	_i = _i + 1;
};