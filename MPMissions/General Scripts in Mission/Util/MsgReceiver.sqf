private [{_si}, {_gi}, {_msg}];
_si = _this select 0; _gi = _this select 1; _msg = _this select 2;
if (not isNull player) then {
	if (_si == siPlayer || _si == -1) then {
		if (_gi == giPlayer || _gi == -1) then {
			player globalChat _msg;
		}
	}
};