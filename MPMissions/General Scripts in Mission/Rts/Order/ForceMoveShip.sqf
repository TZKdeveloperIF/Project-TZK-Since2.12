// args: player selected units
// returns: none

hint localize {TZK_LANG_BRIEF_MOVE_SHIP};

if (count _this > 0) then {
	_res = call preprocessFile "Rts\Marker\DiagonalPosInfo.sqf";
	private [{_legal}]; _legal = true;

	if _legal then {if not ([_res select 0, 100] call funcPosNearSea) then {
		_legal = false;
		hint format ["%1 %2 %3 %4 %5 %6 %7 %5 %8 100m."
			, localize {TZK_LANG_START}
			, localize {TZK_LANG_POSITION}
			, localize {TZK_LANG_SHOULD}
			, localize {TZK_LANG_IN}
			, localize {TZK_LANG_SEA}
			, localize {TZK_LANG_OR}
			, localize {TZK_LANG_NEAR}
			, localize {TZK_LANG_WITHIN}
		];
	}};
	if _legal then {if not ([_res select 1, 20] call funcPosNearSea) then {
		_legal = false;
		hint format ["%1 %2 %3 %4 %5 %6 %7 %5 %8 20m."
			, localize {TZK_LANG_END}
			, localize {TZK_LANG_POSITION}
			, localize {TZK_LANG_SHOULD}
			, localize {TZK_LANG_IN}
			, localize {TZK_LANG_SEA}
			, localize {TZK_LANG_OR}
			, localize {TZK_LANG_NEAR}
			, localize {TZK_LANG_WITHIN}
		];
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
				hint format ["%1 %2 %3 2 %4."
					, localize {TZK_LANG_THERE_ARE}
					, localize {TZK_LANG_LAND}
					, localize {TZK_LANG_BETWEEN}
					, localize {TZK_LANG_POINT}
				];
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