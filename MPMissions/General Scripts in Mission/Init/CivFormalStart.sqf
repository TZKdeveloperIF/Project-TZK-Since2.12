// args: none
player groupchat "Start data received.";

[false] exec localize {TZK_MARKER_SPEC}; btnMarker = true; boolFriendly = true;

forceMap false;

// add weapon used for reload detection
player addWeapon "Ingram"; { player addMagazine "IngramMag" } forEach [1]; player selectWeapon "Ingram"; player addWeapon "NVGoggles";

[player] exec "Player\Start\Spectator.sqs";

if bool_TZK_199_Mode then {[player] exec localize {TZK_FUNC_KEEP_ALIVE}};