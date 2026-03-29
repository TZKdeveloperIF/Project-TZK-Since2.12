// TZK CTI - Give/Take Money (Server only)
// Mirrors OFP: Net/sGiveMoney.sqs
// Args: [si, fromGi, toGi, amount]
//   toGi == -1  → give to all AI groups (amount each)
//   toGi == -2  → give to all non-commander groups (amount each)
//   amount < 0  → take from toGi to fromGi

if (!isServer) exitWith {};

params ["_si", "_fromGi", "_toGi", "_amount"];

private _groups = groupMatrix select _si;
private _groupsAI = groupAiMatrix select _si;
private _groupCommander = groupCommander select _si;
private _fromMoney = groupMoneyMatrix select _si select _fromGi;

if (_toGi == -1) then {
	// Give to all AI groups
	{
		private _gi = -1;
		{ if (_x == _forEachIndex) exitWith { _gi = _forEachIndex } } forEach _groups;
		// Find gi by group reference
		{
			if (_groups select _forEachIndex isEqualTo _x) then { _gi = _forEachIndex };
		} forEach [_x];
		private _aiGi = 0;
		{
			if (_groups select _forEachIndex == _x) exitWith { _aiGi = _forEachIndex };
		} forEach _groups;
		// Simplified: iterate all AI, find their gi
		private _found = false;
		{
			private _testGi = _forEachIndex;
			if (_groups select _testGi == _x) then {
				private _give = _amount min _fromMoney;
				if (_give > 0) then {
					[_si, _fromGi, -_give, 0] call TZK_fnc_moneyAdd;
					[_si, _testGi, _give, 0] call TZK_fnc_moneyAdd;
					_fromMoney = _fromMoney - _give;
				};
				_found = true;
			};
		} forEach _groups;
	} forEach _groupsAI;
} else {
	if (_toGi == -2) then {
		// Give to all non-commander groups
		{
			private _gi = _forEachIndex;
			private _grp = _x;
			if (_grp != _groupCommander && _gi != _fromGi) then {
				private _give = _amount min _fromMoney;
				if (_give > 0) then {
					[_si, _fromGi, -_give, 0] call TZK_fnc_moneyAdd;
					[_si, _gi, _give, 0] call TZK_fnc_moneyAdd;
					_fromMoney = _fromMoney - _give;
				};
			};
		} forEach _groups;
	} else {
		// Standard give/take
		if (_amount > 0) then {
			private _give = _amount min _fromMoney;
			if (_give > 0) then {
				[_si, _fromGi, -_give, 0] call TZK_fnc_moneyAdd;
				[_si, _toGi, _give, 0] call TZK_fnc_moneyAdd;
			};
		} else {
			// Take (amount is negative)
			private _take = (abs _amount) min (groupMoneyMatrix select _si select _toGi);
			if (_take > 0) then {
				[_si, _toGi, -_take, 0] call TZK_fnc_moneyAdd;
				[_si, _fromGi, _take, 0] call TZK_fnc_moneyAdd;
			};
		};
	};
};
