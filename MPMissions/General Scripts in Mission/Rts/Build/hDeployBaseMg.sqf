// args: [si, pos, enum]
// enum: 0-basic mg, 1-mg tower
if isServer then {
	_si = _this select 0; _gi = giCo select _si;

	_enum = _this select 2;
	_st = stBaseMg;
	if (1 == _enum) then {_st = stBaseTowerMg};
	if (2 == _enum) then {_st = stBaseT55};

	_structName = localize {TZK_LANG_SHORT_MACHINEGUN};
	if (1 == _enum) then {_structName = (TzkInGameText select 020 select 1)};
	if (2 == _enum) then {_structName = "T55 fort"};

	if (alive (mhq select _si)) then {

		_cost = 1 * (structDefs select _st select sdCost);
		_free = false;
		if (FreeMgCnt select _si > 0 && 0 == _enum) then {
			_free = true; FreeMgCnt set [_si, (FreeMgCnt select _si) - 1];
			if dev then {hint format ["%1", FreeMgCnt]};
		};
		if (not _free && _cost > groupMoneyMatrix select _si select _gi) then {
			[_si, _gi, format ["%1 %2. %3 %4 %5."
				, localize {TZK_LANG_INSUFFICIENT}
				, localize {TZK_LANG_FUND},
				, _structName
				, localize {TZK_LANG_NOT}
				, localize {TZK_LANG_DEPLOY}
			]] call preprocessFile "Util\MsgSender.sqf";
		} else {
			_res = [_si, _gi, _this select 1, _enum, _free] call preprocessFile (TzkScripts select 380);
			if _res then {

				[_si, _gi, format ["%1 %2 %3."
					, localize {TZK_LANG_BASE}
					, _structName
					, localize {TZK_LANG_DEPLOY}
				]] call preprocessFile "Util\MsgSender.sqf";
			};
		};
	};
};