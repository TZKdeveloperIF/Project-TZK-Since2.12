// args: none
// this is a process but not a function. script read/write local variables directly

// ATTENTION: the script "localize {TZK_AI_BUY_UNIT}" accept a parameter about order count. 
// However it accepts another parameter whose type is an array (reference). This is not a good design and need time
// to optimize it. 
// The realization of this design is: 
// 1. The input parameter of "localize {TZK_AI_BUY_UNIT}" is treated as not only input but also reference since it is an array.
// 2. The "order reference" in this parameter is initialized by an empty array. In "localize {TZK_AI_BUY_UNIT}", if current order
//		is valid, then the "order reference" is assigned by the actual order (which is an array too, and the order will be added 
//		into factory order queue). After factory having finish the order, the factory will operate on the order array (resize it
//		or modify its elements). Since there're references to the order, the initial caller (who passes input of "localize {TZK_AI_BUY_UNIT}"
//		and "order reference" variable) can detect the status of order and know the order is finished
// Thus in current script we have to do something special for such order

private [{_procSpecialOrder}, {_item}, {_i}];
_procSpecialOrder = false;
if (count _this > _idxOfOrderRef) then {
	if (_orderNum != 1) then {
		"WARNING: unexpected order number in NewOrder with order reference" call fDebugLog;
	} else {
		_procSpecialOrder = true;
		_item = [_type, _driver, _gunner, _commander, _giJoin, _giBuyer, _qid + 0, _nCustomWeapon];
		_this set [_idxOfOrderRef, _item];
		[_orders, _item] call preprocessFile "Algo\CirBuf\push_back.sqf";
	};
};
_i = if _procSpecialOrder then {1} else {0};
while {_i < _orderNum} do {
	[
		_orders, 
		[_type, _driver, _gunner, _commander, _giJoin, _giBuyer, _qid + _i, _nCustomWeapon]
	] call preprocessFile "Algo\CirBuf\push_back.sqf";
	_i = _i + 1;
};