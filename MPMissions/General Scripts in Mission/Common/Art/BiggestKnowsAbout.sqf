private ["_target", "_kaMax", "_groups", "_ka"];

_target = _this select 0; _groups = _this select 1;
_kaMax = 0;

{_ka = _x knowsAbout _target; if (_ka > _kaMax) then "_kaMax = _ka"} forEach _groups;

_kaMax