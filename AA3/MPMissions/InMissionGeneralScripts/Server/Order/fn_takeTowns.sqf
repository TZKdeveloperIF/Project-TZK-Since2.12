// TZK CTI - Order: Take Towns (Server only)
// Mirrors OFP: Server/Order/TakeTowns.sqs
// AI leader moves toward the nearest enemy town, engages, repeats.
// Spawned by fn_aiGrpOrder. Args: [unit, si, gi, params]

if (!isServer) exitWith {};

params ["_unit", "_si", "_gi", "_params"];

private _order = orderMatrix select _si select _gi;
private _idOrder = _order select 0;

waitUntil {sleep 3; alive _unit || {_idOrder != (_order select 0)}};
if (_idOrder != (_order select 0)) exitWith {};

private _siEnemy = siEnemy select _si;

while {alive _unit && {_idOrder == (orderMatrix select _si select _gi) select 0} && {pvGameOver == -1}} do {

	if (_unit != driver (vehicle _unit)) then { sleep 15; continue };

	// Find closest enemy town
	private _bestTi = -1;
	private _bestDist = 1e9;
	{
		private _ti = _forEachIndex;
		private _tSide = _x select tdSide;
		if (_tSide != _si && _tSide != siCiv) then {
			private _d = (getPosATL (_x select tdFlag)) distance2D (getPosATL _unit);
			if (_d < _bestDist) then { _bestDist = _d; _bestTi = _ti };
		};
	} forEach towns;

	if (_bestTi < 0) then { sleep 30; continue };

	private _posTarget = getPosATL ((towns select _bestTi) select tdFlag);
	private _dist = (getPosATL _unit) distance2D _posTarget;

	if (_dist > 50) then {
		_unit doMove _posTarget;
		(group _unit) setSpeedMode "NORMAL";
		(group _unit) setCombatMode "YELLOW";
		(group _unit) setBehaviour "AWARE";
	} else {
		_unit doMove (_posTarget vectorAdd [random 30 - 15, random 30 - 15, 0]);
		(group _unit) setCombatMode "RED";
	};

	private _sleepTime = ((_dist / 30) min 60) max 10;
	sleep _sleepTime;
};
