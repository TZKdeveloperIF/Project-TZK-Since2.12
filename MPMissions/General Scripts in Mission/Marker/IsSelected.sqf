// args: marker
// use marker size to store extra marker info
private [{_x}];
_x = (((markerSize _this) select 0) * 1000) % 2;
_x == 1