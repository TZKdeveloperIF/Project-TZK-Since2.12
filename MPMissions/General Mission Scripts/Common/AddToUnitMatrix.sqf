// args: [unit, type, si]
// return: none

private [ "_unit", "_type", "_si", "_indexUnitMatrix", "_list", "_added", "_index", "_c" ];

_unit = _this select 0;
_type = _this select 1;
_si = _this select 2;

_indexUnitMatrix = _type;
if (_type >= maxUnitTypes) then
{
	_indexUnitMatrix = utCustom select _si;
};

_list = (unitMatrix select _si) select _indexUnitMatrix;
_added = false;

_index = -1;
_c = count _list;


if !(_unit in _list) then
{
	_index = 0;
	while "_index < _c && !_added" do
	{
		if ( !alive(_list select _index) ) then
		{
			_added = true;
		}
		else
		{
			_index = _index + 1;
		};
	};
};
_index