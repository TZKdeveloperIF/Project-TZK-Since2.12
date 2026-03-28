// TZK CTI - Create Town Triggers (Server only)
// Mirrors OFP: Init/SvrTownTrigger.sqs
// Creates an area trigger on each town flag; spawns fn_townTrigger per town.

if (!isServer) exitWith {};

private _count = count towns;
if (_count == 0) exitWith {
	diag_log "TZK CTI WARNING: No towns - skipping town triggers";
};

for "_i" from 0 to (_count - 1) do {
	private _flag = (towns select _i) select tdFlag;
	private _pos = getPosATL _flag;

	private _trig = createTrigger ["EmptyDetector", _pos];
	_trig setTriggerArea [150, 150, 0, false];
	_trig setTriggerActivation ["ANY", "PRESENT", false];
	_trig setTriggerStatements ["true", "", ""];

	[_trig, _i] spawn TZK_fnc_townTrigger;
};

diag_log format ["TZK CTI: %1 town triggers created", _count];
