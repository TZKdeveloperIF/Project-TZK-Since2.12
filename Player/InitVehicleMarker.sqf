// args: [vehicle, type, si]
// return : id (0 - (maxVehicleMarkers-1))

private ["_v", "_vt", "_si", "_ret", "_done", "_i", "_vc", "_m", "_mt"];

_v = _this select 0;
_vt = _this select 1;
_si = _this select 2;


_ret = -1;
_done = false;
_i = 0;
while "_i<maxVehicleMarkers && !_done" do
{
  _vc = (vehicleMarkerMapping select _si) select _i;
  if (!(alive _vc) && _vc != (mhq select _si) && !(_vc in (MCV select _si)) ) then
  {
    _m = format["Vehicle_%1_%2", _si, _i];
    _mt = (unitDefs select _vt) select udMarkerType;
    _m setMarkerType _mt;
    _m setMarkerSize [1, 1];
    if (_mt == "Pickup") then { _m setMarkerSize [0.6,0.6] };
    if (_mt == "Dot") then { _m setMarkerSize [1.2,1.2] };
    (vehicleMarkerMapping select _si) set [_i, _v];
    _done = true;
    _ret = _i;
  };
  _i=_i+1;
};
_ret