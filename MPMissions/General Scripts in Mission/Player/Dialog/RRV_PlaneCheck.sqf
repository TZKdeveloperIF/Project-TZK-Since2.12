_isPlane = false;

_sel = lbCurSel _idcList;
if (_sel >= 0 && _sel < count _vs) then {
	_veh = _vs select _sel select 0;
	if ("A10" countType [_veh] > 0 || "Su25" countType [_veh] > 0) then {
		_isPlane = true;
	};
};

ctrlShow [_idcAction3, _isPlane];