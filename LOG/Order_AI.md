Recording the updating of commanding AI groups. Order, orderTemp and settings of AI groups are recorded here.

##4.0.5.05
+ 将Temporary命令更名为Concurrent命令。**暂时只进行界面的修改，变量名留待4.0.6调整。**
	+ description_dlg_03的内容重新包含到description.ext里，修改 option 界面里按钮的名字。
	
+ 调整Temporary命令界面。
	+ 增加参数的想法不是很可取。广播系统里变量已经达到了7,200,000. 虽说第5个参数一般也不怎么实用就是了.
	+ AI队伍的宽度缩减到0.5，修改AI Temp命令里 co点 的文本显示方式（它实际上是初始化 AI Temporary 命令时与字符串里规定调用显示co相对城镇的位置，所以修改起来有点麻烦）。
		+ **可以的话，最好命令矩阵里只定义co点的显示，是否显示相对位置由参数框来规定。4.0.6调整。**
	+ 为temporary界面设置特殊的颜色以示区别。
		

##4.0.5.04
+ Adjust Dialog Definition (in description.ext)
	+ Add No.4 parameter listbox for ai group order.
		+ Only hold town, guard area and transport duty uses No.3 parameter. The width can be shorten for No.4 parameter.
		+ **Need adjust broadcast system.**
			+ Add 1 more pv for broadcasting.
			+ Use global variable in carry system.
			
	+ Rename temporary system to "concurrent" orders.
	+ Shorten Temporary Dialog order display. Display of CO shouldn't contain its relativistic position to towns.
	
	+ Add some "status" for Temporary system.

##4.0.4.07
+ OrderTemp.
	+ Disable the "order lock" setting preventing AI receive orderTemp change while selecting "ALL".