private ["_vehicle", "_bool", "_logic"];

_vehicle = typeOf (_this select 0) camCreate [0,0,20];
_logic = "Logic" camCreate [0,0,0];
call format ["_logic moveIn%1 _vehicle", _this select 1];
_bool = count crew _vehicle > 0;
deleteVehicle _logic;
deleteVehicle _vehicle;
[0,1] select _bool