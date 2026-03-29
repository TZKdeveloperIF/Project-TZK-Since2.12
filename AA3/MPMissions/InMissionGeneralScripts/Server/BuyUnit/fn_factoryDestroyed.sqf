// TZK CTI - Handle factory destruction: refund/free all pending orders (Server only)
// Args: [si, qi]

if (!isServer) exitWith {};

params ["_si", "_qi"];

private _queues = factoryQueues select _si;
if (_qi >= count _queues) exitWith {};

private _entry = _queues select _qi;
private _orders = _entry select 2;

diag_log format ["TZK CTI: Factory destroyed si=%1 qi=%2, clearing %3 pending orders", _si, _qi, count _orders];

{
	private _giJoin = _x select 4;
	private _cancelled = _x select 7;
	if (!_cancelled) then {
		private _unitDesc = unitDefs select (_x select 0);
		private _isVeh = count (_unitDesc select udCrew) > 0;
		private _units = if (_isVeh) then { (_x select 1) + (_x select 2) + (_x select 3) } else { 1 };
		[_si, _giJoin, _units] call TZK_fnc_freeBuildingUnits;
	};
} forEach _orders;

// Clear queue slot
_orders resize 0;
_entry set [0, objNull];
