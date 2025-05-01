// args: enum
// 0 - var name, 1 - display text, 2 - cfg key, 3 - cfg default value
private [{_ret}, {_proceeded}];
_proceeded = false;
if (0 == _this) then {
	_proceeded = true;
	_ret =  [
		  {bool_TZK_Music}
	];
};
if (1 == _this) then {
	_proceeded = true;

	private [{_bChn}];
	_bChn = call preprocessFile "Util\LangIsChn.sqf";
	_ret = [
		  if _bChn then {
			["≤•∑≈“Ù¿÷             [OFF]", "≤•∑≈“Ù¿÷              [ON]"]
		} else {
			["Play Music           [OFF]", "Play Music            [ON]"]
		}
	];
};
if (2 == _this) then {
	_proceeded = true;
	_ret = [
		  "Ms_Env_PlayMusic"
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