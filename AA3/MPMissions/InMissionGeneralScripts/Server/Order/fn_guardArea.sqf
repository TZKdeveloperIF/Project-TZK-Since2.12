// TZK CTI - Order: Guard Area (Server only)
// Mirrors OFP: Server/Order/GuardArea.sqs
// AI patrols around a designated position (or group's current position if no CO waypoint).
// Args: [unit, si, gi, params]
// params[0] = position to guard (optional; defaults to unit's current pos)

if (!isServer) exitWith {};

params ["_unit", "_si", "_gi", "_params"];

private _order = orderMatrix select _si select _gi;
private _idOrder = _order select 0;

private _guardPos = if (count _params > 0 && {_params select 0 isEqualType []}) then {
	_params select 0
} else {
	getPosATL _unit
};

private _radius = if (count _params > 1) then { _params select 1 } else { 100 };

(group _unit) setCombatMode "YELLOW";
(group _unit) setBehaviour "AWARE";

while {alive _unit && {_idOrder == (orderMatrix select _si select _gi) select 0} && {pvGameOver == -1}} do {

	if (_unit != driver (vehicle _unit)) then { sleep 15; continue };

	private _dist = (getPosATL _unit) distance2D _guardPos;

	if (_dist > _radius * 1.5) then {
		_unit doMove _guardPos;
		(group _unit) setSpeedMode "NORMAL";
	} else {
		private _rndPos = _guardPos vectorAdd [
			(_radius * 0.7) * sin (random 360),
			(_radius * 0.7) * cos (random 360),
			0
		];
		_unit doMove _rndPos;
		(group _unit) setSpeedMode "LIMITED";
	};

	sleep (20 + random 20);
};
