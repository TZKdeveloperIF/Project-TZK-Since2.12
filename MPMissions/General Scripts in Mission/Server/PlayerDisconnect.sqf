// args: leader
_leader = _this;
_leader allowdammage false;
// Add group to AI
_groups = groupMatrix select _si;
_groupsAI = groupAiMatrix select _si;
if !(_group in _groupsAI) then {_groupsAI set [count _groupsAI, _groups select _gi]};
[_si, _gi] exec localize {TZK_INFO_SERVER_CHECK_AI};
// Change commander if necessary
if (_group == (groupCommander select _si)) then {
	_playerFound = false;
	_i = 0; _c = count _groups;
	while {!_playerFound && _i < _c} do {
		if !((_groups select _i) in _groupsAI) then {_playerFound = true};
		_i = _i + 1;
	};
	_giCommander = (if (_playerFound) then {_i - 1} else {0});
	groupCommander set [_si, _groups select _giCommander];
	giCO set [_si, _giCommander];
	[_si, _giCommander] exec localize {TZK_INFO_SERVER_COMM_CHANGE};
	_vehicle = vehicle _leader;
	if (alive _leader && _leader != _vehicle) then {unassignVehicle _leader; _leader action ["EJECT", _vehicle]};
};
// Transfer money to commander
_money = groupMoneyMatrix select _si select _gi;
[_si, _gi, -_money, 0] exec localize {TZK_MONEY_SERVER_ADD};
[_si, giCO select _si, _money, 0] exec localize {TZK_MONEY_SERVER_ADD};
// Initialize AI leader
if (alive _leader && time < 5*60) then {_leader setPos getPos (mhq select _si)};
[_leader, _si] exec localize {TZK_AI_LEADER_EQUIP};
[_leader, _si, _gi] exec "Server\Start\AI_Leader.sqs";
// Eject commander units in group. Leader shall be alive when ordering its units
_i = 0; _c = count units _group; _units = units _group;
while {_i < _c} do {
	_unit = _units select _i;
	_vehicle = vehicle _unit;
	_commander = commander _vehicle;
	if (!isNull _commander && _commander == _unit) then {unassignVehicle _unit; _unit action ["EJECT", _vehicle]};
	_i = _i + 1;
};
// Stop all units
{ doStop _x; commandStop _x; } forEach units _group;
_leader allowdammage true;