// args: web type short name
// read _markerType, _idx and _geometryInfo from caller

private [{_webShort}, {_marker}];
_webShort = _this;

_marker = format ["RtsArea%1%2%3", _markerType, _webShort, _idx];
_marker setMarkerPos [_geometryInfo select 0, _geometryInfo select 1];
_marker setMarkerSize [_geometryInfo select 2, _geometryInfo select 3];
_marker setMarkerDir (_geometryInfo select 4);

_marker = format ["RtsText%1%2%3", _markerType, _webShort, _idx];
_marker setMarkerPos [_geometryInfo select 0, _geometryInfo select 1];