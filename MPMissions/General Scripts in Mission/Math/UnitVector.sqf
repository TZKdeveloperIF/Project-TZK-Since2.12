// args: vector
private [{_len}, {_res}];

_len = _this call funcVectorLength;
if (0 == _len) then {
	_res = _this;
	hint "zero vector generated.";
} else {
	_res = [_this, 1 / _len] call funcVectorScale;
};
_res