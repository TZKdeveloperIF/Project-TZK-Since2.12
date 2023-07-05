// args: none

// should be called ONLY ONCE. If server is hosted by player directly, server part will be initialized more than once.

// since we didn't define variables to record server marker count on player client,
// same type marker on player client and server should use same count
// count variables below will be read by SQF files called by current script
private [{_artMarkerCnt}]; _artMarkerCnt = 10;
private [{_mineMarkerCnt}]; _mineMarkerCnt = 5;

if isServer then {
	call preprocessFile "Rts\Init\SvrEnv.sqf";
};

if (not isNull player) then {
	call preprocessFile "Rts\Init\PplInteraction.sqf";
};

// These rts markers is defined BEFORE "DynamicInitializationMarker.sqs" is executed
// they can thus be displayed BELOW other markers defined later
call preprocessFile "Rts\Marker\Init.sqf";

// Define Art Area pre-analysis results AFTER rts area info/markers defined
call preprocessFile "Art\InitAreaAnalysis.sqf"