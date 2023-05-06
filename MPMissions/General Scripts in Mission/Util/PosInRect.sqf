// args: [position: [x, y], rectangle info: [x, y, w, h, dir]]
// return: whether position in rectangle

private [{_pos},{_rectInfo}, {_dir},{_cos},{_sin}, {_oriVecX},{_oriVecY},{_rotVecX},{_rotVecY}];

_pos = _this select 0; _rectInfo = _this select 1;

_dir = _rectInfo select 4; _cos = cos _dir, _sin = sin _dir;

_oriVecX = (_pos select 0) - (_rectInfo select 0), _oriVecY = (_pos select 1) - (_rectInfo select 1);
_rotVecX = _cos * _oriVecX - _sin * _oriVecY; _rotVecY = _sin * _oriVecX + _cos * _oriVecY;

abs(_rotVecX) < (_rectInfo select 2) && abs(_rotVecY) < (_rectInfo select 3)