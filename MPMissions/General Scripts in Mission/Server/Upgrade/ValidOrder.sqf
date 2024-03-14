// args: [upg, si, gi, orderID, need compare order ID?: bool]
// return: bool (true if same upgrade request in array)

private [{_checkId}]; _checkId = (if (count _this > 4) then {_this select 4} else {false});

private [{_i}, {_c}, {_found}, {_entry}, {_matchIdx}];
_i = 0; _c = count TzkSvrUpgOrderVec; _found = false; _matchIdx = -1;
while {_i < _c && not _found} do {
	_entry = TzkSvrUpgOrderVec select _i;
	if (count _entry != 0) then {
		if (
			_this select 0 == _entry select 0 && 
			_this select 1 == _entry select 1 && 
			_this select 2 == _entry select 2
		) then {
			_found = (if _checkId then {_this select 3 == _entry select 3} else {true});
			if _found then {_matchIdx = _i};
		};
	};
	_i = _i + 1;
};

_matchIdx