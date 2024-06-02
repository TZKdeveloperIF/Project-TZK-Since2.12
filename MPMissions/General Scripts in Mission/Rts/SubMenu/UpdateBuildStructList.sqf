// args: [current highlight structure type (enum), idc of listbox]
// "Factory","Building","Defend","Art","Walls","Obstruct"

private [{_enum}, {_idcList}, {_types}];
_enum = _this select 0; _idcList = _this select 1; _types = [];

// structure list
if (0 == _enum) then {_types = structsCritcal};
if (1 == _enum) then {_types = structBuilding};
if (2 == _enum) then {_types = structsOccupiableMGGround + structsOccupiableMGTower + structsOccupiableGunfort};
if (3 == _enum) then {_types = structsOccupiableMortar + structsOccupiableHowitzer};
if (4 == _enum) then {_types = structsWalls};
if (5 == _enum) then {_types = [stTankTrap, stWireFence]};

lbClear _idcList; lbSetCurSel [_idcList, -1];
private [{_i}, {_c}, {_desc}, {_sides}, {_name}, {_image}, {_id}];
_i = 0; _c = count structDefs; while {_i < _c} do {
	if (_i in _types) then {
		_desc = structDefs select _i;
		_sides = _desc select sdSides;
		if (siPlayer == _sides || _sides == siBoth) then {
			_name = _desc select sdName;
			_image = _desc select sdImage select siPlayer;

			_id = lbAdd[_idcList, _name];
			lbSetValue [_idcList, _id, _i];
			if (_image != "") then {lbSetPicture [_idcList, _id, _image]};
		};
	};
	_i = _i + 1;
};

// button highlight background
_i = 0; while {_i < 6} do {ctrlShow [_idcBgBtn + _i, false], _i = _i + 1}; ctrlShow [_idcBgBtn + _enum, true];