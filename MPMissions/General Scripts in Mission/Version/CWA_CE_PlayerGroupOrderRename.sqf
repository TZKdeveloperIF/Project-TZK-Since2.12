if (UsedVersion >= 2020) then {
	// initial key-value pairs
	_c = count aiOrders1;
	_keys = []; _values = [];
	_keys resize _c; _values resize _c;
	_i = 0;

	_keys set [_i, "Move WP"];
	_values set [_i, localize {TZK_LANG_PPL_MOVE_WP}];
	_i = _i + 1;

	_keys set [_i, "Patrol"];
	_values set [_i, localize {TZK_LANG_PPL_PATROL}];
	_i = _i + 1;

	_keys set [_i, "Patrol WP"];
	_values set [_i, localize {TZK_LANG_PPL_PATROL_WP}];
	_i = _i + 1;

	_keys set [_i, "Patrol WPs"];
	_values set [_i, localize {TZK_LANG_PPL_PATROL_WPS}];
	_i = _i + 1;

	_keys set [_i, "Transport Duty"];
	_values set [_i, localize {TZK_LANG_PPL_TRANSPORTDUTY}];
	_i = _i + 1;

	_keys set [_i, "Disable Mines"];
	_values set [_i, localize {TZK_LANG_PPL_DISABLE_MINES}];
	_i = _i + 1;

	_keys set [_i, "Mine Pos"];
	_values set [_i, localize {TZK_LANG_PPL_MINE_POS}];
	_i = _i + 1;

	_keys set [_i, "Mine WP"];
	_values set [_i, localize {TZK_LANG_PPL_MINE_WP}];
	_i = _i + 1;

	_keys set [_i, "Mine WP-WP"];
	_values set [_i, localize {TZK_LANG_PPL_MINE_WP2WP}];
	_i = _i + 1;

	_keys set [_i, "Mine Town Flag"];
	_values set [_i, localize {TZK_LANG_PPL_MINE_FLAG}];
	_i = _i + 1;

	_keys set [_i, "Satchel Pos"];
	_values set [_i, localize {TZK_LANG_PPL_SATCHEL_POS}];
	_i = _i + 1;

	_keys set [_i, "Satchel WP"];
	_values set [_i, localize {TZK_LANG_PPL_SATCHEL_WP}];
	_i = _i + 1;

	_keys set [_i, "Hold Town"];
	_values set [_i, localize {TZK_LANG_PPL_HOLD_TOWN}];
	_i = _i + 1;

	// post process
	while {_i < _c} do {
		_keys set [_i, ""];
		_values set [_i, ""];
		_i = _i + 1;
	};

	_i = 0; while {_i < _c} do {
		_idx = _keys find (aiOrders1 select _i select 0);
		if (_idx != -1) then {
			aiOrders1 select _i set [0, _values select _idx];
		};
		_i = _i + 1;
	};
};