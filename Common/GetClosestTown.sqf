// arguments: [ pos, siList, exceptList]
// returns: [townDesc, distance, indexTown]

private ["_x", "_minDistance", "_closestTown", "_pos", "_distance", "_indexTown", "_index"];

_minDistance = 100000;
_closestTown = [];
_indexTown = -1;

_index = 0;

{
	_pos = getPos (_x select 0);
	_distance = sqrt( ((_pos Select 0) - ((_this select 0) select 0))^2 + ((_pos Select 1) - ((_this select 0) select 1))^2 );
  if ( _distance < _minDistance && (_x select tdSide) in (_this select 1) && !(_index in (_this select 2)) ) then { _closestTown = _x; _minDistance = _distance; _indexTown = _index };
	_index = _index + 1;
} forEach towns;

[_closestTown, _minDistance, _indexTown]