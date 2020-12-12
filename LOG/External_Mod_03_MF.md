#战斗载具
+ 单位参数不要自作主张修改。按照MF的设置。
	+ 装填速度加成，移动速度加成，etc。
		+ 事实上，TZK也可以往这里靠拢。*为了让更多人喜欢玩。*
	+ **先不要在TZK插件里增加单位。直接在任务里调用MF单位就行了。**
	+ 允许所有席位带雷达。似乎这是大家都喜欢的设计。TZK也可以这么改。
+ **预设一个含pruh的res坦克单位，供涂装变色。**
	+ 事实上所有res单位都可以这么做。pruh，以及accuracy，都需要改造。
+ 设置野战医院，纳入复活可选位置。需要考虑数量限制，参照已有单位。
	+ 需要删除医疗的attendant，及其他可能的transport。
	+ 需要增设回血的UA，以及让AI步兵参与医疗（载具不允许）。
		+ 其实MF的维修Depot可以用作维修站，不过sup功能已经够完善了。
	+ **先使用已有的TZK插件作为MF的补丁，使用原版 MASH 建筑，attendant没有移除。在respawn的机制里做一点调整，并查阅数量限制。**
		+ 数量限制10，参数组 10, 4, 15。


##FPS
需要邀请scorpion测试。为此，需要准备1.99版本。
+ TZK Vanilla仍然存在FPS问题。究竟是什么呢
	+ 也许是2.01的问题。让scorpion帮我测试一下好了。
+ **询问一下，kaoS作者是否仍然活跃中。寻求合作。**

#AI行为
+ AI资源、建筑、智能，按照kaos保留。
	+ TZK也可以参照它修改。


#1.99退化
新增逻辑值 bool_TZK_199_Mode 用于废掉所有2.01的设置。
##mission.sqm
+ ~~~初始化逻辑值
+ 增加marker的定义。
	+ 从2.11任务里copy。~~~
+ ~~~小队长删除allowdammage，调整摆放位置。
+ 增加城镇传感器的定义，并修改任务初始化的方式。~~~
+ ~~~增加无线电的预设频道。
	+ 保留0-0-2无线电。
		+ 任务启动时的提示信息，根据1.99逻辑值显示不同内容。~~~
	~~~	+ 1.99虽然不能动态变更内容，但如果不考虑翻页的需求，则激活无线电后，根据玩家载具来实现不同效果也是可行的。~~~
##命令退化。
+ allowDammage取消，并设置相应的血量保护。
	+ 将脚本从Server目录改动到Common目录，对2.00以下版本启动，使用@复活死亡单位，但单位如果消失则退出脚本。
	+ 覆盖临时组、Join组队长。覆盖CIV。覆盖AA组的临时单位（用它join临时组来销毁组）。
+ 触发器。
	+ 不启动城镇、无线电、结局的trigger创建。在mission.sqm里摆放触发器，并将它和新的脚本连结。
	+ 在无线电刷新里设置逻辑判断和退出。
+ 组创建/销毁。
	+ **暂时不设置TG组、巡逻组数量超出时的处理方式。**
	+ 设置AA组的处理方式。
+ ~~~图标创建、编辑。
	+ 检索图标命令，阻止创造、编辑。
	+ 为hibernate模式，在mission.sqm里补充图标。
	+ target的图标也要补充定义。~~~
+ 字符串操作
	+ 单位重定义。
		+ 无法使用字符串命令，手动修改。
	+ *牵连甚广，最后做。*
		+ 其他操作中编辑过的脚本，能跳过的就跳过。
		+ StringWithoutVersion 函数，对于1.99版本，返回原本的字符串。
		+ GetUnitMarker 函数，从入口处阻止1.99版本对它的调用。
		+ LocalizeString 函数，对1.99版本，设置它直接返回原版的字符串。并删除所有使用 stringtable 的部分。
+ PublicExec, UnitByID, publicVariableString
	+ TheWorld在1.99版本无需启动。
	+ MLRS无需改动。
	+ 为spoof, SwitchMagPreset 设置公共变量和广播脚本（因为涉及物体的广播）。
		+ SwitchMagPreset 牵涉过多2.01命令应用，需要直接设置新的1.99的方案。用枚举的方式匹配弹夹。参看 WeaponValidMags。
###magazinesArray, addMagazinePrecise, ammoarray, GetWeapon Param...
***GetWeapon Param...命令和Vehicle不同，无法创造CfgWeapons对象。一种可行的技巧是创造同名CfgVehicles嵌套类，并设置一些相同的参数，必要时为1.99预备少量。***
+ 步兵slot：步兵无法使用填鸭的方式清空弹夹。怎么办呢？
	+ 为256和32各定义一个清理专用弹夹？
	
