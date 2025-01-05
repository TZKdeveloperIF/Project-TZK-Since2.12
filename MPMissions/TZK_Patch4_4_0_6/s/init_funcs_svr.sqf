comment {args: none} ;

comment {args: [type, si, gi, pos, dir]} ;
comment {return: objects} ;
fBuildStruct = preprocessFile (TzkScripts select 210);

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

comment {args: [unit, si, gi]} ;
comment {return: whether need repair/heal} ;
funcCheckRepair = loadFile "\TZK_Scripts_4_0_4\Server\SQF\CheckRepair.sqf";

comment {args: [unit, si, gi]} ;
comment {return: whether need rearm} ;
funcCheckRearm = preprocessFile "Server\SQF\CheckRearm.sqf";

funcMoveAI = loadFile "\TZK_Scripts_4_0_4\Server\SQF\MoveAI.sqf";
funcMoveStand = loadFile "\TZK_Scripts_4_0_4\Server\SQF\MoveStand.sqf";
funcWatch = loadFile "\TZK_Scripts_4_0_4\Server\SQF\Watch.sqf";
funcBiggestKA = loadFile "\TZK_Scripts_4_0_4\Server\SQF\BiggestKA.sqf";

comment {args: [type, driver, gunner, commander, pos, dir, si, gi, groupJoin, giBuyer, sendRepeats]} ;
comment {return: vehicle} ;
comment {using this function to create units on Server and return Vehicle for Server scripts to check if Vehicle created (combine with "@" operator).} ;
funcAddServerUnit = loadFile "\TZK_Scripts_4_0_4\Server\SQF\AddServerUnit.sqf";

comment {args: [si, structType, ccReq] (e.g. [si0, stBarracks, true])} ;
comment {return: factory} ;
funcGetIdleFactories = loadFile "\TZK_Scripts_4_0_4\Server\SQF\GetIdleFactories.sqf";

comment {arguments: [pos, distance]} ;
comment {returns: [ [vehicle, dist], ...]} ;
funcGetNearbyTransports = loadFile "\TZK_Scripts_4_0_4\Server\SQF\GetNearbyTransports.sqf";

comment {args: thislist} ;
comment {return: units} ;
funcUpdateTownCheckUnits = if !bool_TZK_SEMod_Mode then {
	loadFile "\TZK_Scripts_4_0_4\Server\SQF\UpdateTownCheckUnits.sqf"
} else {
	preprocessFile "Extra\Function\UpdateTownCheckUnitsNT.sqf"
};

call preprocessFile "impl\Function_Server.sqf";