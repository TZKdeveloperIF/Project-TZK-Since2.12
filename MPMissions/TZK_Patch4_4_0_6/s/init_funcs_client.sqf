comment {args: none} ;
comment {Common Initialization for Both Player and Spectator} ;

comment {arguments: pos ([x,y])} ;
comment {returns: string ("Ea15" or "Beyond Map")} ;
funcCalcMapPos = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CalcMapPos.sqf";

comment {arguments: [si,gi]} ;
comment {returns: score} ;
funcCalcScore = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CalcScore.sqf";

comment {arguments: pos ([x,y])} ;
comment {returns: text ("Levie NE 800")} ;
comment {100 m resolution} ;
funcCalcTownDirDistFromPos = loadFile "\TZK_Scripts_4_0_4\Player\SQF\CalcTownDirDistFromPos.sqf";

comment {args: [ prim, sec, [gen0, ...] ]} ;
funcGetEqName = loadFile "\TZK_Scripts_4_0_4\Player\SQF\GetEqName.sqf";

comment {arguments: [] or [seconds]} ;
comment {returns: string} ;
funcGetTimeString = preprocessFile "Player\SQF\GetTimeString.sqf";

comment {args: [vehicle, type, si]} ;
comment {return : id (0 ~ (maxVehicleMarkers-1))} ;
funcInitVehicleMarker = loadFile "\TZK_Scripts_4_0_6\Player\SQF\InitVehicleMarker.sqf";

comment {args: [unit, templ]} ;
comment {return: true} ;
funcEquipTempl = loadFile "\TZK_Scripts_4_0_4\Player\SQF\EquipTempl.sqf";

comment {args: unit} ;
comment {return: template def if success, initialized array if failure} ;
funcBuildTempl = loadFile "\TZK_Scripts_4_0_4\Player\SQF\BuildTempl.sqf";

comment {2.01 string commands used for Chinese language "Pin Yin" supporting.} ;
funcLocStr = if !bool_TZK_199_Mode Then {loadFile "\TZK_Scripts_4_0_4\Player\SQF\LocalizeString.sqf"} Else {"_this"};

comment {2.01 commands used. String in game will display without "_xj400"} ;
funcStringWithoutVersion = loadFile (TzkScripts select 134);
comment {2.01 commands used. Controlling Fire Effects} ;
funcFiredEffect = preprocessFile (TzkScripts select 189);

call preprocessFile "impl\Function_Client.sqf";