+ SQF函数
	+ GetNotEmptyMags
		+ 因为被广泛使用，单独编辑很费劲。考虑到普通的magazines也是可用的，并且 ammo = 0 没有唯一解，故不考虑修补方案，直接在SQF里用逻辑值向1.99返回magazines。
	+ WeaponValidMags
		+ 由于EquipmentTypes里使用预设的方式为**步兵**武器定义可用弹夹，因此使用它来获取validMags。设计另一个SQF来应用这种思路。
			+ ***事实上EquipmentTypes也可以为坦克武器这么定义，思路是相通的。在任务里根据插件内容编写信息，并没有太多难度。***
		+ 将它应用到 GetEQName, CheckRearm 脚本里。
		+ SwitchMagPreset，设置一个1.99的做法，也是通过枚举的形式获取新弹夹的名称，*但无法精确删除旧弹夹，只能移除机枪以外的弹夹，此外，也无法按原有数量补充弹药。*
		+ shoot系列命令，最后处理。
+ magazinesArray
	+ 4xAA射程，坦克弹夹切换，弹夹根据残弹量计算回收费用，		禁止语句生效。
	+ GetNotEmptyMags, SwitchMagPreset，如前所述，分情形设置。
	+ Radio购买第二武器，salvage的费用计算，禁止语句生效。
	+ slotCalculate 用于radio购买，分情形，但是1.99不可能设置合理方案，直接钦点返回值 6。
		+ 反正采用的是“拾取”动作，它和从其他地方拾取弹夹一致，除非身上的弹夹被武器装填了，否则总会无条件放下旧弹夹，拾取新弹夹。
	+ Rearm.sqs 对1.99版本调用checkRearm函数来获取sabot的判定结果。
	+ CheckRearm.sqf函数 分情形使用 magazines+ammo 或 magazinesArray。
+ addMagazinePrecise
	+ 4xAA射程，坦克弹夹切换，弹夹根据残弹量计算回收费用，		禁止语句生效。
	+ shoot系列命令，最后处理。
+ ammoarray
	+ 坦克弹夹切换，		禁止语句生效。
	+ shoot系列命令，最后处理。
###GetWeapon(Sub)Param(Array)命令
+ 坦克sabot、heat切换，直接在orderTemp的发讯机制里通过type阻止启动。
+ WeaponValidMags，见上，对步兵利用EquipmentTypes的定义设置另一个函数。
+ Radio购买武器，和 magazinesArray 等一起，在1.99里被禁止。
+ Equipment Record 记录复活武器、弹夹、弹药量，关于弹药量的部分隐藏——因为弹药量关联弹夹，所以弹夹也隐藏，只设置武器的回收。
+ CheckRearm
	+ 2.01脚本里使用 gun主武器 magazines 参数的第一个弹夹，作为sabot弹夹。这个粗糙的设置可以直接用载具的第一个弹夹替代，而后者是1.99可实现的，参看后文Vehicle Param部分。
		+ *2.01里sabot弹夹的获取，可以通过从弹夹里读取ammo后，计算hit和indirectHit的差值得到。*
+ shoot系列命令，最后处理。
###shoot系列命令。
+ WeaponValidMags, GetNotEmptyMags, GetWeapon, ammoarray, addMagazinePrecise
+ 需要分情形来执行，因为大量应用了2.01命令来控制弹药。
	+ 发射间隔使用 载具type 和 预设常数 来赋值。
		+ 因为没有榴弹炮和火箭炮，坦克直接用8s间隔。
	+ 发射情况使用 ammo 的返回值做粗略的控制。
+ 最后 Rearm 阶段的弹夹速度切换也取消
###GetAmmo/Vehicle Param命令
+ GetAmmo只用于2S6，不会出现在1.99任务里。
+ GetVehicle幸运地没有和GetUnitTypeFrom...重名。
  ***利用camCreate物体、逻辑，移进载具，crew规模判断，来实现席位的判定。因此has乘员、后座容积在1.99里也能实现。***
			+ crew规模是有效的，in命令则无效（需要延时）。
	+ funcGetTranspVol 后座容积判断，用logic计数。
		+ *由于逻辑名不定，存在变量名泄露的风险。*
	+ SwitchSeat.sqs 玩家命令，使用logic获取 HasSeat 参数。
	+ SwitchMagPreset, shoot 系列命令，直接使用logic获取weapons数组。
	+ SlotCalculate.sqf利用填鸭获取weaponsSlot参数。
	+ Graduation.sqs，因为只使用了迫击炮，因此用0作为1.99版本的缺省值。
	
	+ 涉及不出现于1.99任务的脚本，不做追加修改。
###Vector命令
+ Spoof、Attach 对1.99阻止执行
+ Fired Tracer 系列效果，对shell类型直接删除 setVectorDirAndUp 命令的使用。
+ 建筑Up 对1.99阻止执行
	
	
+ NearestObjectDistance
	+ 排雷脚本中使用。用NearestObject替代就是了。
