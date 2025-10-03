comment {args: none} ;

funcArrayOverlap = loadFile "\TZK_Scripts_4_0_4\Common\SQF\ArrayOverlap.sqf";
funcBinaryDigit = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BinaryDigit.sqf";
funcBoolEqual = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BoolEqual.sqf";

comment {args: [si]} ;
comment {return: AI groups index} ;
funcGetAIGroupsIndex = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetAIGroupsIndex.sqf";

comment {arguments: [posOrigin[] or object, distMin, distMax]} ;
comment {return: pos} ;
funcGetRandomPos = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomPos.sqf";

comment {arguments: array} ;
comment {array entry : [typeUnit, probability]} ;
comment {return: type} ;
funcGetRandomUnitType = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetRandomUnitType.sqf";

comment {args: [ nEntrySortIndex, bAsc, aEntries ] (e.g.  [0, false, [[3,"Cleanrock"],[5,"Ernst"]] ])} ;
comment {return: [aEntriesSorted] (e.g. [[5,"Ernst"],[3,"Cleanrock"]])} ;
funcSort = loadFile "\TZK_Scripts_4_0_4\Common\SQF\Sort.sqf";

funcSwapV = loadFile "\TZK_Scripts_4_0_4\Common\SQF\SwapVar.sqf";


funcVectorAdd = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorAdd.sqf";
funcVectorSub = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorSub.sqf";
funcVectorDot = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorDot.sqf";
funcVectorCross = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorCross.sqf";
funcVectorScale = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorScale.sqf";
funcVectorLength = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorLength.sqf";
funcVectorRot2D = preprocessFile "Math\VectorRot2D.sqf";
funcVectorRot3D = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorRot3D.sqf";
funcRandomRotation3D = loadFile "\TZK_Scripts_4_0_4\Common\SQF\RandomRotation3D.sqf";

funcVectorUp = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VectorUp.sqf";

comment {arguments: [pos[] or object, pos[] or object]} ;
comment {return: distance} ;
funcDistH = loadFile "\TZK_Scripts_4_0_4\Common\SQF\DistH.sqf";

funcHASL = loadFile "\TZK_Scripts_4_0_4\Common\SQF\HASL.sqf";

comment {args: [pos, radius, max]} ;
comment {return: true/false} ;
funcAreaFlat = loadFile "\TZK_Scripts_4_0_4\Common\SQF\AreaFlat.sqf";

funcInForest = loadFile "\TZK_Scripts_4_0_4\Common\SQF\InForest.sqf";
funcPosNearSea = loadFile "\TZK_Scripts_4_0_4\Common\SQF\PosNearSea.sqf";
funcBaseArea = loadFile "\TZK_Scripts_4_0_4\Common\SQF\BaseArea.sqf";

funcStartPos = loadFile "\TZK_Scripts_4_0_4\Common\SQF\StartPos.sqf";

comment {args: [type, pos, dir, si, gi, group, giBuyer]} ;
comment {return: unit} ;
fAddSoldier = preprocessFile "Common\SQF\AddSoldier.sqf";

comment {arguments: [pos, object]} ;
comment {return: distance} ;
funcCalcDistanceToObject = {[_this select 0, getPos (_this select 1)] call funcDistH};


funcCountUnits = loadFile "\TZK_Scripts_4_0_4\Common\SQF\CountUnits.sqf";
comment {args: [objectStructure, typeStructure, si]} ;
comment {return: [posUnit, dirUnit]} ;

funcGetCargoNum = "count (crew _this - [driver _this, gunner _this, commander _this])";
comment {args: [si, [types]] (e.g. [si0, [type, ...]])} ;
comment {return: count (e.g. 3)} ;

funcGetTranspVol = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetTranspVol.sqf";
funcVehParamHasSeat = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamHasSeat.sqf";
funcVehParamWeapons = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamWeapons.sqf";
funcVehParamMagazines = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamMagazines.sqf";
funcVehParamweaponSlots = loadFile "\TZK_Scripts_4_0_4\Common\SQF\VehParamweaponSlots.sqf";


