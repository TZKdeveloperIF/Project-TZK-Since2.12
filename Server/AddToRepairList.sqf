// args: [object, si, type]
// return: index
private ["_object", "_si", "_type", "_list", "_count", "_index", "_found", "_x"];

_object = _this select 0;
_si = _this select 1;
_type = _this select 2;

_list = repairableStructureMatrix select _si;
_count = count(_list);
_index = _count - 1;
_found = false;

while "_index >= 0 && !_found" do
{
	if !(isNull ((_list select _index)select(0))) then 
	{
		_found = true;
	}
	else
	{
		_index = _index - 1;
	};
};
(_index + 1)