// TZK CTI - Order: Halt (Server only)
// Mirrors OFP: Server/Order/Halt.sqs
// AI stops and holds current position. Watches for enemies.
// Args: [unit, si, gi, params]

if (!isServer) exitWith {};

params ["_unit", "_si", "_gi", "_params"];

private _order = orderMatrix select _si select _gi;
private _idOrder = _order select 0;

_unit doMove (getPosATL _unit);
dostop _unit;
(group _unit) setSpeedMode "LIMITED";
(group _unit) setCombatMode "YELLOW";
(group _unit) setBehaviour "AWARE";

while {alive _unit && {_idOrder == (orderMatrix select _si select _gi) select 0} && {pvGameOver == -1}} do {

	if (_unit != driver (vehicle _unit)) then { sleep 20; continue };

	// Periodically re-stop (in case engine moves them from combat)
	dostop _unit;

	sleep 30;
};
