private [{_val}];
_val = ((10000 - _this) % 4) / 2;
_val = _val call loadFile "Math\Floor.sqf";
1 == _val