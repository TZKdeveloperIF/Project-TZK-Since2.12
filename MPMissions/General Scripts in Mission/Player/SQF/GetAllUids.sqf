// args: units
private [{_i}, {_c}, {_ids}];

_c = count _this; _i = 0;
_ids = []; _ids resize _c;
{
	if (_x != player && local _x) then {
		_ids set [_i, [_x, siPlayer, giPlayer] call funcCalcUID];
	};
	_i = _i + 1;
} forEach _this;
_ids resize _i;
_ids