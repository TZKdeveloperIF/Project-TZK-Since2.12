// args: [si, pos]
if isServer then {
	_si = _this select 0; _gi = giCo select _si;
	if (alive (mhq select _si)) then {
		_cost = 1 * (structDefs select stBaseMg select sdCost);
		_free = false;
		if (FreeMgCnt select _si > 0) then {
			_free = true; FreeMgCnt set [_si, (FreeMgCnt select _si) - 1];
			hint format ["%1", FreeMgCnt];
		};
		if (not _free && _cost > groupMoneyMatrix select _si select _gi) then {
			[_si, _gi, format ["%1 %2. %3 %4 %5."
				, localize {TZK_LANG_INSUFFICIENT}
				, localize {TZK_LANG_FUND},
				, localize {TZK_LANG_SHORT_MACHINEGUN}
				, localize {TZK_LANG_NOT}
				, localize {TZK_LANG_DEPLOY}
			]] call preprocessFile "Util\MsgSender.sqf";
		} else {
			_res = [_si, _gi, _this select 1, _free] call preprocessFile "Rts\Building\fDeployBaseMg.sqf";
			if _res then {
				[_si, _gi, format ["%1 %2 %3."
					, localize {TZK_LANG_BASE}
					, localize {TZK_LANG_SHORT_MACHINEGUN}
					, localize {TZK_LANG_DEPLOY}
				]] call preprocessFile "Util\MsgSender.sqf";
			};
		};
	};
};