private [ "_index", "_count", "_found", "_posStart"];
_index = 0; _count = 112; _found = false;
while "!_found && _index < _count" do {
	_posStart = [posCenter, 0, 5000] call funcGetRandomPos;
	if !( !([_posStart] call funcStartPos) || [_posStart, mhq select si0] call funcDistH < 2000 || [_posStart, mhq select si1] call funcDistH < 2000 ) then {_found = true};
	_index = _index + 1;
};
if !_found then {_posStart = +posCenter};

_posStart