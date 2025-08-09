// args: none
// show RTS diagonal info

private [{_w}, {_dir}];
_w = (markerSize "TzkRtsAreadiagonal") select 0; _w = _w - _w % 1; _w = 2 * _w;

_dir = getMarkerDir "TzkRtsAreadiagonal" + 90 + 360;
_dir = (_dir - _dir % 0.5) % 360;

showDebug [format ["%3: %1, %4: %2", _dir, _w, TzkInGameText select 020 select 7, TzkInGameText select 020 select 8], 10000];