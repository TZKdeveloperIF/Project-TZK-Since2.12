private [{_magazinesArray}, {_i}, {_c}];

_magazinesArray = magazinesArray _this;
{_this removeMagazines _x} forEach magazines _this;
_i = 0; _c = count _magazinesArray; while {_i < _c} do {
	_this addMagazinePrecise [_magazinesArray select _i, _magazinesArray select _i + 1];
	_i = _i + 2;
};