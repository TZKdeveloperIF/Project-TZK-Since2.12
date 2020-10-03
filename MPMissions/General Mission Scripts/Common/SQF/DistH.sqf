// arguments: [pos[] or object, pos[] or object]
// return: distance

private ["_dist"];

if ((_this select 0) in [_this select 0]) Then "_this set [0, getPosASL (_this select 0)]";
if ((_this select 1) in [_this select 1]) Then "_this set [1, getPosASL (_this select 1)]";

_dist = sqrt ( ((_this select 0 select 0) - (_this select 1 select 0))^2 + ((_this select 0 select 1) - (_this select 1 select 1))^2 );
_dist