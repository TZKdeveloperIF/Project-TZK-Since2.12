// arguments: [object, objectArray]
// returns: index

private ["_object", "_list", "_res", "_index", "_count"];

_object = _this select 0;
_list = _this select 1;

_res = -1;
_index = 0;
_count = count _list;

while "_index < _count && _res == -1" do
{
  if (_object == (_list select _index)) then { _res = _index };
	_index = _index + 1
};

_res