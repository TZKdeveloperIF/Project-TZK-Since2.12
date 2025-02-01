// args: enum
// return: array

private [{_ret}];

_ret = 0;

if (0 == _this) then {
	_ret = TzkInGameText select 003;
};

if (1 == _this) then {
	_ret = [
		  + typesHeavyTank
		, + typesLightTank
		, + typesHowitzer + typesRocketLauncher
		, + typesATAPC
		, + typesAAAPC
		, + typesGunshipOrigin + typesGunshipAT + typesKa50
		, + typesBattlePlane
		, + typesSupportAPC
		, + typesTransportCar
		, + typesTransportShip
		, + typesTransportAPC
		, + typesTransportHeli + RadioTypesTransportPlane
		, + typesBattleShip
		, + typesBattleCar
		, + typesRadarCar
		, + TransportRepairTruckW + TransportRepairTruckE
	];
};

_ret