// args: [si, giExclude]
// return: [gi, slotsFree]

private ["_groups", "_gi", "_slots", "_index", "_count", "_slotsFree"];

_groups = groupMatrix select (_this select 0);

_gi = -1;
_slots = -1;

_index = 0;
_count = count _groups;
while "_index < _count" do
{
	if ((_groups select _index) in (groupAiMatrix select (_this select 0))) then
	{
		_slotsFree = maxGroupSize - (count units (_groups select _index) + ((groupUnitsBuildingMatrix select (_this select 0)) select _index));
		if (_slotsFree > _slots && _index != (_this select 1)) then
		{
			_slots = _slotsFree;
			_gi = _index;
		};
	};
	_index = _index + 1;
};

[_gi, _slots]