// args: object
// return: none

private [ "_obj", "_i", "_c", "_added" ];

_obj = _this;
_i = -1;
if (alive _obj) then
{
	_added = false;
	_i = 0;
	_c = count rearmData;
	while "_i < _c && !_added" do
	{
		if ( !alive((rearmData select _i) select 0) ) then
		{
		  _added = true;
		}
		else
		{
			_i = _i + 1;
		};
	};
};
_i