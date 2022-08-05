# Optimization of old designs
+ **Stop supporting 1.99 any longer. Apply 2.01 script commands (like publicExec) to optimize script designs.**
+ Remove "soundEngine" of M119/D30/M252/PP87 structures to make it silent on attaching them.
+ Optimize the "target" object's model in TZK Art module to make it never collapse with other objects.
+ Optimize few multi-texture models.
+ Optize few models' Fire Geometry/Geometry LOD.
+ Fix M1A1 LOD texture bug.
+ Fix T90 machine gun bug.
+ Fix res T80 displaying green name to east side when distance far bug.
+ Fix C130 rotor texture bug.
+ Fix Mi2 scope definition bug.
+ Fix west "RPG soldier" stringtable bug.
+ **Adjust the smoke effect in TZK aiming to optimize the performance when being continuously shot by cannon/rocket.**
+ Provide info to playable role and main battle tanks.
+ Remove gun recoil of mbt. Howitzers' gun recoil is realized by texture but not animations.
+ Reduce camouflage of support vehicle.
+ Adjust aircraft factory's model
+ Fix armor value bug of Mi17/UH60
+ Optimize mission scripts and apply stringtable/localize to make it easier to modify mission scripts in the future.
# AA/Air Force
## Plane
+ Reduce fuel capcity
+ Adjust AT missile's guiding range. It can still hit 2km distance static objects but will miss moving objects when more than 1600m distance.
+ Spoof missile isn't apply to plane any longer.
## Helicopter
+ Reduce fuel loss rate when being hit
## Cannon AA Vehicle
+ Define cannon weapon with high shooting frequency and high dispersion (and little indirectHit as well, in order to make little engine hurt)
+ Provide "AUTO" vehicle, namely has only driver and driver is gunner, for AI mostly, including Vulcan/Shikla/Ship
## 3500 AA
+ Almost remove indirectHit of AA
+ Prepare different magazines with different guiding range. In later missions vehicles will equip magazines corresponding to the view distance voted in mission.
## 8000 AA
+ Make the missile attack plane only
+ Remove land 4xAA vehicle
## Small Heli
+ Add a new spy plane
+ Prepare side-door weapon for MH6/Mi2
## Transport Heli
+ Adjust their machine gun
## Upgrades
+ Since the plane AT's range is weakend and no longer spoof supporting, the long range weapon, after burner and spoof upgrades don't have to exclude each others.
+ Remove the 3500 AA react-attack on plane shooting AT
# Car/Ship
+ Improve masSpeed of motor ship
+ Find the method to fix game crash bug about car simulation
+ Improve cars' moving ability
# Infantry
## Weapon
+ C4/Mine use only 1 slot and mine using pistol slot has same price with general mine ($50)
+ Define RKG-3M anti-tank grenade. Its power is same as RPG and has 60m range
+ Provide maxControlRange 200 (BIS), 400, 600 and 800 AT for LV1~LV4 soldiers
+ Provide maxRange 1500m AA missile
+ Provide AT/AA using 3 slot, RPG/LAW using 1slot. For AI only.
+ Adjust M60/PK weapon type to primary but not primary only.
+ Define support carrier soldier (no use yet)
+ Reduce weapon price
## Level
+ Provide different level soldiers
+ Refer to https://www.kdocs.cn/office/d/145238230278?share_id=G0MgvGBgUPXVDG
## Vehicle machine gun
+ Since soldiers are enhanced mostly vehicles' mg are enhanced as well
# Art
+ Adjust laser ammo maxRange. The range AI use it are mostly decided by view distance now
+ Remove that extra upgrade for art's long range shooting
## 120/122mm howitzer
+ Add Grkpbv
    + 6s reloadTime, less power
    + 20 count
+ Add PLZ89
    + 8s reloadTime, stronger power (than Grkpbv)
    + 50 count
## M252/PP89 mortar structure
+ 6s reloadTime
## Rocket Mine Launcher
+ Prepare definition of vehicle and parachute in mod (not sure whether can realize this)
+ Prepare mine remover definition in mod (not sure whether can realize this)
## Sharpnel
+ Prepare definition of weapon and ammo (not sure whether can realize this)
## "Art" units
+ Remove all "Art" units (M1A1/T80/M119/D30) and 1st view art shell tracer design
## Map marker
+ Remove art module map marker upgrade. It support all soldier art weapons (mortar/grenade/hand grenade) and don't support all vehicle art weapons
# Transport Vehicle
+ Prepare definition of vehicle using parachute and LST model (not sure whether can realize this)
# Tank and Anti tank
+ Slightly reduce maxSpeed of MBT
+ Enlarge 1800 AT APC missile shooting range
+ Reduce TGA AT APC missile power to 18%
+ Add AMX 10 RC
    + Power 18% same as res T80
    + Radar 1x viewDistance as T72
    + Less camouflage
    + can float
    + MaxSpeed 85
+ Add 2S25
    + Power 25% same as MBT
    + Radar 0.6x viewDistance as MBT
    + can float
    + maxSpeed 70
+ Add anti tank car
    + no ground radar. Must rely on other units' radar/eye
+ Add radar car
    + 1x viewDistance
# Structure
+ Introduce SE static mg model instead of BIS static M2