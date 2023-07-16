// args: player selected units
// returns: none

hint "
This button forces ships to move to process situations that AI will drive ship in 15 km/h in shallow water.
The script will force ships to move in 60 km/h.
";

if (count _this > 0) then {
	_res = call preprocessFile "Rts\Marker\DiagonalPosInfo.sqf";
	private [{_legal}]; _legal = true;

	if _legal then {if not ([_res select 0, 100] call funcPosNearSea) then {
		_legal = false;
		hint "Start position should in sea or near the sea within 100 m.";
	}};
	if _legal then {if not ([_res select 1, 20] call funcPosNearSea) then {
		_legal = false;
		hint "End position should in sea or near the sea within 20 m.";
	}};
	// check points along the way
	if _legal then {
		private [{_vec}, {_len}, {_step}, {_correct}, {_point}];

		_vec = [_res select 1, _res select 0] call funcVectorSub; _len = _vec call funcVectorLength;
		_vec = [_vec, 1 / _len] call funcVectorScale; // _vec is unit vector now
		_step = 25; _correct = _step; while {_correct < _len && _legal} do {
			_point = [_res select 0, [_vec, _correct] call funcVectorScale] call funcVectorAdd;
			if (not ([_point, 5] call funcPosNearSea)) then {
				_legal = false;
				hint "There're lands between 2 points.";
			};
			_correct = _correct + _step;
		};
	};

	if _legal then {
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
					] exec "ComplexOrder\ForceMoveShip.sqs";
				};
			};
		} forEach _units;
	};
};