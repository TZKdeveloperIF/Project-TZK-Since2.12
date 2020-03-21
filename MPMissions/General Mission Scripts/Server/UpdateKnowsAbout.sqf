// args: [target, si, _groups]
// return: [kaMax, group]

private ["_target", "_si", "_kaMax", "_group", "_groups", "_ka", "_x"];

_target = _this select 0;
_si = _this select 1;
_groups = _this select 2;

_kaMax = 0;
_group = grpNull;
{ _ka = (_x knowsAbout _target); if ( _ka > _kaMax) then { _kaMax = _ka; _group = _x } } forEach _groups;

[_kaMax, _group]