private ["_res", "_vector1", "_vector2"];
_vector1 = _this select 0;
_vector2 = _this select 1;

_res = (_vector1 select 0)*(_vector2 select 0) + (_vector1 select 1)*(_vector2 select 1);
if (count _vector1 == 3 && count _vector2 == 3) then {_res = _res + (_vector1 select 2)*(_vector2 select 2)};
_res