// Target Object should be lazy-load
TzkArtTargetPlayer = []; countTargetMarkers = 10; TzkArtTargetPlayer resize countTargetMarkers;
_i = 0;

// Format of element: [object, valid, knowsAbout value]
while {_i < countTargetMarkers} do {
	TzkArtTargetPlayer set [_i, [objNull, false, 0]];
	call Format[{TargetP_%1 = objNull}, _i];
	_i = _i + 1;
};