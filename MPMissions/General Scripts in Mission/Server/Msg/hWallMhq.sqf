if isServer then {
	_si = _this; _gi = giCo select _si;
	if (alive (mhq select _si)) then {
		_cost = 4 * (structDefs select stWall select sdCost);
		_free = false;
		if (time > (FreeMhqWallTime select _si) + 1800) then {
			_free = true; FreeMhqWallTime set [_si, time];
		};
		if (not _free && _cost > groupMoneyMatrix select _si select _gi) then {
			[_si, _gi, "Insufficient fund. Wall not built."] call preprocessFile "Util\MsgSender.sqf";
		} else {
			_si call preprocessFile "Server\WallMhq.sqf";
			if (_free) then {
				[_si, _gi, -_cost] exec localize {TZK_MONEY_SERVER_SPEND};
			};
			[_si, _gi, "MHQ wall built."] call preprocessFile "Util\MsgSender.sqf";
		};
	};
};