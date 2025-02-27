// args: equipment template
// returns: [weapons, magazines]

// cfg_todo: equipment UI and corresponding design should be modularized

private [{_template}, {_typePrim}, {_typeHandgun}, {_typeSec}, {_typeBinocular}, {_typeNVG}, {_equipment}, 
	{_i}, {_weapons}, {_mags}, {_type}];

_template = _this;

_typePrim = _template select 1;
_typeHandgun = _template select 2;
_typeSec = _template select 3;
_typeBinocular = _template select 4;
_typeNVG = _template select 5;
_equipment = _template select 6;

_weapons = + weaponsCustom; _i = count _weapons; {
	if (_x != -1) then {
		_weapons set [_i, weaponSearch select _x];
		_i = _i + 1;
	};
} forEach [_typePrim, _typeSec, _typeHandgun, _typeBinocular, _typeNVG];
_mags = []; _i = count _mags; {
	_type = _x; {
		_mags set [_i, equipSearch select (_x select 0)];
		_i = _i + 1;
	} forEach (_equipment select _type);
} forEach [isGeneral, isHandgun];

[_weapons, _mags]