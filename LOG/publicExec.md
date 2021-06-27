The "publicExec" command is 2.01 Arma:R new property. According to one of [4RTech] member, these commands is instable. In TZK I apply it at some scripts to test the command and realize some functions. It's optional to use "publicVariableString" or "createUnit" to broadcast script command strings, but the critical defect is object in MP game is hard to be controlled by variables. (Besides, group limit of createUnit is a little problem as well.)  
“publicExec”命令是2.01 AR的新特性。根据一个4RTech成员的说法，这些命令并不稳定。我在TZK的部分脚本中应用它以测试稳定性并实现一些功能。也可以选用“publicVariableString”或“createUnit”来广播命令字符串，但核心问题在于object很难在MP中通过变量控制。（此外，createUnit的组限制也可能是一个小问题。）

# 4.0.3.00
+ Since MLRS high possibility causing desync, the explosive effect is realized via logic object. The velocity info will lost so use zero vector.
  由于MLRS大概率导致延迟，爆炸效果改用logic物体实现。速度信息将丢失，用零向量替代。
+ The setObjectTexture of MLRS is still realized by publicExec. So does switching magazine speed. They're triggered only once by local client.
  MLRS的贴图切换效果，以及弹夹速度切换效果，仍然用publicExec实现。它们只被local端触发一次。
+ *The "spoof" is once tried to use logic object, but the effect is bad. Still remain using publicExec.*
  *干扰弹效果一度试用logic物体，但效果不理想。仍然保留publicExec。*