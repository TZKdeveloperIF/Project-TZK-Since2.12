// TZK CTI - Set Worker Behaviour (Server only)
// Mirrors OFP: Net/sWorkerBehaviour.sqs
// Args: [si, behaviourIndex]
//   0 = Reckless, 1 = Cautious

if (!isServer) exitWith {};

params ["_si", "_bhv"];

workerBehaviour set [_si, _bhv];
publicVariable "workerBehaviour";
