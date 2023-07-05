// args: [vector, dir]
// return: rotated vector

// ATTENTION: the "dir" in this script is clockwise same as OFP's dir definition,
// while polar coordinate uses anticlockwise

private [{_sx}, {_sy}, {_dir}];
_sx = _this select 0 select 0;
_sy = _this select 0 select 1;
_dir = _this select 1;
[
	_sx * (cos _dir) + _sy * (sin _dir),
	_sy * (cos _dir) - _sx * (sin _dir)
]