// args: [group, si]

private [{_group}, {_si}];

_group = _this select 0;
_si = _this select 1;

(workerGroups select _si) set [count (workerGroups select _si), _group];

if (_si == si0 || _si == si1) then {
	(tzkAllGroups select _si) set [count (tzkAllGroups select _si), _group];
};