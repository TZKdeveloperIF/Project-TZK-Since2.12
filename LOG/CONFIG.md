This file records the updating of TZK_Objects.pbo (before @TZK_4.0.3) and TZK_CONFIG_version.pbo.  
**Combining "requiredAddOns[]", editor can assign the order OFP reading CONFIG from AddOns.**
+ The order of requiredAddOns should be well-defined. Don't circularity require.
+ In inheirted CONFIG, editor need only claim existed classes. And editor can never remove existed attribute/class member but only add new ones or edit existed ones.


#@TZK_4.0.5
+ Update BIN\CONFIG. There're "twest", "vair", etc, in attributes which require macros, which is missed in old TZK Bin\CONFIG.
	+ CfgPatches of new BIN\CONFIG is renamed. Old CfgPatches class member is remained aiming to provide compatible with 4.0.4 version. No error message on server unlike Cfgpatches of AddOns.
+ Move "rocket_stinger.p3d" into TZK_CONFIG_4_0_5. This model is for stinger proxy applied in "vanilla" units so should be packed in critical CONFIG pbo.
+ Adjust the power of mortar shell. Prepare another weapon/magazine for this new mortar ammo.

+ Adjust the ReloadMagazineTime of "9M311".

+ Redefine Vanilla objects. Use new postfix "_xj405" and ask all vanilla objects inherit attributes from BIN\CONFIG.
	+ This will make vanilla objects perform mostly same as BIN\CONFIG defined. MODS modified BIN\CONFIG will thus affect them.
+ Add PP89 (CHN) mortar model as east 82mm mortar structure.
+ Allow M252/PP89/M119/D30A "canfloat".
	+ Adjust the "armor" attribute of these structures to make soldiers shooting at them with rifle.
	+ Adjust the position of "zarmeny" in their models to make gunner easier to be killed.
+ Applied ETON85 (v5.08) textures for TZK M1A1/M60-120S.
	+ Better color of camoflage style of M1A1.
	+ High quality of green style of M1A1/M60. Textures of M60 body is introduced to modify M60-120S.
		+ The back texture is made by myself using ETON textures and PS.
	+ Yellow style textures for M60-120S is maded basing on ETON green textures.
+ Edit M1A1/M60-120S/M113/M113 Ambu/Vulcan models and ask their class use new "model" attribute.
	+ Add better texture dividing in M1A1 hlaven.
	+ Fix "multiple texture" assigning error in M113 series models.
+ The driver room of M1A2_INQ is realized by "proxy" but not using vertices/faces of M1A2 model itself.
	+ After doing this the M1A2 model is able to contain other vertices/faces.
		+ Add "snow" camoflage for winter style.
	+ The direction of driver room direction should face "back". Don't know why.
+ The "view geometry" for driver of BIS T80 is incompleted. The glass on the left is blocked by view geometry component. "Dig" a little part in new model.
	+ *By the way, all driver room of BIS east tank (and many models basing on them) has uncovered back face. However that face is blocked by view geometry thus remain unfixed.*
+ *Introducing ETON models isn't allowed thus new models of T90 (T72B) and T72A isn't made in 4.0.5.*
	+ *It's free to use ETON textures. However textures for EAST tanks is integrated and don't fit BIS model texture structure.*
+ Defines some tanks basing on mfcti but use models from ETON85 (v5.08) mod.
+ Fix geometry component bug in M270 model.
+ Introduce WAP units of BOH.
	+ Make "jump" UA available for non-player vehicles. This incompleteness is due to "tank"-simulation of OFP and need "move-to-sea" trick as attach system do.
+ Make fake-side transport helicopters.

+ Provide a more flexible script for gun-recoil animation effect.