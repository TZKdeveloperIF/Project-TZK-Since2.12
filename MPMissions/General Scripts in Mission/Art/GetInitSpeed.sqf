// args: speed
// this is a process but not a function. script read/write local variables directly
private [{_speed}, {_i}];

_speed = call format ["%1", _equippedMag GetWeaponParam "initSpeed"];
// special correct for structure
if (200 == _speed) then {_speed = 120};
if (-1 == TzkArtSpeeds find _speed) then {
	_i = [
		TzkArtSpeeds, 0, count TzkArtSpeeds, _speed, {(_this select 0) < (_this select 1)}
	] call preprocessFile "Algo\lowerBound.sqf";
	if (0 == _i) then {_i = 1};
	_speed = TzkArtSpeeds select (_i - 1);
};
_speed