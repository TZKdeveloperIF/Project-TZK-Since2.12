private [{_si}, {_gi}, {_setting}, {_ret}];
_si = _this select 0; _gi = _this select 1;

_setting = aiSetting select _si select _gi select aisSuperior;

_ret = giCO select _si;
if (0 != _setting) then {
	private [{_s}];
	_s = groupNameMatrix select _si find (callsigns select (_setting - 1));
	if (_s != -1) then {_ret = _s};
};

_ret