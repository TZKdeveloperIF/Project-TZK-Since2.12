// args: shooter
private [{_dist},{_ret},{_i},{_c},{_obj},{_d}];
_dist = 0; _ret = objNull;
_i = 0; _c = count TzkPplSpotEnemyArr; while {_i < _c} do {
	_obj = TzkPplSpotEnemyArr select _i;
	if (alive _obj) then {
		_d = _obj distance _this;
		if (isNull _ret) then {_ret = _obj, _dist = _d} else {
			if (_d < _dist) then {_ret = _obj, _dist = _d};
		};
	};
	_i = _i + 1;
};
_ret