// args: [position ASL, bridge center pos, bridge 3D vector]
// returns: bool

// bridge len: 50, width: 13
// extra -0.1 correction for z-axis

private [{_posO}, {_posB}, {_vecB}, {_arrow}, {_dir}, {_theta}];
_posO = _this select 0, _posB = _this select 1; _vecB = _this select 2;

_arrow = [_posO, _posB] call funcVectorSub;
// Assume that vector up of bridge is always [0,0,1]. By now it's non-sense to build a bridge using other vector-up
_dir = (_vecB select 0) atan2 (_vecB select 1);

// rotate 2 vectors to y - dir, [0, 1, 0]. Attention: direction in OFP is clockwise
_vecB = [_vecB, [0,0,1], _dir] call funcVectorRot3D;
_arrow = [_arrow, [0,0,1], _dir] call funcVectorRot3D;

// rotate _arrow
_theta = atan((_vecB select 2) / (_vecB select 1));
_arrow = [_arrow, [-1,0,0], _theta] call funcVectorRot3D;

// hint format ["%1", [abs(_arrow select 0) < 5 , abs(_arrow select 1) < 25 , (_arrow select 2)]];
abs(_arrow select 0) < 5 && abs(_arrow select 1) < 25 && (_arrow select 2) > TzkBridgeRoadwayH - TzkBridgeCenterH - 0.1