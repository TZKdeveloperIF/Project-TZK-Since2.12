// args: none
// external read-only variables: _markerPos, _cos, _sin, _builderVehTypes, _radius...
// external output variables: _nextBuildPos, _lineX, _cachedInfo, _skip, _msg
// return: whether stopping building

// 首先基于 _nextBuildPos 获取建造坐标. 为避免障碍物重叠, 要求一定的距离差
// 但是要考虑障碍物的尺寸, 如果机制对于过大或过小的障碍物会失效, 那么需要重新设计
_lineX = _lineX + _step;
_nextBuildPos set [0, (_markerPos select 0) + _lineX * _cos]; _nextBuildPos set [1, (_markerPos select 1) + _lineX * _sin];

private [{_res}, {_ret}];
_res = [_nextBuildPos, _builderVehTypes, _cachedInfo] call preprocessFile "Player\Rts\CanBuildObstruction.sqf";
_ret = true;

if not (_res select 0) then {
	_cachedInfo resize 0;
	// _ret = true;
	_skip = true;
};

if (_res select 0) then {
	_cachedInfo = _res select 1;

	// check money
	if (_ret && _cost > (groupMoneyMatrix select siPlayer select giPlayer)) then {
		_ret = false;
		_msg = "Insufficient funds. Obstruction aborted.";
	};
	// check count limit
	if (_ret && count _structsEntry >= _limit) then {
		if (-1 == _structsEntry find objNull) then {
			_ret = false;
			_msg = format ["Structure Limit Reached (%1)", _limit];
			if (dev && _structsEntry > _limit) then {
				player groupChat format ["size: %1, alive objects: %2", count _structsEntry, {alive _x} count _structsEntry];
			};
		};
	};

	_skip = false;
	// check town flag
	if (_ret && not _skip) then {
		_distance = ([_nextBuildPos, [si0, si1, siRes], []] call funcGetClosestTown) select 1;
		if (_distance < _radius + 50) then {
			_skip = true;
		};
	};
	// check vehicle
	if (_ret && not _skip) then {
		if (count ([_nextBuildPos, _radius, [], []] call funcGetNearbyVehicles) > 0) then {
			_skip = true;
		};
	};

	// build
	if (_ret && not _skip) then {
		[_nextBuildPos, _markerDir, _stType] exec "\TZK_Scripts_4_0_4\Player\SendBuildStructure.sqs";
		// animate for engineer vehicle
		if (count _cachedInfo > 0) then {
			private [{_engiennerVehicle}]; _engiennerVehicle = _cachedInfo select 0;
			// M88
			if (_cachedInfo select 1 == typesEngineeringVeh select si0) then {
				if (_engiennerVehicle animationPhase "Crane" == 0) then {
					[_engiennerVehicle, "Up"] exec localize {TZK_ACTION_M88_CRANE};
				};
			};
			// BREM
			if (_cachedInfo select 1 == typesEngineeringVeh select si1) then {
				if (_engiennerVehicle animationPhase "Strela_V" == 0) then {
					[_engiennerVehicle, "Up"] exec localize {TZK_ACTION_BREM1_CRANE};
				};
			};
		};
	};
};

_ret