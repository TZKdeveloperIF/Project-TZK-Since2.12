// Target Object should be lazy-load
countTargetMarkers = 10;
TzkArtTargetSvrWest = []; TzkArtTargetSvrWest resize countTargetMarkers;
TzkArtTargetSvrEast = []; TzkArtTargetSvrEast resize countTargetMarkers;
_i = 0;

// Format of element: [object, valid, knowsAbout value]
while {_i < countTargetMarkers} do {
	TzkArtTargetSvrWest set [i, [objNull, false, 0]];
	call Format[{TargetS_%1%2 = objNull}, _i, si0];
	_i = _i + 1;
};
while {_i < countTargetMarkers} do {
	TzkArtTargetSvrEast set [i, [objNull, false, 0]];
	call Format[{TargetS_%1%2 = objNull}, _i, si1];
	_i = _i + 1;
};