// arguments: [vector, degree]
// return: vector

private ["_res", "_v", "_k", "_v1", "_v2", "_v3", "_k1", "_k2", "_k3", "_theta"];

_v = _this select 0;
_theta = _this select 1;

_v1 = _v select 0;
_v2 = _v select 1;
_v3 = _v select 2;

_k1 = random 1;
_k2 = random sqrt(1 - _k1*_k1);
_k3 = sqrt(1 - _k1*_k1 - _k2*_k2);


_res = [_v, [_k1, _k2, _k3], _theta] call funcVectorRot3D;

_res