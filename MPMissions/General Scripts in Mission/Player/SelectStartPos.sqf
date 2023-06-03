_pos = _this select 0;
// _units = _this select 1;
// _alt = _this select 2;
// _shift = _this select 3;
_startPos = _this select 4;

if ([_pos, _startPos] call funcDistH > 5000) then {
	hint "Please select in range.";
} else {
	_pos exec "Player\Dialog\StartPos.sqs";
};