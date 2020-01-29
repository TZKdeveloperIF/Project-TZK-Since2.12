// args: pos
// return: height

private ["_height", "_sensor"];

_height = 0;

_sensor = "EmptyDetector" camCreate _this;
_sensor setPos [_this select 0, _this select 1, 0];
_height = (getPos _sensor) select 2;

deleteVehicle _sensor;

abs(_height)