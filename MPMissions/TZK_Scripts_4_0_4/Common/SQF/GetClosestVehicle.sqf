private ["_x", "_pos", "_si", "_types", "_except", "_vehicleFound", "_dist", "_distFound", "_sides", "_type", "_count"];

_pos = _this select 0;
_si = _this select 1;
_types = _this select 2;
_except = _this select 3;

_vehicleFound = objNull;
_distFound = 10000;

_sides = if (_si == siBoth) Then {[si0, si1, siRes, siCiv]} Else {[_si]};
_type = 0;
_count = count unitDefs;
while "_type < _count" do {
	if (((count _types == 0) || (_type in _types)) && (count ((unitDefs select _type) select udCrew) > 0)) Then {
		{
			{
				if (!(_x in _except) && alive _x) Then {
					_dist = ([_pos, getPos _x] call funcDistH); if (_dist < _distFound) Then {_vehicleFound = _x; _distFound = _dist} };
			} foreach (unitMatrix select _x select _type);
		} forEach _sides;
	};
	_type = _type + 1;
};

[_vehicleFound, _distFound]