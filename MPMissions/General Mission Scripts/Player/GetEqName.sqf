// args: [ prim, sec, [gen0, ...] ]

private ["_x", "_prim", "_sec", "_mags", "_namePrim", "_nameSec", "_namesGen", "_type", "_cMagsPrim", "_cMagsSec", "_namesOther", "_n", "_c", "_nameTempl" ];

_prim = _this select 0;
_sec = _this select 1;
_mags = _this select 2;

_namePrim = "";
if (_prim != -1) then { _namePrim = (weaponDefs select _prim) select wdName; };
_nameSec = "";
if (_sec != -1) then { _nameSec = (weaponDefs select _sec) select wdName; };

_namesGen = [];
{ _type = _x select 0; _name = (equipDefs select (_x select 0)) select edName; _namesGen set [ count _namesGen, _name ] } foreach _mags;

if (_namePrim != "") then { _cMagsPrim = "_x == _namePrim" count _namesGen; _namesGen = _namesGen - [_namePrim]; };
if ( _nameSec != "") then { _cMagsSec = "_x == _nameSec" count _namesGen; _namesGen = _namesGen - [_nameSec]; };

_namesOther = [];
{ _n = _x; _c = "_x == _n" count _namesGen; if (_c > 1) then { _name = format["%1*%2 ", _n, _c]; if (!(_name in _namesOther)) then { _namesOther set[count _namesOther, _name] } } else { _namesOther set[count _namesOther, _n] } } foreach _namesGen;

_nameTempl = "";
if (_namePrim != "") then { _nameTempl = _nameTempl + format["%1*%2 ", _namePrim, _cMagsPrim]; };
if (_nameSec != "") then { _nameTempl = _nameTempl + format["%1*%2 ", _nameSec, _cMagsSec]; };
{ _nameTempl = _nameTempl + format["%1 ", _x] } foreach _namesOther;
_nameTempl