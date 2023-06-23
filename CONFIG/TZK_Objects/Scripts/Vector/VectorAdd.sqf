private ["_res", "_vector1", "_vector2", "_comment"];
_comment = "add";
_vector1 = _this select 0;
_vector2 = _this select 1;
_res = [(_vector1 select 0)+(_vector2 select 0), (_vector1 select 1)+(_vector2 select 1)];
if (count _vector1 == 3) then { _res set [2, (_vector1 select 2)+(_vector2 select 2)] };

_res