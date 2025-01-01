// "init" in mission.sqm is executed earlier than init.sqs, and is executed one by one.
// Use content directly or synchronous sqf to prepare environment as expected;

gameEndType = -1;

// towns info
towns = [];

// side constants
si0 = 0; si1 = 1; siRes = 2; siBoth = 3; siCiv = 4;

// global groups variable declare
townGroups=[ [], [], [] ]; workerGroups = [ [], [] ]; patrolGroups = [];
functionalGroups = [ [], [] ];
// define global variable for all groups. They're widely used thus prepare a singleton
tzkAllGroups = [ [], [] ];