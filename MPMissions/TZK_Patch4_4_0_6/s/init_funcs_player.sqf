comment {args: none} ;
comment {init player functions} ;

comment {args: [si, type, pos, dir]} ;
comment {return: [pos, dir]} ;
funcCalcAlignPosDir = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CalcAlignPosDir.sqf";

comment {arguments: _order} ;
comment {returns: string} ;
funcGetOrderDesc = loadFile "\TZK_Scripts_4_0_4\Player\SQF\GetOrderDesc.sqf";

comment {arguments: [_pos, _units, _alt, _shift]} ;
comment {returns: true if command processed, false if not} ;
funcMapClickPlayer = preprocessFile localize {TZK_FUNC_PLAYER_MAP_CLICK};

comment {args: text} ;
funcSideMsg = loadFile "\TZK_Scripts_4_0_4\Player\SQF\SideMsg.sqf";

comment {args: [unit, pos]} ;
comment {return: none} ;
funcMove = loadFile "\TZK_Scripts_4_0_4\Player\SQF\Move.sqf";

funcPosBullCam = loadFile "\TZK_Scripts_4_0_4\Player\SQF\PosBullCam.sqf";
funcMappingUnitsPlayer = preprocessFile "Player\Marker\MappingUnitsPlayer.sqf";
if dev then {funcMappingPlayerDev = loadFile "\TZK_Scripts_4_0_4\Player\Marker\MappingPlayerDev.sqf"};
funcHideMarkers = loadFile "\TZK_Scripts_4_0_4\Player\Marker\HideMarkers.sqf";

comment {args: gis} ;
comment {return: player is superior or not} ;
funcCheckWhetherSuperior = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CheckWhetherSuperior.sqf";

comment {args: [si, structType] (e.g. [si0, stBarracks])} ;
comment {return: [struct, struct, ...]} ;
funcGetWorkingStructuresWithinCCRange = loadFile "\TZK_Scripts_4_0_4\Player\SQF\GetWorkingStructuresWithinCCRange.sqf";

comment {get UID using 2.01 feature;} ;
comment {args: [unit, si, gi]} ;
comment {return: UID} ;
funcCalcUID = preprocessFile "Player\SQF\CalcUID.sqf";

call preprocessFile "impl\Function_Player.sqf";