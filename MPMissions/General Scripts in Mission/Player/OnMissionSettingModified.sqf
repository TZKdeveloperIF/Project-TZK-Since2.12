// args: [mission setttings: enum, col, row, state]

private [{_enum}, {_col}, {_row}, {_state}, {_varNameMatrix}, {_cfgKeyMatrix}];
_enum = _this select 0, _col = _this select 1, _row = _this select 2, _state = _this select 3;
_varNameMatrix = _this select 4; _cfgKeyMatrix = _this select 5;

// mission setting 1
if (1 == _enum) then {
	// functions
	if (1 == _col) then {
		// Hide Score
		if (4 == _row) then {
			_state exec "Network\sModifyScoreConfuserState.sqs";
		};
	};
};

// assign value to global variable
call format ["%1 = %2", _varNameMatrix select _col select _row, _state];

// save change to config
[_cfgKeyMatrix select _col select _row, format ["%1", _state]] call preprocessFile "Cfg\SavePlayerValue.sqf";