// args: [list box idc, marker type, web short, marker count, marker text]

lbClear (_this select 0);
private [{_cnt}]; _cnt = _this select 3;
private [{_i}, {_pos}];
_i = 0;
while {_i < _cnt} do {
	_pos = getMarkerPos (format ["RtsArea%1%2%3", _this select 1, _this select 2, _i]);
	lbAdd [
		(_this select 0), 
		format ["%3 %1%2", _i,
			if (-10 == _pos select 0) then {""} else {
				format[": %1", _pos call funcCalcMapPos]
			}
			, _this select 4
		]
	];
	_i = _i + 1;
};