// args: [button basic IDC, valid button value: array_ref]

private [{_idc}, {_validBtn}
	, {_texts}, {_textBias}
	, {_valid}
];
_idc = _this select 0, _validBtn = _this select 1;

_texts = TzkInGameText select 030; _textBias = 2;

{
	_valid = count (TzkSelUnitsCube select _x select 0) > 0;
	ctrlSetText [_idc + _x, _texts select _x + _textBias];
	ctrlShow [_idc + _x, TzkRtsSelectEnum != _x && _valid];
	if _valid then {_validBtn set [count _validBtn, _x]};
} forEach [0, 1, 2, 3];