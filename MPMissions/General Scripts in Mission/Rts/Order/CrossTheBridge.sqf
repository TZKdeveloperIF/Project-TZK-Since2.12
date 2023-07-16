// args: player selected units
// returns: none

if (count _this > 0) then {
	_res = call preprocessFile "Rts\Marker\DiagonalPosInfo.sqf";

	_bridge1 = NearestObjectDistance [_res select 0, "Bridge", 50];
	_bridge2 = NearestObjectDistance [_res select 1, "Bridge", 50];

	if (isNull _bridge1 || isNull _bridge2) then {
		hint "Please assign line close enough to the bridge please.";
	} else {
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
						[_unit, _res, _bridge1, _bridge2], 
						[false, _quitCond], 
						[_uid, _id]
					] exec "ComplexOrder\CrossTheBridge.sqs";
				};
			};
		} forEach _units;
	};
};