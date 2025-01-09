// args: group

private [{_group}];

_group = _this;

if isServer then {
	patrolGroups set [count patrolGroups, _group];
};