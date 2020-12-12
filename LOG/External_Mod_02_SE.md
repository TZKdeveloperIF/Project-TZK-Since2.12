
##4.0.5.00
+ Check external unit redefinition.
	+ Merged new soldier model redefine.
	+ Provides new helicopter redefine contents.
	+ Use new howitzers and prepare howitzer implement.

#@TZK_4.0.5
+ Provide TZKSE_CONFIG_4_0_5 as additional CONFIG pbo. It requires TZK_Object of 4.0.3 and TZK_CONFIG_4_0_4, but not TZK_CONFIG_4_0_5 (didn't use anything of TZK_CONFIG_4_0_5).
+ 为SE提供备选的 M109 和 2S19。
	+ 更换它们的瞄具贴图，为它们增加刻度（只需要根据弹夹初速度 400m/s 生成一套贴图足以，放在SE_CONFIG里），检查旋转问题，追加仪表盘定义，调整driver的高度。
	+ 移植2S19的TZK2定义，继承自TZK4的抽象类。禁止炮手和指挥官以第一人称旋转，表现ok。
		+ gunnerView坐标{0.731, 0.713, 0.127}，炮管倾角0，终端坐标{x, 0.136, -5.551}，炮轴坐标{x, 0.130, 0.431}。
			+ 将炮轴高度提升到0.136。轴到视点的坐标差为{x, 0.577, z}。取刻度的半径为3，则刻度0到轴的z坐标差为-2.944，角度为11.088°。坐标宜为{0.731, 0.713, -2.607}。
			+ gunnerView在大仰角时会被车体挡住。需要将它的z前移。几何关系上，不用担心这个操作导致问题，且刻度绘制时已预留足够大的半径。
		+ geometry的性质已检查，无封闭和突起的异常。
		+ 增加Gunner界面的炮管显示。
		+ 座舱基本上是复制east坦克的，而仪表有问题。因此直接从T72里复制3个指针（T72里按selection选取后，要按住ctrl再选取一次。应该是解密时带出来的问题），粘贴到2S19并移位。
			+ 2S19在config里对表盘的定义全部注释。
		+ driver的第一人称视角OK。应该没有其他楼栋。
	+ M109直接从SE的coc_arty的CONFIG定义中派生一个备选项。为它提供一个新的模型及派生Art类。
		+ M109的顶部face似乎挺错乱的，不过不是大问题，不予处理。旋转没有异常。
		+ 缺失贴图成功处理。贴图放在 TZK_SE_CONFIG_4_0_5 里。
		+ geometry已处理。
		+ 简陋载具没有仪表，不用担心。
		+ 炮管伸缩效果追加。
		+ gunnerView坐标{0.196, -0.192, 2.756}，炮管倾角0，终端坐标{x, -0.491, -7.174}，炮轴坐标{x, -0.490, 3.139}。
			+ 将炮轴和gunenrView的百分位以下改成91，gunnerView的z后退到2.785。轴到视点的坐标差为{x, 0.3, z}。取刻度的半径为3，则刻度0到轴的z坐标差为-2.985，角度为5.732°。坐标宜为{0.196, -0.191, -0.2}。
			+ gunnerView的z坐标减少0.5米，理由同 2S19。





#Init.sqs
旗帜和sides数组要更改
推进喷射科技被注释。TZK里，将它的金钱、时间都改成0，因为其type用于switch。
购买方案增加 "Heavy AT-Infantry", "HMMWV/BRDM Mixed", "HMMWV/BRDM-AT", "Challenger2/T90MS", "Tank Destroyers", "Armor-Heavy and TD", "T72/M60 and TD", "AMX-10RC/BMP3", 
InitFunctions里增加函数 funcGetNearbyVehiclesEmpty，它用于 SE 的城防炮。
#mission.sqm
**增加插件, auto插件要求，增加NT说明. =[T.O.S]=. Neutral Towns";**
**LeaderW_xj200 修改为 DVDUS_SoldierWSL （UA如何定义？） DVDUS_SoldierWOff 指挥官
**LeaderE_xj200 icp_infakm， icp_infofficer 指挥官
可玩队伍数量略有不同。城内UZAG单位通过InitUnitTypes添加。
传感器半径为100米（TZK为10），脚本名仍为 Server\UpdateTown.sqs 
+ 生成触发器的脚本设置半径变量，对SE使用100米。
+ Start脚本增加SE的白色RES旗帜设置，并且进入Extra的循环脚本。它额外使用2个side变量，因此增加启动的参数列表。
+ 延时频率提升。为减少负担，改为5秒检测1次
+ 用于广播的脚本也要调整。

#Image目录
增加Javelin的图片，但没有被使用。
#Equip
增加Javelin, RPG29武器（已完成）
#Struct
增加3个防御建筑（已完成）
#UnitTypes
west增加标枪步兵、Jeep机枪、M19悍马、复仇者AA、AMX10轮式突击炮，飓风Zodiac、巡逻艇，挑战者。
East加入RPG29、UAZ机枪，改良BRDM，船只，BMP3。
RES增加nona。
城镇单位增加防御AT塔和标枪士兵
LF追加运输机
HF追加突击炮、bmp3，主战坦克不做调整，只隐藏M1A2, T90ms而加入挑战者，mfm的T90。
AF修改全部固定翼，不增加RAH66。
城防单位增加Jav士兵和armorTD数组。ArmorTown数组增加防御炮。

修改步兵、步战车的udModel

TG脚本需要改写。从Start脚本启动时，根据SE逻辑值，进入SE的脚本。
+ 增加主循环、Update片段，增加take flag的10秒延迟，注释hibernate的进入。调整循环脚本的名称。
+ RES的主循环无需兼用防御炮逻辑。只需要将armorTown改成armorTownTD就行。

购买方案需要改写并匹配 InitAIOptions.sqs
新增单位需要匹配type和功能性数组，这需要strangelove自己处理。



+ 确保应用find的type定义没有疏漏。
	+ ***做个大胆的尝试。基于 UnitDefs 而初始化的 unitTypeArray，可以在定义完毕后重新遍历一边，不需要每个单位定义一次。而且，也适用于其他mod在重定义后统一设置查找，无需手动检查。***
+ 检查新增单位的st定义，type定义（缺失和重名）

+ 检查脚本。
	+ Equip脚本调整完毕。
	+ Action EntrenchTank.sqs
		+ InitStructureTypes 里，为SE模式增加全局变量，用于trench的建造。

#Player
少量图片，应该没有用途。