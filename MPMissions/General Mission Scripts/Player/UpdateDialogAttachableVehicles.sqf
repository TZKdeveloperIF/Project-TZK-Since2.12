// args: [tug, allowed, distMax]
// return: vehicles[], format [vehicle, type, distance]

private ["_tug", "_allowed", "_distMax", "_index", "_count", "_vs", "_vehicles", 
"_x", "_type", "_factoryType", "_vehicleAttached", "_entry", "_tug2", "_tugged"];


_tug = _this select 0;
_allowed = _this select 1;
_distMax = _this select 2;

_vs = [getPos _tug, _distMax, [], [_tug]] call funcGetNearbyVehicles; _vehicles = [];

{
	_vehicle = _x select 0;
	_type = _x select 1;
	_factoryType = (unitDefs select _type) select udFactoryType;
	if (_factoryType in _allowed) then
	{
		if (alive _vehicle) then
		{
			if !((_vehicle distance _tug) > _distMax) then
			{
				_vehicleAttached = false;
				
				_index = 0; _count = count vehicleAttached;
				while "_index < _count && !_vehicleAttached" do
				{
					_entry = vehicleAttached select _index;
					_tug2 = _entry select tsTug;
					_tugged = (_entry select tsTugged) - [objNull];

					if (_vehicle == _tug2 && (count _tugged) > 0) then {_vehicleAttached = true};
					if (_vehicle in _tugged) then {_vehicleAttached = true};

					_index = _index + 1;
				};
				
				if !(_vehicleAttached) then {_vehicles set [count _vehicles, _x]};
			};
		};
	};
} forEach _vs;
_vs = [2, true, _vehicles] call funcSort;

_vs