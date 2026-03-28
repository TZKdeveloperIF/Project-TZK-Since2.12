// TZK CTI - Local player initialization
// Runs on each client (including hosted server's player) after init.sqf

if (isNull player) exitWith {};

diag_log "TZK CTI: initPlayerLocal.sqf starting";

// Briefing
call compile preprocessFileLineNumbers "briefing.sqf";

diag_log "TZK CTI: initPlayerLocal.sqf complete - awaiting Phase E for player UI";
