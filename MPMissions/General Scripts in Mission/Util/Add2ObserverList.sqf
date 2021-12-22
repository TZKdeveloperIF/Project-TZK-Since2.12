_obj = _this select 0;
_array = _this select 1;
_idxOfArray = _this select 2;

_index = Array_TZK_Observed find _obj;
if (-1 == _index) then {
	_index = Array_TZK_Observed find objNull;
	if (-1 == _index) then {
		_index = count Array_TZK_Observed;
	};
	Array_TZK_Observed set [_index, _obj];
	Array_TZK_Observer set [_index, []];
};
_observer = Array_TZK_Observer select _index;
_observer set [count _observer, [_array, _idxOfArray]];