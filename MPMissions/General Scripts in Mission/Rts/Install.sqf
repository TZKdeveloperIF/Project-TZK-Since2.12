// args: none

// should be called ONLY ONCE. If server is hosted by player directly, server part will be initialized more than once.

if isServer then {
	call preprocessFile "Rts\Init\SvrEnv.sqf";
};

if (not isNull player) then {
	call preprocessFile "Rts\Init\PplInteraction.sqf";
};

// These rts markers is defined BEFORE "DynamicInitializationMarker.sqs" is executed
// they can thus be displayed BELOW other markers defined later
call preprocessFile "Rts\Marker\Init.sqf";