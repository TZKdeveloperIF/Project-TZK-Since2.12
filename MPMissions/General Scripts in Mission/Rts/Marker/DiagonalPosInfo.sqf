// args: none
// read position info from "TzkRtsAreadiagonal" marker

private [{_pos}, {_dir}, {_size}, {_vec}];
_pos = markerPos "TzkRtsAreadiagonal"; _pos resize 2;
_dir = getMarkerDir "TzkRtsAreadiagonal";
_size = markerSize "TzkRtsAreadiagonal";

_vec = [[_size select 0, _size select 1], _dir] call funcVectorRot2D;
// _pos1 should be line start pos, created firstly by player
[
	[_pos, _vec] call funcVectorSub,
	[_pos, _vec] call funcVectorAdd
]