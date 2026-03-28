// TZK CTI - Server initialization
// Runs only on the server after init.sqf

if (!isServer) exitWith {};

diag_log "TZK CTI: initServer.sqf starting";

// Server-side money initialization
call compile preprocessFileLineNumbers "Server\fn_initServer.sqf";

diag_log "TZK CTI: initServer.sqf complete - awaiting Phase B for game loops";
