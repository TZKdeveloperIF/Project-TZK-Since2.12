private ["_height", "_sensor"];

_height = 0;

_sensor = "EmptyDetector" camCreate _this;
_this set [2,0]; _sensor setPos _this;
_height = (getPos _sensor) select 2;

deleteVehicle _sensor;

abs(_height)