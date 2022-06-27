// args: none;

funcArrayOverlap = loadFile "\TZK_Scripts_4_0_4\Common\SQF\ArrayOverlap.sqf";
funcBinaryDigit = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BinaryDigit.sqf";
funcBoolEqual = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BoolEqual.sqf";
funcGetAIGroupsIndex = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetAIGroupsIndex.sqf";
// args: [si];
// return: AI groups index;
funcGetRandomPos = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomPos.sqf";
// arguments: [posOrigin[] or object, distMin, distMax];
// return: pos;


funcGetRandomUnitType = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomUnitType.sqf";
// arguments: array;
// array entry : [typeUnit, probability];
// return: type;
funcSearchvehicleAttached = loadFile "\TZK_Scripts_4_0_4\Common\SQF\SearchvehicleAttached.sqf";
// args:[tug(tugged, slot)];
// return: [index, found];
funcSort = loadFile "\TZK_Scripts_4_0_4\Common\SQF\Sort.sqf";
// args: [ nEntrySortIndex, bAsc, aEntries ] (e.g.  [0, false, [[3,"Cleanrock"],[5,"Ernst"]] ]);
// return: [aEntriesSorted] (e.g. [[5,"Ernst"],[3,"Cleanrock"]]);
funcSwapV = loadFile "\TZK_Scripts_4_0_4\Common\SQF\SwapVar.sqf";
funcUpdateAttaching = loadFile "\TZK_Scripts_4_0_4\Common\SQF\UpdateAttaching.sqf";
 ; // The degree applied in vector scripts is anticlockwise unlike "direction" of OFP.;
fDebugLog = loadFile "\TZK_Scripts_4_0_4\Common\SQF\DebugLog.sqf";
// args: string;
// return: none;
// Using 2.01 mission initialization unit "resistance_Center" to save status instead of "LocalServerObject";


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
// arguments: [pos[] or object, pos[] or object];
// return: distance;
funcHASL = loadFile "\TZK_Scripts_4_0_4\Common\SQF\HASL.sqf";
funcAreaFlat = loadFile "\TZK_Scripts_4_0_4\Common\SQF\AreaFlat.sqf";
// args: [pos, radius, max];
// return: true/false;
funcInForest = loadFile "\TZK_Scripts_4_0_4\Common\SQF\InForest.sqf";
funcPosNearSea = loadFile "\TZK_Scripts_4_0_4\Common\SQF\PosNearSea.sqf";
funcBaseArea = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BaseArea.sqf";
// args: [pos];
// return: true/false;
funcStartPos = loadFile "\TZK_Scripts_4_0_4\Common\SQF\StartPos.sqf";

fAddSoldier = loadFile "Common\SQF\AddSoldier.sqf";
// args: [type, pos, dir, si, gi, group, giBuyer];
// return: unit;
fAddVehicle = loadFile "\TZK_Scripts_4_0_4\Common\SQF\AddVehicle.sqf";
// args: [type, pos, dir, si, gi, giBuyer, sendRepeats];
// return: vehicle;

funcCalcDistanceToObject = {[_this select 0, getPos (_this select 1)] call funcDistH};
// arguments: [pos, object];
// return: distance;


