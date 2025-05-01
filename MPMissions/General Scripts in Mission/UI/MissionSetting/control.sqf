// args: enum
// 0 - var name, 1 - display text, 2 - cfg key, 3 - cfg default value
private [{_ret}, {_proceeded}];
_proceeded = false;
if (0 == _this) then {
	_proceeded = true;
	_ret =  [
		  {bool_TZK_Marker_LowFrequency}
		, {bool_TZK_Marker_SQS}
		, {bool_TZK_Marker_Hide}
	];
};
if (1 == _this) then {
	_proceeded = true;

	private [{_bChn}];
	_bChn = call preprocessFile "Util\LangIsChn.sqf";
	_ret = [
		  if _bChn then {
			["图标低频率更新         [OFF]", "图标低频率更新          [ON]"]
		} else {
			["Marker Low Frequency [OFF]", "Marker Low Frequency  [ON]"]
		}
		, if _bChn then {
			["图标以SQS脚本运行      [OFF]", "图标以SQS脚本运行       [ON]"]
		} else {
			["Marker SQS Script    [OFF]", "Marker SQS Script     [ON]"]
		}
		, if _bChn then {
			["不显示图标            [OFF]", "不显示图标             [ON]"]
		} else {
			["Marker Not Dislpay   [OFF]", "Marker Not Dislpay    [ON]"]
		}
	];
};
if (2 == _this) then {
	_proceeded = true;
	_ret = [
		  "Ms_Marker_LowFrequency"
		, "Ms_Marker_SQS"
		, "Ms_Marker_NotDisplay"
	];
};
if (3 == _this) then {
	_proceeded = true;
	_ret = [
		  false
		, false
		, false
	];
};

if not _proceeded then {
	_ret = [];
	"Invalid param in mission setting effect" call fDebugLog;
};

_ret