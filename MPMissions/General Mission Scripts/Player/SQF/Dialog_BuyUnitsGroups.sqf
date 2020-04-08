// args: [IDC]
// return: none

private ["_idcGroups", "_textGroups", "_index", "_i", "_x", "_groupNames", "_groupName", "_groups", "_sizeGroup", "_name", "_moneyGroup", "_text"];

_idcGroups = _this select 0;

_groupNames = groupNameMatrix select siPlayer;
_groups = groupMatrix select siPlayer;

_textGroups = [];
_index = 0;
_name = "";
{
	if (_x in _groupsAI) then {_name = "AI"} else {_name = name leader _x};
	_groupName = _groupNames select _index;
	_sizeGroup = count units _x;
	_moneyGroup =  _groupsMoney select _index;
	_text = format["%1 %2 %3 $%4", _name, _groupName, _sizeGroup, _moneyGroup];
	_textGroups set [_index, _text];
	_index = _index + 1;
} foreach _groups;
lbClear _idcGroups;
{ lbAdd [_idcGroups, _x] } foreach _textGroups;