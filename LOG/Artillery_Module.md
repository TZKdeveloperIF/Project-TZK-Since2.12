Basing on motion equation of "shotShell"-simulation CfgAmmo class member, artillery module is possible to be designed and introduced into CTI. Since this part is still in developing, its scripts should be placed in mission but not AddOns.

##4.0.5.05
+ 增加高仰角发射art的选项。这需要用一个浮空的target来指示目标，而且还要求target没有geometry。
	+ 目标选择为 target_tzk，heliH物体的坐标变更无法被响应，老问题了。
	+ 高仰角发射，预设初始角度为60°。
		+ 士兵直接钦点60°，载具在60°的位置上放置目标。
	+ 迭代方式修改。使用特别的EH，其中调用特别的SQF。
		+ 只对朝上射击情形中，distX在range1左边的2种情形设置新的sqf脚本。
			+ 目的是让range1命中目标，为此调用改进的 RK4_Range_H 脚本，迭代1次速度，迭代1次角度，然后迭代速度。
			+ 迭代速度总是有解的，且收敛速度很快; 如果迭代角度，初速度不合适时未必有解；之后迭代1次角度，修正一下仰角，虽然意义不大。最后迭代速度到收敛为止。
	+ 已在玩家队伍命令、TD、步兵/迫击炮对山地攻击的测试里通过。
		+ shootTarget启动脚本里，对于调用 tank 脚本的情形，如果判定为坦克，要阻止大角度射击，即 _biggerAngle 赋值为 0.
	+ 将大仰角射击拓展到server单位。由于参数个数的限制，新增一个命令。它通过一个简单的脚本追加 _biggerAngle 参数到参数列表里，然后启动shoot target命令。
+ 将KA机制应用到SE TD的Server射击命令上。其target同样在第一次被set时要改用createVehicle来创建。
	+ 测试通过。需注意server上target的名字要调整，也因此format同样要调整（代码里包含等号时，左端不可以是call的返回值，因为是右值。要统一用一个字符串表述代码并call）
	+ 远端KA有效性通过。为我购买的直升机，其KA对AI队伍的脚本有效。并且，原地出厂的直升机，KA只能达到2左右，3.5的阈值仍然需要单位靠近。

##4.0.5.04
+ In Common\Msg\hRearmVeh the howitzer is handled in "deploy". But M109 paladin in SE shouldn't be handled in this way.
+ 保留原始的camCreate初始化target方式，于target被调用时将它变成global可探测物体。
  这么做是为了利用其他友方队伍的knowsAbout来辅助判定是否可以对目标执行发射。相当于在Art模块里使用战争迷雾。目前仅对SE的TD单位实装。
	+ 当第一次设置坐标时，删除原物体，用createVehicle重新创造一个物体，它可以被remote队伍探知，local client上可以计算这个ka值。
		+ 用一个整数和位操作记录目标是否被“createVehicle”了。于set target生效时执行检测。
	+ 另一种做法是利用camCreate的物体可以被remote队伍感知，但似乎需要依赖于reveal命令。结算方式和普通的KA机制相似。
		*由于不确定拉开距离后的发现效果如何，因此选择createVehicle的方法。*
	+ 射击脚本遍历队伍获取ka值，宜对单个目标以较低频率执行（例如2min检测一次），而本队的ka值则每次发射执行。

##4.0.5.03
+ Add isNull check in Fired_ReviseShellDir.sqs. Make sure script working on actual shell.
	+ **测试向上发射的情形，用手雷，初速度低。**
+ 调整 Fired_Revise_Angle_Case_11_001 脚本。
	+ 这个脚本表示r1无法抵达distX，但是轨迹高度本身是能够达到目标高度的。此时用 RK4_X_Y 是不妥的，x不一定能够达到distX。
		+ 应该用 RK4_Range_H 获取 range1 。
	+ 调整 RK4_Range_H.sqf
		+ 作为返回值的 _boolH 在最后才被赋值。因此在循环中借用它作为“range0检测”的判断条件，当获取range0后赋值false，使得后续循环不再检查range0条件。
		+ 对于上述 Fired_Revise_Angle_Case_11_001 脚本，因为确定range1是能够达到的（高度足够），并且打算正向迭代初速度，因此无需测试range0，故 _boolH 纳入默认参数列表。

+ Add group chat message in SE TD scripts of player order. Add reveal command in each 2 minutes. This is prepared for "high elevation angle".
	+ The threshold "3" is proper.

