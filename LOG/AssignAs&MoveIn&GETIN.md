+ 已知现象
    + 对于 remote 载具，玩家将其回收后，立刻将载具连人join到远端AI队伍，AI会让这些乘员下车。  
      TZK玩家队伍board命令结合使用 assignAs 和 moveIn ，或使用 unit1 action ["GETIN DRIVER", vehicle1]，
      或走普通的上车命令，都存在这种现象。
        + 看起来可以认为进入remote载具时，载具权限没有及时广播到远端
    + 结合使用 assignAs 和 moveIn 的多人载具（譬如坦克），需要用1-1两次来清除状态。相比之下，action的表现好得多  
      但是action的一个缺陷在于：被占用的席位，并不会在鼠标控制的上车命令或4-anywhere的指令中被移除，而moveIn会移除  
        + 实践来看，先使用 GETIN 的 action, 延迟一定时间后再使用 assignAs 和 moveIn, 效果理想
          + 上车的动画需要播放约2.6秒。如果延时较短，那么仍然会存在不理想的席位状态
          + 所以上述 action 表现良好的原因也不见得准确
    + 实战中，添加 RTS land命令，使用了moveInDriver控制AI飞行员的行为，会导致AI飞行员莫名其妙跑去cargo位，而没有
      rts 状态的AI队长也跑过来登机  
      开发当前 commit 发现，join的delay assign也执行 action GETIN，同样影响到了队伍里的其他单位，AI队长以及新购买的步兵
      全部试图登上队伍内的载具了
        + 考虑对AI队伍只使用 assignAs 和 moveIn，不使用 action GETIN。结合此前发现的延时规律，增加延时的数值
        + 需要对 GETOUT 的 action 保持警惕
+ 语法
    + unit1 action ["GETIN DRIVER", vehicle1]
        + 该命令具有瞬移unit1的效果