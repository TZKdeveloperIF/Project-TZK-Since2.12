// args: unit
// return: template def if success, empty array if failure

private [ "_x", "_wpns", "_mags", "_wpn", "_i", "_remove", "_typePrim", "_typeSec", "_typeHandgun", "_magsGen", "_magsHandgun", "_magsOptics", "_nameTempl" ];

_wpns = weapons _this;
_mags = magazines _this;

_typePrim = -1;
_typeSec = -1;
_typeHandgun = -1;
_magsGen = [];
_magsHandgun = [];
_magsOptics = [];

// PRIMARY
_remove = [];
{
  _wpn = _x;
  _i=0;
  {
    if ( _wpn == (_x select wdObject) && (wtPrimary == (_x select wdType) || wtPrimaryOnly == (_x select wdType)) ) then
    {
      _typePrim = _i;
      _remove = _remove + [_wpn];
    };
    _i=_i+1;
  } foreach weaponDefs;
} foreach _wpns;
if (count _remove > 0) then { _wpns = _wpns - _remove; };

// SECONDARY
_remove = [];
{
  _wpn = _x;
  _i=0;
  {
    if ( _wpn == (_x select wdObject) && wtSecondary == (_x select wdType) ) then
    {
      _typeSec = _i;
      _remove = _remove + [_wpn];
    };
    _i=_i+1;
  } foreach weaponDefs;
} foreach _wpns;
if (count _remove > 0) then { _wpns = _wpns - _remove; };

// HANDGUN
_remove = [];
{
  _wpn = _x;
  _i=0;
  {
    if ( _wpn == (_x select wdObject) && wtHandgun == (_x select wdType) ) then
    {
      _typeHandgun = _i;
      _remove = _remove + [_wpn];
    };
    _i=_i+1;
  } foreach weaponDefs;
} foreach _wpns;
if (count _remove > 0) then { _wpns = _wpns - _remove; };

// OPTICS
_remove = [];
{
  _wpn = _x;
  _i=0;
  {
    if ( _wpn == (_x select edObject) && isOptics == (_x select edSlotType) ) then
    {
      _magsOptics = _magsOptics + [ [_i, _x select edSlots] ];
      _remove = _remove + [_wpn];
    };
    _i=_i+1;
  } foreach equipDefs;
} foreach _wpns;
if (count _remove > 0) then { _wpns = _wpns - _remove; };

// MAGS GENERAL
_remove = [];
{
  _mag = _x;
  _i=0;
  {
    if ( _mag == (_x select edObject) && isGeneral == (_x select edSlotType) ) then
    {
      _magsGen = _magsGen + [ [_i, _x select edSlots] ];
      _remove = _remove + [_mag];
    };
    _i=_i+1;
  } foreach equipDefs;
} foreach _mags;
if (count _remove > 0) then { _mags = _mags - _remove; };

// MAGS HANDGUN
_remove = [];
{
  _mag = _x;
  _i=0;
  {
    if ( _mag == (_x select edObject) && isHandgun == (_x select edSlotType) ) then
    {
      _magsHandgun = _magsHandgun + [ [_i, _x select edSlots] ];
      _remove = _remove + [_mag];
    };
    _i=_i+1;
  } foreach equipDefs;
} foreach _mags;
if (count _remove > 0) then { _mags = _mags - _remove; };

_nameTempl = [_typePrim, _typeSec, _magsGen] call funcGetEqName;

[_nameTempl, _typePrim, _typeHandgun, _typeSec, [_magsGen, _magsHandgun, _magsOptics] ]
