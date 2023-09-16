// args: [[si, gi, giSender], [auto buy enum, index of auto buy items], [new params]]
private [{_si},{_gi},{_giSender},{_enum},{_index},{_params}];
_si = _this select 0 select 0; _gi = _this select 0 select 1; _giSender = _this select 0 select 2;
_enum = _this select 1 select 0; _index = _this select 1 select 1;
_params = _this select 2;

private [{_par0}]; _par0 = _params select 0;

private [{_msgType},{_msgContent}];
if (0 == _enum) then {
	private [{_factoryType}]; _factoryType = _params select 1;
	_msgType = "factory";
	_msgContent = if (-1 == _factoryType) then {"None"} else {format ["%1 - %2"
		, structDefs select _factoryType select sdName
		, (getPos _par0) call funcCalcTownDirDistFromPos
	]};
};
if (1 == _enum) then {
	_msgType = "type";
	_msgContent = if (-1 == _par0) then {"None"} else {unitDefs select _par0 select udName};
};
if (2 == _enum) then {
	_msgType = "num";
	_msgContent = if (0 == _par0) then {"None"} else {format ["%1", _par0]};
};

private [{_entry}];
if (-1 == _gi) then {
	_funcLeadBy = preprocessFile "Util\GrpLeadBy.sqf";
	_groupNames = groupNameMatrix select _si;
	_validGroupNames = []; _j = 0;
	_gis = ([_si] call funcGetAIGroupsIndex); _i = 0; _c = count _gis; while {_i < _c} do {
		_gi = _gis select _i;
		_entry = AutoBuyInfo select _si select _gi select _enum;
		_bContinue = false;
	
		// same value check?

		// skip if locked
		if (not _bContinue && 
			aiSetting select _si select _gi select aisLockSetting == 1) then {_bContinue = true};
		// skip if command sender is not superior
		if not ([_si, _gi, _giSender] call _funcLeadBy) then {_bContinue = true};

		// modify ai autobuy factory
		if not _bContinue then {
			_entry set [_index, _par0];
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
			"Auto buy %1 No.%2 set %3 for groups: %4" 
			, _msgType
			, _index + 1
			, _msgContent
			, _validGroupNames
		] call funcSideMsg;
	};
} else {
	_entry = AutoBuyInfo select _si select _gi select _enum;
	_entry set [_index, _par0];
	if (not isNull player) then {if (_si == siPlayer) then {
		leader (groupMatrix select _si select _gi) sidechat format [
			"Auto buy %1 No.%2 set %3" 
			, _msgType
			, _index + 1
			, _msgContent
		];
	}};
};