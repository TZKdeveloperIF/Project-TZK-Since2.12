# Background
The **publicExec** command is 2.01 Arma:R new property. According to one of [4RTech] member, these commands is instable. In TZK I apply it at some scripts to test the command and realize some functions. The stability is proved, and its application in TZK is keep on growing up.  
It is necessary in MP game to have a specific design to convert object to unique information (and can be expressed in string). 2.01 provides **NetworkID** and **UnitById** to do this.  
In neptun project these commands are realized too. Exist OFP source code can be easily extended to support them. They don't require complex extra design.
# Detail
The passing command (and underlying basic data) is consist of string. All types of OFP script variable need to be converted to string.
## string length
Length of command string shouldn't longer than maximun limit (not verify yet. Maybe 4096 characters)
## number to string
Number in OFP script variable is stored as single precision floating number. It can exactly express interger between -16,777,216 and 16,777,216. However, when converting interger to string using **format** command, the interger whose absolute value is no less than 1,000,000 will be expressed in scientific notation. Assume we have a number variable *_a = 1048576*, the result of *format ["%1", _a]* is 1.04858e+006. Calling this string will obtain the number 1048580 but not 1048576. Accuracy loss in converting case appears at the value much less than the limitation of single precision itself.  
To get avoid of this accuracy loss, we need to devide number into 2 parts (both should less than 1,000,000), convert them to string (without loss) and concat them.
## object to string
As mentioned above, object should be convert to string first, and be added into command for **publicExec** then. 2.01 command **NetworkID** returns an array in format *[object's creator (string), object's id (number)]*. Since the id is a number, directly convert this array to string may suffer accuracy loss. Thus it's necessary to convert the id number to string exactly.
## syntax
Assume we have a function **num2str**, which is a preprocessed sqf file, to convert number exactly to string. Now we wish other clients in MP game execute *[number, other arguments...] exec "myScript.sqs"*. What should we do on applying **publicExec** command when the number parameter is no less than 1,000,000?  
One may think in this way: *publicExec* format [{%1 exec "myScript.sqs"}, [number call num2str, other arguments...]]*. Regretfully this won't work. The %1 part will be replaced with *[string looks same as that number but is a string but not number, other arguments]*. The correct method is *publicExec* format [{[%1, %2, ...] exec "myScript.sqs"}, number call num2str, other arguments...]*.  
It's difficult to accurately describe these subtle differences. It refers to OFP script syntax about string, array and **format** command.