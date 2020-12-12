The total Health Point (HP) of an object in OFP is decided by the product of "armor" and "armorStructural". It's affected by the size of its model's Geometry LOD as well.  
+ Low power ammo will cause always "0" damage to high HP object. However for many kinds of objects which has "selection damage" concept like tank, man, car/helicopter (they have only engine and light selections), their selections are easier to be damaged by ammo even though their HP isn't reduced.
  The strength of selections are decided by "armor" parameters without "armorStructural". It's affected by "armor" value within "hit class" (like "class HitEngine") too. Editor can thus adjust the armorStructural to keep HP invariant but raise selections' strength.
  In 2.01 "GetSelectionsDammage" command is available. Editor can apply this command to see how bullet12_7 hurt M1Abrams. It'll cause always 0 damage but about 1e-6 damage to each selections.
  The "indirectHit" is easier to cause selections damage than "hit".
+ The "armor" value will also affect whether AI will use low power weapon to shoot at object, without "armorStructural" too. The typical example is "M2StaticMG". It's HP is 300, with armor = 30 and armorStructural = 10. Such an armorStructural is unique in OFP since no any other object use this big value. The reason probably is big armorStructural can make armor small and thus soldiers will use rifle to shoot at M2StaticMG. One can easily verify this, design a tank with little armor but high armorStructural and see whether enemy soldiers will use rifle to attack it or not (actually reader might has noticed that AI sometimes will use M2StaticMG to attack M60/T55 tank).
	+ Besides, in CONFIG editor can use expression to assign armorStructural but must use value to assign armor.

##@TZK_4.0.5
Mortar can't damage tank IRL. I tried to explore whether raise armor can make tank get no damage from mortar, but I failed. Selections are much more easier to get damage than HP. If raise selections' armor, other damage method like LAW/AT or Sabot will be affected and perform quite different from general games. So I simply reduce the power of mortar.  
The power of shell is decided by (hit - indirectHit) and "indirectHit", 2 parts. BIS Heat120 use indirectHit = 300 and indirectHitRange = 1. In @TZK_4.0.5 sabot use same parameters and the hit should be 800 to keep power same as before.
+ Raise indirectHit can raise ammo power.
+ Raise indirectHitRange can raise ammo power in directly shooting. But if indirectHitRange is big enough to cover whole object, raising indirectHitRange can't raise power any more.

Comparing damage caused by sabot, @TZK_4.0.5 adjust the armor in Hit Turret and Hit Gun of heavy tanks. Below are turret/hit damage rate after 3 TZK sabot and 4 Heat120:
+ M1A1: 78, 64, 72, 76
+ M1A2: 62, 48, 53, 52
+ L2A6: 82, 59, 67, 62
+ T80: 100, 66, 100, 77
+ T90: 100, 66, 100, 77
+ Z99: 86, 66, 93, 77

So turret and gun of M1A2 and Leo2A6 should be weaken and turret of east tanks should be strengthen.