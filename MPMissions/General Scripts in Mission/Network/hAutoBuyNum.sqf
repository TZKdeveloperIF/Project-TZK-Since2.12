// args: [si, gi, bind, new num, gi sender]
private [{_si},{_gi},{_index},{_newNum},{_giSender}];
_si = _this select 0; _gi = _this select 1; _index = _this select 2;
_newNum = _this select 3; _giSender = _this select 4;

private [{_text}]; _text = if (0 == _newNum) then {"None"} else {format ["%1", _newNum]};

if (-1 == _gi) then {
	_funcLeadBy = preprocessFile "Util\GrpLeadBy.sqf";
	_groupNames = groupNameMatrix select _si;
	_validGroupNames = []; _j = 0;
	_gis = ([_si] call funcGetAIGroupsIndex); _i = 0; _c = count _gis; while {_i < _c} do {
		_gi = _gis select _i;
		private [{_autoBuyNums}]; _autoBuyNums = AutoBuyInfo select _si select _gi select 2;
		_bContinue = false;
	
		// same num check?

		// skip if locked
		if (not _bContinue && 
			aiSetting select _si select _gi select aisLockSetting == 1) then {_bContinue = true};
		// skip if command sender is not superior
		if not ([_si, _gi, _giSender] call _funcLeadBy) then {_bContinue = true};

		// modify ai autobuy num
		if not _bContinue then {
			_autoBuyNums set [_index, _newNum];
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
			"Auto buy num No.%1 set %2 for groups: %3" 
			, _index
			, _text
			, _validGroupNames
		] call funcSideMsg;
	};
} else {
	_gi = _this select 1;
	private [{_autoBuyNums}]; _autoBuyNums = AutoBuyInfo select _si select _gi select 2;
	_autoBuyNums set [_index, _newNum];
	if (not isNull player) then {if (_si == siPlayer) then {
		leader (groupMatrix select _si select _gi) sidechat format [
			"Auto buy num No.%1 set %2" 
			, _index
			, _text
		];
	}};
};