
_nil = "<null>";
_i = 0; _c = count upgChnDefs; while {_i < _c} do {
	if (_nil == format ["%1", upgChnDefs select _i]) then {
		upgChnDefs set [_i, ""];
	};
	_i = _i + 1;
};

// Insert new orders
aiOrdersChn2 set [9, "bind"];
aiOrdersChn2 set [10, "\TZK_CHN_4_0_6_27\aiOrder2_join_co.paa"];

_i = 0; _c = count aiOrdersChnIngore2; while {_i < _c} do {
	aiOrdersChn2 set [aiOrdersChnIngore2 select _i, ""];
	_i = _i + 1;
};
_i = 0, _c = count aiOrdersChn2; _j = 0; while {_i < _c} do {
	if (aiOrdersChn2 select _i != "") then {
		if (_j != _i) then {
			aiOrdersChn2 set [_j, aiOrdersChn2 select _i];
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};
aiOrdersChn2 resize _j;