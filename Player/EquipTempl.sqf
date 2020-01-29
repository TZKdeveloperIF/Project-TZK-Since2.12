// args: [unit, templ]
// return: true

private [ "_x", "_unit", "_templ" , "_typePrim" , "_typeSec" , "_typeHandgun" , "_equipment" , "_weapon" ];

_unit = _this select 0;
_templ = _this select 1;

_typePrim = _templ select 1;
_typeSec = _templ select 2;
_typeHandgun = _templ select 3;
_equipment = _templ select 4;

removeAllWeapons _unit;
{ _unit addWeapon _x } forEach weaponsCustom;

{ _unit addMagazine ((equipDefs select (_x select 0)) select edObject)} foreach (_equipment select isGeneral);
{ _unit addMagazine ((equipDefs select (_x select 0)) select edObject)} foreach (_equipment select isHandgun);

if (_typePrim != -1) then { _weapon = ((weaponDefs select _typePrim) select wdObject); _unit addWeapon _weapon; _unit selectWeapon _weapon };
if (_typeSec != -1) then { _weapon = ((weaponDefs select _typeSec) select wdObject); _unit addWeapon _weapon };
if (_typeHandgun != -1) then { _weapon = ((weaponDefs select _typeHandgun) select wdObject); _unit addWeapon _weapon };
{ _unit addWeapon ((equipDefs select (_x select 0)) select edObject)} foreach (_equipment select isOptics);
true
