// TZK CTI - Add buy actions to a specific factory building (Client)
// Event-driven: called via remoteExec from fn_buildStruct when a factory is placed.
// Params: [buildingObj, structType, sideIndex]
// JIP-compatible (remoteExec 3rd arg = building obj → auto-cleaned on deletion)

params ["_bldg", "_stType", "_si"];

if (!hasInterface) exitWith {};
if (isNull _bldg || {!alive _bldg}) exitWith {};

waitUntil {!isNull player};
waitUntil {!isNil "unitDefs"};

private _playerSi = switch (side player) do {
	case west:  { si0 };
	case east:  { si1 };
	default     { -1 };
};
if (_playerSi != _si) exitWith {};

private _facBit = 2 ^ _stType;
private _added = 0;

{
	private _ut = _forEachIndex;
	private _ud = _x;

	if ((_ud select udSide) == _si && {(_ud select udFactoryType) == _facBit}) then {
		private _name = _ud select udName;
		private _cost = _ud select udCost;
		private _isVeh = count (_ud select udCrew) > 0;
		private _label = format ["Buy %1 ($%2)", _name, _cost];

		_bldg addAction [
			_label,
			{
				params ["_target", "_caller", "_actionId", "_args"];
				_args params ["_unitType", "_siP", "_isV"];

				private _gi = -1;
				{
					if (group _caller == _x) exitWith { _gi = _forEachIndex };
				} forEach (groupMatrix select _siP);

				if (_gi < 0) exitWith {
					systemChat "Cannot place order: not assigned to a valid group";
				};

				private _d = ([0, 1] select _isV);
				private _g = ([0, 1] select _isV);
				private _c = 0;
				[_unitType, _d, _g, _c, _siP, _gi, _gi, _target] remoteExec ["TZK_fnc_newOrder", 2];
				systemChat format ["Order placed: %1", (unitDefs select _unitType) select udName];
			},
			[_ut, _si, _isVeh],
			1.5,
			true,
			true,
			"",
			"alive _target && _this distance _target < 25"
		];
		_added = _added + 1;
	};
} forEach unitDefs;

if (_added > 0) then {
	private _sName = (structDefs select _stType) select sdName;
	diag_log format ["TZK CTI: %1 buy actions added to %2 (%3)", _added, _sName, _bldg];
};
