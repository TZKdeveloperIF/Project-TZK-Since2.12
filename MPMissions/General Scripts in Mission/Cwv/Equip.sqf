// Select proper equiments for custom vehicle 

private [{_v}, {_t}, {_enum}, {_i}, {_si}, {_magInfo}, {_selMagName}, {_mag}, {_wep}, {_m}, {_w}, {_cost}, {_cwvCost}];
_v = _this select 0;
_t = _this select 1;
_enum = _this select 2;
_i = _this select 3;
_si = _this select 4;
_this = 0;

_availMags = call ([{PlaneMags}, {GunshipMags}, {HeliMags}] select _enum);
_magInfo = call ([{PlaneMagInfo}, {GunshipMagInfo}, {HeliMagInfo}] select _enum);
_piWeapon = 0, _piName = 1, _piSide = 2, _piVehPrice = 3, _piUnitCost = 4, _piUnitSlot = 5, _piUnitTime = 6, _piUnitCount = 7;
_selMagName = _magInfo select _i select _piName;

_mag = _availMags select _i;
_wep = _magInfo select _i select _piWeapon;
[_magInfo select _i select _piName, _si, _enum, _v] call preprocessFile "Util\CWV\ProperMagWep.sqf";

_m = [_mag];
_w = [_wep];

// Prepare cannon for custom-on-purchase planes
if (enum_TZK_CustomVehicle_Plane == _enum) then {
	if ("30mm cannon" != _selMagName && "4x 30mm cannons" != _selMagName) then {
		private [{_j}];
		_j = if ("Maverick" == _selMagName || "Ch-29T" == _selMagName) then {0} else {1};
		_m set [count _m, _availMags select _j];
		_w set [count _w, _magInfo select _j select _piWeapon];
	};
};

_v call preprocessFile "Cwv\AppendGeneralEquips.sqf";
// Overwrite rearm data
[_v, _t, _m, _w, 2] exec "Common\Equip\NewCwvSetData.sqs";
// Update object price in CWV
_cost = unitDefs select _t select udCost;
_cwvCost = _magInfo select _i select _piVehPrice;
if (_cwvCost > _cost) then {_cost = _cwvCost};
[_v, _cost, true, _enum] exec "Cwv\Net\sCwvInfo.sqs";