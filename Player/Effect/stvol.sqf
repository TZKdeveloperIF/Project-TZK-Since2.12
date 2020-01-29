private ["_tank", "_ammo", "_shell", "_pos", "_x", "_y", "_z", "_r1", "_r2"];
_tank = _this select 0; _ammo = _this select 4; _shell = nearestObject [_tank, _ammo];
_pos = getPos _shell; _x = _pos select 0; _y = _pos select 1; _z = _pos select 2;
_r1 = -0.2 + random 0.4; _r2 = -0.2 + random 0.4;
drop ["halfLight", "", "Billboard", 0.1, 0.7, [_x+_r1,_y+_r2,_z], [0,0,0], 1, 1.275, 1, 0, [20+random 7], [[1,0.6,0.25,1],[1,0.6,0.25,0]], [0,1,0], 0, 0, "", "", ""];