// arguments: _order
// returns: string

private ["_order", "_def", "_text", "_index", "_count"];

_order = _this;
_def = orderTempDefs select (_order select 1);
_text = _def select 0;
_index = 0;
_count = count (_def select 1);

while "_index < _count" do
{
	_text = _text + " ";
	if ((count _order) == 4 && (count ((_def select 1) select _index)) == 4) then
	{
		_text = _text + (((_order select 3) select _index) call (((_def select 1) select _index) select 3))
	}
	else
	{
		_text = _text + (((_order select 2) select _index) call (((_def select 1) select _index) select 2))
	};
	_index = _index + 1;
};
_text
