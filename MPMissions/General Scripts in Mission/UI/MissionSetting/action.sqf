// args: enum
// 0 - var name, 1 - display text, 2 - cfg key, 3 - cfg default value
private [{_ret}, {_proceeded}];
_proceeded = false;
if (0 == _this) then {
	_proceeded = true;
	_ret =  [
		  {boole_ShowAction_TransportEject}
		, {boole_ShowAction_Attach}
		, {boole_ShowAction_AttachLeftRight}
		, {boole_ShowAction_SwitchSeat}
		, {boole_ShowAction_BuildMenu}
		, {boole_ShowAction_SelfMedic}
		, {boole_ShowAction_AirActions}
	];
};
if (1 == _this) then {
	_proceeded = true;

	// cfg_todo: 需要有一个更好的标识来知道当前游戏的 LANGUAGE
	private [{_bChn}];
	_bChn = localize {TZK_LANG_MOVE} == "移动";
	_ret = [
		  if _bChn then {
			["展示 运输/跳车        [OFF]", "展示 运输/跳车         [ON]"]
		} else {
			["Show Transport/Eject [OFF]", "Show Transport/Eject  [ON]"]
		}
		, if _bChn then {
			["展示 Attach (中央)    [OFF]", "展示 Attach (中央)     [ON]"]
		} else {
			["Show Attach          [OFF]", "Show Attach           [ON]"]
		}
		, if _bChn then {
			["展示 Attach (左右)    [OFF]", "展示 Attach (左右)     [ON]"]
		} else {
			["Show Attach L/R      [OFF]", "Show Attach L/R       [ON]"]
		}
		, if _bChn then {
			["展示 切换座位         [OFF]", "展示 切换座位          [ON]"]
		} else {
			["Show SwitchSeat      [OFF]", "Show SwitchSeat       [ON]"]
		}
		, if _bChn then {
			["展示 建造菜单         [OFF]", "展示 建造菜单          [ON]"]
		} else {
			["Show BuildMenu       [OFF]", "Show BuildMenu        [ON]"]
		}
		, if _bChn then {
			["展示 自我医疗         [OFF]", "展示 自我医疗          [ON]"]
		} else {
			["Show SelfMedic       [OFF]", "Show SelfMedic        [ON]"]
		}
		, if _bChn then {
			["展示 飞行单位菜单      [OFF]", "展示 飞行单位菜单       [ON]"]
		} else {
			["Show Air Actions     [OFF]", "Show Air Actions      [ON]"]
		}
	];
};
if (2 == _this) then {
	_proceeded = true;
	_ret = [
		  "Ms_ShowAct_TransportEject"
		, "Ms_ShowAct_Attach"
		, "Ms_ShowAct_AttachLeftRight"
		, "Ms_ShowAct_SwitchSeat"
		, "Ms_ShowAct_BuildMenu"
		, "Ms_ShowAct_SelfMedic"
		, "Ms_ShowAct_AirActions"
	];
};
if (3 == _this) then {
	_proceeded = true;
	_ret = [
		  true
		, true
		, true
		, true
		, true
		, true
		, true
	];
};

if not _proceeded then {
	_ret = [];
	"Invalid param in mission setting effect" call fDebugLog;
};

_ret