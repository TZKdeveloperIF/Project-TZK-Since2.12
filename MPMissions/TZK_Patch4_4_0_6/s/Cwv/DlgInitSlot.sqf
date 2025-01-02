comment {args: none} ;
comment {pass local target parameters directly} ;
comment {this is a script called only once in a dialog so load it via "preprocessFile" to remain annotations} ;

private [{_vehArr}, {_bVerify}];

_vehArr = [_vehicle];
if (_enum == enum_TZK_CustomVehicle_Gunship) then {
	_slotPrim = 8, _slotSec = 38;
	_bVerify = true;
	if _bVerify then {if ("Kamov_Base_xj400" countType _vehArr > 0 || "Ka50_Vanilla_Base_xj400" countType _vehArr > 0) then {
		_slotPrim = 12, _slotSec = 40;
		_bVerify = false;
	}};
	if _bVerify then {if ("Mi24_Base_xj400" countType _vehArr > 0) then {
		_slotPrim = 8, _slotSec = 64;
		_bVerify = false;
	}};
};
if (_enum == enum_TZK_CustomVehicle_Helicopter) then {
	_slotPrim = 2, _slotSec = 2;
};
if (_enum == enum_TZK_CustomVehicle_Plane) then {
	_bVerify = true;
	if _bVerify then {if ("A10_xj400" countType _vehArr > 0 || "A10_Vanilla_xj405" countType _vehArr > 0) then {
		_slotPrim = 8; _slotSec = 3200;
		_bVerify = false;
	}};
	if _bVerify then {if("Su25_xj400" countType _vehArr > 0 || "Su25_Vanilla_xj405" countType _vehArr > 0) then {
		_slotPrim = 6; _slotSec = 3200;
		_bVerify = false;
	}};
};