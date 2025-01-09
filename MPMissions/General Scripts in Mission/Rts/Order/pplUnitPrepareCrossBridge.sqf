// args: [player selected units, 
//	[unit, bridge project id, near begin pos (bool. decide which endpoint of bridge is the start pos)
//		, move distance (distance to move after having acrossed the bridge)]]
// returns: none

private [{_playerGroupSelectedUnits}]; _playerGroupSelectedUnits = _this select 0;
if (count _playerGroupSelectedUnits > 0) then {
	private [{_units}]; _units = [];
	{
		if (_x != vehicle _x && _x != driver vehicle _x) then {
			_driver = driver vehicle _x;
			if (_units find _driver == -1 && _playerGroupSelectedUnits find _driver == -1) then {_units set [count _units, _driver]};
		};
	} forEach _playerGroupSelectedUnits;
	[_units, _playerGroupSelectedUnits] call preprocessFile "Algo\arrayAppend.sqf";
	{
		private [{_unit},{_uid},{_id}];
		_unit = _x;
		if (alive _unit && _unit != vehicle _unit) then {
			_uid = [_unit, siPlayer, giPlayer] call funcCalcUID;
			if (_uid > 12) then {
				hint "Fail to get UID, order not set. Try again please.";
			} else {
				_id = (playerOrderID select _uid) + 1;
				[_uid, _id] exec "\TZK_Scripts_4_0_4\Player\Order\New.sqs";

				_quitCond = {not alive _unit || _unit == vehicle _unit || 
					_unit != driver vehicle _unit || _unit == vehicle _unit || call orderCheck};

				[
					_unit,
					_this select 1,
					[false, _quitCond], 
					[_uid, _id]
				] exec "ComplexOrder\CrossTheBridge.sqs";
			};
		};
	} forEach _units;
};