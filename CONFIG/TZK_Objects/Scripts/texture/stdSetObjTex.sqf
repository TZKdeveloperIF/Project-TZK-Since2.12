private ["_name", "_array", "_postfix", "_excludeList", "_i", "_c"];
_vehicle = _this select 0; _path = _this select 1;
_postfix = ""; if (count _this > 2) Then {_postfix = _this select 2};
_excludeList = []; if (count _this > 3) Then {_excludeList = _this select 3};

_name = typeOf _vehicle;
_array = _name GetVehicleParamArray "hiddenselections";

_i = _array find "tzk_tex_00"; _c = _array find "tzk_tex_99";

if (_i == -1 || _c == -1) Then {hint format ["hiddenSelections error in %1.", _name]} Else {
	_i = _i + 1; _size = sizeofstr "tex_";
	while "_i < _c" do {
		if !((_array select _i) in _excludeList) Then {
			_name = substr [(_array select _i), _size, sizeofstr (_array select _i)];
			if (_path != "" && substr [_name, 0, 1] == "\") Then {_name = substr [_name, 1, sizeofstr _name]};
			private "_str"; _str = substr [_name, sizeofstr _name - 4, sizeofstr _name];
			if (_str == ".paa" || _str == ".pac") Then {
				_str = _path + substr [_name, 0, sizeofstr _name - 4] + _postfix + (if (_postfix == ".paa" || _postfix == ".pac") Then {""} Else {_str})
			} Else {
				_str = _path + _name + _postfix
			};
			_vehicle setObjectTexture [_i, _str];
		};
		_i = _i + 1
	}
};