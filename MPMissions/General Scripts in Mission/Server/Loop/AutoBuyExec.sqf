// args: typeInfos
// read other external variables directly
private [{_typeInfos}];
_typeInfos = _this;

_assignedFacs resize 0;
{if (not (_x in _assignedFacs)) then {_assignedFacs set [count _assignedFacs, _x]}} forEach _autoBuyFactories;

private [{_type},{_num},{_driver},{_gunner}, {_factoryType}];
{
	_type = _x select 0; _num = _x select 1; _driver = _x select 2; _gunner = _x select 3;
	_factoryType = (unitDefs select _type select udFactoryType) call funcBinaryDigit;

	if (count _assignedFacs <= 0) then { // Buy at old fashion
		// todo: To improve concurrency, optimize the concept of "idle factory / buildingsInUse" would be a good choice
		_factories resize 0;
		{[_factories, [_si, _x, true] call funcGetIdleFactories] call preprocessFile "Util\ArrayAppend.sqf"} forEach _factoryType;
		if (count _factories > _num) then {_factories resize _num};
		{
			private [{_order}]; _order = [_type, _driver, _gunner, 0, _si, _gi, _gi, _x, -1, _emptyArr];
			private [{_j},{_cj},{_found}]; _j = 0; _cj = count _grpBuyOrders; _found = false;
			while {_j < _cj && not _found} do {
				if (count (_grpBuyOrders select _j select 9) == 1) then {_found = true; _j = _j - 1};
				_j = _j + 1;
			};
			_grpBuyOrders set [_j, _order];
			_order exec localize {TZK_AI_BUY_UNIT};
		} forEach _factories;
	} else { // Buy at assigned factories
		private [{_factory},{_facType}];
		if (not _lambdaInited) then {
			_lambdaInited = true;
			_lambda = format [{not ([_this, %1] call {%2})}, _si, preprocessFile "Server\SQF\LegalIdleFactory.sqf"]
		};
		_factories resize 0;
		_i = 0, _c = count _assignedFacs; while {_i < _c} do {
			_factory = _assignedFacs select _i;
			if (alive _factory) then {
				_facType = _factory call funcGetStructTypeFromObject;
				if (_facType in _factoryType) then {
					if not (_factory call _lambda) then {
						_factories set [count _factories, _factory];
					};
				};
			};

			_i = _i + 1;
		};
		if (count _factories > 0) then {
			if (count _factories > _num) then {_factories resize _num};
			{
				private [{_order}]; _order = [_type, _driver, _gunner, 0, _si, _gi, _gi, _x, -1, _emptyArr];
				private [{_j},{_cj},{_found}]; _j = 0; _cj = count _grpBuyOrders; _found = false;
				while {_j < _cj && not _found} do {
					if (count (_grpBuyOrders select _j select 9) == 1) then {_found = true; _j = _j - 1};
					_j = _j + 1;
				};
				_grpBuyOrders set [_j, _order];
				_order exec localize {TZK_AI_BUY_UNIT};
			} forEach _factories;
		};
	};
} forEach _typeInfos;