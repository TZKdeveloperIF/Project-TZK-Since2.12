// args: none
// pass local target parameters directly
// this is a script called only once in a dialog so load it via "preprocessFile" to remain annotations

if (_enum == enum_TZK_CustomVehicle_Gunship) then {
	_totalSlots = 5, if ("Ka50_xj400" countType [_vehicle] > 0) then {_totalSlots = 7};
};
if (_enum == enum_TZK_CustomVehicle_Helicopter) then {_totalSlots = 2.1};

if !bool_TZK_199_Mode then {
	_bVerify = true;
	if (_bVerify && ("A10_xj400" countType [_vehicle] > 0 || "A10_Vanilla_xj405" countType [_plane] > 0)) then {
		_totalSlots = 8.99; _bVerify = false
	};
	if (_bVerify && ("Su25_xj400" countType [_vehicle] > 0 || "Su25_Vanilla_xj405" countType [_plane] > 0)) then {
		_totalSlots = 6.99; _bVerify = false
	};
	if (_bVerify && _enum == enum_TZK_CustomVehicle_Gunship) then {
		_totalSlots = 8.99; if ("Kamov_Base_xj400" countType [_vehicle] > 0) then {_totalSlots = 12.99}; _bVerify = false;
	};
};
