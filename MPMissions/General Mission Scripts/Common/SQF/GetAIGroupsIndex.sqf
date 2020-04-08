// args: [si]
// return: AI groups index

private ["_si", "_groups", "_gis", "_index", "_x", "_groupsAI"];

_si = _this select 0;

_groups = groupMatrix select _si;
_groupsAI = groupAiMatrix select _si;
_index = 0;
_gis = [];
{
	if (_x in _groupsAI) then
	{
		_gis set [count _gis, _index]
	};
	_index = _index + 1;
} foreach _groups;

_gis