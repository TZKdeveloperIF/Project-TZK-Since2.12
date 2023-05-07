// args: [pos, types, cached object info (optional)]
// return: [bool, cached object info]

// 对当前脚本设计来说, types 实际上是常量. 外部定义好, 内部引用即可

// 判定是否可以建造障碍物, 机制是检查附近的MHQ/sup/工程车
// 返回当前判定所使用的单位, 外部可缓存并传入, 以优化性能

private [{_pos},{_types},{_cachedInfo},{_found},
	{_ti},{_tc},{_type},{_entry}, {_ui},{_uc},{_distSquare}];

_pos = _this select 0; _types = _this select 1; _cachedInfo = (if (count _this > 2) then {_this select 2} else {[]});
_found = false;

if (count _cachedInfo > 0) then {
	_distSquare = [_pos, getPos (_cachedInfo select 0)] call loadFile "Util\PosDistSquare.sqf";
	_type = _cachedInfo select 1;

	if ((_type in typesMHQ || _type in typesEngineeringVeh) && _distSquare < 150 * 150) then {
		_found = true;
	};
	if ((_type in (typesSupportPlus select siPlayer)) && _distSquare < 50 * 50) then {
		_found = true;
	};
};

_ti = 0; _tc = count _types;
while {not _found && _ti < _tc} do {
	_type = _types select _ti;
	_entry = unitMatrix select siPlayer select _type;
	_ui = 0; _uc = count _entry;
	while {not _found && _ui < _uc} do {
		_distSquare = [_pos, getPos (_entry select _ui)] call loadFile "Util\PosDistSquare.sqf";
		if ((_type in typesMHQ || _type in typesEngineeringVeh) && _distSquare < 150 * 150) then {
			_found = true;
			_cachedInfo set [0, _entry select _ui]; _cachedInfo set [1, _type];
		};
		if ((_type in (typesSupportPlus select siPlayer)) && _distSquare < 50 * 50) then {
			_found = true;
			_cachedInfo set [0, _entry select _ui]; _cachedInfo set [1, _type];
		};

		_ui = _ui + 1;
	};
	_ti = _ti + 1;
};

[_found, _cachedInfo]