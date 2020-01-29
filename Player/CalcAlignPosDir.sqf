// args: [si, type, pos, dir]
// return: [pos, dir]

private ["_posStruct", "_dirStruct", "_res", "_objectNearest", "_width", "_posNearest", "_dirNearest", "_vectorNearToNew", "_dirSminusN", "_dirOffset", "_vectorDirNearest", "_vectorDirStruct", "_infront", "_toright"];

_posStruct = _this select 2;
_dirStruct = _this select 3;

_width = (alignDefs select ([_this select 1, alignTypes] call funcGetIndex)) select 1;
_res = [_posStruct, _this select 0, _this select 1] call funcGetClosestStructure;
_objectNearest = _res select 0;

if ( !(isNull _objectNearest) && ((_res select 1) < 2*_width) ) then
{
	_posNearest = getPos _objectNearest;
	_dirNearest = (getDir _objectNearest + 360 - ((((structDefs select (_this select 1)) select ([sdObjects0, sdObjects1] select ((_this select 0) == si1))) select 0) select 1)) % 360;
	_vectorNearToNew = [(_posStruct select 0) - (_posNearest select 0), (_posStruct select 1) - (_posNearest select 1)];
	_dirSminusN = (((_dirStruct + 360) - _dirNearest) % 360);

	_dirOffset = [0, 45, 90, -45, 0, 45, -90, -45, 0] select ((_dirSminusN - 0)/45);
	_dirStruct = (_dirNearest + _dirOffset + 360) % 360;

	_vectorDirNearest = [sin _dirNearest, cos _dirNearest, 0];
	_vectorDirStruct = [sin _dirStruct, cos _dirStruct, 0];

	_infront = (0 < [_vectorDirNearest, _vectorNearToNew] call funcVectorDot);
	_vectorDirNearest = [_vectorDirNearest, [0,0,1]] call funcVectorCross;
	_toright = (0 < [_vectorDirNearest, _vectorNearToNew] call funcVectorDot);

	_vectorDirNearest = [_vectorDirNearest, _width/2] call funcVectorScale;

	_vectorDirStruct = [_vectorDirStruct, [0,0,1]] call funcVectorCross;
	_vectorDirStruct = [_vectorDirStruct, _width/2] call funcVectorScale;

	if (_toright) then { _posStruct = [_posNearest, _vectorDirNearest] call funcVectorAdd } else { _posStruct = [_posNearest, _vectorDirNearest] call funcVectorSub };

	if ( _toright &&  _infront) then { if (_dirOffset>0) then { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorSub } else { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorAdd } };
	if (!_toright &&  _infront) then { if (_dirOffset>=0) then { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorSub } else { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorAdd } };
	if ( _toright && !_infront) then { if (_dirOffset<0) then { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorSub } else { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorAdd } };
	if (!_toright && !_infront) then { if (_dirOffset<=0) then { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorSub } else { _posStruct = [_posStruct, _vectorDirStruct] call funcVectorAdd } };

	_posStruct set [2, (_this select 2) select 2]
};

[_posStruct, _dirStruct]
