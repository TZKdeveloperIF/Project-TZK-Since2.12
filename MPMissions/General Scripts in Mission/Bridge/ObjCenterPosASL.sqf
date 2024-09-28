// args: direction: 3D unit vector, road way center pos, height correction
private [
	{_unit3dVec}, {_roadwayCenter}, {_correct}
	, {_axis}, {_bias}, {_objCenterPosASL}, {_val}
];
_unit3dVec = _this select 0, _roadwayCenter = _this select 1, _correct = _this select 2;

_axis = [_unit3dVec, [0,0,-1]] call funcVectorCross;
_bias = [_unit3dVec, _axis, 90] call funcVectorRot3D;
_bias = [_bias, _correct] call funcVectorScale;

_objCenterPosASL = [_roadwayCenter, _bias] call funcVectorAdd;

{_val = _objCenterPosASL select _x; _val = _val - _val % 0.1; _objCenterPosASL set [_x, _val]} forEach [0,1,2];

_objCenterPosASL