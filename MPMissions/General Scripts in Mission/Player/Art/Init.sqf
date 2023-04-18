// Art Area
TzkArtPplArea = []; TzkArtPplArea resize countTargetMarkers;

// Format of element: [x, y, w, h, dir]
_i = 0; while {_i < countTargetMarkers} do {
	TzkArtPplArea set [_i, [-10, -10, 0, 0, 0]];
	_i = _i + 1;
};

// Pre analysis result of art Area
// Format of element: [time stamp, valid target pos info, nearby structure pos...]
TzkArtPplAreaAnal = []; TzkArtPplAreaAnal resize countTargetMarkers;
_i = 0; while {_i < countTargetMarkers} do {
	TzkArtPplAreaAnal set [_i, [0, [true]]];
	_i = _i + 1;
};