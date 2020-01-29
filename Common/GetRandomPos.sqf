// arguments: [posOrigin, distMin, distMax]
// return: pos

private ["_dir", "_dist", "_pos"];

_dir = random 360;
_dist = (_this select 1) + random ((_this select 2) - (_this select 1));
_pos = +(_this select 0);
_pos set [0, ((_this select 0) select 0) + _dist*(sin _dir)];
_pos set [1, ((_this select 0) select 1) + _dist*(cos _dir)];

_pos