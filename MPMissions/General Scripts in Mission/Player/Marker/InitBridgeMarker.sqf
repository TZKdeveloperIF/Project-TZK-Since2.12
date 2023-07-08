// this script should be called after having defined bridge structure since we need its count info

_stType = -1;
if (stBridge >= 0) then {_stType = stBridge};
if (-1 == _stType) then {
	"Bridge hasn't defined" call fDebugLog;
} else {
	_markerLimits = 2 * (structDefs select _stType select sdLimit);
	TzkMarkedBridges = []; _i = 0; while {_i < _markerLimits} do {
		_marker = format ["Bridge_%1", _i];
		createMarker [_marker, [-10, -10]];

		_marker setMarkerShape "Rectangle";
		_marker setMarkerColor "ColorGrey_xj400";

		TzkMarkedBridges set [_i, objNull];

		_i = _i + 1;
	};
};