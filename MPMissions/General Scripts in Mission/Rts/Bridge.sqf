// there're height diff between start and end pos
// if start pos is lower, the last part heading sky at the end pos might cross the land surface
// the last part should be horizontal and contact with the other part of the bridge. It's a fold line

_h1 = _pos1 call funcHASL, _h2 = _pos2 call funcHASL; _deltaH = _h2 - _h1;
_pos1 set [2, _h1], _pos2 set [2, _h2];

_bridgeL = 50, _correct = 33.55 - 20.489;

_distH = [_pos1, _pos2] call funcDistH;
_distance = sqrt(_distH * _distH + _deltaH * _deltaH);
_slopedCnt = ((_distance / _bridgeL) call preprocessFile "Math\Ceil.sqf") - 1;
_slopeLen = _slopedCnt * _bridgeL;
_restLen = _distH - sqrt(_slopeLen * _slopeLen - _deltaH * _deltaH);

_unitH = [_pos2, _pos1] call funcVectorSub; _unitH set [2, 0];
_unitH = [_unitH, 1 / _distH] call funcVectorScale;
_dir = (_unitH select 0) atan2 (_unitH select 1); _dir = _dir - _dir % 0.1;

_pos3 = [_pos2, [_unitH, _restLen] call funcVectorScale] call funcVectorSub;

_unitSlope = [_pos3, _pos1] call funcVectorSub;
_unitSlope = [_unitSlope, 1 / _slopeLen] call funcVectorScale;

_i = 0; while {_i < _slopedCnt} do {
	_roadwayCenter = [_pos1, [_unitSlope, _bridgeL * (_i + 0.5)] call funcVectorScale] call funcVectorAdd;
	_roadwayCenter set [2, (_roadwayCenter select 2) - _correct];
	{_val = _roadwayCenter select _x; _val = _val - _val % 0.1; _roadwayCenter set [_x, _val]} forEach [0,1,2];
	[siPlayer, giPlayer, _roadWayCenter, _unitSlope] exec "Util\Bridge\Build.sqs";
	publicExec format [{%1 exec "Util\Bridge\Build.sqs"}, [siPlayer, giPlayer, _roadWayCenter, _unitSlope]];

	_i = _i + 1;
};

// last part. Is it possible to remain more than 1 part?
call {
	_roadwayCenter = [_pos3, [_unitH, _bridgeL / 2] call funcVectorScale] call funcVectorAdd;
	_roadwayCenter set [2, (_roadwayCenter select 2) - _correct];
	{_val = _roadwayCenter select _x; _val = _val - _val % 0.1; _roadwayCenter set [_x, _val]} forEach [0,1,2];
	[siPlayer, giPlayer, _roadWayCenter, _unitH] exec "Util\Bridge\Build.sqs";
	publicExec format [{%1 exec "Util\Bridge\Build.sqs"}, [siPlayer, giPlayer, _roadWayCenter, _unitSlope]];
};