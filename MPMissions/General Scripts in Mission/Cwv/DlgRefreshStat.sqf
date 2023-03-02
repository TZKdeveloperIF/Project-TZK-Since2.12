private [{_slotDiff}];

// _shoppingCartMag: mag index, _shoppingCartCnt: mag number (count by unit)
if (_this == "Clear") then {
	_usedPrim = 0; _usedSec = 0;
	_slotDiff = 0;
	_shoppingCartMag resize 0; _shoppingCartCnt resize 0;
} else {
	// calculate delta slot
	if (_this == "Add" || _this == "Full") then {
		_slotDiff = _unitSlot;
		if ("Full" == _this) then {
			_slotDiff = if (0 == _slotType) then {_slotPrim - _usedPrim} else {_slotSec - _usedSec};
		};
	} else { // _this == "Remove" || _this == "None"
		_slotDiff = - _unitSlot;
		if ("None" == _this) then {
			_slotDiff = 0; if (_j != -1) then {_slotDiff = - (_shoppingCartCnt select _j) * _unitSlot};
		};
	};
	// update used slot
	if (0 == _slotType) then {_usedPrim = _usedPrim + _slotDiff} else {_usedSec = _usedSec + _slotDiff};
	// calculate delta unit and update shopping cart
	_unitDiff = _slotDiff / _unitSlot;
	if (_unitDiff > 0) then {
		if (_j == -1) then {
			_shoppingCartMag set [count _shoppingCartMag, _i];
			_shoppingCartCnt set [count _shoppingCartCnt, _unitDiff];
		} else {
			_shoppingCartCnt set [_j, (_shoppingCartCnt select _j) + _unitDiff]
		};
	} else {if (_unitDiff < 0) then {
		_magCount = _shoppingCartCnt select _j;
		if (_magCount + _unitDiff > 0) then {
			_shoppingCartCnt set [_j, _magCount + _unitDiff]
		} else {
			private [{_c}];
			_c = count _shoppingCartMag, while {_j + 1 < _c} do {
				_shoppingCartMag set [_j, _shoppingCartMag select _j + 1];
				_shoppingCartCnt set [_j, _shoppingCartCnt select _j + 1];
				_j = _j + 1
			};
			_shoppingCartMag resize _c - 1; _shoppingCartCnt resize _c - 1;
		};
	} else { // _unitDiff == 0
		; // doNothing
	}};
};
// update slot left info
ctrlSetText [_idcSlotText0, format ["%1", _slotPrim - _usedPrim]];
ctrlSetText [_idcSlotText0 + 1, format ["%1", _slotSec - _usedSec]];
// update money/time cost. Always calculating fully but not incrementally since vehicle might shoot even when dialog has been activated (e.g. gunner is ordered "fire")
private [{_k}, {_c}, {_entry}, {_dispName}, {_spaces}, {_m}, {_mag}, {_existedAmmo}, {_incrementUnit}];
lbClear _idcEquippedList;
_magCost = 0; _timeCost = 0; _upgradeCost = 0;
_k = 0; _c = count _shoppingCartMag; while {_k < _c} do {
	_entry = _magInfo select (_shoppingCartMag select _k);

	_dispName = _entry select _piName;
	_spaces = ""; _size = sizeofstr _dispName; while {_size < 17} do {_spaces = _spaces + " "; _size = _size + 1};
	_text = format ["%1%2x%3", _dispName, _spaces, (_shoppingCartCnt select _k) * (_entry select _piUnitCount)];
	_m = lbAdd [_idcEquippedList, _text];

	_upg = _entry select _piVehPrice;
	if (_upg > _upgradeCost) then {_upgradeCost = _upg};

	// calc money/time cost. Existed selected magazines' ammunition will be ignored.
	_mag = _availMags select (_shoppingCartMag select _k); _existedAmmo = 0;
	[_dispName, _si, _enum, _vehicle] call preprocessFile "Util\CWV\ProperMagWep.sqf";
	private [{_a}, {_ca}]; _a = 0; _ca = count _magArr; while {_a < _ca} do {
		if ((_magArr select _a) == _mag) then {_existedAmmo = _existedAmmo + (_magArr select _a + 1)};
		_a = _a + 2;
	};
	_incrementUnit = (_shoppingCartCnt select _k) - _existedAmmo / (_entry select _piUnitCount);
	if (_incrementUnit > 0) then {
		_magCost = _magCost + _incrementUnit * (_entry select _piUnitCost);
		_rearmTime = _incrementUnit * (_entry select _piUnitTime);
		if (_rearmTime > _timeCost) then {_timeCost = _rearmTime};
	};

	_k = _k + 1;
};
private [{_vehPrice}, {_needPay4Rearm}];
_vehPrice = _info select 0; _needPay4Rearm = _info select 1;
if (not _needPay4Rearm) then {_magCost = 0; _timeCost = 0};
ctrlSetText [_idcMagPriceText, format ["$%1",_magCost]]; ctrlSetText [_idcTimeText, format ["%1s", _timeCost]];
_upgradeCost = _upgradeCost - _vehPrice; if (_upgradeCost < 0) then {_upgradeCost = 0};
ctrlSetText [_idcUpgradeText, format ["$%1", _upgradeCost]];