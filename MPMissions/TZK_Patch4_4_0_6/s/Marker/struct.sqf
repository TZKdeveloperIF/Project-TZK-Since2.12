comment {args: [structure, type, si]};
private [{_struct}, {_type}, {_si}, {_mt}, {_structs}, {_m}];

_struct = _this select 0;
_type = _this select 1;
_si = _this select 2;

_mt = structMarker select _type;
if (_mt != "") then {
	_structs = StructureMarkerMapping select _si;
	_i = _structs find objNull; if (-1 == _i) then {_i = count _structs};

	_m = format ["Structure_%1_%2", _si, _i];
	_m setMarkerType _mt; _m setMarkerPos getPos _struct;

	_m setMarkerSize [0.8, 0.8];
	if (_mt in ["Sign_Marker_xj400", "Tower_Marker_xj400"]) then {_m setMarkerSize [0.5,0.5]};
	comment {"UnknownStructure_Marker_xj400" fits 0.5 too};
	if (_si != siPlayer && siPlayer != siCiv) then {_m setMarkerSize [0,0]};

	_structs set [_i, _struct];
};