// args: [rectangle 1: [x, y, w, h, dir], rectangle 2: [x, y, w, h, dir]]
// return: whether rect1 in rect2

private [{_param}, {_vertex}, {_ret}, {_i}];
_param = [0, _this select 1];
_vertex = preprocessFile "Util\RectVertex.sqf";

_ret = true; _i = 0; while {_i < 4 && _ret} do {
	_param set [0, [_this select 0, _i] call _vertex];
	_ret = _param call preprocessFile "Util\PosInRect.sqf";
	_i = _i + 1
};

_ret