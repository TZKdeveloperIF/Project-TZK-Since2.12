// Script to get the enum in custom vehicle weapon module of a type name.
// args: type name: string

private [{_typeName}, {_index}, {_enum}];
_typeName = _this;
_index = TZK_CustomVehicleTypes find _typeName;
_enum = -1;
if (_index != -1) then {
	_enum = enum_TZK_CustomVehicle_Plane;
	if (_index >= TZK_CustomVehicleTypes find "AH1_xj400"
		&& _index <= TZK_CustomVehicleTypes find "Tiger_PARS3_xj400") then {
		_enum = enum_TZK_CustomVehicle_Gunship
	};
	if (_index >= TZK_CustomVehicleTypes find "Mi17_xj400") then {
		_enum = enum_TZK_CustomVehicle_Helicopter
	};
};
/* return */ _enum