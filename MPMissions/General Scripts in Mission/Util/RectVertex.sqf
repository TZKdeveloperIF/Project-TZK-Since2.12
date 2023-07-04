// args: [rectangle: [x, y, w, h, dir], index]
// return: [x, y]

private [{_rect}, {_idx}];
_rect = _this select 0;
_idx = _this select 1;
if (_idx < 0) then {_idx = -_idx}; _idx = _idx - _idx % 1; // idx must be natural number now

private [{_cos}, {_sin}];
// the direction of OFP dir is clockwise, while polar coordinate uses anticlockwise
_cos = cos (- (_rect select 4)), _sin = sin (- (_rect select 4));

private [{_sx}, {_sy}, {_w}, {_h}];
_sx = _rect select 0; _sy = _rect select 1;
_w = _rect select 2; _h = _rect select 3;

private [{_coefX}, {_coefY}];
_coefX = (if (_idx % 4 >= 2) then {1} else {-1}); // +1, +1, -1, -1
_coefY = (if (_idx % 2 == 1) then {1} else {-1}); // +1, -1, +1, -1

[
	_sx + _cos * _w * _coefX - _sin * _h * _coefY,
	_sy + _sin * _w * _coefX + _cos * _h * _coefY
]