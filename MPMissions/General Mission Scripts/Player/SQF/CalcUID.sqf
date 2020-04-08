// args: [unit, si, gi]
// return: UID

private [ "_unit", "_si", "_gi", "_ids", "_matching", "_id", "_text" ];

_unit = _this select 0;
_si = _this select 1;
_gi = _this select 2;

_ids = (groupUnitIDMatrix select _si) select _gi;
_matching = false;
_id = 2;
while "_id <= 12 && !_matching" do
{
	_text = format["%1", _unit];
	if ( _text == (_ids select _id) ) then
	{
		_matching = true;
	}
	else
	{
		_id = _id + 1;
	};
};
_id