// arguments: vector
// return: length

private ["_res"];

_res = 0;
if (count _this == 2) then { _res = sqrt( (_this select 0)*(_this select 0) + (_this select 1)*(_this select 1) ) };
if (count _this == 3) then { _res = sqrt( (_this select 0)*(_this select 0) + (_this select 1)*(_this select 1)+ (_this select 2)*(_this select 2) ) };

_res