// TZK CTI - Order: Hold Town (Server only)
// Mirrors OFP: Server/Order/HoldTown.sqs
// AI patrols around the nearest friendly town flag.
// Args: [unit, si, gi, params]
// params[0] = town index (-1 = auto pick closest friendly town)

if (!isServer) exitWith {};

params ["_unit", "_si", "_gi", "_params"];

private _order = orderMatrix select _si select _gi;
private _idOrder = _order select 0;

// Determine target town
private _ti = if (count _params > 0) then { _params select 0 } else { -1 };

while {alive _unit && {_idOrder == (orderMatrix select _si select _gi) select 0} && {pvGameOver == -1}} do {

	if (_unit != driver (vehicle _unit)) then { sleep 15; continue };

	// Auto-pick closest friendly town if not specified or town lost
	if (_ti < 0 || {((towns select _ti) select tdSide) != _si}) then {
		_ti = -1;
		private _bestDist = 1e9;
		{
			if ((_x select tdSide) == _si) then {
				private _d = (getPosATL (_x select tdFlag)) distance2D (getPosATL _unit);
				if (_d < _bestDist) then { _bestDist = _d; _ti = _forEachIndex };
			};
		} forEach towns;
	};

	if (_ti < 0) then { sleep 20; continue };

	private _posFlag = getPosATL ((towns select _ti) select tdFlag);
	private _dist = (getPosATL _unit) distance2D _posFlag;
	private _radius = 80;

	if (_dist > _radius) then {
		_unit doMove _posFlag;
		(group _unit) setSpeedMode "NORMAL";
	} else {
		// Patrol around flag at random offsets
		private _rndPos = _posFlag vectorAdd [
			(_radius * 0.6) * sin (random 360),
			(_radius * 0.6) * cos (random 360),
			0
		];
		_unit doMove _rndPos;
	};

	(group _unit) setCombatMode "YELLOW";
	(group _unit) setBehaviour "AWARE";

	sleep (15 + random 15);
};
