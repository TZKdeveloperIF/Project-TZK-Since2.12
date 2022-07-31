private ["_v", "_vt", "_si", "_ret", "_done", "_i", "_vc", "_m", "_mt"];

_v = _this select 0; _vt = _this select 1; _si = _this select 2; _this = 0;

_ret = -1; 
if (-1 == (vehicleMarkerMapping select _si) find _v) then {
	_done = false; _i = 0; while {_i < maxVehicleMarkers && not _done} do {
		_vc = vehicleMarkerMapping select _si select _i;
		if (not alive _vc) then {
			if (_vc != mhq select _si && -1 == (MCV select _si) find _vc) then {
				_m = format ["Vehicle_%1_%2", _si, _i];
				_mt = unitDefs select _vt select udMarkerType;
				_m setMarkerType _mt;
				_m setMarkerSize [1, 1];
				if (_mt == "Pickup") then { _m setMarkerSize [0.6,0.6] };
				if (_mt == "Dot") then { _m setMarkerSize [1.2,1.2] };
				vehicleMarkerMapping select _si set [_i, _v];
				_done = true;
				_ret = _i;
			};
		};
		_i = _i + 1;
	};
};
_ret