// args: none

private [{_i}, {_arr}], _i = 0; _arr = [];
{
	_arr set [_i, rating _x];
	_i = _i + 1;
} forEach (units group player);

_arr set [count _arr, -2];

if (count (groupMatrix select siPlayer) > 0) then {
	_arr set [count _arr, rating leader (groupMatrix select siPlayer select(
		count (groupMatrix select siPlayer) - 1
	))];
};

if (count _arr > 0) then {format ["Rating: %1", _arr] exec "Log\Debuglog.sqs";};