// args: [type, driver, gunner, commander, pos, dir, si, gi, groupJoin, giBuyer, sendRepeats]
// return: vehicle
// using this function to create units on Server and return Vehicle for Server scripts to check if Vehicle created (combine with "@" operator).

private [ "_type", "_driver", "_gunner", "_commander", "_pos", "_dir", "_si", "_gi", "_groupJoin", "_giBuyer", "_sendRepeats", 
"_desc", "_vehicle", "_typeCrew", "_crew" ];

_type = _this select 0;
_driver = _this select 1;
_gunner = _this select 2;
_commander = _this select 3;
_pos = _this select 4;
_dir = _this select 5;
_si = _this select 6;
_gi = _this select 7;
_groupJoin = _this select 8;
_giBuyer = _this select 9;
_sendRepeats = _this select 10;

_vehicle = objNull;

if (_type >= maxUnitTypes) then {[_type, _pos, _dir, _si, _gi, _groupJoin, _giBuyer] call fAddSoldier} else {

	if ( _type < 0 || _type >= (count unitDefs) ) then {format["ERROR: _type is out of range (%1) in AddUnit.sqs", _type] call fDebugLog} else {
		
		_desc = unitDefs select _type;
		if (count (_desc select udCrew) == 0) then {[_type, _pos, _dir, _si, _gi, _groupJoin, _giBuyer] call fAddSoldier} else {

			// must be a vehicle if we got here
			_vehicle = [_type, _pos, _dir, _si, _gi, _giBuyer, _sendRepeats] call fAddVehicle;
			if (isNull _vehicle) then {format["ERROR: _vehicle is NULL in AddUnit.sqs"] call fDebugLog} else {

				_typeCrew = (_desc select udCrew) select 1;

				if (_driver != 0) then {
					_crew = [_typeCrew, _pos, _dir, _si, _gi, _groupJoin, _giBuyer] call fAddSoldier;
					if ( alive _crew && alive _vehicle ) then {_crew moveInDriver _vehicle};
				};
				if (_gunner != 0) then {
					_crew = [_typeCrew, _pos, _dir, _si, _gi, _groupJoin, _giBuyer] call fAddSoldier;
					if ( alive _crew && alive _vehicle ) then {_crew moveInGunner _vehicle};
				};
				if (_commander != 0) then {
					_crew = [_typeCrew, _pos, _dir, _si, _gi, _groupJoin, _giBuyer] call fAddSoldier;
					if ( alive _crew && alive _vehicle ) then {_crew moveInCommander _vehicle};
				};
			};
		};
	};
};

_vehicle