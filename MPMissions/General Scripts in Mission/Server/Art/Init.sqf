// Target Object should be lazy-load
countTargetMarkers = 10;
TzkArtTargetSvrWest = []; TzkArtTargetSvrWest resize countTargetMarkers;
TzkArtTargetSvrEast = []; TzkArtTargetSvrEast resize countTargetMarkers;

// Format of element: [object, valid, knowsAbout value]
_i = 0; while {_i < countTargetMarkers} do {
	TzkArtTargetSvrWest set [_i, [objNull, false, 0]];
	call Format[{TargetS_%1%2 = objNull}, _i, si0];
	_i = _i + 1;
};
_i = 0; while {_i < countTargetMarkers} do {
	TzkArtTargetSvrEast set [_i, [objNull, false, 0]];
	call Format[{TargetS_%1%2 = objNull}, _i, si1];
	_i = _i + 1;
};

// Art Area
TzkArtSvrAreaW = []; TzkArtSvrAreaW resize countTargetMarkers;
TzkArtSvrAreaE = []; TzkArtSvrAreaE resize countTargetMarkers;

// Format of element: [x, y, w, h, dir]
_i = 0; while {_i < countTargetMarkers} do {
	TzkArtSvrAreaW set [_i, [-10, -10, 0, 0, 0]];
	TzkArtSvrAreaE set [_i, [-10, -10, 0, 0, 0]];
	_i = _i + 1;
};

// Pre analysis result of art Area
// Format of element: [time stamp, valid target pos info, nearby structure pos...]
TzkArtSvrAreaAnalW = []; TzkArtSvrAreaAnalW resize countTargetMarkers;
TzkArtSvrAreaAnalE = []; TzkArtSvrAreaAnalE resize countTargetMarkers;
_i = 0; while {_i < countTargetMarkers} do {
	TzkArtSvrAreaAnalW set [_i, [0, [true]]];
	TzkArtSvrAreaAnalE set [_i, [0, [true]]];
	_i = _i + 1;
};