comment {arguments: [ pos, siList, exceptList]} ;
comment {returns: [townDesc, distance, indexTown]} ;
funcGetClosestTown = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestTown.sqf";

comment {arguments: [pos, si, [ti, ...]]} ;
comment {returns: [ti, distance]} ;
funcGetClosestEnemyTown = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyTown.sqf";

comment {args: [si, structType] (e.g. [si0, stBarracks])} ;
comment {return: [struct, struct, ...]} ;
funcGetStructures = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructures.sqf";

comment {returns closest alive structure of specified type and side} ;
comment {args: [pos, si, structType]} ;
comment {return: [struct, distance]} ;
funcGetClosestStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestStructure.sqf";

comment {args: [pos, si]} ;
comment {return: [object, distance]} ;
funcGetClosestEnemyObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestEnemyObject.sqf";

comment {returns nearest structure} ;
comment {args: [pos]} ;
comment {return: [struct, type, distance]} ;
funcGetNearestStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestStructure.sqf";

comment {returns nearby structures in side} ;
comment {arguments: [pos, distance, types, except, side]} ;
comment {return: [ [struct, type, distance], ... ]} ;
funcGetNearbyStructure = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyStructure.sqf";

comment {arguments: [pos, distance, types, except]} ;
comment {returns: [ [vcl, type, dist], ...]} ;
funcGetNearbyVehicles = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbyVehicles.sqf";

comment {arguments: [pos, si, types, except]} ;
comment {returns: [vehicleFound, distance]} ;
funcGetClosestVehicle = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicle.sqf";

comment {arguments: [pos, si, types, except]} ;
comment {returns: [vehicleFound, distance]} ;
funcGetClosestVehicleEmpty = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetClosestVehicleEmpty.sqf";

if bool_TZK_SEMod_Mode then {funcGetNearbyVehiclesEmpty = preprocessFile "Extra\Function\GetNearbyVehiclesEmpty.sqf"};

comment {args: [si, structType] (e.g. [si0, stBarracks])} ;
comment {return: [struct, struct, ...]} ;
funcGetWorkingStructures = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetWorkingStructures.sqf";

comment {arguments: [si, pos]} ;
comment {returns: [unit, distance]} ;
funcGetNearestRespawnObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearestRespawnObject.sqf";

comment {arguments: [pos, distance, types, except, side]} ;
comment {returns: [ [vcl, type, dist], ...]} ;
funcGetNearbySoldiers = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNearbySoldiers.sqf";

comment {arguments: object} ;
comment {return: type (-1 if not found)} ;
funcGetStructTypeFromObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetStructTypeFromObject.sqf";


comment {arguments: object} ;
comment {return: type (-1 if not found)} ;
funcGetUnitTypeFromObject = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetUnitTypeFromObject.sqf";

funcCalcRearmCost = preprocessFile "Util\CalcRearmCost.sqf";
funcGetNotEmptyMags = loadFile "\TZK_Scripts_4_0_4\Common\SQF\GetNotEmptyMags.sqf";
funcWeaponValidMags = preprocessFile "Common\SQF\WeaponValidMags.sqf";

funcGenNetIdStr = preprocessFile "Network\GenNetIdStr.sqf";
funcElevArt406 = preprocessFile "Art\ElevByTable.sqf";
funcTimeArt406 = preprocessFile "Art\TimeByTable.sqf";
funcCalcUnitPlacementPosDir = preprocessFile "Common\SQF\CalcUnitPlacementPosDir.sqf";

fAddVehicle = preprocessFile "Common\SQF\AddVehicle.sqf";

fDebugLog = preprocessFile "Log\DebugLog.sqf";

funcGetClosestUnit = loadFile "Common\SQF\GetClosestUnit.sqf";

call preprocessFile "impl\Function_Common.sqf";