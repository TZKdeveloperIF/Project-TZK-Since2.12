// args: none
// Common Initialization for Both Player and Spectator

// arguments: pos ([x,y])
// returns: string ("Ea15" or "Beyond Map")
funcCalcMapPos = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\CalcMapPos.sqf";

// arguments: [si,gi]
// returns: score
funcCalcScore = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\CalcScore.sqf";

// arguments: pos ([x,y])
// returns: text ("Levie NE 800")
// 100 m resolution
funcCalcTownDirDistFromPos = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\CalcTownDirDistFromPos.sqf";

// args: [ prim, sec, [gen0, ...] ]
funcGetEqName = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\GetEqName.sqf";

// arguments: [] or [seconds]
// returns: string
funcGetTimeString = preprocessFile "Player\SQF\GetTimeString.sqf";

// args: [vehicle, type, si]
// return : id (0 ~ (maxVehicleMarkers-1))
funcInitVehicleMarker = preprocessFile "\TZK_Scripts_4_0_6\Player\SQF\InitVehicleMarker.sqf";

// args: [unit, templ]
// return: true
funcEquipTempl = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\EquipTempl.sqf";

// args: unit
// return: template def if success, initialized array if failure
funcBuildTempl = preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\BuildTempl.sqf";

// 2.01 string commands used for Chinese language "Pin Yin" supporting.
funcLocStr = if !bool_TZK_199_Mode Then {preprocessFile "\TZK_Scripts_4_0_4\Player\SQF\LocalizeString.sqf"} Else {"_this"};

// 2.01 commands used. String in game will display without "_xj400"
funcStringWithoutVersion = preprocessFile localize {TZK_FUNC_PLAYER_STR_DISP};
// 2.01 commands used. Controlling Fire Effects
funcFiredEffect = preprocessFile localize {TZK_PLAYER_EFFECT_FIRED};

call preprocessFile "impl\Function_Client.sqf";