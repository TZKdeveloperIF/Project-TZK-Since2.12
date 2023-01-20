// args: list box idc

lbClear _this;
_i = 0;
while {_i < countTargetMarkers} do {
	_pos = getMarkerPos (format ["ArtSvrArea%1", _i]);
	lbAdd [
		_this, 
		format ["%1%2", _i,
			if (-10 == _pos select 0) then {""} else {
				format[": %1", _pos call funcCalcMapPos]
			}
		]
	];
	_i = _i + 1;
};