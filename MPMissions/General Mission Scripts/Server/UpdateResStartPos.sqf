// args: none
// return: position


private [ "_index", "_count", "_found", "_posStart"];

_index = 0; _count = 100000; _found = false;
_posStart = posCenter;


while "!_found && _index < _count" do {
	_posStart = [posCenter, 0, 5000] call funcGetRandomPos;
	if !( !([_posStart] call funcStartPos) || ([_posStart, getPos (mhq select si0)] call funcDistH) < 2000 || ([_posStart, getPos (mhq select si1)] call funcDistH) < 2000 ) then
	{
		_found = true;
	};
	_index = _index + 1;
};

  
_posStart