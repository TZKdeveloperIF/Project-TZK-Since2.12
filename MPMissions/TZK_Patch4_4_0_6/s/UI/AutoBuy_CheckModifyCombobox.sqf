comment {Factory};
private [{_idc},{_idx}];
{
	_idc = _idcFactory + _x; _idx = lbCurSel _idc;
	if (_idx != _facIdxCache select _x) then {
		_facIdxCache set [_x, _idx];

		[_idx, _idcFacPic + _x] call _updateFacPic;

		if (_idx != -1) then {
			if (_gi == -1) then {
				[[_si, -1, giPlayer], [0, _x], [_factories select _idx, _facTypes select _idx]] call preprocessFile "Network\sAutoBuyFactory.sqf";
			} else {
				comment {check whether player is ai group's superior};
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[[_si, _gi, giPlayer], [0, _x], [_factories select _idx, _facTypes select _idx]] call preprocessFile "Network\sAutoBuyFactory.sqf";
				};
			};
		};
	};
} forEach _facBias;

comment {auto buy type};
{
	_idc = _idcBuyType + _x; _idx = lbCurSel _idc;
	if (_idx != _buyIdxCache select _x) then {
		_buyIdxCache set [_x, _idx];

		_x call _updateTypePic;

		if (_idx != -1) then {
			if (_gi == -1) then {
				[[_si, -1, giPlayer], [1, _x], [lbValue [_idc, _idx]]] call preprocessFile "Network\sAutoBuyType.sqf";
			} else {
				comment {check whether player is ai group's superior};
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[[_si, _gi, giPlayer], [1, _x], [lbValue [_idc, _idx]]] call preprocessFile "Network\sAutoBuyType.sqf";
				};
			};
		};
	};
} forEach _typeBias;

comment {auto buy num};
{
	_idc = _idcBuyNum + _x; _idx = lbCurSel _idc;
	if (_idx != _buyNumCache select _x) then {
		_buyNumCache set [_x, _idx];

		if (_idx != -1) then {
			if (_gi == -1) then {
				[[_si, -1, giPlayer], [2, _x], [lbValue [_idc, _idx]]] call preprocessFile "Network\sAutoBuyNum.sqf";
			} else {
				comment {check whether player is ai group's superior};
				if (isCommander || [_si, _gi, giPlayer] call _funcLeadBy) then {
					[[_si, _gi, giPlayer], [2, _x], [lbValue [_idc, _idx]]] call preprocessFile "Network\sAutoBuyNum.sqf";
				};
			};
		};
	};
} forEach _typeBias;