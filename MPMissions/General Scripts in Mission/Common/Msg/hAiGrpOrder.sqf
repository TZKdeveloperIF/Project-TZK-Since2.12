// args: [si, gi, orderType, params, send to all]
private [{_si}, {_gi}, {_type}, {_params}];
_si = _this select 0; _type = _this select 2; _params = _this select 3;
// Need to extend _params to 3 elements fill with 0
private [{_i}];
_i = 0; while {_i < 3} do {
	if (count _params <= _i) then {_params set [_i, 0]};
	_i = _i + 1;
};
if (_this select 4) then {
	private [{_giSender}, {_anyValidGi}];
	_giSender = _this select 1;
	_anyValidGi = _giSender;

	_funcLeadBy = preprocessFile "Util\GrpLeadBy.sqf";
	_groupNames = groupNameMatrix select _si;
	_validGroupNames = []; _j = 0;
	_gis = ([_si] call funcGetAIGroupsIndex); _i = 0; _c = count _gis; while {_i < _c} do {
		_gi = _gis select _i;
		_bContinue = false;
		// skip if locked
		if (not _bContinue && 
			aiSetting select _si select _gi select aisLockOrder == 1) then {
			_bContinue = true
		};
		// skip if command sender is not superior
		if not ([_si, _gi, _giSender] call _funcLeadBy) then {_bContinue = true};

		// modify ai order
		if not _bContinue then {
			_order = orderMatrix select _si select _gi;
			_id = _order select 0; _order set [0, _id + 1];
			_order set [1, _type];
			_order set [2, _params];
			if (not isNull player) then {if (_si == siPlayer) then {
				_validGroupNames set [_j, _groupNames select _gi];
				_j = _j + 1;
			}};
			_anyValidGi = _gi;
		};

		_i = _i + 1;
	};
	// radio channel message
	if (count _validGroupNames > 0) then {
		format [
			"Order Acknowledged, %1 for groups: %2", 
			(orderMatrix select _si select _anyValidGi) call funcGetOrderDesc
			, _validGroupNames
		] call funcSideMsg;
	};
} else {
	_gi = _this select 1;
	_order = orderMatrix select _si select _gi;
	_id = _order select 0; _order set [0, _id + 1];
	_order set [1, _type];
	_order set [2, _params];

	if (not isNull player) then {if (_si == siPlayer) then {
		leader (groupMatrix select _si select _gi) sidechat format [
			"Order Acknowledged, %1", 
			_order call funcGetOrderDesc
		];
	}};
};