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
			[_si, _gi, "Insufficient fund. MG not deployed."] call preprocessFile "Util\MsgSender.sqf";
		} else {
			_res = _this call preprocessFile "Server\MapOp\DeployBaseMg.sqf";
			if _res then {
				if (_free) then {
					[_si, _gi, -_cost] exec localize {TZK_MONEY_SERVER_SPEND};
				};
				[_si, _gi, "Base MG deployed."] call preprocessFile "Util\MsgSender.sqf";
			};
		};
	};
};