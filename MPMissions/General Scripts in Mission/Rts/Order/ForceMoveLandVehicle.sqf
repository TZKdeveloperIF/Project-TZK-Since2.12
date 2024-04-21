// args: player selected units
// returns: none

hint "
This button forces land vehicles to move to process situations that land vehicles 
getting stuck. To avoid being applied in battle, the script will delay few seconds 
and move with very low speed.
";

if (count _this > 0) then {
	_res = call preprocessFile "Rts\Marker\DiagonalPosInfo.sqf";

	// _vec = [_res select 1, _res select 0] call funcVectorSub;
	// _len = _vec call funcVectorLength;
	// if (_len > 100) then {
	// 	hint "Length of drawn line is too long. AI units will only move 100 m at most.";
	// 	_vec = [_res select 0, [_vec, 100 / _len] call funcVectorScale] call funcVectorAdd;
	// 	_res set [1, _vec];
	// };

	private [{_units}]; _units = [];
	{
		if (_x != vehicle _x && _x != driver vehicle _x) then {
			_driver = driver vehicle _x;
			if not (_driver in _units) then {_units set [count _units, _driver]};
		};
	} forEach _this;
	[_units, _this] call preprocessFile "Util\ArrayAppend.sqf";
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

				_quitCond = {not alive _unit || _unit == vehicle _unit || call orderCheck};

				[
					[_unit, _res], 
					[false, _quitCond], 
					[_uid, _id]
				] exec "ComplexOrder\ForceMoveLandVehicle.sqs";
			};
		};
	} forEach _units;
};