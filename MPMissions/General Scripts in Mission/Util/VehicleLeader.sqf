if (_this == vehicle _this) then {
	_this
} else {
	private [{_vehicle}];
	_vehicle = vehicle _this;
	_cmd = commander _vehicle;
	if (isNull _cmd) then {
		if ([false, true] select (
			call format ["%1", typeOf _vehicle GetVehicleParam "driverIsCommander"]
		)) then {
			_cmd = driver _vehicle;
			if (isNull _cmd) then {_cmd = gunner _vehicle};
		} else {
			_cmd = gunner _vehicle;
			if (isNull _cmd) then {_cmd = driver _vehicle};
		};
	};
	_cmd
}