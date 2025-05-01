// args: enum
// 0 - var name, 1 - display text, 2 - cfg key, 3 - cfg default value
private [{_ret}, {_proceeded}];
_proceeded = false;
if (0 == _this) then {
	_proceeded = true;
	_ret =  [
		  {boole_Local_Bullet_Tracer}
		, {boole_Global_Bullet_Tracer}
		, {boole_Local_Cannon_Tracer}
		, {boole_Global_Cannon_Tracer}
		, {boole_Local_Shell_Tracer}
		, {boole_Global_Shell_Tracer}
		, {boole_Dead_Tank_Burning}
		, {boole_Nuclear_Effect}
		, {boole_Rocket_Impact}
		, {boole_Rocket_Launch}
	];
};
if (1 == _this) then {
	_proceeded = true;

	private [{_bChn}];
	_bChn = call preprocessFile "Util\LangIsChn.sqf";
	_ret = [
		if _bChn then {
			["本队机枪落点烟尘       [OFF]", "本队机枪落点烟尘        [ON]"]
		} else {
			["Local  MG Smoke      [OFF]", "Local  MG Smoke       [ON]"]
		}
		, if _bChn then {
			["联网机枪落点烟尘       [OFF]", "联网机枪落点烟尘        [ON]"]
		} else {
			["Global MG Smoke      [OFF]", "Global MG Smoke       [ON]"]
		}
		, if _bChn then {
			["本地机炮曳光弹效果     [OFF]", "本地机炮曳光弹效果      [ON]"]
		} else {
			["Local  Cannon Tracer [OFF]", "Local  Cannon Tracer  [ON]"]
		}
		, if _bChn then {
			["联网机炮曳光弹效果     [OFF]", "联网机炮曳光弹效果      [ON]"]
		} else {
			["Global Cannon Tracer [OFF]", "Global Cannon Tracer  [ON]"]
		}
		, if _bChn then {
			["本地炮弹曳光弹效果     [OFF]", "本地炮弹曳光弹效果      [ON]"]
		} else {
			["Local  Shell  Tracer [OFF]", "Local  Shell  Tracer  [ON]"]
		}
		, if _bChn then {
			["联网炮弹曳光弹效果     [OFF]", "联网炮弹曳光弹效果      [ON]"]
		} else {
			["Global Shell  Tracer [OFF]", "Global Shell  Tracer  [ON]"]
		}

		, if _bChn then {
			["死亡坦克燃烧效果       [OFF]", "死亡坦克燃烧效果        [ON]"]
		} else {
			["Dead Tank Burning    [OFF]", "Dead Tank Burning     [ON]"]
		}
		, if _bChn then {
			["核弹蘑菇云效果        [OFF]", "核弹蘑菇云效果         [ON]"]
		} else {
			["Nuclear Effect       [OFF]", "Nuclear Effect        [ON]"]
		}
		, if _bChn then {
			["多管火箭炮蘑菇云效果   [OFF]", "多管火箭炮蘑菇云效果    [ON]"]
		} else {
			["Rocket Impact Effect [OFF]", "Rocket Impact Effect  [ON]"]
		}
		, if _bChn then {
			["多管火箭炮发射烟       [OFF]", "多管火箭炮发射烟        [ON]"]
		} else {
			["Rocket Launch Smoke  [OFF]", "Rocket Launch Smoke   [ON]"]
		}
	];
};
if (2 == _this) then {
	_proceeded = true;
	_ret = [
		  "Ms_LocalBulletSmoke"
		, "Ms_GlobalBulletSmoke"
		, "Ms_LocalCannonTracer"
		, "Ms_GlobalCannonTracer"
		, "Ms_LocalShellTracer"
		, "Ms_GlobalShellTracer"
		, "Ms_DeadTankBurn"
		, "Ms_NuclearEffect"
		, "Ms_RocketImpact"
		, "Ms_RocketLaunchSmoke"
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