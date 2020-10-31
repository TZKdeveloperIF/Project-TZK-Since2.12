private ["_x", "_posOrigin", "_distMax", "_types", "_except", "_sides", "_structs", "_pos", "_list", "_type", "_count", "_distance"];

_posOrigin = _this select 0;
_distMax = _this select 1;
_types = _this select 2;
_except = _this select 3;
_sides = if (count _this > 4) Then {_this select 4} Else {[si0, si1, siRes, siCiv]}; if (_sides in [_sides]) Then {_sides = [_sides]};
if (_sides select 0 == siBoth) Then {_sides set [0, si0], _sides set [1, si1]};

_list = [];

_type = 0;
_count = count structDefs;
while "_type < _count" do {
	if (count _types == 0 || _type in _types) then {
		{
			{
				_pos = getPos _x;
				_distance = sqrt ( ((_pos select 0) - (_posOrigin select 0))^2 + ((_pos select 1) - (_posOrigin select 1))^2 );
				if (!(_x in _except) && alive _x && _distance < _distMax) then
				{
					_list set [count _list, [_x, _type, _distance]];
				}
			} foreach ((structMatrix select _x select _type) - [objNull]);
		} forEach _sides;
	};
	
	_type = _type + 1;
};

_list