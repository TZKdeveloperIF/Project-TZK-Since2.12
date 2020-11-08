private ["_vehicle", "_i", "_c", "_j", "_full"];

_vehicle = typeOf _this camCreate [0,0,20];
_i = 0; _c = 100; _full = false;
while "_i < _c && !_full" do {
	call format [{_tempObjLogic%1 = "Logic" camCreate [0,0,0], _tempObjLogic%1 moveInCargo _vehicle}, _i];
	if !(count crew _vehicle > _i) Then {_full = true};
	_i = _i + 1
};
_j = _i; if (_i >= _c) Then {_i = 0};
while "_j > 0" do {
	call format [{deleteVehicle _tempObjLogic%1}, _j - 1];
	_j = _j - 1
};
deleteVehicle _vehicle;
_i - 1