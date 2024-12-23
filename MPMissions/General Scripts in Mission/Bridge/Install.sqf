// args: none
// initial definition of bridges
// Need to be consistent with functions

TzkBrdigeProjects = []; TzkBridgeMutex = false;
if isServer then {
	TzkBridgeId = 0;
};
// TzkBrdigeProjects element format: [head info, bridges info]

// head info format: [valid, id, si, segmentCnt, start pos, end pos]
// todo: head should record some time stamp for hint informations such as last-insufficient-fund hint time

// bridges info format: [Pos ASL, 3D vector, object,   Pos ASL, 3D vector, object, ...]. Use 3 elements to encode 1 segment info
TzkBridgeSegElemCnt = 3;
// AI vehicle cross bridge height (work like attach)
// the height of road lamp is about 8 meters
TzkBridgeSuspendHeight = 15; 

// bridge model info
TzkBridgeRoadwayH = 33.55; // for both origin bridge and Bridge2_xj400
TzkBridgeCenterH = 17.612; // 20.489 for origin bridge; 17.612 for Bridge2_xj400