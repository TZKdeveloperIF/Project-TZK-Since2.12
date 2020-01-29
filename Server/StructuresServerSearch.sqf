// args: [object]
// return: [objects, type, index, boolFound]

private [ "_object", "_type", "_found", "_i", "_c", "_entry", "_objects" ];

_object = _this select 0;

_objects = [];
_type = -1;
_i = 0; _c = count(structuresServer); _found = false;

if (isNull _object) then
{
	while "_i < _c && !_found" do
	{
		_entry = structuresServer select _i;
		_objects = _entry select 0;
		if ( isNull (_objects select 0) ) then
		{
			_found = true;
		}
		else
		{
			_i = _i + 1;
		};
	};
}
else
{
	while "_i < _c && !_found" do
	{
		_entry = structuresServer select _i;
		_objects = _entry select 0;
		_type = _entry select 1;
		if ( _object in _objects ) then
		{
			_found = true;
		}
		else
		{
			_i = _i + 1;
		};
	};
};
[_objects,_type,_i,_found]