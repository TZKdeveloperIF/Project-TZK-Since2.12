private ["_unit", "_magazinesArray", "_index", "_count", "_magazines"];
_unit = _this;
_magazinesArray = magazinesArray _unit; _index = 0; _count = count _magazinesArray; _magazines = [];
while "_index < _count" do {
	if ((_magazinesArray select (_index + 1)) > 0) then {_magazines set [count _magazines, _magazinesArray select _index]};
	_index = _index + 2;
};
_magazines