+ allowdammage
	+ 新建一个Common\Command目录，放置一个脚本，统一替代allowdammage命令。
		+ 这个脚本暂时没有设置终止的方案就是了。只有直接删除单位。
+ createShell
	+ LGB和核弹的集束爆炸，改用camCreate产生节省资源的攻击效果。
	+ 删除定制船只，以避免对FiredImitated的修改。
	+ FiredMortar本就是弃置的。
	+ 玩家枪挂Mortar，根据逻辑值走两种方案，1.99不重新生成shell，单纯削减速度。
		+ 事实上因为simulation是shotShell，并没有应用Vector命令的必要性。注释上述分情形讨论的语句，直接强行削减速度。
+ getMass
	+ 用于Attach，原本使用工厂类型判定。现在对于1.99版本，简单粗暴使用countType钦点质量，并设置一个缺省质量（5000kg）。
+ SelectionDammage
	+ 对炮管损毁的2.01特化。取消即可。

#mission.sqm本身的调整
试水性质的任务只需要制作everon，即使要推广也只需在官图制作，因此不需要有负担，直接把图标和触发器弄进来就好。
+ 为任务名称专门定义一个 stringtable 字符串，结合TZK版本和小版本。
	+ 以"@"开头的字符串，似乎只在mission.sqm里可用于从stringtable里调取，其他地方不行。
+ 插件要求。2.01不需要设置的addon，要在1.99里补上。参考以前的任务。
	+ 也即 BIS_Resistance。editorupdate102就不加了。等弹窗报错再说。
	+ *要加入mfcti116的插件要求。*
+ 无线电有点奇怪。
	+ 应该是盗版程序的缘故。用正版就ok了。
+ 刻度setobjecttexture效果，2.01似乎优化了。
	+ ***试验后发现，问题应该在预加载贴图的face尺寸太小。放大一些就好。***
	+ *不过2.01对此的优化仍然是客观存在的。*
+ **医院的图片尺寸要2：1。以后补上。**


#任务设计吸收
+ 直接从MFCTI插件里调用单位。
	+ 修改定价、名称、图片、建造时间。
	+ 删除附加脚本（多为equip）。
	+ 覆盖坦克和步兵车类型。但仍然保留一些TZK的步兵车。
+ 建筑调整。
	+ 为避免对字符串命令的使用，在最初就用逻辑值来设置图片路径，而非在定义完毕后修改。
	+ 增加Hospital的定义，side设为-1，在1.99逻辑值下重置side。**最好在插件里追加一个定义，删除attendant，另外再补一张2:1图片，用于建筑列表的显示，目前使用医疗车的红十字。**
	+ 用MF插件里的墙改动wall的定义。
	+ 使用逻辑值决定启动哪一种基地建设方案。
+ 出生地
	+ 对于1.99任务，参数框1如果选择了随机，则按照真随机模式生成。
+ AICO行为逻辑
	+ MF的建筑方案没有设置sec建筑，为了和后续版本统一，需要补上空数组元素的初始化。
	+ 购买方案使用CR后续版本的mixed方案。有必要改动时，再向0.93靠拢。
		+ 购买不走CR的buy脚本，直接在CMD脚本里改良。
		+ factoryType现在要解码，然后随机挑选。如果没有合适的type（这是可能的，当type设置为-1时），则不执行购买。
	+ 检索SQF函数并规范化。
	+ AiCO的命令逻辑很简单，修正一下语法就好。
	+ AICO自队伍的片段取消，用后续CR的模式替代。
		+ *gunMatrix 用于AICO守家。由于MF也只设置了2个机枪塔，不管它也无所谓。*
	+ 允许1.99版本的AI持有AI队伍数量的资金收入比率。简单来说就是玩家每人10%收入。
	+ 末尾增加MHQ的维修操作。
+ 初始资金
	+ 玩家2000，AICO时40000，然后追加建筑差价，最终定价57500。
	+ 纯AI阵营的资金将×1.5。
+ 可控队伍
	+ *如果双方只保留9队，需要处理未关闭的AI队伍。*
+ 其他细节。
	+ Rearm调整
		+ 追加进度显示。
		+ 1.99里不设置30s以上的rearm时间。
	+ Repair的进度显示。
		+ 屏幕中央显示，使用了titleText。它也可用于rearm，和say不同，可以凭空显示文本。
		+ 改用plane down，并修改设计的细节。
	+ 为Mortar追加81mm的曳光弹。
	
	
