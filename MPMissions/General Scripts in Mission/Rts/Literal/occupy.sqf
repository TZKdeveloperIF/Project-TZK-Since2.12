// args: enum
// return: array

private [{_ret}];

_ret = 0;

if (0 == _this) then {
	_ret = TzkInGameText select 002;
};

if (1 == _this) then {
	_ret = [
		  structsOccupiableHowitzer
		, structsOccupiableMortar
		, structsOccupiableMGGround
		, structsOccupiableMGTower
		, structsOccupiableGunfort
	];
};

_ret