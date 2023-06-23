private ["_x", "_y", "_z", "_res", "_vector1", "_vector2"];
_vector1 = _this select 0;
_vector2 = _this select 1;
_x = (_vector1 select 1)*(_vector2 select 2) - (_vector1 select 2)*(_vector2 select 1);
_y = (_vector1 select 2)*(_vector2 select 0) - (_vector1 select 0)*(_vector2 select 2);
_z = (_vector1 select 0)*(_vector2 select 1) - (_vector1 select 1)*(_vector2 select 0);

_res = [_x,_y,_z];

_res