// TZK CTI - onPlayerRespawn
// Arma 3 automatically calls this after each BASE respawn.
// Params provided by engine: [newUnit, oldUnit, respawn, respawnDelay]

params ["_newUnit", "_oldUnit"];

if (!hasInterface) exitWith {};
if (isNil "mhq") exitWith {};

private _si = switch (side _newUnit) do {
	case west:  { si0 };
	case east:  { si1 };
	default     { -1 };
};
if (_si < 0) exitWith {};

private _m = mhq select _si;
if (isNull _m) exitWith {};

private _dir = getDir _m;
private _back = 12;
private _p = (getPosATL _m) vectorAdd [
	-(_back * (sin _dir)),
	-(_back * (cos _dir)),
	0.5
];

_newUnit setPosATL _p;
diag_log format ["TZK CTI: Player respawned near MHQ si=%1 pos=%2", _si, _p];
