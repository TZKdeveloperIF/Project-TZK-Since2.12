// arguments: [pos, object]
// return: distance

private ["_posX", "_posY", "_posObject", "_distance"];

_posX = (_this select 0) select 0;
_posY = (_this select 0) select 1;

_posObject = getPos (_this select 1);

_distance = sqrt ( ((_posObject Select 0) - _posX)^2 + ((_posObject Select 1) - _posY)^2 );

_distance