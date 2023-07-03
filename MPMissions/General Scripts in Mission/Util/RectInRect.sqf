// args: [rectangle 1: [x, y, w, h, dir], rectangle 2: [x, y, w, h, dir]]
// return: whether rect1 in rect2

private [{_rect1}, {_rect2}];
_rect1 = _this select 0; _rect2 = _this select 1;

private [{_cos}, {_sin}];
// the direction of OFP dir is clockwise, while polar coordinate uses anticlockwise
_cos = cos (- (_rect1 select 4)), _sin = sin (- (_rect1 select 4));

private [{_sx}, {_sy}, {_w}, {_h}];
_sx = _rect1 select 0; _sy = _rect1 select 1;
_w = _rect1 select 2; _h = _rect1 select 3;

private [{_pos}, {_param}];
_pos = []; _param = [_pos, _rect2];

private [{_ret}]; _ret = true;

if _ret then {
	_pos set [0, _sx + _cos * (+_w) - _sin * (+_h)];
	_pos set [1, _sy + _sin * (+_w) + _cos * (+_h)];
	_ret = _param call preprocessFile "Util\PosInRect.sqf";
};

if _ret then {
	_pos set [0, _sx + _cos * (+_w) - _sin * (-_h)];
	_pos set [1, _sy + _sin * (+_w) + _cos * (-_h)];
	_ret = _param call preprocessFile "Util\PosInRect.sqf";
};

if _ret then {
	_pos set [0, _sx + _cos * (-_w) - _sin * (+_h)];
	_pos set [1, _sy + _sin * (-_w) + _cos * (+_h)];
	_ret = _param call preprocessFile "Util\PosInRect.sqf";
};

if _ret then {
	_pos set [0, _sx + _cos * (-_w) - _sin * (-_h)];
	_pos set [1, _sy + _sin * (-_w) + _cos * (-_h)];
	_ret = _param call preprocessFile "Util\PosInRect.sqf";
};

_ret