private ["_unit", "_group", "_groupName", "_sideName", "_si", "_unitName", "_size", "_playerName", "_id", "_gi"];

_unit = _this;
_group = group _unit; _groupName = format ["%1", _group];
_sideName = substr [_groupName, 0, 4]; _si = groupName find _sideName;
_unitName = format ["%1", _unit]; _size = sizeofstr _unitName;
if (!local _unit) then {_size = _size - sizeofstr " REMOTE"; _unitName = substr [_unitName, 0, _size]};
_playerName = ""; if (substr [_unitName, _size - 1, _size] == ")") then {_playerName = " (" + (name _unit) + ")"};
_id = substr [_unitName, 1 + sizeofstr _groupName, _size - sizeofstr _playerName];

_gi = (groupMatrix select _si) find _group;
if (_gi != -1) then {
	if (call _id == 1) then {format ["%1%2", (groupNameMatrix select _si) select _gi, _si]} else {format ["GroupUnit_%1_%2_%3", _si, _gi, _id]}
} else {
	_gi = (townGroups select _si) find _group;
	if (_gi != -1) then {format ["TownUnit_%1_%2_%3", _si, _gi, _id]} else {
		_gi = (workerGroups select _si) find _group;
		format ["Worker_%1_%2_%3", _si, _gi, _id]
	}
}