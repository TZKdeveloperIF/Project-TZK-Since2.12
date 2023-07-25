// args: net id of soldier unit
// return: bool
private [{_unit}, {_ret}];
_unit = UnitById _this;
_ret = not local _unit;
if not _ret then {
	if (not isNull player) then {
		_ret = group _unit == group player;
	};
};
_ret