// TZK CTI - Set AI Respawn Object (Server only)
// Mirrors OFP: Net/sSetRespawnObj.sqs
// Args: [si, respawnObject]

if (!isServer) exitWith {};

params ["_si", "_obj"];

sideRespawnObjects set [_si, _obj];
publicVariable "sideRespawnObjects";
