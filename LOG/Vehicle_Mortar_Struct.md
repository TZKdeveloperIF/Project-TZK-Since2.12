#Mortar81.p3d for M252
Copyrights belong to @CoC_Arty mod
#@TZK_4.0.5
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
#@TZK_4.0.5
Introduce the object into TZK. Refer to experiences of M252 of @TZK_4.0.5 version.
+ SandBags
	+ Paste sandbags. Move { 0, -0.538, -0.45 }
+ Move the pos of ViewGunner to make it easier to place TZK_Grad. Inaccurate, though.