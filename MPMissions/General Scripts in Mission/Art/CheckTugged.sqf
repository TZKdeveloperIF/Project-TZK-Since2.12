// args: none
// this is a process but not a function. script read/write local variables directly

private [{_found}, {_needCheck}];
_found = false;
_needCheck = false;

if ("Struct" == _enum) then {_needCheck = true};
if ("MLRS" == _enum || "Howitzer" == _enum) then {
	private [{_typeName}]; _typeName = typeOf _vehicle;
	_needCheck = _typeName == "TOS1_TZK_xj400" || _typeName == "M109A6G_xj400" || _typeName == "PLZ05_TZK_xj400";
};

if _needCheck then {
	_found = (TzkDraggedVehs find _vehicle) != -1;
	if _found then {_msg = localize {TZK_LANG_ATTACHED_BAN_SHOOT}};
};

_found