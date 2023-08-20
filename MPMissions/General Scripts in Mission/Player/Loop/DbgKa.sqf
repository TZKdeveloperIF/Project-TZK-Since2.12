// args: an cache array
_this resize 0;
private [{_i}, {_val}], _i = 0;
{
	if (alive _x) then {
		_val = player knowsAbout _x;
		_val = _val - _val % 0.125;
		if (_val > 0) then {
			_this set [_i, typeof _x];
			_this set [_i + 1, _val];
			_i = _i + 2
		};
	};
} forEach arraySpottedEnemy;
if (count _this > 0) then {player globalChat format ["DBG: knowsAbout info: %1", _this]};