##4.0.5.02
+ Adjust soldier scripts. 
	+ Soldiers are easier to hurt themselves than vehicles, so they need better assigned attack position, and script should always use this positions.
		+ Always ask soldier move to ordered position even though they're closed enough there.
	+ When go rearm, they'll search nearest support vehicle, ammo jeep, ammo crate or barrack.
+ Adjust the way script use "attack CO waypoint" and "radius" parameter.
	+ In old version only tank script applied these 2 parameters.
	+ Add distance check in struct script. Structure must within radius range of CO waypoint otherwise script will exit.
	+ Add distance check in soldier script. 
		+ If soldier too far away from CO point (512 meters, 4 grid) or CO too far away from target, script will exit.
		+ Soldier will be asked to move to CO first, then start shooting or get close to target.
		+ 粗略地测试了。
+ Art的建筑规避判定sqf脚本，并不进行alive的检测，对损毁但没有消失的建筑也有效。
+ 为SE的TD增加shoot target命令（AI）
	+ 在SE的extra脚本里增加 types_SE_td 数组
	+ ShootTarget里用局部变量指代榴弹炮type数组，se模式增加数组范围。
	+ shoottank 脚本里增加判定，属于 types_SE_td 数组的单位跳转到extra脚本。
		+ shoot_td脚本里删除冗余的内容，删除reveal命令，使用knowsAbout，以3为阈值。
		+ 指定TZK的Gun155武器，如果初始状态未赋予Gun155，则自动添加武器及120m/s的弹夹。也即，并不允许直接使用TD的400m/s弹夹射击。
		+ 脚本原始设置恰好使得shoot执行中切换回td的原始弹夹时，命令终止。
	+ 需要为SE的td增加switchMagazine命令的内容。
		+ impl\ai_order_server里修改命令脚本的路径，指向extra目录。
		+ 参数类型里增加SE TD。
		+ 速度类型末尾增加 "Recover TD"
			+ **这会影响到玩家队伍命令界面，要处理**
		+ 增加一个专门的脚本处理SE TD，在原有脚本里设置跳转。
+ 为SE的TD增加shoot target命令（玩家）
	+ 参照AI脚本，设置玩家的弹夹切换脚本与命令。

##4.0.5.00
+ Set new power of mortar 81mm: hit = 0; indirectHit = 40; indirectHitRange = 10;
	+ Quite weak. This is aim to reduce the influence of mortar when attacking tank. 
+ Prepare another weapon/magazine for this mrotar 81mm ammo.
	+ For directly shoot magazines (initSpeed = 200), no longer range difference.
+ Add PP89 (CHN) mortar model as east 82mm mortar structure.
+ The available maximum initSpeed of mortar structure is 120m/s.
	+ *It's optional to set minimum initSpeed of Howitzer Vehicles more than 120 to limit their trajectory. This can be done later in radio/order scripts in the mission.*
+ Allow M252/PP89/M119/D30A "canfloat" to fit "attach" system.
	+ Adjust the "armor" attribute of these structures to make soldiers shooting at them with rifle.
	+ Adjust the position of "zarmeny" in their models to make gunner easier to be killed.
+ Adjust the *structure avoiding* design. Threshold raised to 50 meters and provide another SQF file to search enemy objects only in *structsCritcal*.

##4.0.4.07
+ Rename the upgrade of "Trace Special Shell" as "Trace Artillery Shell".
+ Decouple artillery module scripts with addons.
	+ Entrance of orders (of player/server), EH of Common\EH\Fired_ReviseShellDir, SQF of RK4.
+ Add Soldier order for AI groups.
+ Adjust controlling mode of soldier scripts.
	+ Control throw/mortar scripts via magazine counts. 
		+ Using loop to wait its magazine loaded (except for 1 mag case). In the loop death/order updating should be checked.
		+ Rearm check should be contained in loop too, since "fire" will cost time for it requires animation of soldier.
		+ This design is invalid to grenade launcher since MM1/6G30/"Vest" has many ammunition in their magazine.
	+ Add delay time for GL launcher.
	+ Allow soldier rearm at their side barrack structure.
+ Raise price of mm1/6g30 magazine ($5 per grenade and extra $10 for rapid reload).
+ Add distance limit on mortar structure. 800 meters.
	+ ***Later in 4.0.5 the maximum initSpeed of mortar structure called by radio channel should be 120 but not 180. Done. ***
+ Add structure avoiding in mortar structure and howitzer (structure/vehicle). Still allow tank, MLRS and soldier attack structure directly.
	+ Ask script seek for another target position if target is close to enemy structure (40 meters).
+ Allow mortar/howitzer structure able to be attach.

