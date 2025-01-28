// args: [bool var name matrix, text matrix]
private [{_stateMatrix}, {_varNameMatrix}, {_textMatrix}
	, {_i}, {_idc}, {_textCol}, {_itemCnt}, {_stateCol}, {_varNameCol}
	, {_j}, {_valid}, {_state}
];

// 3 cols and 12 rows
_stateMatrix = [ [], [], [] ];
{_stateMatrix select _x resize 12} forEach [0, 1, 2];

_varNameMatrix = _this select 0;
_textMatrix = _this select 1;

_i = 0; while {_i < 3} do {
	_idc = IDC + 100 + 100 * _i;
	_textCol = _textMatrix select _i; _itemCnt = count _textCol;
	_stateCol = _stateMatrix select _i; _varNameCol = _varNameMatrix select _i;

	_j = 0; while {_j < 12} do {
		_valid = false;
		if (_j < _itemCnt) then {if (count (_textCol select _j) != 0) then {_valid = true}};

		if _valid then {
			{lbAdd [_idc + _j, _x]} forEach (_textCol select _j);
			_state = if (call (_varNameCol select _j)) then {1} else {0};
			lbSetCurSel [_idc + _j, _state];
			_stateCol set [_j, _state];
		} else {
			ctrlShow [_idc + _j, false]; lbSetCurSel [_idc + _j, -1]; _stateCol set [_j, -1];
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};
_stateMatrix