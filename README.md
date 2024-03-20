# How to obtain mod and mission
In origin OFP the mod (AddOns, Bin and Dta) is invariant while the mission is variable. One can easily obtain updated mission files by downloading them automatically from game server but need manully update mod files. Here we don't consider Fwatch which can help you automatically update mod. Tzk put many scripts in addons aiming to reduce mission pbo file volume, but if they have to be modified they should be put into mission again. Mostly updating won't modify the file too much, and I wish to make file history on git clean and easy to track, so I move those files from addon to mission (when updating mission) and from mission to addon (when release a new version mod).  
So you can't package the addon pbo from git repository at anytime but only on the commit I release them. You can directly visit my google drive bit.ly/OFP196TZK where I release the mod.
## Gain MPMissions from Scripts on GitHub Directory
I'll upload mission file to my google drive as well, but you can directly obtain mission scripts directly. Sometimes maybe I'll push instable commits but you can easily checkout to former few commits.  
It's strongly recommended to use batch processing to copy files and make PBOs. The *MakePBO* of **Mikero Tools** is powerful. I use MakePBO 2.04 version.  
1. "xcopy" all files from "General Mission Scripts" to each folders in "mission.sqm(and Extra folder)".  
    + For extend version basing on TZK (like MFCTI mod, TZK_SE mod, etc), using batch processing to "xcopy" files from their external folders as well.
    + example: xcopy "<repository path>\MPMissions\mission.sqm(and Extra folder)" "<batch process path>\MPMissions" /E /Y /EXCLUDE:xcopyIgnore
        + xcopyIgnore is a file that list files wish to be ignored in xcopy like .bat, .txt, .md, etc
2. Package each folders in "mission.sqm(and Extra folder)" to PBO files.  
In old version MPMissions some pictures like .paa or .JPG are placed in missions' folder. They aren't uploaded to github, and hence files won't be included in source codes and pictures won't display in YOUR missions, but the game is able to play without them. Since 2.12S MPMissions read pictures from MOD (I moved them out of the mission), and MPMissions folder on github include scripts only.
    + example:
        + For /f "delims=" %%i in ('dir /b /aD') do (xcopy "<repository path>\MPMissions\General Scripts in Mission" %%i /E /Y /EXCLUDE:xcopyIgnore)
        + For /f "delims=" %%i in ('dir /b /aD *KaoS@mf*') do (xcopy "<repository path>\MPMissions\MOD kaoS@MF" %%i /E /Y)
        + For /f "delims=" %%i in ('dir /b /aD *_Yugo_*') do (xcopy "<repository path>\MPMissions\MOD totalYugoWar" %%i /E /Y)
        + For /f "delims=" %%i in ('dir /b /aD *TZK@SE*') do (xcopy "<repository path>\MPMissions\MOD TZK@SE" %%i /E /Y)
        + For /f "delims=" %%i in ('dir /b /aD *@lester*') do (xcopy "<repository path>\MPMissions\MOD_TZK@Lester" %%i /E /Y)
        + cd C:\Program Files (x86)\Mikero\DePboTools\bin
        + For /f "delims=" %%i in ('dir /b /aD') do (makepbo -A -Z=default -N -P "<batch process path>\MPMissions"\%%i %%i.pbo)

# About Project TZK
The master branch of TZK MPMissions (not MOD) version is 1.00 -> 1.01 -> 1.02 -> 1.10 -> 2.00 -> 2.11 -> 2.12 -> 4.0.0 -> 4.0.3 -> 4.0.4 -> 4.0.5 -> 4.0.6 (latest).
## 4.0.6
Prepare materials enough in addons. It'll still cost long to update missions to realize new designs.
## 4.0.0
Many models are modified to support **multiple texture**, textures are change-able in-game. TZK divide islands into 4 features: *Common, Desert, Green (wood) and Winter (snow)*. In different feature islands, those vehicles will display different texture.  
Another main work of 4.0.0 is the introduction of **Artillery Module**.
## 2.12
The 2.01 Arma Resistance by [4RTech] is applied.  
Many new features are realized with the help of new script commands supported by Arma Resistance. The most conspicuous improvements are the simplify in mission.sqm and available flexible local radio channel working as supplement of OFP crude action list.  
**No Response Server** problem fixed by 2.12 v08 version. Using binary search the source is located. Defining satchel mag using pistol slot with modified magazineType will lead to this problem. This phenomenon exists in 1.96 and 2.01 game.  
## ~~2.10/3.00/3.01~~
A failed attempt. **No Response Server** problem remain unsloved.
## 2.00
Inspired by SE mod of TZK, this version started to add new units, set new functions like spoof missile or afterburner, introduce new effects and upgrade the basic mission setting. Effects introduced into 2.00 mainly inspired by another Chinese MOD naming "ETON". Besides, "Join" and "Temporary Order" are the most important designs made in TZK_2.00.  

# 2.01 ArmA:Resistance
2.01 is very useful to TZK. It provides many basic script commands. With the help of 3D-direction command, the author makes MP-stable visual effects. 2.01 also support editors editing strings. Combining magazinesArray, GetWeaponParam and GetWeaponSubParamArray, one can precisely check units ammunition and whether it's out of some weapons' ammo. Dynamic creating of markers, waypoints and triggers make mission.sqm tiny and editors able to design flexible radio channel system as an enhancement of the action list. And we might expect more, both for TZK and for 2.01.
# Topic on BI forum
https://forums.bohemia.net/forums/topic/227553-tzk-cti-modmissions/