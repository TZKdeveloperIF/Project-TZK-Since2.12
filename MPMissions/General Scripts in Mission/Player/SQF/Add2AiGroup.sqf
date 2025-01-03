// args: [si, gi]
private [{_si}, {_gi}, {_groupsAI}, {_group}, {_name}, {_marker}];
_si = _this select 0; _gi = _this select 1;

_groupsAI = groupAiMatrix select _si;
_group = groupMatrix select _si select _gi;
if not (_group in _groupsAI) then {
	_groupsAI set [count _groupsAI, _group];

	_name = format ["%1", _group];
	_name = substr [_name, 5, sizeofstr _name];

	_marker = format ["%1%2", _name, _si];
	_marker setMarkerText _name;
	if (siPlayer != siCiv) then {_marker setMarkerColor "ColorBlue"};
};