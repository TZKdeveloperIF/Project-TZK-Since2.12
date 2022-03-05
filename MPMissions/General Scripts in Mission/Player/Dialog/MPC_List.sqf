// 非线程安全

private [{_i}, {_j}, {_c}];
_i = 0, _j = 0, _c = count Array_TZK_PlayerC4;
// 双指针清理无效元素
while {_i < _c} do {
	_bomb = Array_TZK_PlayerC4 select _i;
	if (!isNull _bomb) then {
		Array_TZK_PlayerC4 set [_j, _bomb];
		_j = _j + 1;
	};
	_i = _i + 1;
};
Array_TZK_PlayerC4 resize _j;

private [{_lastSel}];
_lastSel = lbCurSel _idcList; lbClear _idcList;
_i = 0, _c = count Array_TZK_PlayerC4;
while {_i < _c} do {
	_bomb = Array_TZK_PlayerC4 select _i;
	if (_bomb distance _unit < _distLimit) then {
		_pBomb = getPosASL _bomb;
		_pUnit = getPosASL _unit;
		_dx = (_pBomb select 0) - (_pUnit select 0);
		_dy = (_pBomb select 1) - (_pUnit select 1);
		_dx = _dx - (_dx % 1); _dy = _dy - (_dy % 1);
		_dirX = (if (_dx < 0) then {"W"} else {"E"}); _dx = abs(_dx);
		_dirY = (if (_dy < 0) then {"S"} else {"N"}); _dy = abs(_dy);
		_spaceX = "";
		if (_dx < 1000) then {_spaceX = " "};
		if (_dx < 100) then {_spaceX = "  "};
		if (_dx < 10) then {_spaceX = "   "};
		_spaceY = "";
		if (_dy < 1000) then {_spaceY = " "};
		if (_dy < 100) then {_spaceY = "  "};
		if (_dy < 10) then {_spaceY = "   "};
		_id = lbAdd [_idcList, format ["%1 %2%3m, %4 %5%6m", 
			_dirX, _spaceX, _dx,
			_dirY, _spaceY, _dy
		]];
	};
	_i = _i + 1;
};
if (_lastSel >= _count) then {lbSetCurSel [_idcList, _count - 1]};