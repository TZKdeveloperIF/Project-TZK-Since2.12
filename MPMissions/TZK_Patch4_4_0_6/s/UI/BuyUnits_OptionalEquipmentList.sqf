comment {Script for user to custom initial equipments for special units};
comment {this: type(idx in unitDefs)};
private [{_type}, {_typeName}, {_enum}, {_si}];

_type = _this;
_typeName = unitDefs select _type select udModel;
_enum = _typeName call preprocessFile "Util\EnumOfCwv.sqf";
if (-1 != _enum) then {
	{ctrlShow [_x, true]} forEach [_idcEquipBg, _idcEquipLabel, _idcEquipBgList, _idcEquipList];
	
	lbClear _idcEquipList;
	
	_availMags = call ([{PlaneMags}, {GunshipMags}, {HeliMags}] select _enum);
	_magInfo = call ([{PlaneMagInfo}, {GunshipMagInfo}, {HeliMagInfo}] select _enum);
	_i = 0; _c = count _magInfo;
	while {_i < _c} do {
		_si = _magInfo select _i select _piSide;
		_bContinue = false;
		if (_si != siPlayer && _si != siBoth) then {_bContinue = true};
		if ((_enum == enum_TZK_CustomVehicle_Gunship || _enum == enum_TZK_CustomVehicle_Helicopter)
			&& !(_availMags call loadFile "\TZK_Patch4_4_0_6\s\Cwv\ValidMag.sqf")) then {
			_bContinue = true
		};
		if (!_bContinue) then {
			_idx = lbAdd [_idcEquipList, _magInfo select _i select _piName];
			lbSetValue [_idcEquipList, _idx, _i];
		};
		_i = _i + 1;
	};
} else {
	{ctrlShow [_x, false]} forEach [_idcEquipBg, _idcEquipLabel, _idcEquipBgList, _idcEquipList];
};
_enum