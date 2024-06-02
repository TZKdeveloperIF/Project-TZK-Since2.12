; args: none

; init player functions
funcCalcAlignPosDir = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CalcAlignPosDir.sqf"
; // args: [si, type, pos, dir]
; // return: [pos, dir]

funcGetOrderDesc = loadFile "\TZK_Scripts_4_0_4\Player\SQF\GetOrderDesc.sqf"
; // arguments: _order
; // returns: string

funcMapClickPlayer = loadFile localize {TZK_FUNC_PLAYER_MAP_CLICK}
; // arguments: [_pos, _units, _alt, _shift]
; // returns: true if command processed, false if not
funcSideMsg = loadFile "\TZK_Scripts_4_0_4\Player\SQF\SideMsg.sqf"
; // args: text
funcMove = loadFile "\TZK_Scripts_4_0_4\Player\SQF\Move.sqf"
; // args: [unit, pos]
; // return: none

funcPosBullCam = loadFile "\TZK_Scripts_4_0_4\Player\SQF\PosBullCam.sqf"
funcMappingUnitsPlayer = loadFile "\TZK_Scripts_4_0_4\Player\Marker\MappingUnitsPlayer.sqf"
? dev : funcMappingPlayerDev = loadFile "\TZK_Scripts_4_0_4\Player\Marker\MappingPlayerDev.sqf"
funcHideMarkers = loadFile "\TZK_Scripts_4_0_4\Player\Marker\HideMarkers.sqf"

funcCheckWhetherSuperior = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CheckWhetherSuperior.sqf"
; // args: gis
; // return: player is superior or not

funcGetWorkingStructuresWithinCCRange = loadFile "\TZK_Scripts_4_0_4\Player\SQF\GetWorkingStructuresWithinCCRange.sqf"
; // args: [si, structType] (e.g. [si0, stBarracks])
; // return: [struct, struct, ...]



call preprocessFile "impl\Function_Player.sqf"
