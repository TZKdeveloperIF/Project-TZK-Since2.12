// args: units
// return: vehicles that supports attach
private [{_vehs}, {_vehicle}, {_typesTugger}];
_typesTugger = typesTruckTugger + typesApcTugger + typesHeliTugger + typesBoatTugger;
_vehs = [];
{
	_vehicle = vehicle _x;
	if (_vehs find _vehicle == -1) then {
		if ((_vehicle call funcGetUnitTypeFromObject) in _typesTugger) then {
			_vehs set [count _vehs, _vehicle];
		};
	};
} forEach _this;
_vehs