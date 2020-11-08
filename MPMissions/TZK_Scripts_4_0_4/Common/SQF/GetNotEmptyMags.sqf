private ["_unit", "_magazines"];
_unit = _this;
if !bool_TZK_199_Mode Then
{
	private ["_magazinesArray", "_index", "_count"];
	_magazinesArray = magazinesArray _unit; _index = 0; _count = count _magazinesArray; _magazines = [];
	while "_index < _count" do {
		if ((_magazinesArray select (_index + 1)) > 0) then {_magazines set [count _magazines, _magazinesArray select _index]};
		_index = _index + 2;
	};
} Else
{
	_magazines = magazines _unit
};
_magazines