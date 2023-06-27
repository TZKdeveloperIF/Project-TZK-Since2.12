comment { args: none; };

funcArrayOverlap = loadFile "\TZK_Scripts_4_0_4\Common\SQF\ArrayOverlap.sqf";
funcBinaryDigit = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BinaryDigit.sqf";
funcBoolEqual = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BoolEqual.sqf";
funcGetAIGroupsIndex = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetAIGroupsIndex.sqf";
comment { args: [si]; };
comment { return: AI groups index; };
funcGetRandomPos = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomPos.sqf";
comment { arguments: [posOrigin[] or object, distMin, distMax]; };
comment { return: pos; };


funcGetRandomUnitType = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomUnitType.sqf";
comment { arguments: array; };
comment { array entry : [typeUnit, probability]; };
comment { return: type; };
funcSearchvehicleAttached = loadFile "\TZK_Scripts_4_0_4\Common\SQF\SearchvehicleAttached.sqf";
comment { args:[tug(tugged, slot)]; };
comment { return: [index, found]; };
funcSort = loadFile "\TZK_Scripts_4_0_4\Common\SQF\Sort.sqf";
comment { args: [ nEntrySortIndex, bAsc, aEntries ] (e.g.  [0, false, [[3,"Cleanrock"],[5,"Ernst"]] ]); };
comment { return: [aEntriesSorted] (e.g. [[5,"Ernst"],[3,"Cleanrock"]]); };
funcSwapV = loadFile "\TZK_Scripts_4_0_4\Common\SQF\SwapVar.sqf";
funcUpdateAttaching = loadFile "\TZK_Scripts_4_0_4\Common\SQF\UpdateAttaching.sqf";
comment { The degree applied in vector scripts is anticlockwise unlike "direction" of OFP.; };
fDebugLog = loadFile "\TZK_Scripts_4_0_4\Common\SQF\DebugLog.sqf";
comment { args: string; };
comment { return: none; };
comment { Using 2.01 mission initialization unit "resistance_Center" to save status instead of "LocalServerObject"; };


funcVectorAdd = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorAdd.sqf";
funcVectorSub = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorSub.sqf";
funcVectorDot = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorDot.sqf";
funcVectorCross = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorCross.sqf";
funcVectorScale = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorScale.sqf";
funcVectorLength = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorLength.sqf";
funcVectorRot2D = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorRot2D.sqf";
funcVectorRot3D = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorRot3D.sqf";
funcRandomRotation3D = loadFile "\TZK_Scripts_4_0_4\Common\SQF\RandomRotation3D.sqf";

funcVectorUp = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorUp.sqf";

funcDistH = loadFile "\TZK_Scripts_4_0_4\Common\SQF\DistH.sqf";
comment { arguments: [pos[] or object, pos[] or object]; };
comment { return: distance; };
funcHASL = loadFile "\TZK_Scripts_4_0_4\Common\SQF\HASL.sqf";
funcAreaFlat = loadFile "\TZK_Scripts_4_0_4\Common\SQF\AreaFlat.sqf";
comment { args: [pos, radius, max]; };
comment { return: true/false; };
funcInForest = loadFile "\TZK_Scripts_4_0_4\Common\SQF\InForest.sqf";
funcPosNearSea = loadFile "\TZK_Scripts_4_0_4\Common\SQF\PosNearSea.sqf";
funcBaseArea = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BaseArea.sqf";
comment { args: [pos]; };
comment { return: true/false; };
funcStartPos = loadFile "\TZK_Scripts_4_0_4\Common\SQF\StartPos.sqf";

fAddSoldier = loadFile "Common\SQF\AddSoldier.sqf";
comment { args: [type, pos, dir, si, gi, group, giBuyer]; };
comment { return: unit; };
fAddVehicle = loadFile "\TZK_Scripts_4_0_4\Common\SQF\AddVehicle.sqf";
comment { args: [type, pos, dir, si, gi, giBuyer, sendRepeats]; };
comment { return: vehicle; };

funcCalcDistanceToObject = {[_this select 0, getPos (_this select 1)] call funcDistH};
comment { arguments: [pos, object]; };
comment { return: distance; };


