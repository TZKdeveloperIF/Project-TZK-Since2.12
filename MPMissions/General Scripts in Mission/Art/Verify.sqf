// args: [unit, type]

private [{_unit}, {_enum}, {_processed}, {_type}, {_ret}];
_unit = _this select 0; _enum = _this select 1;
_processed = false;
_ret = false;

if (not _processed && "Soldier" == _enum) then {
	_processed = true;
	if (_unit == vehicle _unit) then {
		_ret = (_unit call preprocessFile "Art\GetSoldierArtType.sqf") != -1;
	};
};
if (not _processed && "Howitzer" == _enum) then {
	_processed = true;
	if (_unit != vehicle _unit) then {
		_type = (vehicle _unit) call funcGetUnitTypeFromObject;
		if (-1 != _type) then {
			_ret = -1 != typesHowitzer find _type;
		};
	};
};
if (not _processed && "MLRS" == _enum) then {
	_processed = true;
	if (_unit != vehicle _unit) then {
		_type = (vehicle _unit) call funcGetUnitTypeFromObject;
		if (-1 != _type) then {
			_ret = -1 != typesRocketLauncher find _type;
		};
	};
};
if (not _processed && "Tank" == _enum) then {
	_processed = true;
	if (_unit != vehicle _unit) then {
		_type = (vehicle _unit) call funcGetUnitTypeFromObject;
		if (-1 != _type) then {
			_ret = -1 != typesLightTank find _type || -1 != typesHeavyTank find _type
				|| -1 != typesMainGunLightShip find _type;
		};
	};
};
if (not _processed && "Struct" == _enum) then {
	_processed = true;
	if (_unit != vehicle _unit) then {
		_type = (vehicle _unit) call funcGetStructTypeFromObject;
		_ret = -1 != structsOccupiableArtilleryMortar find _type || -1 != structsOccupiableHowitzer find _type;
	};
};
_ret