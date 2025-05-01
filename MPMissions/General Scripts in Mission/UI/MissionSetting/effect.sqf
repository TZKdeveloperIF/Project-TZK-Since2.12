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
			["���ӻ�ǹ����̳�       [OFF]", "���ӻ�ǹ����̳�        [ON]"]
		} else {
			["Local  MG Smoke      [OFF]", "Local  MG Smoke       [ON]"]
		}
		, if _bChn then {
			["������ǹ����̳�       [OFF]", "������ǹ����̳�        [ON]"]
		} else {
			["Global MG Smoke      [OFF]", "Global MG Smoke       [ON]"]
		}
		, if _bChn then {
			["���ػ���ҷ�ⵯЧ��     [OFF]", "���ػ���ҷ�ⵯЧ��      [ON]"]
		} else {
			["Local  Cannon Tracer [OFF]", "Local  Cannon Tracer  [ON]"]
		}
		, if _bChn then {
			["��������ҷ�ⵯЧ��     [OFF]", "��������ҷ�ⵯЧ��      [ON]"]
		} else {
			["Global Cannon Tracer [OFF]", "Global Cannon Tracer  [ON]"]
		}
		, if _bChn then {
			["�����ڵ�ҷ�ⵯЧ��     [OFF]", "�����ڵ�ҷ�ⵯЧ��      [ON]"]
		} else {
			["Local  Shell  Tracer [OFF]", "Local  Shell  Tracer  [ON]"]
		}
		, if _bChn then {
			["�����ڵ�ҷ�ⵯЧ��     [OFF]", "�����ڵ�ҷ�ⵯЧ��      [ON]"]
		} else {
			["Global Shell  Tracer [OFF]", "Global Shell  Tracer  [ON]"]
		}

		, if _bChn then {
			["����̹��ȼ��Ч��       [OFF]", "����̹��ȼ��Ч��        [ON]"]
		} else {
			["Dead Tank Burning    [OFF]", "Dead Tank Burning     [ON]"]
		}
		, if _bChn then {
			["�˵�Ģ����Ч��        [OFF]", "�˵�Ģ����Ч��         [ON]"]
		} else {
			["Nuclear Effect       [OFF]", "Nuclear Effect        [ON]"]
		}
		, if _bChn then {
			["��ܻ����Ģ����Ч��   [OFF]", "��ܻ����Ģ����Ч��    [ON]"]
		} else {
			["Rocket Impact Effect [OFF]", "Rocket Impact Effect  [ON]"]
		}
		, if _bChn then {
			["��ܻ���ڷ�����       [OFF]", "��ܻ���ڷ�����        [ON]"]
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