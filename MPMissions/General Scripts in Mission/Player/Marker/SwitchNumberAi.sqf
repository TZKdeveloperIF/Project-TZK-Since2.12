private [{_id}, {_marker}];
_id = 2; while {_id <= 12} do {
	_marker = format ["PlayerUnit_%1", _id];
	if _this then {
		_marker setMarkerText format["%1", _id];
	} else {
		_marker setMarkerText format["%1", ""];
	};
	_id = _id + 1;
};