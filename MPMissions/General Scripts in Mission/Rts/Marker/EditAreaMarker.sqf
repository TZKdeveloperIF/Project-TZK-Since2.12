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

// 鉴于RTS命令可以下达给玩家, 而指挥官不可能得知玩家本地的图标, 
// 因此阵营图标信息也需要告知每个客户端, 不可以仅存储在服务器上
_info = TzkSvrRtsAreaInfo select _si select _enum select _idx;

{_info set [_x, _geometryInfo select _x]} forEach [0,1,2,3,4];