WAP vehicles from @BOH mod is interesting. It's funny that I was actually looking for "boi4.8" CTI mission but my memory made mistake and I went explore @BOH mod.

## @TZK_4.0.5
Start to introduce the BOHJSDF5.pbo into TZK. CONFIG of WAP vehicle/weapon/ammo is defined in TZK without introduce BOHCONFIG.pbo.
+ Prepare another HellfireLauncher using "GuidedAT_Heli_xj400" ammo to take place with too powerful "AGM-114F".
+ Define a TypeXX WAP for EAST side as well.
+ Remove the "setObjectTexture" effect on hellfire shoots. MLRS using such design in TZK but WAP vehicles is just a trial and thus didn't designed in detail as MLRS.
+ Add some "local" checking in EH to make EH more MP-compatible.
+ Add its weapon into shell tracer effect.
+ Use param1 to decide whether "BOH Vehicle" vote-able in-game.
+ Help AI WAP able to "jump". The problem is due to "tank"-simulation bug about z-coordinate of position/velocity. Use lovely sea to help fix this (like what attach do).
