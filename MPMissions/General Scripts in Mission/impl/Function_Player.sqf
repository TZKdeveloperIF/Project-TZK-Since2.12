funcMapClickPlayer = preprocessFile localize {TZK_FUNC_PLAYER_MAP_CLICK};
funcMappingUnitsPlayer = preprocessFile "Player\Marker\MappingUnitsPlayer.sqf";
// get UID using 2.01 feature;
// args: [unit, si, gi]
// return: UID
funcCalcUID = preprocessFile "Player\SQF\CalcUID.sqf";