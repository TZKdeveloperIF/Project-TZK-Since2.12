// args: [auto buy types, auto buy nums, slots]
// return: [[type, count, driver, gunner], ...]

private [{_res}]; _res = [];

private [{_autoBuyTypeEntry},{_autoBuyNums},{_slots}];
_autoBuyTypeEntry = _this select 0;
_autoBuyNums = _this select 1;
_slots = _this select 2;

// check auto buy num first
private [{_bNeedCheckAbNum},{_typesArr},{_units},{_u}, {_i},{_c},{_type},{_num},{_stat},{_crew}];
_bNeedCheckAbNum = false;
_i = 0; _c = 4; while {_i < _c && _slots > 0} do {
	if (_autoBuyNums select _i > 0) then {
		_bNeedCheckAbNum = true;
	};
	_i = _i + 1;
};
if (_bNeedCheckAbNum && _slots > 0) then {
	_typesArr = []; _units = units group _unit; _i = 0; _c = count _units; while {_i < _c} do {
		_u = _units select _i;
		_typesArr set [_i, if (alive _u) then {_u call funcGetUnitTypeFromObject} else {-1}];
		_i = _i + 1;
	};
	_i = 0; _c = 4; while {_i < _c && _slots > 0} do {
		_type = _autoBuyTypeEntry select _i; _num = _autoBuyNums select _i;
		if (_type != -1 && _num > 0 && [_si, _type] call loadFile "Util\UnitCanBuy.sqf") then {
			_stat = 0;
			{
				if (_x == _type) then {_stat = _stat + 1};
			} forEach _typesArr;
			{
				if (count (_x select 9) > 0) then {if (_x select 0 == _type) then {_stat = _stat + 1}};
			} forEach _grpBuyOrders;
			if (_stat < _num) then {
				_crewCnt = 1; _driver = 0; _gunner = 0;
				_crew = unitDefs select _type select udCrew;
				if ((count _crew) == 2) then {
					_driver = 1;
					if (_crew select 0 > 1) then {_crewCnt = 2; _gunner = 1};
				};
				if (_slots >= _crewCnt) then {
					_volumn = _slots / _crewCnt; _volumn = _volumn - _volumn % 1;
					if (_volumn > _num - _stat) then {_volumn = _num - _stat};
					_slots = _slots - _volumn * _crewCnt;

					_res set [count _res, [_type, _volumn, _driver, _gunner]];
				};
			};
		};
		_i = _i + 1;
	};
};

// generate a type randomly
private [{_validTypes},{_found}];
if (_slots > 0) then {
	_validTypes = []; _i = 0; _c = count _autoBuyTypeEntry; while {_i < _c} do {
		_type = _autoBuyTypeEntry select _i; _num = _autoBuyNums select _i;
		if (_type != -1 && _num <= 0) then {if ([_si, _type] call loadFile "Util\UnitCanBuy.sqf") then {
			_validTypes set [count _validTypes, _type];
		}};
		_i = _i + 1;
	};
	_c = count _validTypes;

	if (_c > 0) then {
		_type = (if (_c == 1) then {
			_validTypes select 0
		} else {
			_rand = random 1; _found = false;
			_i = 0; while {_i < _c && not _found} do {
				if (_rand <= (_i + 1) / _c) then {_found = true, _i = _i - 1};
				_i = _i + 1;
			};
			if (not _found) then {_i = _c - 1};
			_validTypes select _i
		});

		_crewCnt = 1; _driver = 0; _gunner = 0;
		_crew = unitDefs select _type select udCrew;
		if ((count _crew) == 2) then {
			_driver = 1;
			if (_crew select 0 > 1) then {_crewCnt = 2; _gunner = 1};
		};
		if (_slots >= _crewCnt) then {
			_volumn = _slots / _crewCnt; _volumn = _volumn - _volumn % 1;

			_res set [count _res, [_type, _volumn, _driver, _gunner]];
		};
	};
};

_res