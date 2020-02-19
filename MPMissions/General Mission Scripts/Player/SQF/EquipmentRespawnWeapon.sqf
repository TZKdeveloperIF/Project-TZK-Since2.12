private ["_weaponIndex", "_delta", "_index"];
_weaponIndex = _this select 0;
_delta = 0;

if (_weaponIndex in RespawnW) then {
	_index = RespawnW find _weaponIndex; RespawnW set [_index, -1];
} else {
	_delta = ((weaponDefs select _weaponIndex) select wdcost);
};
_delta