funcCalcUnitPlacementPosDir = loadFile "\TZK_Scripts_4_0_4\Common\SQF\CalcUnitPlacementPosDir.sqf";
// args: [objectStructure, typeStructure, si];
// return: [posUnit, dirUnit];
funcCountUnits = loadFile "\TZK_Scripts_4_0_4\Common\SQF\CountUnits.sqf";
// args: [si, [types]] (e.g. [si0, [type, ...]]);
// return: count (e.g. 3);
funcGetCargoNum = "count (crew _this - [driver _this, gunner _this, commander _this])";
funcGetTranspVol = if !bool_TZK_199_Mode Then {"call (typeOf _this GetVehicleParam {transportSoldier})"} Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetTranspVol.sqf"};
funcVehParamHasSeat = if !bool_TZK_199_Mode Then { {call format ["%1", typeOf (_this select 0) GetVehicleParam format ["has%1", _this select 1]]} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamHasSeat.sqf"};
funcVehParamWeapons = if !bool_TZK_199_Mode Then { {typeof _this GetVehicleParamArray "weapons"} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamWeapons.sqf"};
funcVehParamMagazines = if !bool_TZK_199_Mode Then { {typeof _this GetVehicleParamArray "magazines"} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamMagazines.sqf"};
funcVehParamweaponSlots = if !bool_TZK_199_Mode Then { {call format ["%1", typeOf _this GetVehicleParam "weaponSlots"]} } Else {loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamweaponSlots.sqf"};


funcGetClosestTown = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestTown.sqf";
// arguments: [ pos, siList, exceptList];
// returns: [townDesc, distance, indexTown];
funcGetClosestEnemyTown = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyTown.sqf";
// arguments: [pos, si, [ti, ...]];
// returns: [ti, distance];

funcGetStructures = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructures.sqf";
// args: [si, structType] (e.g. [si0, stBarracks]);
// return: [struct, struct, ...];
funcGetClosestStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestStructure.sqf";
// returns closest alive structure of specified type and side;
// args: [pos, si, structType];
// return: [struct, distance];
funcGetClosestEnemyObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyObject.sqf";
// args: [pos, si];
// return: [object, distance];
funcGetNearestStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestStructure.sqf";
// returns nearest structure;
// args: [pos];
// return: [struct, type, distance];
funcGetNearbyStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyStructure.sqf";
// returns nearby structures in side;
// arguments: [pos, distance, types, except, side];
// return: [ [struct, type, distance], ... ];

funcGetNearbyVehicles = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyVehicles.sqf";
// arguments: [pos, distance, types, except];
// returns: [ [vcl, type, dist], ...];
funcGetNearbyVehiclesBySide = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyVehiclesBySide.sqf";
// arguments: [pos, distance, types, except, side];
// returns: [ [vcl, type, dist], ...];
funcGetClosestVehicle = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicle.sqf";
// arguments: [pos, si, types, except];
// returns: [vehicleFound, distance];
funcGetClosestVehicleEmpty = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicleEmpty.sqf";
// arguments: [pos, si, types, except];
// returns: [vehicleFound, distance];
? bool_TZK_SEMod_Mode: funcGetNearbyVehiclesEmpty = loadFile "Extra\Function\GetNearbyVehiclesEmpty.sqf";

funcGetWorkingStructures = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetWorkingStructures.sqf";
// args: [si, structType] (e.g. [si0, stBarracks]);
// return: [struct, struct, ...];
funcGetNearestRespawnObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestRespawnObject.sqf";

funcGetClosestUnit = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestUnit.sqf";
// arguments: [si, pos];
// returns: [unit, distance];
funcGetNearbySoldiers = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbySoldiers.sqf";
// arguments: [pos, distance, types, except, side];
// returns: [ [vcl, type, dist], ...];

funcGetRearmData = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRearmData.sqf";
// arguments: object;
// return: [ [wpn, ...], [mag, ...] ] ([[],[]] if not found);

funcGetStructTypeFromObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructTypeFromObject.sqf";
// arguments: object;
// return: type (-1 if not found);


funcGetUnitTypeFromObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetUnitTypeFromObject.sqf";
// arguments: object;
// return: type (-1 if not found);

funcCalcRearmCost = preprocessFile "Util\CalcRearmCost.sqf";
funcGetNotEmptyMags = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNotEmptyMags.sqf";
funcWeaponValidMags = loadFile (;
	if !bool_TZK_199_Mode then {;
		"Common\SQF\WeaponValidMags.sqf";
	} else {;
		"\TZK_Scripts_4_0_4\Common\SQF\WeaponValidEquip.sqf";
	};
);


call preprocessFile "impl\Function_Common.sqf";
