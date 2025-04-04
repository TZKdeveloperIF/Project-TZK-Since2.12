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

	// cfg_todo: ��Ҫ��һ�����õı�ʶ��֪����ǰ��Ϸ�� LANGUAGE
	private [{_bChn}];
	_bChn = localize {TZK_LANG_MOVE} == "�ƶ�";
	_ret = [
		  if _bChn then {
			["չʾ ����/����        [OFF]", "չʾ ����/����         [ON]"]
		} else {
			["Show Transport/Eject [OFF]", "Show Transport/Eject  [ON]"]
		}
		, if _bChn then {
			["չʾ Attach (����)    [OFF]", "չʾ Attach (����)     [ON]"]
		} else {
			["Show Attach          [OFF]", "Show Attach           [ON]"]
		}
		, if _bChn then {
			["չʾ Attach (����)    [OFF]", "չʾ Attach (����)     [ON]"]
		} else {
			["Show Attach L/R      [OFF]", "Show Attach L/R       [ON]"]
		}
		, if _bChn then {
			["չʾ �л���λ         [OFF]", "չʾ �л���λ          [ON]"]
		} else {
			["Show SwitchSeat      [OFF]", "Show SwitchSeat       [ON]"]
		}
		, if _bChn then {
			["չʾ ����˵�         [OFF]", "չʾ ����˵�          [ON]"]
		} else {
			["Show BuildMenu       [OFF]", "Show BuildMenu        [ON]"]
		}
		, if _bChn then {
			["չʾ ����ҽ��         [OFF]", "չʾ ����ҽ��          [ON]"]
		} else {
			["Show SelfMedic       [OFF]", "Show SelfMedic        [ON]"]
		}
		, if _bChn then {
			["չʾ ���е�λ�˵�      [OFF]", "չʾ ���е�λ�˵�       [ON]"]
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