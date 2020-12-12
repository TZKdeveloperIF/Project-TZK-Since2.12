I refer to readers my note posted on BI forum first: https://forums.bohemia.net/forums/topic/228014-discover-and-identify/  
The identify system in OFP is embarrassed for it has something conflict with inheritance. CTI players might get used to this case: when playing EAST side, the moment they drive tank and lock resistance tank, the target's name is green color.  
Aiming to solve this (and many other improper phenomenons), TZK re-define some abstract classes and adjust the way (path) of inheritance (like "Tank_xj400" of tanks). Refer to HPP files of TZK_Objects for more detail.

##@TZK_4.0.5
The 0-irTarget design is improper for small helicopter since this value will make AA missile unable to lock them. Aiming to make an alternative method to make small helicopter better crypticity, the accuracy trick (of "side" attribute) is applied.
+ Prepare a base class using unknown or civilian side (side = 4 or 3) and small accuracy (abstract helicopter use 0.08 accuracy. Our base class can use value between 0.08 and 0.3).
+ Prepare a father class using actual side (side = 1 for west) and big enough accuracy (value 3.5, same as sniper).
	+ For UH60/Mi17 (and modified CSLA UH60), their model size is bigger, thus accuracy should be bigger as well.
		+ Enemy can better "knowsAbout" them.
+ The actual object is son class of the father class above. Its accuracy is 1000. The 1000-accuracy is important to aircraft vehicles, I refer editors again to my note above in which I illustrated some phenomenons of aircrafts using 1000-accuracy.
+ Enemy will recognize the vehicle as enemy only when knowsAbout value raise 0.5. It's about 1100 meters for MH6 and 1500 meters for model-bigger UH60.