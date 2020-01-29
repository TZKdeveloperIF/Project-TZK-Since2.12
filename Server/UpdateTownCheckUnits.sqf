// args: thislist
// return: units

private [ "_units", "_groups", "_index", "_count", "_unit", "_pos", "_x", "_group" ];

// _thislist = _this


_units = [0,0,0];
_groups = [ [], [], [] ];
_index = 0;
_count = count _this;

while "_index < _count" do
{	
	_unit = _this select _index;
	_pos = getPos _unit;
	if ((_pos select 2) < 3) then
	{
		{
			if ( (side _unit) == (sides select _x) ) then
			{
				_units set [_x, (_units select _x) + 1];
				_group = group _unit;
				if !(_group in (_groups select _x)) then
				{
					(_groups select _x) set [count (_groups select _x), _group]
				};
			};
		} forEach [si0, si1, siRes];
	};
	_index = _index + 1;
};
[_units, _groups]