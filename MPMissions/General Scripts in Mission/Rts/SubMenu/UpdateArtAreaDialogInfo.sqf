// args: [list box idc, marker prefix]

lbClear (_this select 0);
_i = 0;
while {_i < countTargetMarkers} do {
	_pos = getMarkerPos (format ["%2%1", _i, _this select 1]);
	lbAdd [
		(_this select 0), 
		format ["%1%2", _i,
			if (-10 == _pos select 0) then {""} else {
				format[": %1", _pos call funcCalcMapPos]
			}
		]
	];
	_i = _i + 1;
};