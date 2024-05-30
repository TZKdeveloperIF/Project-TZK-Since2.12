// args: none
private [{_si}, {_hasUnitNearby}, {_distSquare}, {_threshold}, {_posMhq}];
_si = siPlayer;
if (alive (mhq select _si)) then {hint "MHQ not destroyed."} else {
	_hasUnitNearby = false;
	_distSquare = preprocessFile "Util\PosDistSquare.sqf";
	_threshold = 25 * 25; // hard coded
	_posMhq = getPosASL (mhq select _si);
	{
		if not _hasUnitNearby then {
			{
				if (not _hasUnitNearby && alive _x) then {
					if ([getPosASL _x, _posMhq] call _distSquare < _threshold) then {
						_hasUnitNearby = true;
					};
				};
			} forEach (units _x);
		};
	} forEach (groupMatrix select _si);
	if _hasUnitNearby then {
		[(mhq select _si)] exec "Player\Action\RepairMHQ.sqs";
	} else {
		hint format ["No %1 %2 (25 %3)", localize {TZK_LANG_UNIT}, localize {TZK_LANG_NEARBY}, localize {TZK_LANG_METER}];
	};
};