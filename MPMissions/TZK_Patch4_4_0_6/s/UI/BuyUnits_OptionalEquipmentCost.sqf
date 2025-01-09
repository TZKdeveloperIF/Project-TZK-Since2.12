comment {Script to calculate custom initial equipments' cost};
comment {args: type(idx in unitDefs): number};
private [{_enum}];

_enum = _this;
_idx = lbCurSel _idcEquipList;

if (-1 != _enum && -1 != _idx) then {
	_magInfo = call ([{PlaneMagInfo}, {GunshipMagInfo}, {HeliMagInfo}] select _enum);
	_i = lbValue [_idcEquipList, _idx];
	_cost = if (_magInfo select _i select _piVehPrice > _cost) then {_magInfo select _i select _piVehPrice} else {_cost};
};