+ radio效果改为local
  这个触发器是local to server的，每个玩家都可以激活，而效果则由server统一产生。
  没有办法把caller挑选出来，因为发讯虽然是玩家，但收讯并激活radio的是server，这个环节中没有办法得知caller，而后续的radio则由server广播，caller没有特殊性。
	+ 在Options里设置一个1.99才会显示、高亮的按钮，控制无线电的使用。
		+ InitClient里初始化一个逻辑变量，用于控制。
		+ Options按钮可用于切换逻辑，并弹处提示信息。
		+ 本想设置0-0-6频道在船以外的地方负责关闭广播，但因为它具有全局的效果，会影响其他人的逻辑值，故放弃。
	+ ***另外，可以用 【序号】 setRadioMsg 【string】来修改标题。和2.01相似的做法可以实现列表的刷新。***
		+ 需要切换ON/OFF文本的操作，在1.99里，通过操作本身执行触发式刷新。
		+ civ索性隐藏quit按钮。
	
+ 在 dynamic marker 创建时，初始化了一些全局变量。它们需要提前到 bool_TZK_199_Mode 的判定之前。

+ 增加基建内容。工人数增加到10个，AICO的钱因而要增加8500。
	+ 调整建筑顺序，HF提前。
	+ 将2个 MG fort 替换为Mortar，初始资金再追加9000。
	+ 2个MG fort放到基地两侧，参考wall的坐标，x再追加20。
	+ 40min机场建造后，追加HeliH的建造。
+ 199任务允许玩家建造HF和机场。
+ 将 G36a 和 Remigton 开放给双方。隐藏AK107的购买入口。

+ BRDM单位修复。
+ 初始资金bug修复（主要是针对2个side的初始化，经常只记得处理其中一处。因而对其执行简并）。
	+ 对Income脚本的计算也执行简并。另外，将浮点数计算的bug一起修复。
+ 收入比率设置。按照每个玩家10%的规律，设置AI指挥官收入为相反的比率。同时，限制玩家数最大值为9，也即AICO至少有10%的收入。

+ 将MFCTI单位的武器纳入效果脚本。

+ AI科技升级正常。但是建筑有点问题。科技升级顺位无条件高于建筑的样子。
+ **整合插件。使用rmf的速度、雷达，但是武器和装甲使用mf的。**

+ 放弃0.93的AI逻辑，使用CR的。没有太多本质区别。购买方案修改，购买逻辑不修改。指挥官占据家附近防御建筑，以后结合occupy对玩家不存在的阵营生效。
	+ 参照sec建筑群，设置prim建筑的建造方式。由于目前prim建筑使用的是“替换”，因此没法做到补充损毁单位，但可以做到保证跳过的建筑之后会被补完。
	+ 坐标要调整，否则它们会因为碰撞而导致损毁。
	+ 对1.99任务，放弃AI指挥官进入sup维修基地的操作。似乎存在锁死的可能性，故暂时直接放弃。


##单位记录
+ MFCTI116M2A2
	+ MHQ，基本M2A2
+ MFCTI116M3A2
	+ M3A2
+ MFCTI116M60
	+ M60, M60A3（mf没区别，rmf有区别）
+ MFCTI116M1
	+ 3000 M1
+ MFCTI116M1A1
	+ 4000 M1A1
+ MFCTI116Vulcan
	+ Vulcan
+ "OH58 FFAR"
	+ $10000, original OH58
+ MFCTI116UH60
	+ $15000 Rocket, $5000 MG
+ MFCTI116AH64AA
坦克为主，飞机不用很在意。以scorpion的评价为主导。
+ MFCTI116BMP1，1000，BMP
+ MFCTI116BMP2，1300，BMP2
+ MFCTI116BMP2E，1500，BMP2E

+ MFCTI116T72，1700，T72
+ MFCTI116T72A，1900，T72A
+ MFCTI116T72B，2200，T72B

+ MFCTI116T80，2600，T80
+ MFCTI116T80B，3000，T80B
+ MFCTI116T80U，3400，T80U
+ resTanks[]
	+ 很奇怪，它使用的是原版的单位。但为什么摧毁的时候没有发黑呢？
###rmfcti
或许是服务器上没有使用 rMFCTI 的缘故。服务器上单位攻击T80U的时候，BMP一发打掉18%的血量，但自己打自己就很硬。看起来像是插件不一致的缘故。
从移动速度来看，或许速度使用的是r版。
+ **需要联系并求证。主要是关于速度和装甲，PVP和PVE时是否感到装甲不同。以及可能的火炮威力不同。**
	+ 向scorpion和rifle求证。
+ 目前采用改进后的速度，但装甲采用较弱的（R版的血量高得夸张）。
+ 另外，设计配套的TZK单位，兼具MF的特色及TZK的平衡。MF单位必须原样移植，不加私货。

##武器设置
如果设置 indirectHitRange = 0; 则子弹的威力纯粹由 hit - indirectHit 决定。但如果 indirectHitRange 非零，则它会对hit提供一些加成。
分析的方法很简单，将 indirectHitRange 设为0后，查阅它的威力，从而分离两个部分，再慢慢调整即可。