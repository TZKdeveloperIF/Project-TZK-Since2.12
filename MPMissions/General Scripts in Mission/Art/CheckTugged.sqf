// args: none
// this is a process but not a function. script read/write local variables directly

private [{_found}];
_found = false;

if ("Soldier" != _enum) then {
	_found = (TzkDraggedVehs find _vehicle) != -1;
	if _found then {_msg = localize {TZK_LANG_ATTACHED_BAN_SHOOT}};
};

_found