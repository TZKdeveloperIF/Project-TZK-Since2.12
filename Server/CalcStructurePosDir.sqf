// arguments: [type, pos, dir]
// return: [pos, dir]

private ["_structDesc", "_pos", "_dir", "_rot", "_offset", "_posNew", "_dirNew"];

_structDesc = structDefs select (_this Select 0);
_pos = _this Select 1;
_dir = _this Select 2;

_rot = _structDesc select sdRot;
_offset = _structDesc select sdOffset;

_posNew = [(_pos select 0) + _offset*(sin (_dir+90)), (_pos select 1) + _offset*(cos (_dir+90))];
_dirNew = (_dir + _rot) mod 360;

[_posNew, _dirNew]