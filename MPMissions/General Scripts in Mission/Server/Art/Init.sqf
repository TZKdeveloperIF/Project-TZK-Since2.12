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