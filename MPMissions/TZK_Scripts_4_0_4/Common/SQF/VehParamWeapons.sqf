private ["_vehicle", "_array"];

_vehicle = typeOf _this camCreate [0,0,20];
_array = weapons _vehicle;
deleteVehicle _vehicle;
_array