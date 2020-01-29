// args: [object, value, si]
// return: newValue or -1 if object not found in array

private ["_object", "_value", "_si", "_list", "_res", "_index", "_count", "_entry", "_entryObject", "_type", "_new", "_pos", "_dir", "_model", "_vect", "_posCorrect", "_cost"];

_object = _this select 0;
_value = _this select 1;
_si = _this select 2;

_list = repairableStructureMatrix select _si;
_res = -1;

_index = 0;
_count = count _list;

// player globalchat format["_side=%1, _list=%2", _side, _list];

while "_index < _count && _res == -1" do
{
	_entry = _list select _index;
	_entryObject = _entry select 0;
	if (_object == _entryObject) then 
	{
		_cost = (structDefs select (_entry select 2)) select sdCost;
		_cost = 0.1*_cost*_value;
		_cost = _cost - (_cost % 1);
		if (_object in primStructsPlaced) then { _cost = 0; };
		if ((_entry select 1) <= 0) then { _cost = 0; };
		
		if ( _cost > ((groupMoneyMatrix select _si) select (giCO select _si)) ) then
		{
			[_si, _entry select 2] exec "Server\Info\NoMoneyForStructRepair.sqs";
			_res = _entry select 1;
		}
		else
		{
			[_si, giCO select _si, _cost] exec "Server\MoneySpend.sqs";
			_value = (_entry select 1) - _value;

			_entry set [1, _value];
			_res = _value;
			if (_value <= 0) then
			{
				_type = _entry select 2;
				[_object, _type, _si] exec "Server\ReplacePrimStruct.sqs";
			};
		};
	};
	_index = _index + 1;
};

_res