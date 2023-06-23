private ["_res", "_vector", "_degree", "_comment"];
_comment = "rotating a 2D-vector. arguments: [vector, degrees]";
_vector = _this select 0;
_degree = _this select 1;

_res = [(_vector select 0)*(cos_degree) + (_vector select 1)*(sin_degree), (_vector select 1)*(cos_degree) - (_vector select 0)*(sin_degree)];

_res