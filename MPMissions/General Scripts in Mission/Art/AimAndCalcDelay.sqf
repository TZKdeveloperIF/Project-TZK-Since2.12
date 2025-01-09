// args: none
// this is a process but not a function. script read/write local variables directly

_ret = true;

// weapon check for soldier
if (not _isVehicle && not _isStruct) then { // infantry
	if not (_unit call _weaponCheck) then {
		_msg = localize {TZK_LANG_NO_PROPER_WEAPON} + localize {TZK_LANG_FOR} + _text + ". " + localize {TZK_LANG_ORDER_ABORTED};
		_ret = false;
	};
};
// weapon check unnecessary for tank. They're always use first weapon defined in CONFIG.CPP as main gun.

if _ret then {
	// if not _isServer then {
	// 	if (not _isVehicle && not _isStruct) then {
	// 		_unit groupChat "Target in range. Prepare to attack.";
	// 	} else {
	// 		_unit groupChat "In position. Prepare to attack.";
	// 	};
	// };

	if _isVehicle then {
		driver _vehicle action ["ENGINE OFF", _vehicle]; _vehicle engineOn false;
	} else {
		doStop _unit;
	};
	if _isServer then {[_unit, [true]] exec (TzkScripts select 006)};

	_vehicle reveal _target; _vehicle doTarget _target;

	_delay = 3;
	// Delay for turning the turret. It'll be good to obtain proper value by the angle's difference, 
	// however no vanilla way to compute this in OFP.
	if _isVehicle then {
		_delay = [3, 8] select ("_x == {DeploySwitch_xj400}" count magazines _vehicle == 0);
		_vehicle exec "Art\Deploy.sqs"
	};
};

_ret