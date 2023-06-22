private ["_res", "_vector", "_scale"];

_vector = _this select 0;
_scale = _this select 1;
_res = [(_vector select 0)*_scale, (_vector select 1)*_scale];
if (count _vector == 3) then { _res set [2, (_vector select 2)*_scale] };

_res