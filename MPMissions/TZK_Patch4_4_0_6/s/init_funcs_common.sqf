// args: none

funcArrayOverlap = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\ArrayOverlap.sqf";
funcBinaryDigit = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\BinaryDigit.sqf";
funcBoolEqual = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\BoolEqual.sqf";

// args: [si]
// return: AI groups index
funcGetAIGroupsIndex = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetAIGroupsIndex.sqf";

// arguments: [posOrigin[] or object, distMin, distMax]
// return: pos
funcGetRandomPos = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomPos.sqf";

// arguments: array
// array entry : [typeUnit, probability]
// return: type
funcGetRandomUnitType = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomUnitType.sqf";

// args: [ nEntrySortIndex, bAsc, aEntries ] (e.g.  [0, false, [[3,"Cleanrock"],[5,"Ernst"]] ])
// return: [aEntriesSorted] (e.g. [[5,"Ernst"],[3,"Cleanrock"]])
funcSort = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\Sort.sqf";

funcSwapV = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\SwapVar.sqf";


funcVectorAdd = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorAdd.sqf";
funcVectorSub = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorSub.sqf";
funcVectorDot = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorDot.sqf";
funcVectorCross = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorCross.sqf";
funcVectorScale = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorScale.sqf";
funcVectorLength = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorLength.sqf";
funcVectorRot2D = preprocessFile "Math\VectorRot2D.sqf";
funcVectorRot3D = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorRot3D.sqf";
funcRandomRotation3D = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\RandomRotation3D.sqf";

funcVectorUp = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VectorUp.sqf";

// arguments: [pos[] or object, pos[] or object]
// return: distance
funcDistH = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\DistH.sqf";

funcHASL = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\HASL.sqf";

// args: [pos, radius, max]
// return: true/false
funcAreaFlat = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\AreaFlat.sqf";

funcInForest = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\InForest.sqf";
funcPosNearSea = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\PosNearSea.sqf";
funcBaseArea = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\BaseArea.sqf";

funcStartPos = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\StartPos.sqf";

// args: [type, pos, dir, si, gi, group, giBuyer]
// return: unit
fAddSoldier = preprocessFile "Common\SQF\AddSoldier.sqf";

// arguments: [pos, object]
// return: distance
funcCalcDistanceToObject = {[_this select 0, getPos (_this select 1)] call funcDistH};


funcCountUnits = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\CountUnits.sqf";
// args: [objectStructure, typeStructure, si]
// return: [posUnit, dirUnit]

funcGetCargoNum = "count (crew _this - [driver _this, gunner _this, commander _this])";
// args: [si, [types]] (e.g. [si0, [type, ...]])
// return: count (e.g. 3)

funcGetTranspVol = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetTranspVol.sqf";
funcVehParamHasSeat = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamHasSeat.sqf";
funcVehParamWeapons = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamWeapons.sqf";
funcVehParamMagazines = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamMagazines.sqf";
funcVehParamweaponSlots = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamweaponSlots.sqf";


// arguments: [ pos, siList, exceptList]
// returns: [townDesc, distance, indexTown]
funcGetClosestTown = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestTown.sqf";

// arguments: [pos, si, [ti, ...]]
// returns: [ti, distance]
funcGetClosestEnemyTown = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyTown.sqf";

// args: [si, structType] (e.g. [si0, stBarracks])
// return: [struct, struct, ...]
funcGetStructures = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructures.sqf";

// returns closest alive structure of specified type and side
// args: [pos, si, structType]
// return: [struct, distance]
funcGetClosestStructure = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestStructure.sqf";

// args: [pos, si]
// return: [object, distance]
funcGetClosestEnemyObject = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyObject.sqf";

// returns nearest structure
// args: [pos]
// return: [struct, type, distance]
funcGetNearestStructure = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestStructure.sqf";

// returns nearby structures in side
// arguments: [pos, distance, types, except, side]
// return: [ [struct, type, distance], ... ]
funcGetNearbyStructure = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyStructure.sqf";

// arguments: [pos, distance, types, except]
// returns: [ [vcl, type, dist], ...]
funcGetNearbyVehicles = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyVehicles.sqf";

// arguments: [pos, si, types, except]
// returns: [vehicleFound, distance]
funcGetClosestVehicle = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicle.sqf";

// arguments: [pos, si, types, except]
// returns: [vehicleFound, distance]
funcGetClosestVehicleEmpty = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicleEmpty.sqf";

if bool_TZK_SEMod_Mode then {funcGetNearbyVehiclesEmpty = preprocessFile "Extra\Function\GetNearbyVehiclesEmpty.sqf"};

// args: [si, structType] (e.g. [si0, stBarracks])
// return: [struct, struct, ...]
funcGetWorkingStructures = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetWorkingStructures.sqf";

// arguments: [si, pos]
// returns: [unit, distance]
funcGetNearestRespawnObject = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestRespawnObject.sqf";

// arguments: [pos, distance, types, except, side]
// returns: [ [vcl, type, dist], ...]
funcGetNearbySoldiers = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbySoldiers.sqf";

// arguments: object
// return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found)
funcGetRearmData = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetRearmData.sqf";

// arguments: object
// return: type (-1 if not found)
funcGetStructTypeFromObject = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructTypeFromObject.sqf";


// arguments: object
// return: type (-1 if not found)
funcGetUnitTypeFromObject = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetUnitTypeFromObject.sqf";

funcCalcRearmCost = preprocessFile "Util\CalcRearmCost.sqf";
funcGetNotEmptyMags = preprocessFile "\TZK_Scripts_4_0_4\Common\SQF\GetNotEmptyMags.sqf";
funcWeaponValidMags = preprocessFile "Common\SQF\WeaponValidMags.sqf";

funcGenNetIdStr = preprocessFile "Network\GenNetIdStr.sqf";
funcElevArt406 = preprocessFile "Art\ElevByTable.sqf";
funcTimeArt406 = preprocessFile "Art\TimeByTable.sqf";
funcCalcUnitPlacementPosDir = preprocessFile "Common\SQF\CalcUnitPlacementPosDir.sqf";

fAddVehicle = preprocessFile "Common\SQF\AddVehicle.sqf";

fDebugLog = preprocessFile "Log\DebugLog.sqf";

funcGetClosestUnit = loadFile "Common\SQF\GetClosestUnit.sqf";

call preprocessFile "impl\Function_Common.sqf";