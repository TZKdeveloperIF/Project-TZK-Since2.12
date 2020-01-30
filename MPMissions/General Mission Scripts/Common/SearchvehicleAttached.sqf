// args:[tug(tugged, slot)]
// return: [index, found]

private [ "_tug", "_index", "_count", "_found", "_tug2", "_tugged", "_slot", "_dead" ];

_tug = _this select 0;
_tug2 = objNull;
_index = 0;
_dead = -1;
_count = count vehicleAttached;
_found = false;
if (1 == count _this) then
{
	while "_index < _count && !_found" do
	{
		_tug2 = (vehicleAttached select _index) select tsTug;
		if (!alive _tug2) then {_dead = _index};
		if (_tug == _tug2) then
		{
			_found = true;
		}
		else
		{
			_index = _index + 1;
		};
	};
}
else
{
	_slot = _this select 1;
	while "_index < _count && !_found" do
	{
		_tugged = (vehicleAttached select _index) select tsTugged;
		if (_tug in _tugged) then
		{
			_tugged set [_slot, objNull]; 
			_found = true;
		}
		else
		{
			_index = _index + 1;
		};
	};
};
[_index, _found, _dead]