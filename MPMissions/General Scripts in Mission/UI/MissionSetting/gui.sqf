// args: enum
// 0 - var name, 1 - display text, 2 - cfg key, 3 - cfg default value
private [{_ret}, {_proceeded}];
_proceeded = false;
if (0 == _this) then {
	_proceeded = true;
	_ret =  [
		  {bool_TZK_DarkSkin}
	];
};
if (1 == _this) then {
	_proceeded = true;

	private [{_bChn}];
	_bChn = call preprocessFile "Util\LangIsChn.sqf";
	_ret = [
		  if _bChn then {
			["对话框深色风格        [OFF]", "对话框深色风格         [ON]"]
		} else {
			["GUI Dark Skin        [OFF]", "GUI Dark Skin         [ON]"]
		}
	];
};
if (2 == _this) then {
	_proceeded = true;
	_ret = [
		  "Ms_Gui_DarkSkin"
	];
};
if (3 == _this) then {
	_proceeded = true;
	_ret = [
		  false
	];
};

if not _proceeded then {
	_ret = [];
	"Invalid param in mission setting effect" call fDebugLog;
};

_ret