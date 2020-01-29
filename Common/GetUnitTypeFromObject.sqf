// arguments: object
// return: type (-1 if not found)

private ["_t", "_i", "_c", "_si"];

_t = -1;
_i = 0;
_c = count unitDefs;

_si = -1;
{ if ( (side _this) == (sides select _x) ) then {_si = _x} } forEach [si0, si1, siRes];

if (_si in [si0, si1, siRes]) then
{
	while "_i < _c && _t == -1" do
	{
		if ( _this in ((unitMatrix select _si) select _i) ) then
		{
		  _t = _i;
		};
		_i = _i + 1;
	};
};
if ( _t == -1 ) then 
{
	_i = 0;
	while "_i < _c && _t == -1" do
	{
		if ( _this in ((unitMatrix select si0) select _i) || _this in ((unitMatrix select si1) select _i) || _this in ((unitMatrix select siRes) select _i) || _this in ((unitMatrix select siCiv) select _i) ) then
		{
		  _t = _i;
		};
		_i = _i + 1;
	};
};
_t