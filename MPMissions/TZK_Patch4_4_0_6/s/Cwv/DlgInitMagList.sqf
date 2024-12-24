// player globalChat format ["%1, %2", _i, _c]
// skip improper side

private [{_i}, {_c}, {_magSide}, {_validCheck}, {_cost}, {_len}, {_prefix}, {_idx}, {_slot}];

_i = 0; _c = count _magInfo; while {_i < _c} do {
	_magSide = _magInfo select _i select _piSide;
	if (_magSide == siBoth || _magSide == _si) then {
		_validCheck = true;
		if (_enum == enum_TZK_CustomVehicle_Gunship || _enum == enum_TZK_CustomVehicle_Helicopter) then {
			if (not (_availMags call loadFile "\TZK_Patch4_4_0_6\s\Cwv\ValidMag.sqf")) then {
				_validCheck = false;
			};
		};
		if _validCheck then {
			// fill whitespace for price
			_cost = _magInfo select _i select _piUnitCost;
			_len = log _cost + 1; _len = _len - (_len % 1);
			_prefix = ""; while {_len < 4} do {
				_prefix = _prefix + " ";
				_len = _len + 1;
			};
			
			_idx = lbAdd [_idcMagList, _magInfo select _i select _piName];
			lbSetValue [_idcMagList, _idx, _i];
			_slot = _magInfo select _i select _piUnitSlot;
			_idx = lbAdd [_idcMagList, format ["$%1%2, Slot: %3", _prefix, _cost, _slot]];
			lbSetValue [_idcMagList, _idx, _i];
			lbSetColor [_idcMagList, _idx, [1,1,1, 0.5]];
		};
	};
	_i = _i + 1;
};