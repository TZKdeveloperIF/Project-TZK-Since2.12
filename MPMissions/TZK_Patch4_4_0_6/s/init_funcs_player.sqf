// args: none
// init player functions

// args: [si, type, pos, dir]
// return: [pos, dir]
funcCalcAlignPosDir = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\CalcAlignPosDir.sqf";

// arguments: _order
// returns: string
funcGetOrderDesc = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\GetOrderDesc.sqf";

// arguments: [_pos, _units, _alt, _shift]
// returns: true if command processed, false if not
funcMapClickPlayer = preprocessFile localize {TZK_FUNC_PLAYER_MAP_CLICK};

// args: text
funcSideMsg = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\SideMsg.sqf";

// args: [unit, pos]
// return: none
funcMove = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\Move.sqf";

funcPosBullCam = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\PosBullCam.sqf";
funcMappingUnitsPlayer = preprocessFile "Player\Marker\MappingUnitsPlayer.sqf";
if dev then {funcMappingPlayerDev = preprocessFile "\TZK_Scripts_4_0_4\Player\Marker\MappingPlayerDev.sqf"};
funcHideMarkers = preprocessFile "\TZK_Scripts_4_0_4\Player\Marker\HideMarkers.sqf";

// args: gis
// return: player is superior or not
funcCheckWhetherSuperior = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\CheckWhetherSuperior.sqf";

// args: [si, structType] (e.g. [si0, stBarracks])
// return: [struct, struct, ...]
funcGetWorkingStructuresWithinCCRange = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\GetWorkingStructuresWithinCCRange.sqf";

// get UID using 2.01 feature;
// args: [unit, si, gi]
// return: UID
funcCalcUID = preprocessFile "Player\SQF\CalcUID.sqf";

call preprocessFile "impl\Function_Player.sqf";