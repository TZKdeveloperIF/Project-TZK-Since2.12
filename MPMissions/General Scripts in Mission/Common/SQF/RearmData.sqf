// args: unit
// return: [weapons, magazines]

// player units can equip custom weapons and overwrite equipment data in-game
// according to practice in player units' art order, we should get infomations from rearmDataObj first

private [{_i}, {_ret}];
_i = rearmDataObj find _this; _ret = [ [], [] ];
if (_i != -1) then {
	_ret set [0, rearmDataEquip select _i select 0];
	_ret set [1, rearmDataEquip select _i select 1];
} else {
	_i = _this call funcGetUnitTypeFromObject;
	if (_i != -1 && !(_i in utCustom)) then {
		private [{_list}];
		_list = rDataMatrix select _i;
		if (count _list != 0) then {_ret set [0, _list select 1]; _ret set [1, _list select 2]};
	};
};

_ret