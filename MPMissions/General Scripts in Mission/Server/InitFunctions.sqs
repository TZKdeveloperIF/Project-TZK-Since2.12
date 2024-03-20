; args: none

fBuildStruct = loadFile localize {TZK_SERVER_FUNC_BUILD_STRUCT}
; // args: [type, si, gi, pos, dir]
; // return: objects
; // if( dev && !isNull player) then{ player globalChat format["%1 - %2",_objects, _type] };
funcFindNullForward = {private ["_c", "_i", "_found"];_c = count _this; _i = _c; _found = false;while "_i > 0 && !_found" do {_i = _i - 1;if (isNull (_this select _i)) then {_found = true};};if(!_found)then{_i=-1};_i}

funcCheckRepair = loadFile "\TZK_Scripts_4_0_4\Server\SQF\CheckRepair.sqf"
; // args: [unit, si, gi]
; // return: whether need repair/heal
funcCheckRearm = preprocessFile "Server\SQF\CheckRearm.sqf"
; // args: [unit, si, gi]
; // return: whether need rearm
	; // It's sase-inensitive when comparing strings, but it's cASe-seNsItiVE when applying "in" or "find" to strings.
	; // Do not check if soldier is out of Satchel or Mine. The result of secondaryWeapon is rely on particular weapons thus should be edit if soldiers' weapons redefined.
	; // Vehicle sabot check design require the gun use itself as its muzzle, and the sabot magazine is in the 1st element of its "magazines[]" parameter.
funcMoveAI = loadFile "\TZK_Scripts_4_0_4\Server\SQF\MoveAI.sqf"
funcMoveStand = loadFile "\TZK_Scripts_4_0_4\Server\SQF\MoveStand.sqf"
funcWatch = loadFile "\TZK_Scripts_4_0_4\Server\SQF\Watch.sqf"
funcBiggestKA = loadFile "\TZK_Scripts_4_0_4\Server\SQF\BiggestKA.sqf"

funcAddServerUnit = loadFile "\TZK_Scripts_4_0_4\Server\SQF\AddServerUnit.sqf"
; // args: [type, driver, gunner, commander, pos, dir, si, gi, groupJoin, giBuyer, sendRepeats]
; // return: vehicle
; // using this function to create units on Server and return Vehicle for Server scripts to check if Vehicle created (combine with "@" operator).

? bool_TZK_MF_Mode: funcGetIdleFactory = loadFile "\TZK_Scripts_4_0_4\Server\SQF\GetIdleFactory.sqf"
; // args: [si, structType, ccReq] (e.g. [si0, stBarracks, true])
; // return: factory
funcGetIdleFactories = loadFile "\TZK_Scripts_4_0_4\Server\SQF\GetIdleFactories.sqf"
; // args: [si, structType, ccReq] (e.g. [si0, stBarracks, true])
; // return: factory

; // args: [si, structType] (e.g. [si0, stBarracks])
; // return: factory

funcGetNearbyTransports = loadFile "\TZK_Scripts_4_0_4\Server\SQF\GetNearbyTransports.sqf"
; // arguments: [pos, distance]
; // returns: [ [vehicle, dist], ...]

funcUpdateTownCheckUnits = if !bool_TZK_SEMod_Mode Then {loadFile "\TZK_Scripts_4_0_4\Server\SQF\UpdateTownCheckUnits.sqf"} Else {preprocessFile "Extra\Function\UpdateTownCheckUnitsNT.sqf"}
; // args: thislist
; // return: units

; funcAssignJoinAI = loadFile "\TZK_Scripts_4_0_4\Server\SQF\AssignJoinAI.sqf"
? bool_TZK_MF_Mode: funcGetSmallestAiGroup = loadFile "\TZK_Scripts_4_0_4\Server\SQF\GetSmallestAiGroup.sqf"
; // args: [si, giExclude]
; // return: [gi, slotsFree]

call preprocessFile "impl\Function_Server.sqf"
