// args: enum
// return: array

private [{_ret}];

_ret = 0;

if (0 == _this) then {
	_ret = [
		  "Howitzer"
		, "Mortar"
		, "MG Ground"
		, "MG Tower"
		, "Gun Fort"
	];
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