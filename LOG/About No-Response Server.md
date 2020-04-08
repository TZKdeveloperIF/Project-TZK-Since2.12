Having experiment for many times, the author has preliminarily found the reason causing no-response server. It's due to the "portable satchel", defined as class **"PipeBomb_Pistol_xj200"** in **@TZK_2.10\AddOns\TZK_Objects\HPP\CfgWeapons_Infantry_inherit.hpp**. However the author only modified its *magazineType* parameter. It's hard to image why this modification cause the problem. Soldier carrying such a portable mine won't cause this problem. Maybe this is related to "attack", but set the portable satchel's enableAttack as 0 can't solve the problem.  
Thus the author banned this magazine for server units (soldiers belong to AI group that processed by server). In recompense east RPG/AT sniper equipping SVU-A instead of SVD, both of them using same "BulletSniperE" but SVU-A has 20 rounds in a magazine, same as M21.

Vaild experiments related to "no-response"
	+ Less possibility when only 9v9 in v07.
		"no-response" **always** happen and mostly in 60-90 mins. Since all RPG/AT soldiers equipping that satchel, it follows the "no-response" might be a probability event.
	+ Set west, east and resistance friendly to each other, and tank groups doing "TakeHoldTowns" order. No problem appeared.
		+ The author thus guess it's related to EH or writing into array. This is wrong.
	+ Test with stable 2.12L and later version.
		+ Only "crash" but never "no-response".
		+ Use 2.12 MOD to play 2.12L and other version which is made for 2.10 MOD. No problem. MOD thus be excluded.
		+ Problem appeared in 2.12R.
			+ 2.12R decoupled the MOD with most EventHandlers and added the marker of structures. But they're proved irrelevant.
			+ Suspect new weapons introduced by 2.12 MOD. Test M249/RPK74, HyperLauncher, Portable satchel and mines.
				+ Lock the source, the portable satchel.
					+ *However once experiment and excluded portable satchel. This can be explained by "probability event".*
					
Experiments below seems irrelevant with "no-response" problem. Some of them are remained modified and others are recovered no change.
	Too big UnitMatrix and RearmData array size.  
	Too big busy and temporary array size.  
	Somewhere of AI auto supporting.  
	The scritp AI place support vehicle.  
	Ask AICO only buy for the first 9 groups.  
	Cancel the ww4 anims.  
	The new T80_TZK model and the setObjectTexture command.  
	The script of town groups.  
	The function "GetUnitTypeFromObject".  
	Turn SQF to string.  
	Use mutex on ScoreMoney and knowsAbout.  
	Reduce the resistance patrol groups.  
	Introduce the loop instead of some scripts' "goto"(this design is remained. It can improve server FPS partly).  

根据大量的控制变量+实验，初步找到了问题所在。单位携带存放于手枪弹夹的炸药包，会导致问题。即使修改炸药包的enableAttack属性也没有效果，因此在server上要禁止它的使用。作为补偿，east阵营携带狙击枪的步兵，改为使用SVU-A，以保证弹药量充足。

与卡死现象有关的有效测试。
	+ 9v9的卡死频率不高。
		18v18时，常有卡死发生在60-90min的情形。每个单位都持有便携炸药包，因此触发卡死的机制很可能是一个小概率事件，当单位数量不是很多的情形，不容易发生。
	+ 设置三方互相不对战，纯坦克执行TakeHoldTowns命令，发现没有卡死。
		+ 猜测可能是EH，或者新单位往数组执行写入。但其实问题不在于此。
	+ 使用2.12L及之后的一些版本测试。
		+ 只有挂服现象，没有卡死现象。
		+ 使用2.10+2.12的模组，也没有卡死现象。
		+ 2.12R出现了卡死现象。
			+ 2.12R解耦了事件触发器，增加了建筑图标。但实验后认为它们不是原因。
			+ 怀疑问题在于模组更换后的班用机枪、兼容发射筒、增广炸药地雷。大量测试后锁定问题在于增广炸药。
				+ *不过，此前也有一些版本，使用了增广炸药，却没有卡死。*

根据测试，以下设置与卡死现象没有发现明显的关联。它们被不同程度地测试过，有的设置还采用了其它的替代方案，但在发现没有效果之后，它们仍然沿袭之前的设置。
	UnitMatrix、RearmData数组规模过大。  
	busy、temporary数组规模过大。  
	AI执行补给的整个环节。  
	AI的sup单位对城镇配置的判断。  
	AICO只为前9支队伍购买单位。  
	取消ww4动作的使用。  
	坦克模型及setObjectTexture命令。  
	Town Groups脚本的运作。  
	GetUnitTypeFromObject函数的脚本设计。  
	SQF脚本的非scheduler模式。更改为字符串。  
	ScoreMoney矩阵的读取和金钱计算。  
	knowsAbout采用互斥锁。  
	削减RES巡逻组的运算量。  
	将循环脚本更改为传出状态执行新脚本，终止当前脚本（这个机制有助于提升Server FPS，但无法解决卡死问题。主观上它似乎能减少卡死的发生概率）。  