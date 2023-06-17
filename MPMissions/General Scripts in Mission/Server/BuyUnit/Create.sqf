// args: none
// load variables from caller

private [{_processed}, {_serverHoster}, {_localGroup}, {_playerDisconnected}];
_processed = false; _serverHoster = false; _localGroup = false; _playerDisconnected = false;

// check AI group
if (not _processed && _grpJoin in (groupAiMatrix select _si)) then {
	_localGroup = true; _processed = true;
};
// check server hoster group
if (not _processed && not isNull player) then {
	if (group player == _grpJoin) then {
		_serverHoster = true; _localGroup = true; _processed = true;
	};
};
// check disconnected player
// todo: this design is incompleted. A callback would be more precise
if (not _processed && not _localGroup) then {
	if (local leader _grpJoin) then {
		if (isNull player) then {
			_playerDisconnected = true; _processed = true;
		} else {
			if (group player != _grpJoin) then {
				_playerDisconnected = true; _processed = true;
			};
		};
	};
};

// 应该不必处理 [_si, _giJoin, _unitsToBuild] exec "Server\BuyUnit\UnitsReady.sqs"; 
// 队伍人数增加的来源是join和建造，二者相互独立。不管队伍是否发生了join，当订单进入实际生产环节后，就应当从计数中删除

_processed = false;
// player disconnected
if (not _processed && _playerDisconnected) then {
	_processed = true;
	[_si, _giBuyer, -_cost] exec localize {TZK_MONEY_SERVER_SPEND};
};
// create locally
if (not _processed && _localGroup && not _serverHoster) then {
	_processed = true;
	_res = [_factory, _typeStructure, _si] call funcCalcUnitPlacementPosDir;
	_posUnit = _res select 0; _dirUnit = _res select 1;
	[_type, _driver, _gunner, _commander, _posUnit, _dirUnit, _si, _giJoin, grpNull, _giBuyer, 1, _nCustomWeapon] exec "Server\BuyUnit\Creating.sqs";
	_grpJoin reveal _factory;
};
// create for player (remote client or server hoster)
if (not _processed) then {
	_processed = true;
	[_type, _driver, _gunner, _commander, _si, _giJoin, _giBuyer, _factory, _nCustomWeapon] exec "Server\Msg\sAddUnit.sqs";
};