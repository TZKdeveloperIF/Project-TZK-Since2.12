// this function used for rotate a 3D-vector
// arguments: [vector, axis, degree]
// return: vector

private ["_res", "_v", "_k", "_l", "_v1", "_v2", "_v3", "_k1", "_k2", "_k3", "_theta"];

_v = _this select 0;
_k = _this select 1;
_l = _k call funcVectorLength;
if (_l != 0) then {_k = [_k, 1/_l] call funcVectorScale} else {_k = [0,0,1]};

_v1 = _v select 0;
_v2 = _v select 1;
_v3 = _v select 2;

_k1 = _k select 0;
_k2 = _k select 1;
_k3 = _k select 2;

_theta = _this select 2;

_res = [(cos _theta)*_v1 + (1 - cos _theta)*([_v,_k] call funcVectorDot)*_k1 + (sin _theta)*(([_k,_v] call funcVectorCross) select 0),   (cos _theta)*_v2 + (1 - cos _theta)*([_v,_k] call funcVectorDot)*_k2 + (sin _theta)*(([_k,_v] call funcVectorCross) select 1),    (cos _theta)*_v3 + (1 - cos _theta)*([_v,_k] call funcVectorDot)*_k3 + (sin _theta)*(([_k,_v] call funcVectorCross) select 2)];

_res