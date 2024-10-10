private [{_tug}, {_vehicle}, {_attachDist}, {_attachDir}, {_coefScale}, {_coefHeight}, {_bHeli}
	, {_vehPos}, {_tugPos}, {_tugDir}, {_posAttach}, {_vDisp}, {_vDispLength}, {_alt}, {_vVelAdd}
];

_tug = _this select 0;
_vehicle = _this select 1;
_attachDist = _this select 2;
_attachDir = _this select 3;
_coefScale = _this select 4;
_coefHeight = _this select 5;
_bHeli = _this select 6;

_vehPos = getPos _vehicle; _tugPos = getPos _tug;
_tugDir = getDir _tug;

_posAttach = (if _bHeli then {
	[_tugPos select 0, _tugPos select 1, (_tugPos select 2) - _attachDist]
} else {
	[(_tugPos select 0) + _attachDist * sin(_tugDir + _attachDir), (_tugPos select 1) + _attachDist * cos(_tugDir + _attachDir), 0]
});
_vDisp = [_posAttach, _vehPos] call funcVectorSub;
_vDispLength = [_vDisp select 0, _vDisp select 1] call funcVectorLength;
if (_vDispLength > 100) then {
	_vDisp set [0, (_vDisp select 0) * 100 / _vDispLength];
	_vDisp set [1, (_vDisp select 1) * 100 / _vDispLength];
};

_alt = _vehPos select 2;
_vVelAdd = [(_vDisp select 0) / 5, (_vDisp select 1) / 5, _coefHeight * (2 - _alt)];
if _bHeli then {_vVelAdd = [_vVelAdd, 1/2] call funcVectorScale; _vVelAdd set [2, (_vDisp select 2)/10]};

private [{_res}, {_fixedVelocity}, {_a}, {_b}, {_c}, {_hs}];
_res = [[velocity _tug, _coefScale] call funcVectorScale, _vVelAdd] call funcVectorAdd;
// new solution. Frequently move vehicle to sea and move back might trigger "disappear bug"
// since "static bug" appears to static object only, let's make dragged vehicle never stop
_a = _res select 0; _b = _res select 1; _c = _res select 2;
_hs = _a * _a + _b * _b;
_fixedVelocity = 0.1;
if (_hs + _c * _c < _fixedVelocity) then {
	_res set [2, if (_c >= 0) then {sqrt(_fixedVelocity - _hs)} else {- sqrt(_fixedVelocity - _hs)}];
};
_res