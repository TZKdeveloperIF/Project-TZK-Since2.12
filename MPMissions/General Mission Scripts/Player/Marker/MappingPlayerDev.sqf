// args: none
// return: none
private ["_i", "_v", "_m", "_siEnemy"];

_siEnemy = siEnemy select siPlayer;

// Vehicles Enemy
_i = 0;
while "_i < maxVehicleMarkers" do {
	_v = (vehicleMarkerMapping select _siEnemy) select _i;
	_m = format["Vehicle_%1_%2", _siEnemy, _i];
	if ( !(alive _v) && _v != (mhq select _siEnemy) ) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
	_i = _i + 1;
};
_i = 0;
while "_i < maxVehicleMarkers" do {
	_v = (vehicleMarkerMapping select siRes) select _i;
	_m = format["Vehicle_%1_%2", siRes, _i];
	if ( !(alive _v) && _v != (mhq select siRes) ) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerPos getPos _v};
	_i = _i + 1;
};
if (time % 30 > 28) then {
_i = 0;
while "_i < maxStructureMarkers" do {
	_v = (StructureMarkerMapping select _siEnemy) select _i;
	_m = format["Structure_%1_%2", _siEnemy, _i];
	if (isNull _v) then {_m setMarkerPos hiddenMarkerPos} else {_m setMarkerSize [0.5,0.5]};
	_i = _i + 1;
};
};