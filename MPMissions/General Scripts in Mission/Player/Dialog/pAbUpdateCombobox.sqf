// initialize factory comboboxes
{
	private [{_i},{_c}, {_factory},{_type}];
	_i = 0; _c = count _factories;
	while {_i < _c} do {
		_factory = _factories select _i;
		_type = _facTypes select _i;
		if (-1 == _type) then {
			lbAdd [_idcFactory + _x, "None"];
		} else {
			_name = structDefs select _type select sdName;
			_image = structDefs select _type select sdImage select _si;
			_textPos = (getPos _factory) call funcCalcTownDirDistFromPos;

			_id = lbAdd [_idcFactory + _x, format ["%3. %1 - %2", _name, _textPos, _i]];
		};
		_i = _i + 1;
	};
} forEach [0,1,2,3,4];

// initialize auto buy type combobox
	private [{_begin},{_end},{_id},{_i},{_unitDesc}];
	_id = lbAdd [_idcBuyType, "None"];
	lbSetValue [_idcBuyType, _id, -1];
	// A rough range
	if (_si == si0) then {_begin = utWorkerW, _end = utMHQ0} else {_begin = utWorkerE, _end = utMHQ1};
	_i = _begin; while {_i < _end} do {
		_unitDesc = unitDefs select _i;
		if (_unitDesc select udSide == _si && _unitDesc select udFactoryType != -1) then {
			_name = _unitDesc select udName;

			_id = lbAdd [_idcBuyType, _unitDesc select udName];
			lbSetValue [_idcBuyType, _id, _i];
		};
		_i = _i + 1;
	};

// initialize ai setting comboboxes
	{lbAdd [_idcKeepMin, _x]} foreach (aiSettingDefs select aisKeepMin select 1);
	{lbAdd [_idcGroupSize, _x]} foreach (aiSettingDefs select aisGroupSize select 1);