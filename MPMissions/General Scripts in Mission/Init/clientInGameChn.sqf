// args: none
// return: bool (use this languange)

private [{_bMatch}];
_bMatch = call preprocessFile "Util\LangIsChn.sqf";

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
		,"吉普车"
	] call _f; // 001
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

	"仅杀死玩家" call _f; // 004

	"Alt 单击及 Shift-Alt 单击用于 RTS 风格的交互。更多细节可参看笔记本。
	\n\n
	可使用无线电系统。在不同的载具中按下 0-0 可呼出不同的无线电频道。
	\n
	0-0-1 总是用于切换 RTS 地图点击模式。
	\n
	0-0-2 总是用于 TZK 设置界面。" call _f; // 005

	"开启 RTS 单击交互" call _f; // 006
	"关闭 RTS 单击交互" call _f; // 007

	"请选择距离陆地足够近的点" call _f; // 008

	"地雷参数检查" call _f; // 009

	// script count check. Check index with last literal value
	if (_i != 9 + 1) then {
		player globalChat "Script count mismatch!";
	};

	// free extra memory
	TzkInGameText resize _i;
};

_bMatch