// args: vector
private [
	{_vector}, {_size}
];
_vector = _this;
_size = _vector select 1;
if (_size < 1) then {
	"no element on calling Vector::pop_back()" call fDebugLog;
} else {
	// reduce size
	_vector set [1, _size - 1];
};