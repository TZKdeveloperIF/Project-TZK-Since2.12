private ["_res", "_v", "_k", "_l", "_v1", "_v2", "_v3", "_k1", "_k2", "_k3", "_theta"];

_v = _this select 0;
_k = _this select 1;
_l = _k call loadFile "\TZK_Objects\Scripts\Vector\VectorLength.sqf";
if (_l != 0) then {_k = [_k, 1/_l] call loadFile "\TZK_Objects\Scripts\Vector\VectorScale.sqf"} else {_k = [0,0,1]};

_v1 = _v select 0;
_v2 = _v select 1;
_v3 = _v select 2;

_k1 = _k select 0;
_k2 = _k select 1;
_k3 = _k select 2;

_theta = _this select 2;

_res = [];
_res set [0, (cos _theta)*_v1 + (1 - cos _theta)*([_v,_k] call loadFile "\TZK_Objects\Scripts\Vector\VectorDot.sqf")*_k1 + (sin _theta)*(([_k,_v] call loadFile "\TZK_Objects\Scripts\Vector\VectorCross.sqf") select 0)];
_res set [1, (cos _theta)*_v2 + (1 - cos _theta)*([_v,_k] call loadFile "\TZK_Objects\Scripts\Vector\VectorDot.sqf")*_k2 + (sin _theta)*(([_k,_v] call loadFile "\TZK_Objects\Scripts\Vector\VectorCross.sqf") select 1)];
_res set [2, (cos _theta)*_v3 + (1 - cos _theta)*([_v,_k] call loadFile "\TZK_Objects\Scripts\Vector\VectorDot.sqf")*_k3 + (sin _theta)*(([_k,_v] call loadFile "\TZK_Objects\Scripts\Vector\VectorCross.sqf") select 2)];
_res