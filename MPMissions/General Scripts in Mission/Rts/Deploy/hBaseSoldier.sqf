// args: [pos, cc, si, type]
if isServer then {
	_pos = _this select 0; _cc = _this select 1; _si = _this select 2; _type = _this select 3;

	_gi = giCo select _si;
	_cost = 1 * (unitDefs select _type select udCost);

	if (_cost > groupMoneyMatrix select _si select _gi) then {
		[_si, _gi, format ["%1 %2. %3 %4 %5."
			, localize {TZK_LANG_INSUFFICIENT}
			, localize {TZK_LANG_FUND},
			, localize {TZK_LANG_SOLDIER}
			, localize {TZK_LANG_NOT}
			, localize {TZK_LANG_DEPLOY}
		]] call preprocessFile "Util\MsgSender.sqf";
	} else {
		_res = _this call preprocessFile "Rts\Deploy\fBaseSoldier.sqf";
		if _res then {
			[_si, _gi, format ["%2 %3 %1 %4."
				, unitDefs select _type select udName
				, localize {TZK_LANG_BASE}
				, localize {TZK_LANG_UNIT}
				, localize {TZK_LANG_DEPLOY}
			]] call preprocessFile "Util\MsgSender.sqf";
		};
	};
};