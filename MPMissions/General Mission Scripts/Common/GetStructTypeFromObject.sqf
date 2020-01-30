// arguments: object
// return: type (-1 if not found)

private ["_t", "_i", "_c", "_structs"];

_t = -1;
_i = 0;
_c = count structDefs;

while "_i < _c && _t == -1" do
{
	if ( _this in ((structMatrix select si0) select _i) || _this in ((structMatrix select si1) select _i) ) then
	{
	  _t = _i;
	};
	_i = _i + 1;
};
_t