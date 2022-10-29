// args: marker
// use marker size to store extra marker info
if not (_this call preprocessFile "Marker\IsSelected.sqf") then {
	private [{_x}, {_size}];
	_size = markerSize _this;
	_x = _size select 0;
	_x = (1000 * _x) + 1;
	_this setMarkerSize [_x / 1000, _size select 1];
};