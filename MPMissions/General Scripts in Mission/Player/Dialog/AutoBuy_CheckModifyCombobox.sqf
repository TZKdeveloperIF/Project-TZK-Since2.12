// Factory
private [{_idc},{_idx}];
{
	_idc = _idcFactory + _x; _idx = lbCurSel _idc;
	if (_idx != _facIdxCache select _x) then {
		_facIdxCache set [_x, _idx];

		[_idx, _idcFacPic + _x] call _updateFacPic;

		if (_idx != -1) then {
			if (_gi == -1) then {
				[_si, -1, _x, _factories select _idx, 
					_facTypes select _idx, giPlayer] call preprocessFile "Network\sAutoBuyFactory.sqf";
			} else {
				// check whether player is ai group's superior
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[_si, _gi, _x, _factories select _idx, 
						_facTypes select _idx, giPlayer] call preprocessFile "Network\sAutoBuyFactory.sqf";
				};
			};
		};
	};
} forEach [0,1,2,3,4];

// auto buy type
	_idc = _idcBuyType; _idx = lbCurSel _idc;
	if (_idx != _buyIdxCache) then {
		_buyIdxCache = _idx;

		_idc call _updateTypePic;

		if (_idx != -1) then {
			if (_gi == -1) then {
				[_si, -1, -1, lbValue [_idc, _idx], giPlayer] call preprocessFile "Network\sAutoBuyType.sqf";
			} else {
				// check whether player is ai group's superior
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[_si, _gi, -1, lbValue [_idc, _idx], giPlayer] call preprocessFile "Network\sAutoBuyType.sqf";
				};
			};
		};
	};

// ai setting
	_idc = _idcKeepMin; _idx = lbCurSel _idc;
	if (_idx != _keepMinCache) then {
		_keepMinCache = _idx;
		if (_idx != -1) then {
			if (_gi == -1) then {
				[_si, giPlayer, aisKeepMin, _idx, true] call preprocessFile localize {TZK_MSG_COMMON_SEND_AI_GRP_SETTING};
			} else {
				// check whether player is ai group's superior
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[_si, _gi, aisKeepMin, _idx, false] call preprocessFile localize {TZK_MSG_COMMON_SEND_AI_GRP_SETTING};
				};
			};
		};
	};
	_idc = _idcGroupSize; _idx = lbCurSel _idc;
	if (_idx != _groupSizeCache) then {
		_groupSizeCache = _idx;
		if (_idx != -1) then {
			if (_gi == -1) then {
				[_si, giPlayer, aisGroupSize, _idx, true] call preprocessFile localize {TZK_MSG_COMMON_SEND_AI_GRP_SETTING};
			} else {
				// check whether player is ai group's superior
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[_si, _gi, aisGroupSize, _idx, false] call preprocessFile localize {TZK_MSG_COMMON_SEND_AI_GRP_SETTING};
				};
			};
		};
	};	