// args: [upg, si, gi, orderID]
// return: bool (true if no same upgrade request in array)

private [{_i}, {_c}, {_insertIdx}, {_found}, {_entry}];
_i = 0; _c = count TzkSvrUpgOrderVec; _insertIdx = _c; _found = false;
while {_i < _c && not _found} do {
	_entry = TzkSvrUpgOrderVec select _i;
	if (count _entry == 0) then {_insertIdx = _i} else {
		if (
			_this select 0 == _entry select 0 && 
			_this select 1 == _entry select 1 && 
			_this select 2 == _entry select 2
		) then {
			_found = true;
		};
	};
	_i = _i + 1;
};

if not _found then {
	TzkSvrUpgOrderVec set [_insertIdx, +_this];
};

not _found