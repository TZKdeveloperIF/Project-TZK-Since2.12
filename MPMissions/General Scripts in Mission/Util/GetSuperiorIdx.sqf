private [{_si}, {_gi}, {_setting}];
_si = _this select 0; _gi = _this select 1; _this = 0;
_setting = aiSetting select _si select _gi select aisSuperior;
if (0 == _setting) then {giCO select _si} else {
	_superiorGrpName = callsigns select (_setting - 1);
	groupNameMatrix select _si find _superiorGrpName;
}