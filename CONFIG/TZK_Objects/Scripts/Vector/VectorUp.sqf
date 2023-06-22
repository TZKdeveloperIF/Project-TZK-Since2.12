_pos = _this;
_x0 = _pos select 0; _y0 = _pos select 1;

_cam0 = "EmptyDetector" camCreate [_x0, _y0]; _cam0 setPos [_x0, _y0];
_cam1 = "EmptyDetector" camCreate [_x0 + 0.8, _y0]; _cam1 setPos [_x0 + 0.8, _y0];
_cam2 = "EmptyDetector" camCreate [_x0, _y0 + 0.8]; _cam2 setPos [_x0, _y0 + 0.8];

_z0 = abs((getPos _cam0) select 2);
_z1 = abs((getPos _cam1) select 2);
_z2 = abs((getPos _cam2) select 2);

{deleteVehicle _x} forEach [_cam0, _cam1, _cam2];

_vector1 = [0.8, 0, _z1 - _z0];
_vector2 = [0, 0.8, _z2 - _z0];

[_vector1, _vector2] call loadFile "\TZK_Objects\Scripts\Vector\VectorCross.sqf"