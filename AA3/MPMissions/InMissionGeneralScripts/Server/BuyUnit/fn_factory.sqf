// TZK CTI - Factory Loop (Server only, TzkScripts 075)
// Mirrors OFP: Server/BuyUnit/Factory.sqs
// Spawned when a factory structure is built. Processes orders from its queue.
// Args: [structType, si, objects]  (objects[0] = the factory building)

if (!isServer) exitWith {};

params ["_typeStructure", "_si", "_objects"];
private _factory = _objects select 0;

// Register in factoryQueues
waitUntil {!mutexFacQueues};
mutexFacQueues = true;
private _queues = factoryQueues select _si;
private _qi = -1;
{
	if (isNull (_x select 0)) exitWith { _qi = _forEachIndex };
} forEach _queues;
if (_qi == -1) then { _qi = count _queues };

// Queue format: [factoryObj, structType, ordersArray, currentQid]
// ordersArray replaces OFP CirBuf with plain A3 array (FIFO via deleteAt 0)
_queues set [_qi, [_factory, _typeStructure, [], -1]];
mutexFacQueues = false;

diag_log format ["TZK CTI: Factory %1 (type=%2 si=%3) registered at qi=%4", _factory, _typeStructure, _si, _qi];

// Main production loop
while {pvGameOver == -1} do {
	_queues select _qi set [3, -1];

	private _orders = _queues select _qi select 2;

	// Wait for orders
	waitUntil {sleep 0.3; count _orders > 0 || isNull _factory || !alive _factory || pvGameOver != -1};

	if (pvGameOver != -1) exitWith {};
	if (isNull _factory || {!alive _factory}) exitWith {
		[_si, _qi] call TZK_fnc_factoryDestroyed;
	};

	// Process next order
	private _entry = _orders select 0;
	private _type = _entry select 0;
	private _driver = _entry select 1;
	private _gunner = _entry select 2;
	private _commander = _entry select 3;
	private _giJoin = _entry select 4;
	private _giBuyer = _entry select 5;
	private _qid = _entry select 6;
	private _cancelled = _entry select 7;

	_orders deleteAt 0;
	_queues select _qi set [3, _qid];

	if (_cancelled) then { continue };

	// Unit definition
	private _unitDesc = unitDefs select _type;
	private _isVehicle = count (_unitDesc select udCrew) > 0;
	private _unitsToBuild = if (_isVehicle) then { _driver + _gunner + _commander } else { 1 };

	// Cost
	private _cost = _unitDesc select udCost;
	if (_isVehicle) then {
		private _crewType = (_unitDesc select udCrew) select 1;
		_cost = _cost + (unitDefs select _crewType select udCost) * (_driver + _gunner + _commander);
	};

	// Group size check
	private _grpJoin = (groupMatrix select _si) select _giJoin;
	if (count units _grpJoin + _unitsToBuild > maxGroupSize) then {
		diag_log format ["TZK CTI: Factory - group full, skipping qid=%1", _qid];
		[_si, _giJoin, _unitsToBuild] call TZK_fnc_freeBuildingUnits;
		continue;
	};

	// Spend money
	private _legal = [_si, _giBuyer, _cost] call TZK_fnc_moneySpend;
	if (!_legal) then {
		diag_log format ["TZK CTI: Factory - not enough money, skipping qid=%1", _qid];
		[_si, _giJoin, _unitsToBuild] call TZK_fnc_freeBuildingUnits;
		continue;
	};

	// Build timer
	private _buildTime = _unitDesc select udBuildTime;
	if (_isVehicle) then {
		private _crewType = (_unitDesc select udCrew) select 1;
		_buildTime = _buildTime + (unitDefs select _crewType select udBuildTime) * (_driver + _gunner + _commander);
	};

	private _timeBuilt = time + _buildTime;
	waitUntil {sleep 1; time >= _timeBuilt || !alive _factory || isNull _factory || pvGameOver != -1};

	if (pvGameOver != -1) exitWith {};
	if (isNull _factory || {!alive _factory}) exitWith {
		// Refund and free
		[_si, _giBuyer, _cost, 0] call TZK_fnc_moneyAdd;
		[_si, _giJoin, _unitsToBuild] call TZK_fnc_freeBuildingUnits;
		[_si, _qi] call TZK_fnc_factoryDestroyed;
	};

	// Final group check
	if (count units _grpJoin + _unitsToBuild > maxGroupSize) then {
		[_si, _giBuyer, _cost, 0] call TZK_fnc_moneyAdd;
		[_si, _giJoin, _unitsToBuild] call TZK_fnc_freeBuildingUnits;
		continue;
	};

	// Create unit
	[_type, _driver, _gunner, _commander, _si, _giJoin, _giBuyer, _factory, _typeStructure, _unitsToBuild] call TZK_fnc_createUnit;
};
