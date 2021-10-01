private [{_k}, {_c}, {_idx}, {_m}, {_slots}];

if (_this == 0) then {
	_usedSlots = 0;
	_shoppingCartMag resize 0; _shoppingCartCnt resize 0;
} else {
	_usedSlots = _usedSlots + _this * (_magInfo select _i select _piSlot);
	if (_this == 1) then {
		if (_j == -1) then {
			_shoppingCartMag set [count _shoppingCartMag, _i];
			_shoppingCartCnt set [count _shoppingCartCnt, 1];
		} else {
			_shoppingCartCnt set [_j, (_shoppingCartCnt select _j) + 1]
		}
	} else {
		_magCount = _shoppingCartCnt select _j;
		if (_magCount > 1) then {
			_shoppingCartCnt set [_j, _magCount - 1]
		} else {
			_c = count _shoppingCartMag, while {_j + 1 < _c} do {
				_shoppingCartMag set [_j, _shoppingCartMag select _j + 1];
				_shoppingCartCnt set [_j, _shoppingCartCnt select _j + 1];
				_j = _j + 1
			};
			_shoppingCartMag resize _c - 1; _shoppingCartCnt resize _c - 1;
		}
	};
};
_slots = _totalSlots - _usedSlots; _slots = _slots - _slots % 0.01;
ctrlSetText [_idcSlotText, format ["%1", _slots]];

_magCost = if (_this != 0 && _info select 1) then {
	_magCost + _this * (_magInfo select _i select _piMagPrice)
} else {
	0
};
ctrlSetText [_idcMagPriceText, format ["$%1",_magCost]];

lbClear _idcEquippedList;
_timeCost = 0; _upgradeCost = 0; _k = 0; _c = count _shoppingCartMag;
while {_k < _c} do {
	_idx = _shoppingCartMag select _k;
	_text = (
		if bool_TZK_199_Mode then {
			format [{%1%2%3}, _magInfo select _idx select _piName, "      ", _shoppingCartCnt select _k]
		} else {
			_name = _magInfo select _idx select _piName;
			_spaces = ""; _size = sizeofstr _name; while {_size < 16} do {_spaces = _spaces + " "; _size = _size + 1};
			format [{%1%2x%3}, _name, _spaces, _shoppingCartCnt select _k]
		}
	);
	_m = lbAdd [_idcEquippedList, _text]; if false then "lbSetColor [_idcEquippedList, _m, [0,0,0,0.5]]";
	_upg = _magInfo select _idx select _piVehPrice;
	if (_upg > _upgradeCost) then {_upgradeCost = _upg};
	_rearmTime = (_magInfo select _idx select _piRearmTime) * (_shoppingCartCnt select _k);
	if (_rearmTime > _timeCost) then {_timeCost = _rearmTime};
	_k = _k + 1;
};
if (_this == 0 || !(_info select 1)) then {_timeCost = 0};
ctrlSetText [_idcTimeText, format ["%1s", _timeCost]];
_upgradeCost = _upgradeCost - (_info select 0); if (_upgradeCost < 0) then {_upgradeCost = 0};
ctrlSetText [_idcUpgradeText, format ["$%1", _upgradeCost]];