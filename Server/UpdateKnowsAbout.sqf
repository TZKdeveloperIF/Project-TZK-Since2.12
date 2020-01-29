// args: [target, si, siEnemy]
// return: [kaMax, group, groups]

private ["_target", "_si", "_siEnemy", "_kaMax", "_group", "_siEnemy", "_groups", "_ka", "_x"];

_target = _this select 0;
_si = _this select 1;
_siEnemy = _this select 2;

_kaMax = 0;
_group = grpNull;
_groups = [];
if (_si != _siEnemy) then
{
	_groups = (groupMatrix select _siEnemy) + (townGroups select _siEnemy) + (workerGroups select _siEnemy);
	{ _ka = (_x knowsAbout _target); if ( _ka > _kaMax) then { _kaMax = _ka; _group = _x } } forEach _groups;
};	
	
[_kaMax, _group, _groups]