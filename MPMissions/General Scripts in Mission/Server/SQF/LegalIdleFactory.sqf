// args: [factory, si]
private [{_fac}, {_si}, {_ret}];
_fac = _this select 0;
_si = _this select 1;

_ret = true;

if _ret then {
	if (not alive _fac) then {_ret = false};
};

if _ret then {
	if (_fac in buildingsInUse) then {_ret = false};
};

if _ret then {
	if ([getPos _fac, _si, stComm] call funcGetClosestStructure select 1 > CCdistMax select _si) then
	{
		_ret = false;
	};
};

_ret