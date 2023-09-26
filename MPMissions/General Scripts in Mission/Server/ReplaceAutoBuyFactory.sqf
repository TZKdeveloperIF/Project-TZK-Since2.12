// args: [old factory, new factory, si]

private [{_facOld},{_facNew},{_si}, {_entry},{_i},{_c}];

_facOld = _this select 0;
_facNew = _this select 1;
_si = _this select 2;

{
	_entry = _x select 0;
	_i = 0, _c = count _entry; while {_i < _c} do {
		if (_facOld == _entry select _i) then {_entry set [_i, _facNew]};
		_i = _i + 1;
	};
} forEach (AutoBuyInfo select _si);