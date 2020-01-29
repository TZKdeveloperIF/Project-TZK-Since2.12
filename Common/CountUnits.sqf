// args: [si, [types]] (e.g. [si0, [type, ...]])
// return: count (e.g. 3)

private ["_x", "_t", "_c", "_res"];

_res = 0;
_t = 0;
_c = count unitDefs;
while "_t < _c" do
{
	if (_t in (_this select 1)) then
	{
		{
		  if (alive _x) then
		  {
			  _res = _res + 1;
		  };
		} foreach ((unitMatrix select (_this select 0)) select _t);
	};
	_t = _t + 1;
};

_res
