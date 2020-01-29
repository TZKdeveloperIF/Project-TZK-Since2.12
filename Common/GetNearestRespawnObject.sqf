// args: [object, si]
// return: object

private ["_x", "_objOld", "_si", "_distMin", "_structs", "_obj", "_mhq", "_ts"];

_objOld = _this select 0;
_si = _this select 1;

_obj = objNull;
_distMin = 100000;

_mhq = (mhq select _si);
if (isNull _objOld) then { _objOld = _mhq };
if (alive _mhq) then
{
  _obj = _mhq;
  _distMin = _objOld distance _mhq;
};

_MCVs = MCV select _si;
if ( ("alive _x " count _MCVs) > 0 ) then
{
	{
	  if ( (_objOld distance _x) < _distMin && alive _x ) then
	  {
		_obj = _x;
		_distMin = _objOld distance _x;
	  };
	} foreach _MCVs;
};



{
  _ts = _x;
  _structs = [_si, _ts] call funcGetWorkingStructures;
	{
	  if ( (_objOld distance _x) < _distMin ) then
	  {
      _obj = _x;
      _distMin = _objOld distance _x;
	  };
	} foreach _structs;
} foreach structsRespawn;

_obj