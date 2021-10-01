private [{_vehicle}, {_index}];

_vehicle = _this; _index = TZK_CustomVehicleTypes find typeOf _vehicle;

if (_index != -1) then {
	_enum = enum_TZK_CustomVehicle_Plane;
	if (_index >= TZK_CustomVehicleTypes find "AH1_xj400"
		&& _index <= TZK_CustomVehicleTypes find "Tiger_PARS3_xj400") then {
		_enum = enum_TZK_CustomVehicle_Gunship
	};
	if (_index >= TZK_CustomVehicleTypes find "Mi17_xj400") then {
		_enum = enum_TZK_CustomVehicle_Helicopter
	};

	_index = call ([{PlaneUnits}, {GunshipUnits}, {HeliUnits}] select _enum) find _vehicle;
	if (_index != -1) then {
		_price = call ([{PlanesInfo}, {GunshipInfo}, {HelisInfo}] select _enum) select _index select 0;
	};
};