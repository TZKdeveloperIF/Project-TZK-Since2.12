private [{_magazinesArray}, {_i}, {_c}, {_ammunition}];

_magazinesArray = magazinesArray _this;
{_this removeMagazines _x} forEach magazines _this;
_i = 0; _c = count _magazinesArray; while {_i < _c} do {
	_ammunition = _magazinesArray select _i + 1;
	if (_ammunition > 0) then {
		_this addMagazinePrecise [_magazinesArray select _i, _ammunition];
	} else {
		_this addMagazine (_magazinesArray select _i);
	};
	_i = _i + 2;
};