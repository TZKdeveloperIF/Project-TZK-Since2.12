// args: pos
// show position info relative to player

private [{_pos1}, {_pos2}];
_pos1 = getPos player; _pos1 resize 2;
_pos2 = + _this; _pos2 resize 2;

private [{_vec}, {_len}, {_dir}];
_vec = [_pos2, _pos1] call funcVectorSub;

_len = _vec call funcVectorLength;
_len = _len - _len % 1;

_dir = (_vec select 0) atan2 (_vec select 1) + 360;
_dir = (_dir - _dir % 0.5) % 360;

showDebug [format ["%3: %1, %4: %2", _dir, _len, TzkInGameText select 020 select 7, TzkInGameText select 020 select 8], 10000];