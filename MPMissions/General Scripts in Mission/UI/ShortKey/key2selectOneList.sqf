// [key: string, IDC: number, left: number, right: number] -> bool
private [{_key}, {_idc}, {_left}, {_right}, {_idx}];
_key = _this select 0;
_idc = _this select 1;
_left = _this select 2;
_right = _this select 3;

_ret = false;
if (sizeofstr _key >= 6) then {
	if (substr [_key, 0, 4] == "item") then {
		_idx = call substr [_key, 5, sizeofstr _key];
		if (_idx >= _left && _idx <= _right) then {
			lbSetCurSel [_idc, _idx - 1];
			_ret = true;
		};
	};
};

_ret