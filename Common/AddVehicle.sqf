// args: [type, pos, dir, si, gi, giBuyer, sendRepeats]
// return: vehicle

private [
  "_type", "_pos", "_dir", "_si", "_gi", "_giBuyer", "_sendRepeats",
  "_err", "_vehicle", "_desc"
];

_type = _this select 0;
_pos = _this select 1;
_dir = _this select 2;
_si = _this select 3;
_gi = _this select 4;
_giBuyer = _this select 5;
_sendRepeats = _this select 6;

_err = false;

_vehicle = objNull;

if (_si < 0 || _si > siCiv) then { _err = true; format["ERROR: _si out of range (%1) in AddVehicle.sqf", _si] call fDebugLog };
if ( count ((unitDefs select _type) select udCrew) != 2 ) then { _err = true; format["ERROR: unit type is not a vehicle (count udCrew != 2) in AddVehicle.sqf"] call fDebugLog };

if (!_err) then
{
  _desc = unitDefs select _type;
  _vehicle = (_desc select udModel) createVehicle _pos;
	_vehicle setDir _dir;
	if (_gi < 0) then {_gi = 0};
	[_type, _si, _gi, _giBuyer, _vehicle, _sendRepeats] exec "Common\SendUnitBuilt.sqs";
	_vehicle setPos (getPos _vehicle);
};

_vehicle
