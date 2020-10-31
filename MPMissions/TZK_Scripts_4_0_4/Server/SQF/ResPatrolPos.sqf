private [ "_index", "_count", "_found", "_posPatrol"];
_index = 0; _count = 112; _found = false;
while "!_found && _index < _count" do {_posPatrol = [posCenter, 0, 5000] call funcGetRandomPos; if ([_posPatrol] call funcStartPos) then {_found = true}; _index = _index + 1};
if !_found then {_posPatrol = _this};
_posPatrol