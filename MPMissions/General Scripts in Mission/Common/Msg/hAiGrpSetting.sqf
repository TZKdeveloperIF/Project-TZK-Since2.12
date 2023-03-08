// args: [si, gi, type, setting, send to all]
private [{_si}, {_gi}, {_type}, {_setting}];
_si = _this select 0; _type = _this select 2; _setting = _this select 3;
if (_this select 4) then {
	private [{_giSender}];
	_giSender = _this select 1;

	_funcLeadBy = preprocessFile "Util\GrpLeadBy.sqf";
	_groupNames = groupNameMatrix select _si;
	_validGroupNames = []; _j = 0;
	_gis = ([_si] call funcGetAIGroupsIndex); _i = 0; _c = count _gis; while {_i < _c} do {
		_gi = _gis select _i;
		_bContinue = false;
		// skip if same setting
		if (not _bContinue && aiSetting select _si select _gi select _type == _setting) then {_bContinue = true};
		// skip if locked
		if (not _bContinue && 
			aiSetting select _si select _gi select aisLockSetting == 1 && _type != aisLockSetting) then {
			_bContinue = true
		};
		// skip if command sender is not superior
		if not ([_si, _gi, _giSender] call _funcLeadBy) then {_bContinue = true};

		// modify ai setting
		if not _bContinue then {
			aiSetting select _si select _gi set [_type, _setting];
			if (not isNull player) then {if (_si == siPlayer) then {
				_validGroupNames set [_j, _groupNames select _gi];
				_j = _j + 1;
			}};
		};

		// unit test
		if (not isNull player) then {if ("IF" == name player) then {
			_a = (_giSender == (giCO select _si)) && !( (["Commander"] + callsigns) select (aiSetting select _si select _gi select aisSuperior) in ["Commander", _groupNames select _giSender] )
				|| (_giSender != (giCO select _si)) && (["Commander"] + callsigns) select (aiSetting select _si select _gi select aisSuperior) != _groupNames select _giSender;
			_b = not ([_si, _gi, _giSender] call _funcLeadBy);
			if ((_a && not _b) || (_b && not _a)) then {showDebug ["Nonequivalence in settingAll.sqf", 5000]};
		}};

		_i = _i + 1;
	};
	// radio channel message
	if (count _validGroupNames > 0) then {
		format [
			"Alteration Acknowledged, %1 set %2 for groups: %3", 
			aiSettingDefs select _type select 0, 
			aiSettingDefs select _type select 1 select _setting, 
			_validGroupNames
		] call funcSideMsg;
	};
} else {
	_gi = _this select 1;
	aiSetting select _si select _gi set [_type, _setting];
	if (not isNull player) then {if (_si == siPlayer) then {
		leader (groupMatrix select _si select _gi) sidechat format [
			"Alteration Acknowledged, %1 set %2", 
			aiSettingDefs select _type select 0, 
			aiSettingDefs select _type select 1 select _setting
		];
	}};
};
// update player's "superior" state
[_si, _type] call preprocessFile "Player\SQF\UpdateSuperior.sqf"