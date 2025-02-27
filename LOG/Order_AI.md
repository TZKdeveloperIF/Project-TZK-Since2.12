Recording the updating of commanding AI groups. Order, orderTemp and settings of AI groups are recorded here.
# Plan
+ Make busy/temporary array remove elements without passing it since they're not small array.
## 4.0.5.14
+ Adjust the eject distance of Transport Duty.
+ Add force engine off in AI transport duty script.
+ Add "Repair" and "Rearm" button in Unit Cam.
## 4.0.5.09
+ Add 2 extra type parameters for "disengage type" concurrent order.
+ Add "Move Unit" in "AI Strat"

## 4.0.5.08
+ Triple "duration" for reclaim and occupy order to make soldiers stay 30 mins at most in base for available vehicle/structure.
+ Add reclaim and occupy as lv0 status, add disengage, spoof missile, flight altitude, switch sabot/heat, switch magazine as lv1, move, hold town, shoot, transport as lv4.

## 4.0.5.05
+ Group Initial Concurrent Status
  If temporary order isn't considered, units of a group will execute the group's order after finished rally point and pickup. It'll certainly be more convenient if units automatically execute concurrent orders as well. 
	+ AI_Start
	  This script was design to be executed in AI_UpdateCommander and AI_Leader. It'll be better to ask server but not group leader to execute this script.
		+ The execution of `AI_Start` is placed in funcion "fAddSoldier" and the start of AI leader.
			+ Add si, groupMatrix check and player group check in `AI_Start`.
		+ Add a loop to wait leader alive in case of dead leader.
		+ Add a check on group and `_gi`, and reassign `_gi` when dismatch.
	+ Interface
		+ Use right-upper corner for status.
			+ Reduce the weight of group concurrent orders to 0.4. The text CO displayed is modified as well.
				+ **It'll be better to make matrix display CO only and add a selection to choice whether display relative position of co on town.**
			+ Weight `0.1*6` size. 0.2 for one column as "item" and 0.4 for parameters of 2 columns.
			+ Height `0.1*3` size. Able to place 5 rows of label and combobox. 
			+ Use 6 parameters for status. Prepare "set" and "clear" button. Use uniform global variable *btnValue00* with binary carry system like "vote" to control dialog.
	+ Dialog
		+ Make "refresh order/status" a sqf function but not sqs code parts.
		  将命令/初始状态的刷新改写为sqf函数而非sqs代码段。
		+ Directly apply exist orders to define status.
		  利用已有的命令定义初始状态。
		+ Design broadcasting system.
		  定义广播系统。
		+ Make status selections "remember" the history choice.
		  令状态列表框“记忆”历史选择。
		+ Realize lv0 Reclaim, LV1 items and LV4 transport duty/shoot target orders.
		  实现lv0的回收载具，lv1各项以及lv4的运输、炮击功能项。
		+ Optimize dialog scripts. Prepare some local strings to make code better to read.
		  优化对话框脚本。使用一些局部字符串变量优化可读性。

+ Rename "Temporary" order system as "Concurrent". 
  This design was named "temporary order" when it's born in TZK_2. Dr.StrangeLove suggests "concurrent" as its better name. **含Temporary的变量名留待4.0.6调整为concurrent。**
	+ description_dlg_03的内容重新包含到description.ext里，修改 option 界面里按钮的名字。
+ 调整Temporary命令界面。
	+ 增加参数的想法不是很可取。广播系统里变量已经达到了7,200,000. 虽说第5个参数一般也不怎么实用就是了.
	+ 为temporary界面设置特殊的颜色以示区别。
		
## 4.0.5.04
+ Adjust Dialog Definition (in description.ext)
	+ Add No.4 parameter listbox for ai group order.
		+ Only hold town, guard area and transport duty uses No.3 parameter. The width can be shorten for No.4 parameter.
		+ **Need adjust broadcast system.**
			+ Add 1 more pv for broadcasting.
			+ Use global variable in carry system.
			
	+ Rename temporary system to "concurrent" orders.
	+ Shorten Temporary Dialog order display. Display of CO shouldn't contain its relativistic position to towns.
	
	+ Add some "status" for Temporary system.

## 4.0.4.07
+ OrderTemp.
	+ Disable the "order lock" setting preventing AI receive orderTemp change while selecting "ALL".