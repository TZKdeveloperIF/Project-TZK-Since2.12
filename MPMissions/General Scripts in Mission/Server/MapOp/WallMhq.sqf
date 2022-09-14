_mhq = mhq select _this;
_dir = getDir _mhq;
_pos = getPosASL _mhq;
{
	_dist = 5;
	_buildPos = [(_pos Select 0) + _dist*(sin (_dir + _x)), (_pos Select 1) + _dist*(cos (_dir + _x))];
	[stWall, _this, giCo select _this, _buildPos, _dir + _x] call fBuildStruct;
} forEach [0, 90, 180, 270];