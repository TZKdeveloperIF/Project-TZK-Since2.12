comment "The totalYugoWar mod equipments are quited different with TZK. By now we can't contact with its author, thus in this script the unitDefs matrix is directly re-defined but not replaced (by elements).";

cargoCarSide0 = [[magMine,2], ["Pipebomb",2], ["JAM_CAVS_M72Rocket",2], ["JAM_CAVS_AT4Rocket",2], ["CR08_Mag_CarlGustav_1",1],["TYW_CBT_Drag_Mag",1], ["CR08_Mag_Stinger_1",1]];
cargoCarSide1 = [[magMine,2], ["Pipebomb",2], ["ICPRPG16dAT",2], ["JAM_CAVS_RPG7Rocket",2], ["CR08_Mag_AT4_1",1], ["ICPRPG29Mag",1], ["CR08_Mag_Strela_1",1]];
cargoTruckSide0 = [[magMine,4], ["Pipebomb",4], ["JAM_CAVS_M72Rocket",4], ["JAM_CAVS_AT4Rocket",4],  ["CR08_Mag_CarlGustav_1",2],["TYW_CBT_Drag_Mag",2], ["CR08_Mag_Stinger_1",2]];
cargoTruckSide1 = [[magMine,4], ["Pipebomb",4], ["ICPRPG16dAT,2"], ["ICPRPG18mag",2], ["JAM_CAVS_RPG7Rocket",4], ["CR08_Mag_AT4_1",2], ["ICPRPG29Mag",2], ["CR08_Mag_Strela_1",2]];

weaponsRespawnPlayer = [ ["LSR_m4_rx", "JAM_CAVS_AT4Launcher", "Binocular","NVGoggles"], ["ICP_ak74", "ICPRPG16dAT", "Binocular","NVGoggles"] ];
magsRespawnPlayer = [ ["JAM_W556_30mag", "JAM_W556_30mag", "JAM_W556_30mag", "JAM_W556_30mag", "JAM_CAVS_AT4Rocket", "HandGrenade"], ["JAM_E545m_45mag", "JAM_E545m_45mag", "JAM_E545m_45mag","JAM_E545m_45mag", "JAM_E545m_45mag", "ICPRPG16dAT", "HandGrenade"] ];

weaponsRespawnAI = [ ["LSR_m4_rx", "JAM_CAVS_AT4Launcher", "Binocular","NVGoggles"], ["ICP_ak74", "ICPRPG16dAT", "Binocular","NVGoggles"] ];
magsRespawnAI = [ ["JAM_W556_30mag", "JAM_W556_30mag", "JAM_W556_30mag", "JAM_W556_30mag", "JAM_W556_30mag", "JAM_CAVS_AT4Rocket", "JAM_CAVS_AT4Rocket", "HandGrenade"], ["JAM_E545m_45mag", "JAM_E545m_45mag", "JAM_E545m_45mag", "JAM_E545m_45mag", "JAM_E545m_45mag", "ICPRPG16dAT", "ICPRPG16dAT", "HandGrenade"] ];

{call format ["weaponsRespawnPlayer%1 = weaponsRespawnPlayer; magsRespawnPlayer%1 = magsRespawnPlayer", _x]} forEach [1,2];
{call format ["weaponsRespawnAI%1 = weaponsRespawnAI; magsRespawnAI%1 = magsRespawnAI", _x]} forEach [1,2,3,4];


equipDefs resize 0; equipSearch resize 0;
_type = 0;

