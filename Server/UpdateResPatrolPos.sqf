// args: [last position]
// return: new position


private [ "_index", "_count", "_found", "_posPatrol"];

_posOld = _this select 0;

_index = 0; _count = 112; _found = false;
_posPatrol = _posOld;


while "!_found && _index < _count" do {
	_posPatrol = [posCenter, 0, 5000] call funcGetRandomPos;
	if ([_posPatrol] call funcStartPos) then
	{
		_found = true;
	};
	_index = _index + 1;
};

  
_posPatrol