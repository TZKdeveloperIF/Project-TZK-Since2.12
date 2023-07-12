// args: bridge
// returns: [pos ASL 1, pos ASL 2]

// bridge len: 50, width: 13, height of roadway: 33.55, height of model center: 33.55 - 20.489

private [{_bridge}];
_bridge = _this;

private [{_vecB}, {_dir}, {_vecN}, {_posC}];
// Assume that vector up of bridge is always [0,0,1]. By now it's non-sense to build a bridge using other vector-up
_vecB = vectorDir _bridge;
_dir = getDir _bridge;

// rotate 2 vectors to y - dir, [0, 1, 0]. Attention: direction in OFP is clockwise
_vecN = [[1,0,0], [0,0,1], - _dir] call funcVectorRot3D;
_vecN = [_vecB, _vecN, 90] call funcVectorRot3D;

_vecN = [_vecN, 33.55 - 20.489] call funcVectorScale;
_posC = [getPosASL _bridge, _vecN] call funcVectorAdd;
_vecH = [_vecB, 25] call funcVectorScale;
[
	[_posC, _vecH] call funcVectorSub,
	[_posC, _vecH] call funcVectorAdd
]