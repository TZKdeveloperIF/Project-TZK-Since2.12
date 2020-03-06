# About no-response server
This phenomenon raised first in TZK_2.10 MPMissions. It cost months to try and find out some reasons. Some of them are listed below. Keep on observation...
## groups
In 2.01 Arma Resistance the createGroup command is available. Missions applied this command cause no-response server.
The problem probably because of different group ID in MP game. The effect of "setGroupID" seems to be local, according to BIKI. In TZK scripts groups placed in mission.sqm will be initialized frist, then playable groups' ID will be set by "setGroupID" in init.sqs. Probably "createGroup" command should strictly be executed behind Init.sqs, that is, better after game has started.
The command "createGroup" don't have such "Init" parameter as createUnit. However the order groupID be used by groups should follow a fixed rule defined in OFP. It's possible in this way to get new groups' ID without applying "publicVariable" but by calling strings pre-defined in the way groupID being used.
## objects' id in mission.sqm
It seems unacceptable to set multi groups/vehicles sharing same ID in mission.sqm. This setting probably caused no-response server as well.
Discontinuous ID is acceptable, i.e., some number can be jumped without being used by any groups/vehicles. Actually those playable roles being closed in MP game are deleted, and surely will cause ID discontinuous.
## Unknown Problem of 2.10 mission
Settings above aren't included in 2.10 missions. Thus there must exists other problem sources. Remain unspotted.
## Unknown Reason of 2.12 MOD
Missions work stable before 2.12N version. Since 2.12P, a new patch mod, @TZK_2.12, is applied, and sometimes this problem raised again. Keep on observation...