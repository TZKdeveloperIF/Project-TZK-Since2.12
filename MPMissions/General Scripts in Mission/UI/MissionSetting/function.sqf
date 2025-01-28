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

	// cfg_todo: ��Ҫ��һ�����õı�ʶ��֪����ǰ��Ϸ�� LANGUAGE
	private [{_bChn}];
	_bChn = localize {TZK_LANG_MOVE} == "�ƶ�";
	_ret = [
		  if _bChn then {
			["���ͼ��չʾ����       [OFF]", "���ͼ��չʾ����        [ON]"]
		} else {
			["Mark Player Name     [OFF]", "Mark Player Name      [ON]"]
		}
		, if _bChn then {
			["��ʾ GPS             [OFF]", "��ʾ GPS              [ON]"]
		} else {
			["Show GPS             [OFF]", "Show GPS              [ON]"]
		}
		, if _bChn then {
			["��ʾ �ʼǱ�           [OFF]", "��ʾ �ʼǱ�            [ON]"]
		} else {
			["Show Pad             [OFF]", "Show Pad              [ON]"]
		}
		, if _bChn then {
			["��ʾ ���ߵ�           [OFF]", "��ʾ ���ߵ�            [ON]"]
		} else {
			["Show Radio           [OFF]", "Show Radio            [ON]"]
		}
		, if _bChn then {
			["�Ʒְ����ص÷�        [OFF]", "�Ʒְ����ص÷�         [ON]"]
		} else {
			["Hide Score           [OFF]", "Hide Score            [ON]"]
		}
		, if _bChn then {
			["����֧�� (�ѷ���)      [OFF]", "����֧�� (�ѷ���)       [ON]"]
		} else {
			["Chinese Language     [OFF]", "Chinese Language      [ON]"]
		}
		, if _bChn then {
			["��λͼ����ʾ����       [OFF]", "��λͼ����ʾ����        [ON]"]
		} else {
			["Show Unit Group      [OFF]", "Show Unit Group       [ON]"]
		}
		, if _bChn then {
			["RTS ����ģʽ         [OFF]", "RTS ����ģʽ          [ON]"]
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