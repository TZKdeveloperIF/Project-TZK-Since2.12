// args: none
player groupchat (TzkInGameText select 026 select 7);

[false] exec (TzkScripts select 161); btnMarker = true; boolFriendly = true;

forceMap false;

// add weapon used for reload detection
player addWeapon "Ingram"; { player addMagazine "IngramMag" } forEach [1]; player selectWeapon "Ingram"; player addWeapon "NVGoggles";

[player] exec "Player\Start\Spectator.sqs";

if bool_TZK_199_Mode then {[player] exec (TzkScripts select 123)};