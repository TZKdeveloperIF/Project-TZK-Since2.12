// args: none
// load variables from caller
// returns: succeeded

private [{_res}]; _res = false;

_groupTo = groupMatrix select _si select _giTo;
_full = count units _groupTo + count _netIds > maxGroupSize;
if _full then {
	_value exec "Join\hJoinFail.sqs";
	publicExec format [{%1 exec "Join\hJoinFail.sqs"}, _value];
} else {
	// "_units" is declared outside
	_j = 0; _i = 0, _c = count _netIds; while {_i < _c} do {
		_unit = UnitById (_netIds select _i);
		if (group _unit == groupMatrix select _si select _giFrom) then {
			if (alive _unit) then {
				_units set [_j, _unit];
				_j = _j + 1;
			};
		};
		_i = _i + 1;
	};
	if (count _units > 0) then {
		// preprocess
		// according to history practice (refer to scripts under "Server\Join\"), DelayAssign can be executed before join
		[_units, _si, _giFrom, _giTo] exec "\TZK_Scripts_4_0_5\Server\Join\DelayAssign.sqs";

		_units join _groupTo;

		// postprocess
		
		if _join2Ai then {
			// It's useless to add destination groups' order id. In AI Leader and AICO script the design of started units
			// array didn't cover join case
			[_units, _si, _giTo] exec "Join\DelayAiGroupOrder.sqs";
		};

		// callback
		_str = _units call preprocessFile "Network\GenNetIdArrayStr.sqf";
		call format [{[%1,%2] exec "Join\Callback.sqs"}, _str, _value];
		publicExec format [{[%1,%2] exec "Join\Callback.sqs"}, _str, _value];

		// function result
		_res = true;
	};
};
_res