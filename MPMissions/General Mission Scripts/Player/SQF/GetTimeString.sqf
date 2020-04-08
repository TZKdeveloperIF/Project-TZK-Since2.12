// arguments: [] or [seconds]
// returns: string

private ["_sec", "_s", "_m", "_h", "_text"];

_sec = time;
if (count _this > 0) then { _sec = _this select 0; };

_sec = _sec - (_sec % 1);
_s = _sec % 60;
_sec = _sec - _s;
_m = (_sec % (60*60))/60;
_sec = _sec - 60*_m;
_h = _sec/(60*60);

_text = format["%1:%2%3:%4%5", _h, ["", "0"] select (_m<10), _m, ["", "0"] select (_s<10), _s];

_text
