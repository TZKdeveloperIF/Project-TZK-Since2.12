// args: marker info
private [{_w}, {_h}, {_dir}, {_cos}, {_sin}, {_a}, {_b}];

_w = _this select 2; _h = _this select 3;
_dir = _this select 4; _cos = cos(-_dir), _sin = sin(-_dir);
_a = random(2 * _w) - _w; _b = random(2 * _h) - _h;
[
	(_cos * _a - _sin * _b) + (_this select 0),
	(_sin * _a + _cos * _b) + (_this select 1)
]