// args: [obj1, obj2, range limit]
private [{_obj1}, {_obj2}, {_limit}
	, {_accept1}, {_accept2}
	, {_res}
];

_obj1 = _this select 0;
_obj2 = _this select 1;
_limit = _this select 2;

_res = false;

if (_obj1 distance _obj2 > _limit) then {
	_accept1 = _obj1 in TzkDraggedVehs && abs (((getPosASL _obj1) select 0) - TzkAttachPosX) < 100;
	_accept2 = _obj2 in TzkDraggedVehs && abs (((getPosASL _obj2) select 0) - TzkAttachPosX) < 100;
	if (not _accept1 && not _accept2) then {_res = true};
};

_res