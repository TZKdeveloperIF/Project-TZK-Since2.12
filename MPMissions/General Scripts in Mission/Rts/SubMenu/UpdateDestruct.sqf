// args: idc list
// read other variables external

private [{_idcList}]; _idcList = _this;

lbClear _idcList; _list resize 0;
_i = 0; _c = count _types; while {_i < _c} do {
	_type = _types select _i;
	private [{_continue}]; _continue = false;
	if (not _showShelter && not _continue) then {if (_type in structsShelter) then {_continue = true}};

if not _continue then {
	_structs = structMatrix select siPlayer select _type;
	{
		_struct = _x;
		if (alive _struct) then {
			_pos = getPos _struct;
			private [{_valid}]; _valid = true;
			if _bRts then {_valid = [_pos, _area] call _posInRect};
			if (_valid) then {
				_name = structDefs select _type select sdName;

				_idx = lbAdd [_idcList, format ["%1 - %2", _name, _pos call funcCalcTownDirDistFromPos]];

				_image = structDefs select _type select sdImage select siPlayer;
				if (_image != "") then {lbSetPicture [_idcList, _idx, _image]};

				lbSetValue [_idcList, _idx, _type]; // record type info

				_list set [_idx, _struct];
			};
		};
	} forEach _structs;
};

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