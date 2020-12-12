Refer readers to https://ofp-faguss.com/files/ofp_preprocessor_explained.pdf first. Great thanks to faguss.

#Syntax
Just some notes here. Refer to link above first if you're beginner.
##String
In macro one can't use {} to contain a string as in SQS/SQF files.
##Transplant mission
If editor load mission.sqm of TZK and save it in-game, preprocess commands will be cleared.

##4.0.5.00
Apply OFP preprocessor of mission.sqm and description.ext in TZK to reduce the file volume and simplify their content (make mission maker easier to transplant missions).
+ Their source directory of "#include" is same as addon configs – game root folder. Thus head files should be placed in AddOns.
	+ Later, after MOD released, if editor needs to update the macros, he can re-define macros in mission.sqm/description.ext.
	+ However add contentes in mission scripts can't save file volume as AddOns do. Thus it'll be better if provide more head files and detailed macros.
		+ Provides many macros for mission.sqm and many head files for description.ext.
+ It seems "#" is lower than "##". Use spacebar " " after "#" to make concacentation-operator "##" merge macros first. Refer to how sensor defined.
+ ***Fail to use ";" in macros. Can anyone tell me how to solve this? In mission.sqm ";" is necessary to separate scripts' path.***
###AddOns
+ Use macros for Basic BIS AddOns, TZK Critical CONFIG AddOns (TZK_Objects, TZK_CONFIG..., TZK_Script...), TZK SE AddOns, totalYugoWar mods.
+ Unnecessary to use macro for mfcti. It requires only 2 AddOns.
###Groups
+ Provides macros for one group (playable or not), for groups (all playable groups, function groups of CTI, town groups of CTI, etc).
	+ *Editor can define alternative position for 1.99 ACWA missions after having defined Item0 of Groups.*
+ ***However if apply macro on Item0 group (which is for mission.sqm-initialization), it'll cause initialization of mission effect later than init.sqs. This is bad.***
	+ This is easier to occur in missions using external mode but not basic TZK missions.
###Markers
+ Only need a macro for thousands of markers of missions for 1.96/1.99 game engine. Actually directly use a head file is enough.
###Sensors
+ Provides macros for gameEnd, town, radio (1.96/1.99), teleporter bridge.
	+ Applying "#" in GameEnd、Radio caused fail in sensor definition. Input string directly instead, but still don't know why.
