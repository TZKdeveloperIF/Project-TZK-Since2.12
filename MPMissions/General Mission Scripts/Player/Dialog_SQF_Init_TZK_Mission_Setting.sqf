_lastMissionSettings = _this select 0; _booleMatrix = _this select 1;

_i = 0; _Column = 3;
while "_i < _Column" do
{
	_idc = IDC + 100 + 100 * _i;
	_settingArray = missionSettingMatrix select _i; _size = count _settingArray; _last = _lastMissionSettings select _i; _booleans = _booleMatrix select _i;
	 _j = 0;  _Line = 12;
	while "_j < _Line" do
	{
		if (_j < _size) then
		{
			if ((count (_settingArray select _j)) != 0) then {
				{lbAdd [_idc + _j, _x]} forEach (_settingArray select _j);
				lbSetCurSel [_idc + _j, [0, 1] select ( call (_booleans select _j) )];
				_last set [_j, [0, 1] select ( call (_booleans select _j) )];
			} else {
				ctrlShow [_idc + _j, false]; lbSetCurSel [_idc + _j, -1]; _last set [_j, -1];
			};
		}
		else {
			ctrlShow [_idc + _j, false]; lbSetCurSel [_idc + _j, -1]; _last set [_j, -1];
		};
		_j = _j + 1;
	};
	_i = _i + 1;
};