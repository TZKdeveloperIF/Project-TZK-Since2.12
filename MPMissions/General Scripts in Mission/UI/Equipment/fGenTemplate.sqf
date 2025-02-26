// args: [template (external array reference), _typePrim, _typeSec, _typeHandgun, _typeBinocular, _typeNVG, _equipment]

private [{_templ}, {_nameCustom}, {_magsInfo}, {_magType}
	, {_typePrim}, {_typeSec}, {_typeHandgun}, {_typeBinocular}, {_typeNVG}, {_equipment}];

_templ = _this select 0;
_typePrim = _this select 1; _typeSec = _this select 2; _typeHandgun = _this select 3;
_typeBinocular = _this select 4; _typeNVG = _this select 5; _equipment = _this select 6;

if (_typePrim == -1 && _typeHandgun == -1 && _typeSec == -1 && _typeBinocular == -1 && _typeNVG == -1
	 && count (_equipment select isGeneral) + count (_equipment select isHandgun) == 0
) then {
	_templ resize 0;
} else {
	_nameCustom = [_typePrim, _typeSec, _equipment select isGeneral] call funcGetEqName;
	_templ set [0, _nameCustom];
	_templ set [1, _typePrim];
	_templ set [2, _typeHandgun];
	_templ set [3, _typeSec];
	_templ set [4, _typeBinocular];
	_templ set [5, _typeNVG];
	_templ set [6, [+(_equipment select isGeneral), +(_equipment select isHandgun)]];
};