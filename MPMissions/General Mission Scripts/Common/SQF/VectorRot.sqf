// this function only supports rotating a 2D-vector
// arguments: [vector, degrees]
// return: vector

private ["_res"];

_res = [((_this select 0) select 0)*(cos(_this select 1)) + ((_this select 0) select 1)*(sin(_this select 1)), ((_this select 0) select 1)*(cos(_this select 1)) - ((_this select 0) select 0)*(sin(_this select 1))];

_res