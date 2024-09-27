// args: function name you wish to get
// return: preprocessed function (string)

// OFP can only use array to simulate struct. It works like tuple of C++. Almost no readability
// Functions in this file aim to make script readable. They work for read/edit attributes of bridge project.

// Need to be consistent with initialization

private [{_func}]; _func = "";

// headinfo of project
// input: project
// output: headinfo (array reference)
if (_this == "GetHeadInfo") then {_func = {
	_this select 0
}};

// assign headinfo to project
// input: [project, headinfo]
// output: nothing
if (_this == "SetHeadInfo") then {_func = {
	_this select 0 set [0, _this select 1];
}};

// bridgeinfo of project
// input: project
// output: bridgeinfo (array reference)
if (_this == "GetBridgeInfo") then {_func = {
	_this select 1
}};

// assign bridgeinfo to project
// input: [project, bridgeinfo]
// output: nothing
if (_this == "SetBridgeInfo") then {_func = {
	_this select 0 set [1, _this select 1];
}};

// valid status in headinfo
// input: headinfo
// output: valid (bool)
if (_this == "GetValidStatus") then {_func = {
	_this select 0
}};

// assign valid status to headinfo
// input: [headinfo, valid status]
// output: nothing
if (_this == "SetValidStatus") then {_func = {
	_this select 0 set [0, _this select 1];
}};

// id in headinfo
// input: headinfo
// output: id (number)
if (_this == "GetId") then {_func = {
	_this select 1
}};

// assign id to headinfo
// input: [headinfo, id]
// output: nothing
if (_this == "SetId") then {_func = {
	_this select 0 set [1, _this select 1];
}};

// si in headinfo
// input: headinfo
// output: si (number as enum)
if (_this == "GetSi") then {_func = {
	_this select 2
}};

// assign si to headinfo
// input: [headinfo, si]
// output: nothing
if (_this == "SetSi") then {_func = {
	_this select 0 set [2, _this select 1];
}};

// bridge segment count in headinfo
// input: headinfo
// output: bridge segment count (number)
if (_this == "GetSegmentCnt") then {_func = {
	_this select 3
}};

// assign bridge segment count to headinfo
// input: [headinfo, bridge segment count]
// output: nothing
if (_this == "SetSegmentCnt") then {_func = {
	_this select 0 set [3, _this select 1];
}};

// begin pos in headinfo
// input: headinfo
// output: begin position (array reference)
if (_this == "GetBeginPos") then {_func = {
	_this select 4
}};

// assign begin pos to headinfo
// input: [headinfo, begin pos]
// output: nothing
// write a copy but not the reference into infomation
if (_this == "SetBeginPos") then {_func = {
	_this select 0 set [4, + (_this select 1)];
}};

// end pos in headinfo
// input: headinfo
// output: end position (array reference)
if (_this == "GetEndPos") then {_func = {
	_this select 5
}};

// assign end pos to headinfo
// input: [headinfo, end pos]
// output: nothing
// write a copy but not the reference into infomation
if (_this == "SetEndPos") then {_func = {
	_this select 0 set [5, + (_this select 1)];
}};

// Is it possible to have some local variable work as "TzkBridgeSegElemCnt"?

// element count in bridgeinfo for one bridge segment
// input: nothing
// output: number
if (_this == "BridgeSegmentElemCnt") then {_func = {
	TzkBridgeSegElemCnt
}};

// position ASL of bridge with specific index
// input: [bridgeinfo, segment idx]
// output: position ASL (array reference). It'll be better to return a const-reference but no way in OFP to do this
if (_this == "BridgeGetPosASL") then {_func = {
	_this select 0 select (TzkBridgeSegElemCnt * (_this select 1) + 0)
}};

// Set position ASL to bridge with specific index
// input: [bridgeinfo, segment idx, position ASL]
// output: nothing
if (_this == "BridgeSetPosASL") then {_func = {
	_this select 0 set [(TzkBridgeSegElemCnt * (_this select 1) + 0), _this select 2];
}};

// 3D vector of bridge with specific index
// input: [bridgeinfo, segment idx]
// output: 3D vector (array reference). It'll be better to return a const-reference but no way in OFP to do this
if (_this == "BridgeGet3dVec") then {_func = {
	_this select 0 select (TzkBridgeSegElemCnt * (_this select 1) + 1)
}};

// Set 3D vector to bridge with specific index
// input: [bridgeinfo, segment idx, 3D vector]
// output: nothing
if (_this == "BridgeSet3dVec") then {_func = {
	_this select 0 set [(TzkBridgeSegElemCnt * (_this select 1) + 1), _this select 2];
}};

// object reference of bridge with specific index
// input: [bridgeinfo, segment idx]
// output: object reference. It'll be better to return a const-reference but no way in OFP to do this
if (_this == "BridgeGetObj") then {_func = {
	_this select 0 select (TzkBridgeSegElemCnt * (_this select 1) + 2)
}};

// Set object reference to bridge with specific index
// input: [bridgeinfo, segment idx, object reference]
// output: nothing
if (_this == "BridgeSetObj") then {_func = {
	_this select 0 set [(TzkBridgeSegElemCnt * (_this select 1) + 2), _this select 2];
}};

_func