comment { args: [objectStructure, typeStructure, si]; };
comment { return: [posUnit, dirUnit]; };
funcCountUnits = loadFile "\TZK_Scripts_4_0_4\Common\SQF\CountUnits.sqf";
comment { args: [si, [types]] (e.g. [si0, [type, ...]]); };
comment { return: count (e.g. 3); };
funcGetCargoNum = "count (crew _this - [driver _this, gunner _this, commander _this])";
funcGetTranspVol = if !bool_TZK_199_Mode Then {"call (typeOf _this GetVehicleParam {transportSoldier})"} Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetTranspVol.sqf"};
funcVehParamHasSeat = if !bool_TZK_199_Mode Then { {call format ["%1", typeOf (_this select 0) GetVehicleParam format ["has%1", _this select 1]]} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamHasSeat.sqf"};
funcVehParamWeapons = if !bool_TZK_199_Mode Then { {typeof _this GetVehicleParamArray "weapons"} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamWeapons.sqf"};
funcVehParamMagazines = if !bool_TZK_199_Mode Then { {typeof _this GetVehicleParamArray "magazines"} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamMagazines.sqf"};
funcVehParamweaponSlots = if !bool_TZK_199_Mode Then { {call format ["%1", typeOf _this GetVehicleParam "weaponSlots"]} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamweaponSlots.sqf"};


funcGetClosestTown = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestTown.sqf";
comment { arguments: [ pos, siList, exceptList]; };
comment { returns: [townDesc, distance, indexTown]; };
funcGetClosestEnemyTown = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyTown.sqf";
comment { arguments: [pos, si, [ti, ...]]; };
comment { returns: [ti, distance]; };

funcGetStructures = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructures.sqf";
comment { args: [si, structType] (e.g. [si0, stBarracks]); };
comment { return: [struct, struct, ...]; };
funcGetClosestStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestStructure.sqf";
comment { returns closest alive structure of specified type and side; };
comment { args: [pos, si, structType]; };
comment { return: [struct, distance]; };
funcGetClosestEnemyObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyObject.sqf";
comment { args: [pos, si]; };
comment { return: [object, distance]; };
funcGetNearestStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestStructure.sqf";
comment { returns nearest structure; };
comment { args: [pos]; };
comment { return: [struct, type, distance]; };
funcGetNearbyStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyStructure.sqf";
comment { returns nearby structures in side; };
comment { arguments: [pos, distance, types, except, side]; };
comment { return: [ [struct, type, distance], ... ]; };

funcGetNearbyVehicles = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyVehicles.sqf";
comment { arguments: [pos, distance, types, except]; };
comment { returns: [ [vcl, type, dist], ...]; };
funcGetClosestVehicle = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicle.sqf";
comment { arguments: [pos, si, types, except]; };
comment { returns: [vehicleFound, distance]; };
funcGetClosestVehicleEmpty = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicleEmpty.sqf";
comment { arguments: [pos, si, types, except]; };
comment { returns: [vehicleFound, distance]; };
if bool_TZK_SEMod_Mode then {funcGetNearbyVehiclesEmpty = loadFile "Extra\Function\GetNearbyVehiclesEmpty.sqf"};

funcGetWorkingStructures = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetWorkingStructures.sqf";
comment { args: [si, structType] (e.g. [si0, stBarracks]); };
comment { return: [struct, struct, ...]; };
funcGetNearestRespawnObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestRespawnObject.sqf";

funcGetClosestUnit = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestUnit.sqf";
comment { arguments: [si, pos]; };
comment { returns: [unit, distance]; };
funcGetNearbySoldiers = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbySoldiers.sqf";
comment { arguments: [pos, distance, types, except, side]; };
comment { returns: [ [vcl, type, dist], ...]; };

funcGetRearmData = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRearmData.sqf";
comment { arguments: object; };
comment { return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found); };

funcGetStructTypeFromObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructTypeFromObject.sqf";
comment { arguments: object; };
comment { return: type (-1 if not found); };


funcGetUnitTypeFromObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetUnitTypeFromObject.sqf";
comment { arguments: object; };
comment { return: type (-1 if not found); };

funcCalcRearmCost = preprocessFile "Util\CalcRearmCost.sqf";
funcGetNotEmptyMags = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNotEmptyMags.sqf";
funcWeaponValidMags = loadFile (
	if !bool_TZK_199_Mode then {
		"Common\SQF\WeaponValidMags.sqf"
	} else {
		"\TZK_Scripts_4_0_4\Common\SQF\WeaponValidEquip.sqf"
	}
);


call preprocessFile "impl\Function_Common.sqf";
