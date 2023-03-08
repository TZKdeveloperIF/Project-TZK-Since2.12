// args: [si, type, value]
private [{_si}, {_type}];
_si = _this select 0; _type = _this select 1;

if (not isNull player) then {if (_si == siPlayer && _type == aisSuperior) then {
	private [{_gi}, {_c}, {_playerGrpName}, {_bSuperior}, {_val}];
	_playerGrpName = groupNameMatrix select _si select giPlayer; _bSuperior = false;
	_gi = 0; _c = count (groupMatrix select _si); while {_gi < _c && not _bSuperior} do {
		_val = aiSetting select _si select _gi select aisSuperior;
		if (_val > 0) then {if (callSigns select _val - 1 == _playerGrpName) then {
			_bSuperior = true;
		}};
		_gi = _gi + 1;
	};
	bIsAiSuperior = _bSuperior;
}};