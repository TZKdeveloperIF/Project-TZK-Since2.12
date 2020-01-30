// arguments: [pos, pos]
// return: distance

private ["_dist"];
_dist = sqrt ( ( ((_this select 0) select 0) - ((_this select 1) select 0) )^2 + ( ((_this select 0) select 1) - ((_this select 1) select 1) )^2 );
_dist