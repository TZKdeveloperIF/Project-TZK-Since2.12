// args: [structure, type, si]
// return : id (0 - (maxStructureMarkers-1))

private ["_structure", "_structureType", "_si", "_ret", "_done", "_i", "_structureCount", "_m", "_mt"];

_structure = _this select 0;
_structureType = _this select 1;
_si = _this select 2;


_ret = -1;
_done = false;
_i = 0;
while "_i<maxStructureMarkers && !_done" do
{
  _structureCount = (StructureMarkerMapping select _si) select _i;
  if (isNull _structureCount) then
  {
    _m = format["Structure_%1_%2", _si, _i];
    _mt = (structDefs select _structureType) select sdMarkerType;
	if (_mt != "") then
	{
		_m setMarkerType _mt;
		_m setMarkerSize [0.8, 0.8];
		if (_mt in ["Sign_Marker_xj300", "Tower_Marker_xj300"]) then { _m setMarkerSize [0.5,0.5] };
		(StructureMarkerMapping select _si) set [_i, _structure];
		_i = _i + 1;
	};
	_done = true;
	_ret = _i - 1; // Although the return of this function isn't used in CTI missions right now, it's necessary to do this correction.
  };
  _i=_i+1;
};
_ret