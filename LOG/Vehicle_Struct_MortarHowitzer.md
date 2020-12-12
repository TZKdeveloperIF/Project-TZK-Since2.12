There are many method to design a defence structure. Critical feature is "can't move" thus set "hasDriver" = 0 or "fuelCapacity" = 0 are both available. However, at least for "simulation = tank" vehicles, has driver or not will affect their performance in-game (on "attach" system in crCTI and on "velocity", non-driver vehicle won't have any velocity). Thus the definition of structure should be uniformed by mission maker. TZK adopt the design that structure use "simulation = tank" and "hasDriver = 0" attributes.

#Mortar81.p3d for M252
Copyrights belong to @CoC_Arty mod
##@TZK_4.0.5
Allow them "canfloat" since they're allowed to be attached.
+ zamerny
	+ Set zamerny at gunner position and make it being contained in "otocVez". However it seems zamerny won't rotate synchronizely with gun. 
	+ It's position now will make tank kill it accurately enough.
+ armor
	+ The threshold of vehicle ignore shots is affected by total armor but not only armor value. However whether AI shoot bullet will be affected by armor.
	+ Probably the armorStructural = 10 design for M2StaticMG is on same purpose.
	+ This is conflict with what I published in "accuracy" article. But that phenomenon is valid to aircrafts. It's valuable for us to explore more on different "simulation" vehicles.
+ SandBags
	+ Teduce the height of sandbags in "View - Gunner" LOD to make gunner view better but outlooking normally.
+ Mass
	+ The mass of weapon is 36.7KG. Mass of sandbags is 200KG. Able to be attach.

#PP87.p3d for PP-87
Copyrights belong to @PLA mod (made by VME forum)
##@TZK_4.0.5
Allow them "canfloat" since they're allowed to be attached.
Introduce the object into TZK. Refer to experiences of M252 of @TZK_4.0.5 version.
+ SandBags
	+ Paste sandbags. Move { 0, -0.538, -0.45 }
+ Move the pos of ViewGunner to make it easier to place TZK_Grad. Inaccurate, though.

#M119 and D30
All materials are from same name addons packed in @RCWC mod (ver 4.9).
##@TZK_4.0.5
Allow them "canfloat" since they're allowed to be attached.