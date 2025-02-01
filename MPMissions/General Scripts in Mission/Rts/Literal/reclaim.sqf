// args: enum
// return: array

private [{_ret}];

_ret = 0;

if (0 == _this) then {
	_ret = [
		  "Heavy Tank"
		, "Light Tank"
		, "Artillery"
		, "AT APC"
		, "AA Vehicle"
		, "Gunship"
		, "Plane"
		, "Support APC"
		, "Transport Car"
		, "Transport Ship"
		, "Transport APC"
		, "Transport Air"
		, "Battle Ship"
		, "Battle Car"
		, "Radar Car"
		, "Repair Truck"
	];
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