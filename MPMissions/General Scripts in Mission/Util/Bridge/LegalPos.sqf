// args: [pos1, pos2, fail reason: enum]
// return: bool
// if returns failure, pass reason enum by parameters

private [{_pos1}, {_pos2}];
_pos1 = _this select 0; _pos2 = _this select 1;

private [{_legal}, {_enum}]; _legal = true; _enum = -1;
// 0: too far to sea, 1: pos too close, 2: points along the way isn't in sea

// require 2 position near sea enough
if _legal then {if not ([_pos1, 25] call funcPosNearSea) then {_legal = false, _enum = 0}};
if _legal then {if not ([_pos2, 25] call funcPosNearSea) then {_legal = false, _enum = 0}};

// bridge length is 50. require distance between 2 position large than 50
if _legal then {if (50 >= ([_pos1, _pos2] call funcDistH)) then {_legal = false, _enum = 1}};

// check points along the way
if _legal then {
	_vec = [_pos2, _pos1] call funcVectorSub; _len = _vec call funcVectorLength;
	_vec = [_vec, 1 / _len] call funcVectorScale; // _vec is unit vector now
	_step = 25; _correct = _step; while {_correct < _len && _legal} do {
		_point = [_pos1, [_vec, _correct] call funcVectorScale] call funcVectorAdd;
		if (not ([_point, 5] call funcPosNearSea)) then {_legal = false, _enum = 2};
		_correct = _correct + _step;
	};
};

_this set [2, _enum];
_legal