// args: none
// this is a process but not a function. script read/write local variables directly

private [{_found}];
_found = false;

if ("Soldier" != _enum) then {
	private [{_i},{_c}, {_entry}];
	_found = false; _i = 0; _c = count vehicleAttached;
	while {_i < _c && not _found} do {
		if (_vehicle in (vehicleAttached select _i select tsTugged)) then {_found = true};
		_i = _i + 1;
	};
	if _found then {_msg = localize {TZK_LANG_ATTACHED_BAN_SHOOT}};
};

_found