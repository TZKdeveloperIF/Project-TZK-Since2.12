// TZK CTI - Create Unit after Factory production (Server only)
// Mirrors OFP: Server/BuyUnit/Create.sqf + Creating.sqs
// A3 simplification: all units created on server (no OFP client-side creation needed).
// Args: [type, driver, gunner, commander, si, giJoin, giBuyer, factory, structType, unitsToBuild]

if (!isServer) exitWith {};

params ["_type", "_driver", "_gunner", "_commander", "_si", "_giJoin", "_giBuyer", "_factory", "_structType", "_unitsToBuild"];

private _unitDesc = unitDefs select _type;
private _isVehicle = count (_unitDesc select udCrew) > 0;

// Calculate spawn position near factory
private _fPos = getPosATL _factory;
private _fDir = getDir _factory;
private _dist = 15;
private _spawnPos = [(_fPos select 0) + _dist * sin _fDir, (_fPos select 1) + _dist * cos _fDir, 0];

private _grpJoin = (groupMatrix select _si) select _giJoin;

if (!_isVehicle) then {
	// Infantry
	private _className = _unitDesc select udModel;
	private _unit = _grpJoin createUnit [_className, _spawnPos, [], 5, "FORM"];
	if (isNull _unit) then {
		diag_log format ["TZK CTI: CreateUnit FAILED for infantry type=%1", _type];
	} else {
		_unit setDir _fDir;
		_grpJoin reveal _factory;
	};
} else {
	// Vehicle + crew
	private _vehClass = _unitDesc select udModel;
	private _veh = createVehicle [_vehClass, _spawnPos, [], 5, "NONE"];
	if (isNull _veh) then {
		diag_log format ["TZK CTI: CreateUnit FAILED for vehicle type=%1", _type];
	} else {
		_veh setDir _fDir;
		_veh setPosATL _spawnPos;

		private _crewType = (_unitDesc select udCrew) select 1;
		private _crewClass = (unitDefs select _crewType) select udModel;

		if (_driver > 0) then {
			private _crew = _grpJoin createUnit [_crewClass, _spawnPos, [], 0, "NONE"];
			if (!isNull _crew) then { _crew moveInDriver _veh };
		};
		if (_gunner > 0) then {
			private _crew = _grpJoin createUnit [_crewClass, _spawnPos, [], 0, "NONE"];
			if (!isNull _crew) then { _crew moveInGunner _veh };
		};
		if (_commander > 0) then {
			private _crew = _grpJoin createUnit [_crewClass, _spawnPos, [], 0, "NONE"];
			if (!isNull _crew) then { _crew moveInCommander _veh };
		};

		_grpJoin reveal _factory;
	};
};

// Free building units count
[_si, _giJoin, _unitsToBuild] call TZK_fnc_freeBuildingUnits;

diag_log format ["TZK CTI: Unit created type=%1 si=%2 gi=%3 near factory %4", _type, _si, _giJoin, _factory];
