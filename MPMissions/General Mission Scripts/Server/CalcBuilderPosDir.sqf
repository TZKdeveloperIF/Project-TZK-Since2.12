// args: [typeStructure, posStructure, dirStructure]
// return: [posBuilder, dirBuilder]

private ["_type", "_pos", "_dir", "_structDesc", "_dist", "_rot", "_offset", "_posBuilder", "_dirBuilder"];

_type = _this select 0;
_pos = _this Select 1;
_dir = _this Select 2;

_structDesc = structDefs select _type;

_dist = _structDesc select sdDist;
_rot = _structDesc select sdRot;
_offset = _structDesc select sdOffset;

_posBuilder = [(_pos Select 0) - _dist*(sin (_dir - _rot)) - _offset*(sin (_dir+90)),
							 (_pos Select 1) - _dist*(cos (_dir - _rot)) - _offset*(cos (_dir+90))];
_dirBuilder = (_dir + 360 - _rot) mod 360;

[_posBuilder, _dirBuilder]
