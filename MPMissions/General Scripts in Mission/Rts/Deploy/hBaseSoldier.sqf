// args: [pos, cc, si, type]
if isServer then {
	_pos = _this select 0; _cc = _this select 1; _si = _this select 2; _type = _this select 3;

	_gi = giCo select _si;
	_cost = 1 * (unitDefs select _type select udCost);

	if (_cost > groupMoneyMatrix select _si select _gi) then {
		[_si, _gi, "Insufficient fund. MG not deployed."] call preprocessFile "Util\MsgSender.sqf";
	} else {
		_res = _this call preprocessFile "Rts\Deploy\fBaseSoldier.sqf";
		if _res then {
			[_si, _gi, format ["Base unit %1 deployed.", unitDefs select _type select udName]] call preprocessFile "Util\MsgSender.sqf";
		};
	};
};