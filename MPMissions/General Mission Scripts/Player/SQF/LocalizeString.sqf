private ["_str"];
if (substr [_this, 0, 1] == "$") Then {
	_str = substr [_this, 1, sizeofstr (_this)];
	if (substr [localize _str, 0, 6] == "format") Then {
		call localize _str
	} Else {
		localize _str
	}
} Else {_this}