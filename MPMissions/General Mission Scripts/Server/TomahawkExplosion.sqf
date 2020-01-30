// arguments: [posx, posy]
// return: none

private ["_posx", "_posy"];

_posx = _this select 0;
_posy = _this select 1;

_explosion = "Scud_Cluster_xj200" CreateVehicle [_posx, _posy, 0];