// args: [si, gi, groupSize]
// return: number(slot)

private ["_si", "_gi", "_groupSize", "_slots", "_ids", "_id", "_units", "_i", "_c", "_found", "_text"];
_si = _this select 0;
_gi = _this select 1;
_groupSize = _this select 2;


_slots = -((groupUnitsBuildingMatrix select _si) select _gi);
_ids = (groupUnitIDMatrix select _si) select _gi;
_id = 2;
_units = units((groupMatrix select _si) select _gi)-[leader((groupMatrix select _si) select _gi)];
_i = 0;
_c = count _units;

while "_i < _c" do
{
	_found = false;
	_text = format["%1", _units select _i];
	while "!_found && _id <= 12" do
	{
		if ( _text == (_ids select _id) ) then
		{
			_found = true;
		}
		else
		{
			if (_id <= _groupSize) then {_slots = _slots + 1};
		};
		_id = _id + 1;
	};
	_i = _i + 1;
};
if (_id <= _groupSize) then {_slots = _slots + _groupSize - _id + 1};
_slots