private ["_dir", "_dist", "_pos"];
_pos = _this select 0;
if (_pos in [_pos]) Then "_pos = getPos _pos" Else {_pos = +(_this select 0)};

_dir = random 360;
_dist = (_this select 1) + random ((_this select 2) - (_this select 1));

_pos set [0, (_pos select 0) + _dist*(sin _dir)];
_pos set [1, (_pos select 1) + _dist*(cos _dir)];

_pos