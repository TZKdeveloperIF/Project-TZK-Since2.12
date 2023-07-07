// args: idc list
// read other variables external

private [{_idcList}]; _idcList = _this;

lbClear _idcList; _list resize 0;
_i = 0; _c = count _types; while {_i < _c} do {
	_type = _types select _i;
	_structs = structMatrix select siPlayer select _type;
	{
		_struct = _x;
		if (alive _struct) then {
			_pos = getPos _struct;
			if ([_pos, _area] call _posInRect) then {
				_name = structDefs select _type select sdName;

				_idx = lbAdd [_idcList, format ["%1 - %2", _name, _pos call funcCalcTownDirDistFromPos]];

				_image = structDefs select _type select sdImage select siPlayer;
				if (_image != "") then {lbSetPicture [_idcList, _idx, _image]};

				lbSetValue [_idcList, _idx, _type]; // record type info

				_list set [_idx, _struct];
			};
		};
	} forEach _structs;

	_i = _i + 1;
};

private [{_groups}]; _groups = workerGroups select siPlayer;
if isCommander then {
	{
		{
			if (alive _x) then {
				_pos = getPos _x;
				if ([_pos, _area] call _posInRect) then {
					_idx = lbAdd [_idcList, format ["%1 - %2", "Worker", _pos call funcCalcTownDirDistFromPos]];

					lbSetPicture [_idcList, _idx, "isaa"];

					lbSetValue [_idcList, _idx, -1]; // worker uses -1 as its type value

					_list set [_idx, _x];
				};
			};
		} forEach (units _x);
	} forEach _groups;
};