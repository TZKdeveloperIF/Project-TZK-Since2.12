private ["_x", "_prim", "_sec", "_mags", "_namePrim", "_nameSec", "_namesGen", "_type", "_cMagsPrim", "_cMagsSec", "_namesOther", "_n", "_c", "_nameTempl" ];
private ["_validMags"];

_prim = _this select 0;
_sec = _this select 1;
_mags = _this select 2;

_namesGen = []; _objGen = [];
{
	_type = _x select 0;
	_name = equipDefs select _type select edName; _namesGen set [ count _namesGen, _name ];
	_name = equipDefs select _type select edObject; _objGen set [ count _objGen, _name ];
} foreach _mags;

_namePrim = ""; _cMagsPrim = 0;
if (_prim != -1) then {
	_namePrim = weaponDefs select _prim select wdName;
	_validMags = [weaponDefs select _prim select wdObject] call funcWeaponValidMags;
	_n = 0; _c = count _objGen;
	while "_n < _c" do {if ((_objGen select _n) in _validMags) then {_cMagsPrim = _cMagsPrim + 1; _namesGen set [_n, ""]}; _n = _n + 1};
	_objGen = _objGen - _validMags; _namesGen = _namesGen - [""]; 
};

_nameSec = ""; _cMagsSec = 0;
if (_sec != -1) then {
	_nameSec = weaponDefs select _sec select wdName;
	_validMags = [weaponDefs select _sec select wdObject] call funcWeaponValidMags;
	_n = 0; _c = count _objGen;
	while "_n < _c" do {if ((_objGen select _n) in _validMags) then {_cMagsSec = _cMagsSec + 1; _namesGen set [_n, ""]}; _n = _n + 1};
	_objGen = _objGen - _validMags; _namesGen = _namesGen - [""]; 
};

_namesOther = [];
{
	_n = _x; _c = "_x == _n" count _namesGen; if (_c > 1) then {
		_name = format["%1*%2 ", _n, _c]; if !(_name in _namesOther) then {_namesOther set [count _namesOther, _name]}
	} else {_namesOther set[count _namesOther, _n]}
} foreach _namesGen;

_nameTempl = "";
if (_namePrim != "") then {_nameTempl = _nameTempl + format ["%1*%2 ", _namePrim, _cMagsPrim]};
if (_nameSec != "")  then {_nameTempl = _nameTempl + format ["%1*%2 ", _nameSec, _cMagsSec]};
{ _nameTempl = _nameTempl + format["%1 ", _x] } foreach _namesOther;
_nameTempl