// args: none
// return: bool (use this languange)

// cfg_todo: 需要有一个更好的标识来知道当前游戏的 LANGUAGE
private [{_bMatch}];
_bMatch = localize {TZK_LANG_MOVE} == "移动";

if _bMatch then {
	private [{_i}, {_capacity}];
	_i = 0; _capacity = 4;
	TzkInGameText resize _capicity;

	_f = {
		if (_i >= _capacity) then {
			_capacity = _capacity * 2;
			TzkInGameText resize _capacity;
		};
		TzkInGameText set [_i, _this];
		_i = _i + 1;
	};

	// All exist item's index and their order CAN'T BE CHANGED
	"您所发射的炮弹已飞行超
	过3秒。由于火炮单位附近
	50米内有己方关键建筑，敌
	AI火炮无法针对性反制，因
	此炮弹将被删除。如欲远距
	离炮击，请移动火炮单位" call _f; // 000
	[
		 "直升机"
		,"步战车"
		,"卡车"
		,"船只"
		,"客机"
		,"医疗车"
		,"维修卡车"
		,"吉普车"] call _f; // 001
	[
		 "榴弹炮"
		,"迫击炮"
		,"地面机枪"
		,"机枪塔"
		,"炮塔"
	] call _f; // 002
	[
		 "重坦克"
		,"轻坦克"
		,"火炮"
		,"AT步战车"
		,"AA载具"
		,"武装直升机"
		,"固定翼"
		,"医疗步战车"
		,"运输车"
		,"运输船"
		,"运输步战车"
		,"运输飞机"
		,"战船"
		,"战斗吉普车"
		,"雷达车"
		,"维修卡车"
	] call _f; // 003

	// script count check. Check index with last literal value
	if (_i != 3 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;
};

_bMatch