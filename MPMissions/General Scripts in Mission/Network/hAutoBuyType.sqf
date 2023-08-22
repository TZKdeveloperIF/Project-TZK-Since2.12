// args: [si, gi, bind, new type, gi sender]
private [{_si},{_gi},{_newType},{_giSender}];
_si = _this select 0; _gi = _this select 1;
_newType = _this select 3; _giSender = _this select 4;

private [{_text}]; _text = if (-1 == _newType) then {"None"} else {unitDefs select _newType select udName};

if (-1 == _gi) then {
	_funcLeadBy = preprocessFile "Util\GrpLeadBy.sqf";
	_groupNames = groupNameMatrix select _si;
	_validGroupNames = []; _j = 0;
	_gis = ([_si] call funcGetAIGroupsIndex); _i = 0; _c = count _gis; while {_i < _c} do {
		_gi = _gis select _i;
		private [{_autoBuyTypeEntry}]; _autoBuyTypeEntry = AutoBuyTypeMatrix select _si;
		_bContinue = false;
	
		// same type check?

		// skip if locked
		if (not _bContinue && 
			aiSetting select _si select _gi select aisLockSetting == 1) then {_bContinue = true};
		// skip if command sender is not superior
		if not ([_si, _gi, _giSender] call _funcLeadBy) then {_bContinue = true};

		// modify ai autobuy factory
		if not _bContinue then {
			_autoBuyTypeEntry set [_gi, _newType];
			if (not isNull player) then {if (_si == siPlayer) then {
				_validGroupNames set [_j, _groupNames select _gi];
				_j = _j + 1;
			}};
		};

		_i = _i + 1;
	};
	// radio channel message
	if (count _validGroupNames > 0) then {
		format [
			"Auto buy type set %2 for groups: %3" 
			, -1
			, _text
			, _validGroupNames
		] call funcSideMsg;
	};
} else {
	_gi = _this select 1;
	private [{_autoBuyTypeEntry}]; _autoBuyTypeEntry = AutoBuyTypeMatrix select _si;
	_autoBuyTypeEntry set [_gi, _newType];
	if (not isNull player) then {if (_si == siPlayer) then {
		leader (groupMatrix select _si select _gi) sidechat format [
			"Auto buy type set %2" 
			, -1
			, _text
		];
	}};
};