// args: enum
// 0 - var name, 1 - display text, 2 - cfg key, 3 - cfg default value
private [{_ret}, {_proceeded}];
_proceeded = false;
if (0 == _this) then {
	_proceeded = true;
	_ret =  [
		  {boole_Mark_Player_Name}
		, {boole_Show_GPS}
		, {boole_Show_Pad}
		, {bool_Show_Radio}
		, {bool_TZK_Hide_Score}
		, {bool_TZK_CHN_Lang}
		, {bool_TZK_Show_UnitGrp}
		, {bool_TZK_Rts_Cmd_Mode}
	];
};
if (1 == _this) then {
	_proceeded = true;

	// cfg_todo: 需要有一个更好的标识来知道当前游戏的 LANGUAGE
	private [{_bChn}];
	_bChn = localize {TZK_LANG_MOVE} == "移动";
	_ret = [
		  if _bChn then {
			["玩家图标展示姓名       [OFF]", "玩家图标展示姓名        [ON]"]
		} else {
			["Mark Player Name     [OFF]", "Mark Player Name      [ON]"]
		}
		, if _bChn then {
			["显示 GPS             [OFF]", "显示 GPS              [ON]"]
		} else {
			["Show GPS             [OFF]", "Show GPS              [ON]"]
		}
		, if _bChn then {
			["显示 笔记本           [OFF]", "显示 笔记本            [ON]"]
		} else {
			["Show Pad             [OFF]", "Show Pad              [ON]"]
		}
		, if _bChn then {
			["显示 无线电           [OFF]", "显示 无线电            [ON]"]
		} else {
			["Show Radio           [OFF]", "Show Radio            [ON]"]
		}
		, if _bChn then {
			["计分榜隐藏得分        [OFF]", "计分榜隐藏得分         [ON]"]
		} else {
			["Hide Score           [OFF]", "Hide Score            [ON]"]
		}
		, if _bChn then {
			["汉语支持 (已废弃)      [OFF]", "汉语支持 (已废弃)       [ON]"]
		} else {
			["Chinese Language     [OFF]", "Chinese Language      [ON]"]
		}
		, if _bChn then {
			["单位图标显示队名       [OFF]", "单位图标显示队名        [ON]"]
		} else {
			["Show Unit Group      [OFF]", "Show Unit Group       [ON]"]
		}
		, if _bChn then {
			["RTS 命令模式         [OFF]", "RTS 命令模式          [ON]"]
		} else {
			["RTS Commanding Mode  [OFF]", "RTS Commanding Mode   [ON]"]
		}
	];
};
if (2 == _this) then {
	_proceeded = true;
	_ret = [
		  "Ms_MarkPlayerName"
		, "Ms_ShowGps"
		, "Ms_ShowPad"
		, "Ms_ShowRadio"
		, "Ms_HideScore"
		, "Ms_ChnLang"
		, "Ms_ShowUnitGroup"
		, "RtsCmdMode"
	];
};
if (3 == _this) then {
	_proceeded = true;
	_ret = [
		  true
		, false
		, true
		, false
		, false
		, false
		, false
		, false
	];
};

if not _proceeded then {
	_ret = [];
	"Invalid param in mission setting effect" call fDebugLog;
};

_ret