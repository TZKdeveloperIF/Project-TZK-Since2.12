// TZK CTI - Town Trigger Loop (Server only)
// Mirrors OFP: Server/Loop/TownTrigger.sqs
// Spawned per-town from Init/fn_svrTownTrigger.sqf
// Args: [trigger, townIndex]
// Checks unit majority every ~20s; on stable capture, calls fn_townSideChange.

if (!isServer) exitWith {};

params ["_trigger", "_indexTown"];

private _townDesc = towns select _indexTown;
private _lastSetSide = _townDesc select tdSide;
private _lastSide = _lastSetSide;

sleep (10 + random 5);

while {pvGameOver == -1} do {
	sleep 3;

	private _relTime = time - tzkMatchStartTime;
	private _timeCheck = _relTime + 19 - (_relTime % 20);
	private _delay = _timeCheck - _relTime;
	if (_delay > 0) then { sleep _delay };

	private _unitList = list _trigger;
	private _res = _unitList call TZK_fnc_updateTownCheckUnits;
	private _units = _res select 0;
	private _groups = _res select 1;

	private _si = -1;
	if ((_units select siRes) > (_units select si0) && (_units select siRes) > (_units select si1)) then { _si = siRes };
	if ((_units select si0) > (_units select si1) && (_units select si0) > (_units select siRes)) then { _si = si0 };
	if ((_units select si1) > (_units select si0) && (_units select si1) > (_units select siRes)) then { _si = si1 };

	if (_si >= 0 && _si == _lastSide && _si != _lastSetSide) then {
		if (pvGameOver != -1) exitWith {};

		[_indexTown, _si, _lastSetSide] call TZK_fnc_townSideChange;
		_lastSetSide = _si;
		_lastSide = _si;

		if (_si != siRes) then {
			private _score = ((towns select _indexTown) select tdValue) * 0.05;
			_score = _score / (count (_groups select _si) max 1);
			_score = floor _score max 1;
			{
				private _gi = (groupMatrix select _si) find _x;
				if (_gi != -1) then {
					[_score, _si, _gi] call TZK_fnc_addScore;
				};
			} forEach (_groups select _si);
		};
	} else {
		_lastSide = _si;
	};
};
