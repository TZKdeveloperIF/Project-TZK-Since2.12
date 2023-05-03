// args: [mission setttings: enum, col, row, state]

private [{_enum}, {_col}, {_row}, {_state}];
_enum = _this select 0, _col = _this select 1, _row = _this select 2, _state = _this select 3;

// mission setting 1
if (1 == _enum) then {
	// booleSettingFunctions
	if (1 == _col) then {
		// Hide Score
		if (4 == _row) then {
			_state exec "Network\sModifyScoreConfuserState.sqs";
		};
	};
};