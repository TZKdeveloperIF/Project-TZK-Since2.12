// args: enum
// return: array

private [{_ret}];

_ret = 0;

if (0 == _this) then {
	_ret = [
		  "Helicopter"
		, "APC"
		, "Truck"
		, "Ship"
		, "Plane"
		, "Support APC"
		, "Repair Truck"
		, "Jeep"
	];
};

if (1 == _this) then {
	_ret = [
		  [TransportHeliW + TransportirNOHeliW, TransportHeliE + TransportirNOHeliE + TransportHindE]
		, [Transport6APCW + Transport8APCW, Transport6APCE + Transport8APCE]
		, [TransportTruckW, TransportTruckE]
		, [TransportShipW + TransportZodiacW, TransportShipE + TransportZodiacE]
		, [TransportPlaneW, TransportPlaneE]
		, [TransportSupAPCW, TransportSupAPCE]
		, [TransportRepairTruckW, TransportRepairTruckE]
		, [TransportCarW, TransportCarE]
	];
};

_ret