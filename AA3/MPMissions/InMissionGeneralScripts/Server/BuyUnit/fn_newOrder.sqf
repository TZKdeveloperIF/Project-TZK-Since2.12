// TZK CTI - NewOrder (Server only, TzkScripts 003)
// Mirrors OFP: Server/BuyUnit/NewOrder.sqs
// Entry point for unit purchase requests.
// Args: [typeUnit, driver, gunner, commander, si, giJoin, giBuyer, factoryObj]
// Optional: orderNum (default 1)
// All production goes through here → queued in factoryQueues → picked up by fn_factory.

if (!isServer) exitWith {};

params ["_type", "_driver", "_gunner", "_commander", "_si", "_giJoin", "_giBuyer", "_factory", ["_orderNum", 1]];

private _isVehicle = false;
if (_type < maxUnitTypes) then {
	if (count ((unitDefs select _type) select udCrew) > 0) then { _isVehicle = true };
};

private _eachOrderUnitCnt = if (_isVehicle) then { _driver + _gunner + _commander } else { 1 };

waitUntil {!(mutexBuildingQueue select _si select _giJoin)};
mutexBuildingQueue select _si set [_giJoin, true];

private _unitsInProgress = groupUnitsBuildingMatrix select _si select _giJoin;
private _grpSize = count units (groupMatrix select _si select _giJoin) + _unitsInProgress;

// -1 = fill to max
if (_orderNum == -1) then {
	_orderNum = floor ((maxGroupSize - _grpSize) / (_eachOrderUnitCnt max 1));
};
if (_orderNum > 1) then {
	private _maxFit = floor ((maxGroupSize - _grpSize) / (_eachOrderUnitCnt max 1));
	_orderNum = _orderNum min _maxFit;
};
if (_orderNum <= 0 || (_eachOrderUnitCnt * _orderNum + _grpSize > maxGroupSize)) exitWith {
	diag_log format ["TZK CTI: NewOrder rejected - group full (si=%1 gi=%2 type=%3)", _si, _giJoin, _type];
	mutexBuildingQueue select _si set [_giJoin, false];
};

if (isNull _factory || {!alive _factory}) exitWith {
	diag_log "TZK CTI: NewOrder rejected - factory null/dead";
	mutexBuildingQueue select _si set [_giJoin, false];
};

// Find factory in factoryQueues
private _queues = factoryQueues select _si;
private _qi = -1;
{
	if ((_x select 0) isEqualTo _factory) exitWith { _qi = _forEachIndex };
} forEach _queues;

if (_qi == -1) exitWith {
	diag_log "TZK CTI: NewOrder rejected - factory not in queue list";
	mutexBuildingQueue select _si set [_giJoin, false];
};

// Allocate qids
private _qid = qidNext select _si;
qidNext set [_si, _qid + _orderNum];

// Push orders into queue (A3: simple array, replaces CirBuf)
private _orders = _queues select _qi select 2;
for "_i" from 0 to (_orderNum - 1) do {
	_orders pushBack [_type, _driver, _gunner, _commander, _giJoin, _giBuyer, _qid + _i, false];
};

// Track reserved slots
private _newBuilding = (groupUnitsBuildingMatrix select _si select _giJoin) + _eachOrderUnitCnt * _orderNum;
groupUnitsBuildingMatrix select _si set [_giJoin, _newBuilding];

diag_log format ["TZK CTI: NewOrder queued %1x type=%2 si=%3 gi=%4 qid=%5-%6",
	_orderNum, _type, _si, _giJoin, _qid, _qid + _orderNum - 1];

mutexBuildingQueue select _si set [_giJoin, false];
