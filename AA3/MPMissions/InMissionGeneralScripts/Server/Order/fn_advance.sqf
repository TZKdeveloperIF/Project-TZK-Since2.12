// TZK CTI - Order: Advance (Server only)
// Mirrors OFP: Server/Order/Advance.sqs
// AI moves toward a target position at a controlled pace (meters per minute).
// Args: [unit, si, gi, params]
// params[0] = target position
// params[1] = speed index (0=100m/min, 1=200m/min, 2=300m/min)

if (!isServer) exitWith {};

params ["_unit", "_si", "_gi", "_params"];

private _order = orderMatrix select _si select _gi;
private _idOrder = _order select 0;

private _targetPos = if (count _params > 0 && {_params select 0 isEqualType []}) then {
	_params select 0
} else {
	(getPosATL _unit) vectorAdd [500, 0, 0]
};

private _speedIdx = if (count _params > 1) then { _params select 1 } else { 0 };
private _distPerMin = 100 * (1 + _speedIdx);

private _timeNextStep = time;

(group _unit) setCombatMode "YELLOW";
(group _unit) setBehaviour "AWARE";

while {alive _unit && {_idOrder == (orderMatrix select _si select _gi) select 0} && {pvGameOver == -1}} do {

	if (_unit != driver (vehicle _unit)) then { sleep 15; continue };

	private _distToTarget = (getPosATL _unit) distance2D _targetPos;

	if (_distToTarget < 50) then {
		// Arrived — hold position
		_unit doMove ((getPosATL _unit) vectorAdd [random 20 - 10, random 20 - 10, 0]);
		sleep 30;
		continue
	};

	if (time >= _timeNextStep) then {
		_timeNextStep = _timeNextStep + 60;

		// Calculate intermediate move position: advance _distPerMin toward target
		private _dir = (getPosATL _unit) getDir _targetPos;
		private _stepDist = _distPerMin min _distToTarget;
		private _movePos = (getPosATL _unit) vectorAdd [
			_stepDist * sin _dir,
			_stepDist * cos _dir,
			0
		];
		_unit doMove _movePos;
		(group _unit) setSpeedMode "NORMAL";
	};

	sleep 15;
};
