// args: none
// define constants and global variable for attach
// Some of them are defined in \TZK_Scripts_4_0_6\init_constants.sqf, which is packed in addon and can't 
// easily be undefined. Their definition shouldn't be modified here.

// todo: use another variables to take place of those "tsTug" and so on.
tsTug = 0; tsTugged = 1;
tsCenter = 0; tsRight = 1; tsLeft = 2;
ttHeli = 0; ttBoat = 1; ttTruck = 2; ttAPC = 3;

// ID is the unique identifier. Vehicles can be disband thus its existence isn't reliable
// Record both tugger and dragged vehicle to make searching easier and faster
TzkDraggedVehs = []; TzkDraggedTugger = []; TzkDraggedSlots = []; TzkDraggedIds = [];
TzkTuggers = []; TzkTuggerSlots = []; // Format of TzkTuggerSlots's element: [vehicleCenter, vehicleRight, vehicleLeft]

TzkAttachMutex = false; TzkAttachId = 0; TzkAttachInvId = -1;

// Attach helper position out of bound
// Fix x coordination. Give different y coordination for each group
TzkAttachPosX = -200;