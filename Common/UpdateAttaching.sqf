// args: [tug, vehicle, attachDist, attachDir, coefficient Scale, coefficient Height, Heli Attach]
// return: velocity

private [];

_tug = _this select 0;
_vehicle = _this select 1;
_attachDist = _this select 2;
_attachDir = _this select 3;
_coefScale = _this select 4;
_coefHeight = _this select 5;
_bHeli = _this select 6;

_tugDir = getDir _tug;
_vehDir = getDir _vehicle;
_dirDiff = _vehDir - _tugDir;
if (_dirDiff > 180)	 then {_dirDiff = _dirDiff - 360};
if (_dirDiff < -180) then {_dirDiff = _dirDiff + 360};
if (_dirDiff > 5)	 then {_vehicle setDir (-1 + _vehDir)};
if (_dirDiff < -5)	 then {_vehicle setDir (1 + _vehDir)};

_tugPos = getPos _tug;
_posAttach = [(_tugPos select 0) + _attachDist*sin(_tugDir+_attachDir), (_tugPos select 1) + _attachDist*cos(_tugDir+_attachDir), 0];
if _bHeli then {_posAttach = [_tugPos select 0, _tugPos select 1, (_tugPos select 2) - _attachDist]};

_vehPos = getPos _vehicle;
_vDisp = [_posAttach, _vehPos] call funcVectorSub;
_vDispLength = [_vDisp select 0, _vDisp select 1] call funcVectorLength;
if (_vDispLength > 100) then {_vDisp set [0, (_vDisp select 0)*100/_vDispLength]; _vDisp set [1, (_vDisp select 1)*100/_vDispLength]};

_alt = _vehPos select 2;
_vVelAdd = [(_vDisp select 0)/5, (_vDisp select 1)/5, _coefHeight*(2 - _alt)];
if _bHeli then {_vVelAdd = [_vVelAdd, 1/2] call funcVectorScale; _vVelAdd set [2, (_vDisp select 2)/10]};

_velVehicle = ([[velocity _tug, _coefScale] call funcVectorScale, _vVelAdd] call funcVectorAdd);

_velVehicle