private [{_i}];
_i = (qLenFactories select 0) find _this;
if (_i != -1) then {
	[qLenValues, _i] call preprocessFile "Algo\Vector\at.sqf"
} else {
	-1
}