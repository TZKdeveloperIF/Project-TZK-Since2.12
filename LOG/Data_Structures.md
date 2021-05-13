Having learnt simple data structures, I'll try apply them to adjust/optimize TZK script design.

## hash
It's possible to hash a non-human object in 2.01 since we can substract its id number. However it's hard to hash human object directly. When they're alive and belonging to a group, the "format" command will return its group and id info. Only dead man will return an string containing id info.
在2.01里hash一个非人类物体是可能的, 因为我们可以提取它的id数值。然而直接hash人类物体是困难的。当它们存活时隶属于一个队伍, “format”命令将返回队伍和编号。只有死人才会返回包含id的信息。
2.01 command, "NetworkID", can create a unique array in MP game, which is good for a hash table. However this command is invalid in 1.99 and thus improper if wish to make TZK work in vanilla as well.
2.01的“NetworkID”命令可以在联机游戏中创造一个独一无二的数组, 作为哈希表是很好的。但这个命令在1.99里无效, 因此对于希望兼容vanilla的TZK, 这并不是好的做法。
+ CfgWeapons, magazine and "count" attribute
  CfgWeapons, 弹夹与count属性。
	+ If wish only to hash known strings, we can apply
	  如果只希望哈希已知的字符串, 我们可以利用CfgWeapons的定义。用待哈希的字符串定义武器, 使用它自身作为muzzle和magazine, 并将它的count设置为哈希值, 由此我们可以利用camCreate, addWeapon, addMagazine, ammo命令来hash一个字符串.
		+ ammo命令作用于muzzle, 因此也可以定义一个武器, 它的muzzle用于定义待hash的字符串.
	
	+ Besides we can make use of class name. Class name can consist of number only thus we can name some ammo using number, catch it via fired-EH with call. But this is not better than "count" method.
	  此外, 也可以利用class的名称。class名可以纯粹由数字构成, 因此我们可以将一些弹药用数字起名, 用Fired触发器捕获ammo名并call返回。不过, 它比起弹药量并没有显著优势。
	+ **However, it seems unnecessary to hash strings. The "find" command seems cost very little time to get the index in a strings' array with 300 elements.**