// args: none
// this is a process but not a function. script read/write local variables directly

_ret = true;

// weapon check for soldier
if (not _isVehicle && not _isStruct) then { // infantry
	if not (_unit call _weaponCheck) then {
		_msg = "No proper weapon for " + _text + ". Order Aborted.";
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
	if _isServer then {[_unit, true] exec "\TZK_Scripts_4_0_4\Server\StopAI.sqs"};

	_vehicle reveal _target; _vehicle doTarget _target;

	_delay = 3;
	// Delay for turning the turret. It'll be good to obtain proper value by the angle's difference, 
	// however no vanilla way to compute this in OFP.
	if _isVehicle then {
		if (-1 != ["TOS1_TZK_xj400", "M109A6G_xj400", "PLZ05_TZK_xj400"] find _typeName) then {
			_delay = [3, 8] select ("_x == {DeploySwitch_xj400}" count magazines _vehicle == 0);
			[_vehicle, 1] exec "Util\Deploy\Change.sqs";
		};
	};
};

_ret