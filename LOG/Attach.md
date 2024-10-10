Attach is crCTI design. Script keep on reading position of tugger and dragged vehicle and updating dragged vehicle's position and velocity to simulate attach effect.
# Abnormal position/velocity bug
"Tank" simulation vehicle of OFP will have bug in setting its position and velocity. Sometimes the vehicle will stay static after having been given a velocity. Old CTI players may remember that dragged vehicle stay static with its engine sounds loudly. Engine sound means it does have velocity but still stay static. Throw a hand grenade to it will make it stat to move.  
Another phenomenon is Z cooridnate sometimes useless in setting tank's position. Observer can see tank appears at desired height but immediately flash to the ground.  
I found that move the tank to sea, give it a up toward velocity, then move the tank back, can solve this problem. That's first attach design made by TZK.  
# Dragged vehicle disappear bug
Not sure whether such bug exists in XR mission. In my memory it seems appear once.  
After TZK having modified attach design, this bug sometimes happens. Dragged MHQ (and other vehicle) will disappear, then game become laggy. Finally when killed player respawns, in his sight he is in high sky and can see only grey backgrounds (other normal player can still see those players respawn in base).  
This bug seldom happen in 2.01. However when 2.02 (CWA-CE) release and test TZK there this bug can be triggered very easily. I can see vehicle disappear immediately on the moment I attach it.  

The reason may be frequently setting dragged vehicle's position. According to script before current commit, at some moment object's position will become abnormal and can't be setPos back. One may checkout to current commit or last one to obtain scripts. "SetPos too slow in attach script" is reported in testing 2.02 TZK MP game. It happens when having played 34 mins. "Set position back" design is invalid. The missed object reports they're at Aa00 (probably [0, 0]) but this position doesn't appear in script at all. This happens on attaching server object (tanks driven by AI) and player's object. When "too slow" reported the player's object reports it's being paradropped, which means its height is high. Since x and y probably is 0, how would z be more than 30?  
It happens when tugger getting away from player. Does distance has something to do with this? Far object will be less frequently updated. Is this the reason?  
Besides, the reason might due to posASL. However I tends not to doubt this.  
# Another solution
According to XR mission experience, the attach bug happens to static vehicle only. So new solution is move vehicle to sea with a non-zero initial velocity. In later main loop vehicle won't be moved to sea again. Instead, in all time the vehicle's velocity shouldn't be zero vector. It can't be static.

# About structure
"hasDriver" parameter is the best one to judge whether tugged vehicle is structure. No-driver "tank" simulation vehicle will perform normally as car or ship. No attach bug will occur.  
Mod maker may assign a vehicle as structure (hasDriver = 1 with 0 fuel capability). This case the "structure" will meet attach bug.  
It seems structure's velocity must be assign as [0,0,0] on detaching, otherwise bug will occur. This was discovered in TZK 4.0.4.07 mission version.  