equipDefs set [_type, ["M24 mag (LSR)", si0, isGeneral, 1, "LSR_M24Mag", "\LSR_uswp\weapics\m_M24.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM24 = _type;
_type = _type + 1;

equipDefs set [_type, ["M82 mag (LSR)", si0, isGeneral, 1, "JAM_W127_10mag", "\LSR_uswp\weapics\m_m82.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atM82W = _type;
_type = _type + 1;

equipDefs set [_type, ["M249 mag (LSR)", si0, isGeneral, 2, "LSR_m249mag", "\LSR_uswp\weapics\m_m249.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atM249 = _type;
_type = _type + 1;

equipDefs set [_type, ["M14 Mag (JAM)", si0, isGeneral, 1, "JAM_W762_20mag", "\dtaExt\equip\m\m_m21" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atM14 = _type;
_type = _type + 1;

equipDefs set [_type, ["556 30 mag (JAM)", si0, isGeneral, 1, "JAM_W556_30Bmag", "\JAM_Magazines\pics\JAM_556x45_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_W556_30Bmag = _type;
_type = _type + 1;

equipDefs set [_type, ["556 30 mag (JAM)", si0, isGeneral, 1, "JAM_W556_30mag", "\JAM_Magazines\pics\JAM_556x45_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_W556_30mag = _type;
_type = _type + 1;

equipDefs set [_type, ["G36 mag (JAM)", si0, isGeneral, 1, "JAM_W556_G36_30mag", "\JAM_Magazines\pics\JAM_556x45_G36_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atG36 = _type;
_type = _type + 1;

equipDefs set [_type, ["M21 mag (JAM)", si0, isGeneral, 1, "JAM_W762Sniper_20mag", "\JAM_Magazines\pics\JAM_762x51_20rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM21 = _type;
_type = _type + 1;

equipDefs set [_type, ["MP5 mag (JAM)", si0, isGeneral, 1, "JAM_MP5SBASDmag", "\JAM_Magazines\pics\JAM_9x19_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atMP5 = _type;
_type = _type + 1;

equipDefs set [_type, ["G3 mag (JAM)", si0, isGeneral, 1, "JAM_W762_20mag", "\JAM_Magazines\pics\JAM_762x51_20rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atG3 = _type;
_type = _type + 1;

equipDefs set [_type, ["M60 200 mag (JAM)", si0, isGeneral, 4, "JAM_W762M_200FSmag", "\JAM_Magazines\pics\JAM_W762M_200FSmag.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM60FS200 = _type;
_type = _type + 1;

equipDefs set [_type, ["M60 100 mag (JAM)", si0, isGeneral, 2, "JAM_W762M_100M60FSmag", "\JAM_Magazines\pics\JAM_W762M_100FSmag.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM60FS100 = _type;
_type = _type + 1;

equipDefs set [_type, ["Buckshot canister(JAM)", si0, isGeneral, 1, "JAM_M576buck", "\JAM_Magazines\pics\JAM_M79BS.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_M576buck = _type;
_type = _type + 1;

equipDefs set [_type, ["Grenade M433 (JAM)", si0, isGeneral, 1, "JAM_M433grenade", "\JAM_Magazines\pics\JAM_M433HEDP.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_M433grenade = _type;
_type = _type + 1;

equipDefs set [_type, ["M433Vest (JAM)", si0, isGeneral, 6, "JAM_M433Vest", "\JAM_Magazines\pics\JAM_40mmvest.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_M433Vest = _type;
_type = _type + 1;

equipDefs set [_type, ["M433Belt (JAM)", si0, isGeneral, 3, "JAM_M433Belt", "\JAM_Magazines\pics\JAM_40mmbelt.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_M433Belt = _type;
_type = _type + 1;


comment "For LSR-------------";
equipDefs set [_type, ["MP5 (LSR)", si0, isGeneral, 1, "LSR_mp5mag", "\LSR_uswp\weapics\m_mp5.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_LSR_MP5 = _type;
_type = _type + 1;

equipDefs set [_type, ["MP5 SD (LSR)", si0, isGeneral, 1, "LSR_mp5sdmag", "\LSR_uswp\weapics\m_mp5sd.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_LSR_MP5SD = _type;
_type = _type + 1;

equipDefs set [_type, ["762MG (LSR)", si0, isGeneral, 2, "JAM_W762M_200mag", "\JAM_Magazines\pics\JAM_W762M_200mag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_at762M = _type;
_type = _type + 1;

equipDefs set [_type, ["556MG (LSR)", si0, isGeneral, 2, "JAM_W556M_200mag", "\JAM_Magazines\pics\JAM_W762M_200mag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_at556M = _type;
_type = _type + 1;

equipDefs set [_type, ["762 Sniper (LSR)", si0, isGeneral, 1, "JAM_W762Sniper_20mag", "\JAM_Magazines\pics\JAM_762_sksMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_at762Sniper = _type;
_type = _type + 1;

equipDefs set [_type, ["762 Sniper (LSR)", si0, isGeneral, 1, "JAM_W762_5mag", "\JAM_Magazines\pics\JAM_762_sksMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_at762_5Sniper = _type;
_type = _type + 1;

equipDefs set [_type, ["127 Sniper (LSR)", si0, isGeneral, 1, "JAM_W127_10mag", "\JAM_Magazines\pics\JAM_127x99_10rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_at127Sniper = _type;
_type = _type + 1;

equipDefs set [_type, ["12 Gauge (LSR)", si0, isGeneral, 1, "JAM_12Gauge_Shotgun_Mag", "\JAM_Magazines\pics\JAM_12GaugeShotgunShells.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atShotgun = _type;
_type = _type + 1;

equipDefs set [_type, ["556 (LSR)", si0, isGeneral, 1, "JAM_W556_30mag", "\JAM_Magazines\pics\JAM_556x45_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM4 = _type;
_type = _type + 1;

equipDefs set [_type, ["762 (LSR)", si0, isGeneral, 1, "JAM_W762_20mag", "\JAM_Magazines\pics\JAM_762x51_20rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM14 = _type;
_type = _type + 1;

equipDefs set [_type, ["556 SD (LSR)", si0, isGeneral, 1, "JAM_W556_30SDmag", "\JAM_Magazines\pics\JAM_556x45_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM4SD = _type;
_type = _type + 1;

equipDefs set [_type, ["762 SD (LSR)", si0, isGeneral, 1, "JAM_W762_20SDmag", "\JAM_Magazines\pics\JAM_762x51_20rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM14SD = _type;
_type = _type + 1;

equipDefs set [_type, ["556 M16 (LSR)", si0, isGeneral, 1, "JAM_W556_30Bmag", "\JAM_Magazines\pics\JAM_556x45_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atM16 = _type;
_type = _type + 1;

equipDefs set [_type, ["556MG 200 SD (LSR)", si0, isGeneral, 2, "JAM_W556M_200SDmag", "\LSR_uswp\weapics\m_m249sd.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_W556M_200SDmag = _type;
_type = _type + 1;

equipDefs set [_type, ["762MG 100 (JAM)", si0, isGeneral, 2, "JAM_W762M_100mag", "\JAM_Magazines\pics\JAM_W762M_100mag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_W762M_100mag = _type;
_type = _type + 1;

equipDefs set [_type, ["762 20 SD Mag (JAM)", si0, isGeneral, 1, "JAM_W762Sniper_20SDmag", "\JAM_Magazines\pics\JAM_762x51_20rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_W762Sniper_20SDmag = _type;
_type = _type + 1;

comment "--------------------";

equipDefs set [_type, ["LSW mag (KMM)", si0, isGeneral, 2, "kmmlsmagc", "\kmmdiemaco\inventory\magc.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atlsw = _type;
_type = _type + 1;

equipDefs set [_type, ["MM1", si0, isGeneral, 8, "MM1magazine", "\mm-1\m_mm1" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atMM1 = _type;
_type = _type + 1;

equipDefs set [_type, ["Steyr mag (JAM)", si0, isGeneral, 1, "JAM_W556_AUG_30mag", "\JAM_Magazines\pics\JAM_556x45_AUG_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atSteyr = _type;
_type = _type + 1;

equipDefs set [_type, ["Mini UZI SD mag (JAM)", si0, isGeneral, 1, "JAM_UZISDmag", "\JAM_Magazines\pics\JAM_9x19_32rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_UZISDmag = _type;
_type = _type + 1;

equipDefs set [_type, ["M72 AT (JAM)", si0, isGeneral, 2, "JAM_CAVS_M72Rocket", "\JAM_Magazines\pics\JAM_M72Rocket.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_M72Rocket = _type;
_type = _type + 1;

equipDefs set [_type, ["M72 AP (JAM)", si0, isGeneral, 2, "JAM_CAVS_M72APRocket", "\JAM_Magazines\pics\JAM_M72RocketAP.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_M72APRocket = _type;
_type = _type + 1;

equipDefs set [_type, ["AT4M136 AT (JAM)", si0, isGeneral, 2, "JAM_CAVS_AT4Rocket", "\JAM_Magazines\pics\JAM_AT4Rocket.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_AT4Rocket = _type;
_type = _type + 1;

equipDefs set [_type, ["AT4M136 AP (JAM)", si0, isGeneral, 2, "JAM_CAVS_AT4APRocket", "\JAM_Magazines\pics\JAM_AT4RocketAP.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_AT4APRocket = _type;
_type = _type + 1;

equipDefs set [_type, ["SMAW AT (LSR)", si0, isGeneral, 3, "LSR_smawAT", "\LSR_uswp\smaw\geard2.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atSMAWAT = _type;
_type = _type + 1;

equipDefs set [_type, ["SMAW HE (LSR)", si0, isGeneral, 1, "LSR_smawHE", "\LSR_uswp\smaw\geard3.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atSMAWHE = _type;
_type = _type + 1;

equipDefs set [_type, ["Dragon (CBT)", si0, isGeneral, 6, "TYW_CBT_Drag_Mag", "\CBT_Misc\jav\gear2.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atTYW_CBT_Drag_Mag = _type;
_type = _type + 1;

equipDefs set [_type, ["Carl Gustav (CR)", si0, isGeneral, 4, "cr08_Mag_CarlGustav_1", "\dtaExt\equip\m\m_carlgustavlauncher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atCarlGustav = _type;
_type = _type + 1;

equipDefs set [_type, ["Stinger (CR)", si0, isGeneral, 4, "cr08_Mag_Stinger_1", "\dtaExt\equip\m\m_aalauncher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atStinger = _type;
_type = _type + 1;

equipDefs set [_type, ["GlockS mag (JAM)", si0, isHandgun, 1, "JAM_GlockSDmag", "\O\Guns\zasobnik.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atGlockS = _type;
_type = _type + 1;

equipDefs set [_type, ["Ingram mag", si0, isHandgun, 1, "IngramMag", "\O\Guns\m_uzi.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atIngram = _type;
_type = _type + 1;

equipDefs set [_type, ["M9 mag (JAM)", si0, isHandgun, 1, "JAM_M9mag", "\O\Guns\zasobnik" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atBeretta = _type;
_type = _type + 1;

equipDefs set [_type, ["Glock mag (JAM)", si0, isHandgun, 1, "JAM_GlockMag", "\O\Guns\zasobnik" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atGlock = _type;
_type = _type + 1;

equipDefs set [_type, ["Revolver mag", si0, isHandgun, 1, "RevolverMag", "\O_wp\m_revolever.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atRevolver = _type;
_type = _type + 1;

comment " EAST AMMO";

equipDefs set [_type, ["m70ab2 mag (BKM)", si1, isGeneral, 1, "m70ab2", "\dtaExt\equip\m\m_ak74" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm70ab2 = _type;
_type = _type + 1;

equipDefs set [_type, ["m70b1gl mag (BKM)", si1, isGeneral, 1, "m70b1gl", "\kegak107\gear2" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm70b1gl = _type;
_type = _type + 1;

equipDefs set [_type, ["m72ab1 mag (BKM)", si1, isGeneral, 1, "m72ab1", "\dtaExt\equip\m\m_ak47" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm72ab1 = _type;
_type = _type + 1;

equipDefs set [_type, ["m85 mag (BKM)", si1, isGeneral, 1, "m85", "\dtaExt\equip\m\m_ak47" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm85 = _type;
_type = _type + 1;

equipDefs set [_type, ["m72ab1 mag (BKM)", si1, isGeneral, 1, "m72ab1", "\dtaExt\equip\m\m_ak47" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm72ab1 = _type;
_type = _type + 1;

equipDefs set [_type, ["m82 mag (BKM)", si1, isGeneral, 1, "m82", "\dtaExt\equip\m\m_ak47" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm82 = _type;
_type = _type + 1;

equipDefs set [_type, ["m76 mag (BKM)", si1, isGeneral, 1, "m76", "\dtaExt\equip\m\m_svddragunov" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm76 = _type;
_type = _type + 1;

equipDefs set [_type, ["m21ar mag (BKM)", si1, isGeneral, 1, "m21ar", "\dtaExt\equip\m\m_svddragunov" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm21ar = _type;
_type = _type + 1;

equipDefs set [_type, ["M93 mag (BKM)", si1, isGeneral, 1, "M93", "\dtaExt\equip\m\m_svddragunov" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atM93 = _type;
_type = _type + 1;

equipDefs set [_type, ["m95 mag (BKM)", si1, isGeneral, 1, "m95", "\bizon\m_bizon" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm95 = _type;
_type = _type + 1;

equipDefs set [_type, ["m53 mag (BKM)", si1, isGeneral, 2, "m53", "\dtaExt\equip\m\m_pk" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm53 = _type;
_type = _type + 1;

equipDefs set [_type, ["M84 mag (BKM)", si1, isGeneral, 2, "M84", "\dtaExt\equip\m\m_pk" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atmM84 = _type;
_type = _type + 1;

equipDefs set [_type, ["AK107 mag (KEG)", si1, isGeneral, 1, "kegak107mag", "\kegak107\gear2" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atAK107 = _type;
_type = _type + 1;

equipDefs set [_type, ["5.45mm 30rd mag (JAM)", si1, isGeneral, 1, "JAM_E545_30mag", "\JAM_Magazines\pics\JAM_545x39_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E545_30mag = _type;
_type = _type + 1;

equipDefs set [_type, ["5.45mm 45rd mag (JAM)", si1, isGeneral, 1, "JAM_E545m_45mag", "\JAM_Magazines\pics\JAM_545x39_45rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E545m_45mag = _type;
_type = _type + 1;

equipDefs set [_type, ["SVD mag (JAM)", si1, isGeneral, 1, "JAM_E762_10mag", "\JAM_Magazines\pics\JAM_762x54_10rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762_10mag = _type;
_type = _type + 1;

equipDefs set [_type, ["7.62mm 30rd mag (JAM)", si1, isGeneral, 1, "JAM_E762_30mag", "\JAM_Magazines\pics\JAM_762x39_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762_30mag = _type;
_type = _type + 1;

equipDefs set [_type, ["7.62mm 30rd SD mag (JAM)", si1, isGeneral, 1, "JAM_E762_30sdmag", "\JAM_Magazines\pics\JAM_762x39_30rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762_30sdmag = _type;
_type = _type + 1;

equipDefs set [_type, ["7.62mmMG 75rd Mag (JAM)", si1, isGeneral, 2, "JAM_E762M_75mag", "\JAM_Magazines\pics\JAM_RPKdrum.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762M_75mag = _type;
_type = _type + 1;

equipDefs set [_type, ["9mm 20rd SD Mag (JAM)", si1, isGeneral, 1, "JAM_E9x39_20sdmag", "\JAM_Magazines\pics\JAM_9x39_20rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E9x39_20sdmag = _type;
_type = _type + 1;

equipDefs set [_type, ["9mm 10rd SniperMag (JAM)", si1, isGeneral, 1, "JAM_E9x39sniper_10sdmag", "\JAM_Magazines\pics\JAM_9x39_10rdMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E9x39sniper_10sdmag = _type;
_type = _type + 1;

equipDefs set [_type, ["Bizon mag (JAM)", si1, isGeneral, 1, "JAM_ESMG_64SDmag", "\JAM_Magazines\pics\JAM_BizonMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atBizon = _type;
_type = _type + 1;

equipDefs set [_type, ["PKM 200 mag (JAM)", si1, isGeneral, 2, "JAM_E762M_200mag", "\JAM_Magazines\pics\JAM_E762x54MG.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762M_200mag = _type;
_type = _type + 1;

equipDefs set [_type, ["RPD 100 mag (JAM)", si1, isGeneral, 1, "JAM_E762M_100mag", "\JAM_Magazines\pics\JAM_E762M_100FSmag.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762M_100mag = _type;
_type = _type + 1;

equipDefs set [_type, ["SKS mag (JAM)", si1, isGeneral, 1, "JAM_E762_SKSmag", "\JAM_Magazines\pics\JAM_762_sksMag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_E762_SKSmag = _type;
_type = _type + 1;

equipDefs set [_type, ["VSS mag (VIT)", si1, isGeneral, 1, "VIT_APC_VSSMag", "\VITAPC\VSS\vssmag.jpg" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_VIT_APC_VSSMag = _type;
_type = _type + 1;

equipDefs set [_type, ["6G30", si1, isGeneral, 4, "6g30Magazine", "\6G30\m_6g30" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_at6G30 = _type;
_type = _type + 1;

equipDefs set [_type, ["RPG7VR AT (JAM)", si1, isGeneral, 3, "JAM_CAVS_RPG7Rocket", "\JAM_Magazines\pics\JAM_CAVS_RPG7Rocket.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_RPG7Rocket = _type;
_type = _type + 1;

equipDefs set [_type, ["RPG7 (JAM)", si1, isGeneral, 2, "JAM_CAVS_RPG7ALLRocket", "\JAM_Magazines\pics\JAM_CAVS_RPG7ALLRocket.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_RPG7ALLRocket = _type;
_type = _type + 1;

equipDefs set [_type, ["RPG AP (JAM)", si1, isGeneral, 1, "JAM_CAVS_RPG7APRocket", "\JAM_Magazines\pics\JAM_RPGRocketAP.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_CAVS_RPG7APRocket = _type;
_type = _type + 1;

equipDefs set [_type, ["VOG25 Vest (JAM)", si1, isGeneral, 6, "JAM_VOG25Vest", "\JAM_Magazines\pics\JAM_40mmvest.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_VOG25Vest = _type;
_type = _type + 1;

equipDefs set [_type, ["VOG25 Belt (JAM)", si1, isGeneral, 3, "JAM_VOG25Belt", "\JAM_Magazines\pics\JAM_40mmbelt.pac" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_VOG25Belt = _type;
_type = _type + 1;

equipDefs set [_type, ["VOG25 Grenade (JAM)", si1, isGeneral, 1, "JAM_VOG25grenade", "\JAM_Magazines\pics\JAM_VOGmag.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_VOG25grenade = _type;
_type = _type + 1;

equipDefs set [_type, ["m79osa (BKM)", si1, isGeneral, 2, "m79_Osa", "\dtaExt\equip\m\m_rpglauncher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atm79_osa = _type;
_type = _type + 1;

equipDefs set [_type, ["PG-2 (ICP)", si1, isGeneral, 2, "ICPRPG2Mag", "\ICPRPG7\gearv2.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG2Mag = _type;
_type = _type + 1;

equipDefs set [_type, ["PG-7 (ICP)", si1, isGeneral, 1, "ICPRPG7Mag", "\ICPRPG7\rpg\geard3.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG7Mag = _type;
_type = _type + 1;

equipDefs set [_type, ["PG7VL-HE (ICP)", si1, isGeneral, 1, "ICPRPG7vMag", "\ICPrpg7\rpg\geard3.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG7vMag = _type;
_type = _type + 1;

equipDefs set [_type, ["PG7VLR-AT (ICP)", si1, isGeneral, 3, "ICPRPG7vrMag", "\ICPRPG7\rpg\geard2.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG7vrMag = _type;
_type = _type + 1;

equipDefs set [_type, ["PG16V-AT (ICP)", si1, isGeneral, 2, "ICPRPG16dAT", "\ICPRPG7\rpg\geard4.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG16dAT = _type;
_type = _type + 1;

equipDefs set [_type, ["PG16M-HE (ICP)", si1, isGeneral, 1, "ICPRPG16dHE", "\ICPRPG7\rpg\geard3.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG16dHE = _type;
_type = _type + 1;

equipDefs set [_type, ["RPG-26 (ICP)", si1, isGeneral, 4, "ICPRPG26mag", "\ICPRPG7\RPG26\rpg26_m.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG26mag = _type;
_type = _type + 1;

equipDefs set [_type, ["RPG-18 (ICP)", si1, isGeneral, 3, "ICPRPG18mag", "\ICPRPG7\RPG26\rpg18_m.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG18mag = _type;
_type = _type + 1;

equipDefs set [_type, ["RPG-29 (ICP)", si1, isGeneral, 6, "ICPRPG29Mag", "\ICPrpg7\rpg26\rpg29_m.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atICPRPG29Mag = _type;
_type = _type + 1;

equipDefs set [_type, ["AT4 (CR)", si1, isGeneral, 4, "CR08_Mag_AT4_1", "\dtaExt\equip\m\m_at4launcher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atAT4 = _type;
_type = _type + 1;

equipDefs set [_type, ["Strela (CR)", si1, isGeneral, 4, "CR08_Mag_Strela_1", "\dtaExt\equip\m\m_9k32launcher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
atStrela = _type;
_type = _type + 1;

equipDefs set [_type, ["Skorpion mag", si1, isHandgun, 1, "SkorpionMag", "\O\Guns\zasobnik" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atSkorpion = _type;
_type = _type + 1;

equipDefs set [_type, ["Tokarev Mag (JAM)", si1, isHandgun, 1, "JAM_TokarevMag", "\O\Guns\zasobnik" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atTokarev = _type;
_type = _type + 1;

equipDefs set [_type, ["GSH9*19 Mag(ICP)", si1, isHandgun, 1, "icp_gsh18Mag", "\ICP_RFWP\weapics\m_makarov.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_icp_gsh18Mag = _type;
_type = _type + 1;

equipDefs set [_type, ["GSH9*19 EAP Mag(ICP)", si1, isHandgun, 1, "icp_gsh18eMag", "\ICP_RFWP\weapics\m_makarov.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_icp_gsh18eMag = _type;
_type = _type + 1;

equipDefs set [_type, ["Makarov Mag (ICP)", si1, isHandgun, 1, "icp_makarovMag", "\ICP_RFWP\weapics\m_makarov.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_icp_makarovMag = _type;
_type = _type + 1;

equipDefs set [_type, ["PMM Silenced Mag(ICP)", si1, isHandgun, 1, "ICP_pmmsmag", "\ICP_RFWP\weapics\m_makarov.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_ICP_pmmsmag = _type;
_type = _type + 1;

comment " BOTH AMMO";

equipDefs set [_type, ["Marker Round (JAM)", siBoth, isGeneral, 1, "JAM_MarkerRound", "\JAM_Magazines\pics\JAM_MarkerRound.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_MarkerRound = _type;
_type = _type + 1;

equipDefs set [_type, ["Marker Grenades(JAM)", siBoth, isHandgun, 1, "JAM_MarkerGrenades", "\JAM_Magazines\pics\JAM_MarkerGrenades.paa" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_MarkerGrenades = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare White(JAM)", siBoth, isHandgun, 1, "JAM_flareWhite", "\dtaExt\equip\m\m_flare" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_FlareWhite = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare Green(JAM)", siBoth, isHandgun, 1, "JAM_flareGreen", "\dtaExt\equip\m\m_flaregreen" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_FlareGreen = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare Red(JAM)", siBoth, isHandgun, 1, "JAM_flareRed", "\dtaExt\equip\m\m_flarered" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_FlareRed = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare Yellow(JAM)", siBoth, isHandgun, 1, "JAM_flareYellow", "\dtaExt\equip\m\m_flareyellow" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_JAM_FlareYellow = _type;
_type = _type + 1;

equipDefs set [_type, ["Rifle Mortar", siBoth, isGeneral, 2, "Mortar", "\dtaExt\equip\m\m_mortar" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atMortar = _type;
_type = _type + 1;

equipDefs set [_type, ["Rifle Grenade", siBoth, isGeneral, 2, "GrenadeLauncher", "\dtaExt\equip\m\m_grenadelauncher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atGrenade = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare", siBoth, isGeneral, 1, "Flare", "\dtaExt\equip\m\m_flare" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atFlare = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare Green", siBoth, isGeneral, 1, "FlareGreen", "\dtaExt\equip\m\m_flaregreen" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atFlareGreen = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare Red", siBoth, isGeneral, 1, "FlareRed", "\dtaExt\equip\m\m_flarered" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atFlareRed = _type;
_type = _type + 1;

equipDefs set [_type, ["Flare Yellow", siBoth, isGeneral, 1, "FlareYellow", "\dtaExt\equip\m\m_flareyellow" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atFlareYellow = _type;
_type = _type + 1;

equipDefs set [_type, ["Laser", siBoth, isGeneral, 6, "LaserDesignator", "\dtaExt\equip\m\m_carlgustavlauncher" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_atLaser = _type;
_type = _type + 1;

firstEquip = _type;

equipDefs set [_type, ["Hand Grenade", siBoth, isGeneral, 1, "HandGrenade", "\dtaExt\equip\m\m_handgrenade" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_type = _type + 1;

equipDefs set [_type, ["Mine", siBoth, isGeneral, 2, magMine, "\dtaExt\equip\m\m_mine" ]];
etMine = _type;
_type = _type + 1;

equipDefs set [_type, ["Satchel", siBoth, isGeneral, 2, "Pipebomb", "\dtaExt\equip\m\m_pipebomb" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_type = _type + 1;

equipDefs set [_type, ["Smoke Shell", siBoth, isGeneral, 1, "SmokeShell", "\dtaExt\equip\m\m_smokeshell" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_type = _type + 1;

equipDefs set [_type, ["Smoke Shell Green", siBoth, isGeneral, 1, "SmokeShellGreen", "\dtaExt\equip\m\m_smokeshell" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_type = _type + 1;

equipDefs set [_type, ["Smoke Shell Red", siBoth, isGeneral, 1, "SmokeShellRed", "\dtaExt\equip\m\m_smokeshellred" ]];
equipSearch set [_type, (equipDefs select _type) select edObject];
_type = _type + 1;

equipDefs set [_type, ["Medkit", siBoth, isHandgun, 1, _medkit, "\data\sanita_02",50 ]] ;
equipSearch set [_type, (equipDefs select _type) select edObject];
_etMed = _type;
_type = _type + 1;
equipDefs set [_type, ["Portable Mine", siBoth, isHandgun, 1, magPistolMine, "\dtaExt\equip\m\m_mine",100 ]] ;
equipSearch set [_type, (equipDefs select _type) select edObject];
_etPortMine = _type;
_type = _type + 1;



weaponDefs resize 0; weaponSearch resize 0;
_type = 0;

comment " WEST WEAPONS";

weaponDefs set [_type, ["M4 ACOG (LSR)", si0, wtPrimary, "LSR_m4_acog", "\LSR_uswp\weapics\w_m4sopmod.paa", [[_atM4,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M4 ACOG SD (LSR)", si0, wtPrimary, "LSR_m4_acog_sd", "\LSR_uswp\weapics\w_m4sopmodsd.paa", [[_atM4SD,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M4 Aimpoint (LSR)", si0, wtPrimary, "LSR_m4_aim", "\LSR_uswp\weapics\w_m4sopmod_aim.paa", [[_atM4,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M4 Aimpoint SD (LSR)", si0, wtPrimary, "LSR_m4_aim_sd", "\LSR_uswp\weapics\w_m4sopmodsd_aim.paa", [[_atM4SD,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M4 Aimpoint SD/M203 (LSR)", si0, wtPrimary, "LSR_M4_M203_aim_sd", "\LSR_uswp\weapics\w_m4aimm203sd.paa", [[_atM4SD,4],[_JAM_M433Vest,1],[_JAM_M433grenade,0],[_JAM_MarkerGrenades,0],[_JAM_MarkerRound,0],[_JAM_FlareWhite,0],[_JAM_FlareGreen,0],[_JAM_FlareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M4 Reflex (LSR)", si0, wtPrimary, "LSR_m4_rx", "\LSR_uswp\weapics\w_m4sopmod_rx.paa", [[_atM4,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M4 Reflex SD (LSR)", si0, wtPrimary, "LSR_m4_rx_sd", "\LSR_uswp\weapics\w_m4sopmodsd_rx.paa", [[_atM4SD,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["MP5A4 Aim (LSR)", si0, wtPrimary, "LSR_mp5a4", "\LSR_uswp\weapics\w_mp5a4.paa", [[_LSR_MP5,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["MP5SD6 Aim (LSR)", si0, wtPrimary, "LSR_mp5sd6", "\LSR_uswp\weapics\w_mp5sd6.paa", [[_LSR_MP5SD,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M14 ACOG (LSR)", si0, wtPrimary, "LSR_m14_acog_new", "\LSR_uswp\weapics\w_m14acog.paa", [[_atM14,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M14 Aimpoint (LSR)", si0, wtPrimary, "LSR_m14_aim_new", "\LSR_uswp\weapics\w_m14_aim.paa", [[_atM14,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M14 Leupold SD (LSR)", si0, wtPrimary, "LSR_m14_sopmod_sd_leu", "\LSR_uswp\weapics\w_m14sopmod_leu_sd.paa", [[_atM14SD,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["CAR-15 Aimpoint (LSR)", si0, wtPrimary, "LSR_car15_aim", "\LSR_uswp\weapics\w_car15_aim.paa", [[_atM4,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["CAR-15/M203 (LSR)", si0, wtPrimary, "LSR_car15_m203", "\LSR_uswp\weapics\w_car15_m203.paa", [[_atM4,4],[_JAM_M433Vest,1],[_JAM_M433grenade,0],[_JAM_MarkerGrenades,0],[_JAM_MarkerRound,0],[_JAM_FlareWhite,0],[_JAM_FlareGreen,0],[_JAM_FlareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M16A4 ACOG (LSR)", si0, wtPrimary, "LSR_m16a4_acog", "\LSR_uswp\weapics\w_m16a4_acog.paa", [[_atM16,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M16A4 ACOG/M203 (LSR)", si0, wtPrimary, "LSR_M16a4_acog_M203", "\LSR_uswp\weapics\w_m16a4_acog_m203.paa", [[_atM16,4],[_JAM_M433Vest,1],[_JAM_M433grenade,0],[_JAM_MarkerGrenades,0],[_JAM_MarkerRound,0],[_JAM_FlareWhite,0],[_JAM_FlareGreen,0],[_JAM_FlareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M21 Bipod (LSR)", si0, wtPrimary, "LSR_M21", "\LSR_uswp\weapics\w_m21.paa", [[_atM21,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M21 SD Bipod (LSR)", si0, wtPrimary, "LSR_M21_sd", "\LSR_uswp\weapics\w_m21_sd.paa", [[_JAM_W762Sniper_20SDmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M24 (LSR)", si0, wtPrimary, "LSR_m24", "\LSR_uswp\weapics\w_m24.paa", [[_at762_5Sniper,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M40 (LSR)", si0, wtPrimary, "LSR_m40", "\LSR_uswp\weapics\w_m40a1.paa", [[_at762_5Sniper,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Stoner SR-25 (LSR)", si0, wtPrimary, "LSR_sr25", "\LSR_uswp\weapics\w_sr25.paa", [[_at762Sniper,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M82A (LSR)", si0, wtPrimary, "LSR_m82a1", "\LSR_uswp\weapics\w_m82a1.paa", [[atM82W,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M240B (LSR)", si0, wtPrimary, "LSR_m240", "\LSR_uswp\weapics\w_m240.paa", [[_at762M,4],[_JAM_W762M_100mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M240B/M145 (LSR)", si0, wtPrimary, "LSR_m240_m145", "\LSR_uswp\weapics\w_m240opt.paa", [[_at762M,4],[_JAM_W762M_100mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M249 (LSR)", si0, wtPrimary, "LSR_M249", "\LSR_uswp\weapics\w_m249.paa", [[atM249,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M249 SPW ACOG (LSR)", si0, wtPrimary, "LSR_m249spw_acog", "\LSR_uswp\weapics\w_spw.paa", [[_at556M,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M249 SPW ACOG SD (LSR)", si0, wtPrimary, "LSR_m249spw_acog_sd", "\LSR_uswp\weapics\w_spw_sd.paa", [[_JAM_W556M_200SDmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M3 Shotgun (LSR)", si0, wtPrimary, "LSR_m3", "\LSR_uswp\weapics\w_m3.paa", [[_atShotgun,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M1014 Shotgun (LSR)", si0, wtPrimary, "LSR_m1014_aim", "\LSR_uswp\weapics\w_m1014.paa", [[_atShotgun,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M16 (JAM)", si0, wtPrimary, "JAM_M16", "\dtaExt\equip\w\w_m16", [[_JAM_W556_30Bmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M16A1 (JAM)", si0, wtPrimary, "JAM_M16A1", "\JAM_Magazines\pics\JAM_m16a1.paa", [[_JAM_W556_30Bmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M16GL (JAM)", si0, wtPrimary, "JAM_M16GL", "\dtaExt\equip\w\w_M16GrenadeLauncher", [[_JAM_W556_30Bmag,4],[_JAM_M433Vest,1],[_JAM_M433Belt,0],[_JAM_M433grenade,0],[_JAM_MarkerGrenades,0],[_JAM_MarkerRound,0],[_JAM_FlareWhite,0],[_JAM_FlareGreen,0],[_JAM_FlareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["G36 (JAM)", si0, wtPrimary, "JAM_G36", "\G36A\w_g36", [[_atG36,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M21 (JAM)", si0, wtPrimary, "JAM_M21", "\dtaExt\equip\w\w_m21", [[_atM21,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["MP5-SD (JAM)", si0, wtPrimary, "JAM_MP5SBASD", "\dtaExt\equip\w\w_hk", [[_atMP5,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M79 (JAM)", si0, wtPrimary, "JAM_M79", "\JAM_Magazines\pics\JAM_M79.paa", [[_JAM_M433Vest,1],[_JAM_M576buck,4],[_JAM_M433Belt,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["MM1", si0, wtPrimaryOnly, "MM1", "\MM-1\mm-1", [[_atMM1,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M60 (JAM)", si0, wtPrimary, "JAM_M60FS", "\dtaExt\equip\w\w_m60", [ [_atM60FS200,2],[_atM60FS100,0] ] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["G3 (JAM)", si0, wtPrimary, "JAM_G3", "\O\Guns\w_HKG3", [[_atG3,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["XMS (JAM)", si0, wtPrimary, "JAM_XMS", "\XMS\w_XMS", [[_JAM_W556_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M14 (JAM)", si0, wtPrimary, "JAM_M14", "\JAM_Magazines\pics\w_m14.paa", [[atM14,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["LSW (KMM)", si0, wtPrimary, "kmmlsim", "\kmmdiemaco\inventory\lsim.paa", [[atlsw,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["LSW Elcan (KMM)", si0, wtPrimary, "kmmlsem", "\kmmdiemaco\inventory\lsem.paa", [[atlsw,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Steyr (JAM)",  si0, wtPrimary, "JAM_AUG", "\Steyr\w_steyr", [[_atSteyr,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Mini UZI SD (JAM)",  si0, wtPrimary, "JAM_UZISD", "\O\Guns\w_uzi.paa", [[_JAM_UZISDmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M72 LAW (JAM)", si0, wtSecondary, "JAM_CAVS_M72LAWLauncher", "\dtaExt\equip\w\w_lawlauncher", [[_JAM_CAVS_M72Rocket,3],[_JAM_CAVS_M72APRocket,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AT4M136 (JAM)", si0, wtSecondary, "JAM_CAVS_AT4Launcher", "\JAM_Magazines\pics\JAM_AT4.paa", [[_JAM_CAVS_AT4Rocket,3],[_JAM_CAVS_AT4APRocket,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SMAW (LSR)", si0, wtSecondary, "LSR_smawLauncher", "\LSR_uswp\smaw\gear1.paa", [[_atSMAWAT,3],[_atSMAWHE,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Carl Gustav (CR)", si0, wtSecondary, "cr08_CarlGustavLauncher", "\dtaExt\equip\w\w_carlgustavlauncher", [[atCarlGustav,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M47 Dragon (CBT)", si0, wtSecondary, "TYW_CBT_Drag_Launcher", "\CBT_Misc\jav\javelinlogo.paa", [[_atTYW_CBT_Drag_Mag,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Stinger (CR)", si0, wtSecondary, "cr08_StingerLauncher", "\dtaExt\equip\w\w_aalauncher", [[atStinger,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Flaregun (JAM)", si0, wtHandgun, "JAM_flaregun", "\JAM_Magazines\pics\JAM_flaregun.paa", [[_JAM_MarkerGrenades,1],[_JAM_MarkerRound,0],[_JAM_flareWhite,3],[_JAM_flareGreen,0],[_JAM_flareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M9 (JAM)", si0, wtHandgun, "JAM_M9", "\O\Guns\bereta", [[_atBeretta,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Glock (JAM)", si0, wtHandgun, "JAM_Glock", "\O\Guns\Glock", [[_atGlock,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["GlockS (JAM)", si0, wtHandgun, "JAM_GlockSD", "\O_wp\w_Glocksilent.paa", [[_atGlockS,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Ingram", si0, wtHandgun, "Ingram", "\O_wp\w_ingram.paa", [[_atIngram,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Revolver", si0, wtHandgun, "Revolver", "\O_wp\w_sam.paa", [[_atRevolver,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

comment " EAST";

weaponDefs set [_type, ["AK-74 (ICP)", si1, wtPrimary, "ICP_ak74", "\ICP_rfwp\weapics\w_ak74.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK-74M (ICP)", si1, wtPrimary, "ICP_ak74m", "\ICP_rfwp\weapics\w_ak74m.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK-74N (ICP)", si1, wtPrimary, "ICP_AK74N", "\ICP_rfwp\weapics\w_ak74n.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK-74NSP (ICP)", si1, wtPrimary, "ICP_AK74NSP", "\ICP_rfwp\weapics\w_ak74nsp.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK-74/GP25 (ICP)", si1, wtPrimary, "ICP_ak74gl", "\ICP_rfwp\weapics\w_ak74gp.paa", [[_JAM_E545_30mag,4],[_JAM_E545_30mag,0],[_JAM_VOG25Vest,1],[_JAM_VOG25grenade,0],[_atflare,0],[_atflareGreen,0],[_atflareRed,1],[_atFlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKS-74 (ICP)", si1, wtPrimary, "ICP_aks74", "\ICP_rfwp\weapics\w_aks74.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKS-74M (ICP)", si1, wtPrimary, "ICP_aks74m", "\ICP_rfwp\weapics\w_aks74m.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK-74M/PSO-1 (ICP)", si1, wtPrimary, "ICP_ak74mo", "\ICP_rfwp\weapics\w_ak74mpso.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKS-74/GP25 (ICP)", si1, wtPrimary, "ICP_aks74gp", "\ICP_rfwp\weapics\w_aks74gp.paa", [[_JAM_E545_30mag,4],[_JAM_E545_30mag,0],[_JAM_VOG25Vest,1],[_JAM_VOG25grenade,0],[_atflare,0],[_atflareGreen,0],[_atflareRed,1],[_atFlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKS-74U (ICP)", si1, wtPrimary, "ICP_aks74u", "\ICP_rfwp\weapics\w_aks74u.paa", [[_JAM_e545_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKMS (ICP)", si1, wtPrimary, "ICP_akms", "\ICP_rfwp\weapics\w_akms.paa", [[_JAM_E762_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKMS/GP25 (ICP)", si1, wtPrimary, "ICP_akmsgp", "\ICP_rfwp\weapics\w_akmsgp.paa", [[_JAM_E762_30mag,4],[_JAM_VOG25Vest,1],[_JAM_VOG25grenade,0],[_atflare,0],[_atflareGreen,0],[_atflareRed,1],[_atFlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKM (ICP)", si1, wtPrimary, "ICP_akm", "\ICP_rfwp\weapics\w_akm.paa", [[_JAM_E762_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKMB (ICP)", si1, wtPrimary, "ICP_akmb", "\ICP_rfwp\weapics\w_akmb.paa", [[_JAM_E762_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKMB-N (ICP)", si1, wtPrimary, "ICP_akmnb", "\ICP_rfwp\weapics\w_akmnb.paa", [[_JAM_E762_30sdmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKM/GP25 (ICP)", si1, wtPrimary, "ICP_akmgp", "\ICP_rfwp\weapics\w_akmgp.paa", [[_JAM_E762_30mag,4],[_JAM_VOG25Vest,1],[_JAM_VOG25grenade,0],[_atflare,0],[_atflareGreen,0],[_atflareRed,1],[_atFlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKMS+PBS-1 (ICP)", si1, wtPrimary, "ICP_akmsb", "\ICP_rfwp\weapics\w_akmsb.paa", [[_JAM_E762_30sdmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK-47 (ICP)", si1, wtPrimary, "ICP_ak47", "\ICP_rfwp\weapics\w_ak47.paa", [[_JAM_E762_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AKS-47 (ICP)", si1, wtPrimary, "ICP_aks47", "\ICP_rfwp\weapics\w_aks47.paa", [[_JAM_E762_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPK-74 (ICP)", si1, wtPrimary, "ICP_rpk74", "\ICP_rfwp\weapics\w_rpk74.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPK-74M (ICP)", si1, wtPrimary, "ICP_rpk74m", "\ICP_rfwp\weapics\w_rpk74m.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPK-74N (ICP)", si1, wtPrimary, "ICP_rpkn", "\ICP_rfwp\weapics\w_rpkn.paa", [[_JAM_E545_30mag,4],[_JAM_E545m_45mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPK-47 (ICP)", si1, wtPrimary, "ICP_rpk47", "\ICP_rfwp\weapics\w_rpk47.paa", [[_JAM_E762M_75mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SVD (ICP)", si1, wtPrimary, "ICP_SVD", "\ICP_rfwp\weapics\w_svd.paa", [[_JAM_E762_10mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SVD-N (ICP)", si1, wtPrimary, "ICP_SVDN", "\ICP_rfwp\weapics\w_svdn.paa", [[_JAM_E762_10mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SVD 1989 (ICP)", si1, wtPrimary, "ICP_SVD89", "\ICP_rfwp\weapics\w_svd_b.paa", [[_JAM_E762_10mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SVD Camo (ICP)", si1, wtPrimary, "ICP_SVDCamo", "\ICP_rfwp\weapics\w_svdcamo.paa", [[_JAM_E762_10mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SVD-S (ICP)", si1, wtPrimary, "ICP_SVDS", "\ICP_rfwp\weapics\w_svds.paa", [[_JAM_E762_10mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["VSS Vintorez (VIT)", si1, wtPrimary, "VIT_APC_VSS", "\VITAPC\VSS\vsspic.paa", [[_VIT_APC_VSSMag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["PK (ICP)", si1, wtPrimaryOnly, "ICP_PK", "\ICP_rfwp\weapics\w_pk.paa", [[_JAM_E762M_200mag,4],[_JAM_E762M_100mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["PKN (ICP)", si1, wtPrimaryOnly, "ICP_PKN", "\ICP_rfwp\weapics\w_pkn.paa", [[_JAM_E762M_200mag,4],[_JAM_E762M_100mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["PKM (ICP)", si1, wtPrimaryOnly, "ICP_PKM", "\ICP_rfwp\weapics\w_pkm.paa", [[_JAM_E762M_200mag,4],[_JAM_E762M_100mag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK74 (JAM)", si1, wtPrimary, "JAM_AK74", "\dtaExt\equip\w\w_ak74", [[_JAM_E545_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK74GL (JAM)", si1, wtPrimary, "JAM_AK74GL", "\dtaExt\equip\w\w_ak74grenadelauncher", [[_JAM_E545_30mag,4],[_JAM_VOG25Vest,1],[_JAM_VOG25Belt,0],[_JAM_VOG25grenade,0],[_JAM_MarkerGrenades,0],[_JAM_MarkerRound,0],[_JAM_FlareWhite,0],[_JAM_FlareGreen,0],[_JAM_FlareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SKS (JAM)", si1, wtPrimary, "JAM_SKS", "\JAM_Magazines\pics\JAM_sks.paa", [[_JAM_E762_SKSmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["SVD (JAM)", si1, wtPrimary, "JAM_SVD", "\dtaExt\equip\w\w_svddragunov", [[_JAM_E762_10mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Bizon (JAM)", si1, wtPrimary, "JAM_BizonSD", "\bizon\w_bizon", [[_atBizon,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["6G30", si1, wtPrimaryOnly, "6G30", "\6G30\6g30", [[_at6G30,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["PKM (JAM)", si1, wtPrimary, "JAM_PKM", "\dtaExt\equip\w\w_pk", [[_JAM_E762M_200mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPD (JAM)", si1, wtPrimary, "JAM_RPD", "\JAM_Magazines\pics\JAM_rpd.paa", [[_JAM_E762M_100mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK74U (JAM)", si1, wtPrimary, "JAM_AKS74U", "\dtaExt\equip\w\w_ak74su", [[_JAM_E545_30mag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M70AB2 (BKM)", si1, wtPrimary, "m70ab2", "\Bkm_weapons\slike\M70AB2.pac", [[atm70ab2,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M70B1GL (BKM)", si1, wtPrimary, "M70B1GL", "\dtaext\equip\w\w_ak47grenadelauncher.paa", [[atm70ab2,4],[_atGrenade,2],[_atflare,0],[_atflareGreen,0],[_atflareRed,1],[_atFlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M76 (BKM)", si1, wtPrimary, "m76", "\Bkm_weapons\slike\m76.pac", [[atm76,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M93 (BKM)", si1, wtPrimary, "M93", "\Bkm_weapons\slike\M93.pac", [[atM93,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M21AR (BKM)", si1, wtPrimary, "m21ar", "\Bkm_weapons\slike\m21.pac", [[atm21ar,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M21GL (BKM)", si1, wtPrimary, "m21gl", "\Bkm_weapons\Slike\M21GL.pac", [[atm21ar,4],[_atGrenade,2],[_atflare,0],[_atflareGreen,0],[_atflareRed,1],[_atFlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M95 (BKM)", si1, wtPrimary, "m95", "\bizon\w_bizon", [[atm95,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M84 (BKM)", si1, wtPrimaryOnly, "M84", "\Bkm_weapons\slike\M84.pac", [[atmM84,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M53 (BKM)", si1, wtPrimaryOnly, "m53", "\Bkm_weapons\slike\m53.pac", [[atm53,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M82 (BKM)", si1, wtPrimary, "m82", "\Bkm_weapons\slike\M82_A.pac", [[atm82,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M72AB1 (BKM)", si1, wtPrimary, "m72ab1", "\dtaext\equip\w\w_ak47.paa", [[atm72ab1,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["M85 (BKM)", si1, wtPrimary, "m85", "\dtaExt\equip\w\w_ak47cz", [[atm85,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AK107 (KEG)", si1, wtPrimary, "kegak107", "\KEGak107\gear1", [[_atAK107,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

comment "SECONDARY";

weaponDefs set [_type, ["RPG-7 (ICP)", si1, wtSecondary, "ICPRPG7", "\ICPrpg7\gear1.paa", [[_atICPRPG7Mag,6]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPG-7V (ICP)", si1, wtSecondary, "ICPRPG7v", "\ICPrpg7\gearV1.paa", [[_atICPRPG7vMag,0],[_atICPRPG7vrMag,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["PG-16M (ICP)", si1, wtSecondary, "ICPRPG16dAT", "\ICPRPG7\rpg\geard1.paa", [[_atICPRPG16dAT,1],[_atICPRPG16dHE,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPG-18 Myxa (ICP)", si1, wtSecondary, "ICPRPG18", "\icprpg7\rpg26\rpg18_w.paa", [[_atICPRPG18mag,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPG-26 (ICP)", si1, wtSecondary, "ICPRPG26", "\icprpg7\rpg26\rpg26_w.paa", [[_atICPRPG26mag,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["RPG-29 Vampire (ICP)", si1, wtSecondary, "ICPRPG29", "\ICPrpg7\rpg26\rpg29_w.paa", [[_atICPRPG29Mag,1]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["AT4 (CR)", si1, wtSecondary, "CR08_AT4Launcher", "\dtaExt\equip\w\w_at4launcher", [[atAT4,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Strela (CR)", si1, wtSecondary, "CR08_StrelaLauncher", "\dtaExt\equip\w\w_9k32launcher", [[atStrela,2]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Flaregun (JAM)", si1, wtHandgun, "JAM_flaregun", "\JAM_Magazines\pics\JAM_flaregun.paa", [[_JAM_MarkerGrenades,1],[_JAM_MarkerRound,0],[_JAM_FlareWhite,3],[_JAM_FlareGreen,0],[_JAM_FlareRed,0],[_JAM_FlareYellow,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["GSH-18 (ICP)", si1, wtHandgun, "icp_gsh18", "\ICP_RFWP\weapics\w_gsh.paa", [[_icp_gsh18Mag,4],[_icp_gsh18eMag,0]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Makarov PM (ICP)", si1, wtHandgun, "icp_makarov", "\ICP_RFWP\weapics\w_makarov.paa", [[_icp_makarovMag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["PMM Silenced (ICP)", si1, wtHandgun, "icp_pmms", "\ICP_RFWP\weapics\w_pmms.paa", [[_ICP_pmmsmag,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Tokarev (JAM)", si1, wtHandgun, "JAM_Tokarev", "\O\Guns\Tokarev", [[_atTokarev,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["Skorpion", si1, wtHandgun, "Skorpion", "\O\Guns\Skorpion", [[_atSkorpion,4]] ]];
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

comment " BOTH WEAPONS";

weaponDefs set [_type, ["Remigton", -1, wtPrimary, "HuntingRifle", "\O_wp\w_remigton", [[_atHRiffle,4]],100 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_wtRemigton = _type;
_type = _type + 1;

weaponDefs set [_type, ["Laser", siBoth, wtSecondary, "LaserDesignator", "\dtaExt\equip\w\w_carlgustavlauncher", [[_atLaser,1]],50 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;

weaponDefs set [_type, ["HyperLauncher", -1, wtSecondary, _hyperL, "\dtaExt\equip\w\w_carlgustavlauncher", [[_atCarlGustav2,0],[_atStinger2,0],[_atAT42,0],[_atStrela2,0]],150 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;


weaponDefs set [_type, ["Binoculars", siBoth, wtBinocular, "Binocular", "\dtaExt\equip\w\w_binocular", [], 0 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_type = _type + 1;
weaponDefs set [_type, ["NV Goggles", -1, wtNVG, "NVGoggles", "\dtaExt\equip\w\w_nvgoggles", [], 0 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_wtNVGOrigin = _type;
_type = _type + 1;
weaponDefs set [_type, ["NVG stat", siBoth, wtNVG, _nvg0, "\dtaExt\equip\w\w_nvgoggles", [], 0 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_wtNVG0 = _type;
_type = _type + 1;
weaponDefs set [_type, ["NVG statF", siBoth, wtNVG, _nvg1, "\dtaExt\equip\w\w_nvgoggles", [], 100 ]] ;
weaponSearch set [_type, (weaponDefs select _type) select wdObject];
_wtNVG1 = _type;
_type = _type + 1;

if bool_TZK_199_Mode Then {
	{weaponDefs select _x set [wdSides, -1]} forEach [_wtNVG0, _wtNVG1], weaponDefs select _wtNVGOrigin set [wdSides, siBoth]
};


{_x set [edcost, 0]} forEach equipDefs;
{_x set [wdcost, 0]} forEach weaponDefs;

if !bool_TZK_199_Mode Then {weaponDefs select _wtNVG1 set [wdcost, 100]};
