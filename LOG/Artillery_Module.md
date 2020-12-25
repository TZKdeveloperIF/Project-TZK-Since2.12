Basing on motion equation of "shotShell"-simulation CfgAmmo class member, artillery module is possible to be designed and introduced into CTI. Since this part is still in developing, its scripts should be placed in mission but not AddOns.

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

