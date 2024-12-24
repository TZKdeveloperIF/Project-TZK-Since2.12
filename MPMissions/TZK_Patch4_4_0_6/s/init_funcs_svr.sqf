// args: none

// args: [type, si, gi, pos, dir]
// return: objects
fBuildStruct = preprocessFile localize {TZK_SERVER_FUNC_BUILD_STRUCT};

funcFindNullForward = {
	private ["_c", "_i", "_found"];
	_c = count _this; _i = _c; _found = false;
	while {_i > 0 && !_found} do {
		_i = _i - 1;
		if (isNull (_this select _i)) then {_found = true};
	};
	if !_found then {_i = -1};
	_i
};

// args: [unit, si, gi]
// return: whether need repair/heal
funcCheckRepair = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\CheckRepair.sqf";

// args: [unit, si, gi]
// return: whether need rearm
funcCheckRearm = preprocessFile "Server\SQF\CheckRearm.sqf";

funcMoveAI = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\MoveAI.sqf";
funcMoveStand = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\MoveStand.sqf";
funcWatch = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\Watch.sqf";
funcBiggestKA = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\BiggestKA.sqf";

// args: [type, driver, gunner, commander, pos, dir, si, gi, groupJoin, giBuyer, sendRepeats]
// return: vehicle
// using this function to create units on Server and return Vehicle for Server scripts to check if Vehicle created (combine with "@" operator).
funcAddServerUnit = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\AddServerUnit.sqf";

// args: [si, structType, ccReq] (e.g. [si0, stBarracks, true])
// return: factory
funcGetIdleFactories = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\GetIdleFactories.sqf";

// arguments: [pos, distance]
// returns: [ [vehicle, dist], ...]
funcGetNearbyTransports = preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\GetNearbyTransports.sqf";

// args: thislist
// return: units
funcUpdateTownCheckUnits = if !bool_TZK_SEMod_Mode then {
	preprocessFile "\TZK_Scripts_4_0_4\Server\SQF\UpdateTownCheckUnits.sqf"
} else {
	preprocessFile "Extra\Function\UpdateTownCheckUnitsNT.sqf"
};

call preprocessFile "impl\Function_Server.sqf";