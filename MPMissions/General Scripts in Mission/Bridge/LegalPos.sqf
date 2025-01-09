// args: [pos1, pos2, fail reason: enum]
// return: bool
// read _lowerBound externally
// if returns failure, pass reason enum by parameters

private [{_pos1}, {_pos2}];
_pos1 = _this select 0; _pos2 = _this select 1;

private [{_legal}, {_enum}]; _legal = true; _enum = -1;
// 0: too far to sea, 1: pos too close, 2: points along the way isn't in sea
// 3: anyone point is in the sea
if _legal then {if ([_pos1, 0] call funcPosNearSea) then {_legal = false, _enum = 3}};
if _legal then {if ([_pos2, 0] call funcPosNearSea) then {_legal = false, _enum = 3}};

// require 2 position near sea enough
if _legal then {if not ([_pos1, 50] call funcPosNearSea) then {_legal = false, _enum = 0}};
if _legal then {if not ([_pos2, 50] call funcPosNearSea) then {_legal = false, _enum = 0}};

// bridge length is _lowerBound. require distance between 2 position large than _lowerBound
if _legal then {if (_lowerBound >= ([_pos1, _pos2] call funcDistH)) then {_legal = false, _enum = 1}};

// check points along the way
if _legal then {
	_vec = [_pos2, _pos1] call funcVectorSub; _len = _vec call funcVectorLength;
	_vec = [_vec, 1 / _len] call funcVectorScale; // _vec is unit vector now
	// enter the sea once and leave is acceptable. 
	_enterSea = 0; _lastInSea = false;
	
	_step = 25; _correct = _step; while {_correct < _len && _legal} do {
		_point = [_pos1, [_vec, _correct] call funcVectorScale] call funcVectorAdd;
		_res = [_point, 5] call funcPosNearSea;

		if (not _lastInSea && _res) then {
			_enterSea = _enterSea + 1;
			if (_enterSea > 1) then {_legal = false, _enum = 2}; // enter sea more than once
		};

		_lastInSea = _res;
		_correct = _correct + _step;
	};
	if (0 == _enterSea) then {_legal = false, _enum = 2}; // need enter sea once
};

_this set [2, _enum];
_legal