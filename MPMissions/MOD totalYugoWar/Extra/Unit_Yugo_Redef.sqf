comment "The totalYugoWar mod units are quited different with TZK. By now we can't contact with its author, thus in this script the unitDefs matrix is directly re-defined but not replaced (by elements).";

unitDefs resize 0; infCustom resize 0; utCustom resize 0;
_type = 0;


_si = si0;


_st = stBarracks;


unitDefs set [_type, ["Worker", costWorker, _si, 10, "LSR_captive", "ivojak", -1, [], "", ["Server\Loop\Worker.sqs"]] ];
utWorkerW = _type;
_type = _type + 1;


unitDefs set [_type, ["US Ranger", 100, _si, 10, "LSR_JAM_ranger", "ivojak", 2^_st, [], "", []] ];
_soldierW = _type;
_type = _type + 1;

unitDefs set [_type, ["US Ranger GL", 100, _si, 10, "LSR_JAM_ranger_gl", "igrenadier", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ranger MG M240", 150, _si, 10, "LSR_JAM_ranger_m240", "ismg", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ranger MG M249", 150, _si, 10, "LSR_JAM_ranger_m249", "ismg", 2^_st, [], "", []] ];
_soldierMGW = _type;
_type = _type + 1;

unitDefs set [_type, ["US Ranger Sniper", 150, _si, 10, "LSR_JAM_ranger_sniper", "isniper", 2^_st, [], "", []] ];
_sniperW = _type;
_type = _type + 1;

unitDefs set [_type, ["US Ranger Heavy Sniper", 150, _si, 10, "LSR_JAM_ranger_sniperm82_g", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ranger LAW", 200, _si, 10, "LSR_JAM_ranger_law", "islaw", 2^_st, [], "", []] ];
_soldierLAWW = _type;
_type = _type + 1;

unitDefs set [_type, ["US Ranger M136AT4", 250, _si, 10, "LSR_JAM_ranger_at", "isat", 2^_st, [], "", []] ];
_soldierATW = _type;
_type = _type + 1;

unitDefs set [_type, ["US Ranger Gustav(x2)", 300, _si, 10, "LSR_JAM_ranger_at", "isat", 2^_st, [], "", ["Extra\Equip\WLgustav.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["US Ranger AT-Dragon", 400, _si, 10, "LSR_JAM_ranger_at", "isat", 2^_st, [], "", ["Extra\Equip\WLDragon.sqs"]] ];
_soldierDragon = _type;
_type = _type + 1;

unitDefs set [_type, ["US Delta AT-SMAW", 300, _si, 10, "LSR_delta_smaw", "isat", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ranger AA-Stinger", 200, _si, 10, "LSR_JAM_ranger_aa", "isaa", 2^_st, [], "", []] ];
_soldierAAW = _type;
_type = _type + 1;

unitDefs set [_type, ["US Delta(S) MP5", 150, _si, 10, "LSR_JAM_delta_cqb3", "isaboteur", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Delta(S) Light MG", 200, _si, 10, "LSR_JAM_delta_autorifleman_s", "ismg", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Delta(S) AT", 250, _si, 10, "LSR_JAM_delta_at4_s", "isat", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Delta(S) SMAW", 300, _si, 10, "LSR_delta_smaw_s", "isat", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ghillie Sniper", 150, _si, 10, "LSR_JAM_delta90_sniper_g", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ghillie HvSniper", 150, _si, 10, "LSR_JAM_delta90_sniperm82_g", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["US Ranger Medic", 100, _si, 10, "LSR_JAM_ranger_medic", "imedic", 2^_st, [], "", []] ];
_medicW = _type;
_type = _type + 1;


unitDefs set [_type, ["Dutch marine LOAW", 100, _si, 10, "kmmmrnSoldierWLSW", "ivojak", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine M203", 100, _si, 10, "kmmmrnSoldierWG", "igrenadier", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine FN MAG/58", 150, _si, 10, "kmmmrnSoldierWMG", "ismg", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine C8A1", 150, _si, 10, "kmmmrnSoldierWC8A1", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine M136 AT4", 200, _si, 10, "kmmmrnSoldierWAT4", "isaa", 2^_st, [], "", ["Extra\Equip\WLstinger.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine 2xGustav", 300, _si, 10, "kmmmrnSoldierWAT", "isat", 2^_st, [], "", ["Extra\Equip\WLgustav.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine AT-Dragon", 400, _si, 10, "kmmmrnSoldierWAT", "isat", 2^_st, [], "", ["Extra\Equip\WLDragon.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine AA", 200, _si, 10, "kmmmrnSoldierWAA", "isaa", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine Recon MP5sd", 150, _si, 10, "kmmmrnSoldierWRecon", "isaboteur", 2^_st, [], "", []] ];
_bomberW = _type;
_type = _type + 1;

unitDefs set [_type, ["Dutch marine medic", 100, _si, 10, "kmmmrnSoldierWMedic", "imedic", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Dutch marine Miner", 100, _si, 10, "kmmmrnSoldierWminer", "iminer", 2^_st, [], "", ["\TZK_Scripts_4_0_6\Common\Equip\Miner.sqs"]] ];
_minerW = _type;
_type = _type + 1;

unitDefs set [_type, ["Crew", 100, _si, 10, "CBT_crew_w_03", "icrew", 2^_st, [], "", []] ];
_crewW = _type;
_type = _type + 1;

unitDefs set [_type, ["Pilot M4", 100, _si, 10, "JAM_SoldierWPilot", "ipilot", 2^_st, [], "", []] ];
_pilotW = _type;
_type = _type + 1;

unitDefs set [_type, ["Custom", costCustom, _si, 10, "LSR_JAM_ranger", "ivojak", -1, [], "", []] ];
_customW = _type;
_type = _type + 1;



_st = stLight;

unitDefs set [_type, ["HMMWV (open)", 200, _si, 30, "TYW8_CBT_M998_O_W", "\CBT_HMMWV\ui\m998ow.paa" , 2^_st, [1, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_jeepW = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV (cargo6)", 250, _si, 30, "TYW8_CBT_M1038_W", "\CBT_HMMWV\ui\m1038w.paa", 2^_st, [1, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_hummerW = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV M240", 300, _si, 30, "TYW8_CBT_M1025_W_M240", "\CBT_HMMWV\ui\m1025w.paa", 2^_st, [2, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_hummerM240W = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV M2", 350, _si, 30, "TYW8_CBT_M1025_W_M2", "\CBT_HMMWV\ui\m1025w.paa", 2^_st, [2, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_hummerM2W = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV MK19", 500, _si, 30, "TYW8_CBT_M1025_W_MK19", "\CBT_HMMWV\ui\m1025w.paa", 2^_st, [2, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_hummerMK19W = _type;
_type = _type + 1;

unitDefs set [_type, ["HMMWV TOW", 800, _si, 30, "TYW8_CBT_M1121_W", "\CBT_HMMWV\ui\m1121w.paa", 2^_st, [2, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_hummerTOWW = _type;
_type = _type + 1;

unitDefs set [_type, ["Support Truck", 500, _si, 30, "TYW8_M925NATOREPAIR", "itruck5trepair", 2^_st, [1, _soldierW], _mSupport, ["Common\InitSupportVehicle.sqs", "Extra\ppl\InitTransportTruck.sqs"]] ];
_supportTruckW = _type;
_type = _type + 1;

unitDefs set [_type, ["5t Truck", 300, _si, 30, "TYW8_M925NATO", "itruck5t", 2^_st, [1, _soldierW], _mTruck, [localize TZK_EQUIP_UNIT_TRUCK]] ];
_truckW = _type;
_type = _type + 1;

unitDefs set [_type, ["Fuel 5t Truck", 500, _si, 30, "TYW8_M925NATOFUEL", "iTruck5tfuel", 2^_st, [1, _soldierW], _mFuel, []] ];
_type = _type + 1;

unitDefs set [_type, ["Mercedes 290GD", 200, _si, 30, "KMMMB290GDSTPAINF", "\KMMMB290GD\Icons\inIcon", 2^_st, [1, _soldierW], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mercedes = _type;
_type = _type + 1;

unitDefs set [_type, ["Zodiac", 200, _si, 30, "CR08_ZodiacW", "\cwkzodiac\icon.paa" , 2^_st, [1, _soldierW], _mBoat, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat (tug)", 1000, _si, 60, "BoatW", "ipbr", 2^_st, [2, _soldierW], _mBoat, ["Extra\ppl\InitTransportBoat.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Zubr (tug)", 4000, _si, 90, "TYW8_Zubr_W","\Zubr\zubr.pac" , 2^_st, [2, _soldierW], _mBoat, ["Extra\ppl\InitTransportBoat.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Patrol Ship (tug)", 6000, _si, 90, "TYW8_ADF_FCPB_W", "\TotalYugoWarFinal\Images\PatrolShip.jpg" , 2^_st, [2, _soldierW], _mBoat, ["Extra\ppl\InitTransportBoat.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Fast Attack Ship", 8000, _si, 90, "TYW8_FABoat_W", "\TotalYugoWarFinal\Images\AttackShip.jpg", 2^_st, [2, _soldierW], _mBoat, [localize TZK_EQUIP_UNIT_CARGOCAR]] ] ;
_type = _type + 1;


_st = stHeavy;

unitDefs set [_type, ["Support M113A2", _costSupportAPC, _si, 60, "TYW8_CBT_M113A2Support", "\CBT_M113a_Scripts\m113w.paa", 2^_st, [2, _soldierW], _mSupport, ["Common\InitSupportVehicle.sqs", "Extra\ppl\InitTransportAPC.sqs"]] ];
_supportAPCW = _type;
_type = _type + 1;

unitDefs set [_type, ["M113A3", 800, _si, 60, "TYW8_CBT_M113A3_W", "\CBT_M113a_Scripts\m113w.paa", 2^_st, [2, _soldierW], _mAPC, [localize TZK_EQUIP_UNIT_TRUCK]] ];
_M113A3 = _type;
_type = _type + 1;

unitDefs set [_type, ["YPR-765", 1000, _si, 60, "TYW8_llwyprpri_85_nfor", "\llwypr\ico_pri", 2^_st, [3, _crewW], _mAPC, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_YPR = _type;
_type = _type + 1;

unitDefs set [_type, ["M3A2 Bradley(AT)", 1500, _si, 60, "TYW8_CBT_M3A2W", "\CBT_Brad\co\im2a2.paa", 2^_st, [3, _crewW], _mAPC, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_m2a2W = _type;
_type = _type + 1;

unitDefs set [_type, ["M1A2", 4000, _si, 60, "TYW8_INQ_M1A2", "iabrams", 2^_st, [3, _crewW], _mTank, []] ];
_m1a1W = _type;
_type = _type + 1;

unitDefs set [_type, ["Leopard 2A6", 4000, _si, 60, "TYW8_KMMLeopard2A6", "\kmm2A6\Leopard2A6.paa", 2^_st, [3, _crewW], _mTank, []] ];
_Leopard2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Chalenger 2GU", 4000, _si, 60, "TYW8_DKMM_CR2GU", "\DKMM_CR2\icr2g.paa", 2^_st, [3, _crewW], _mTank, []] ];
_Chalenger2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Merkava 4", 4000, _si, 60, "TYW8_bizmk4", "\Bizmk_1\4\ICON.paa", 2^_st, [3, _crewW], _mTank, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_Merkava4 = _type;
_type = _type + 1;

unitDefs set [_type, ["M6 Linebacker(AA)", 2000, _si, 60, "TYW8_CBT_M6_W", "\CBT_Brad\co\im2a2.paa", 2^_st, [3, _crewW], _mAA, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_m6 = _type;
_type = _type + 1;

unitDefs set [_type, ["Vulcan", 1500, _si, 60, "TYW8_Vulcan", "\VULCAN\ivulcan", 2^_st, [2, _crewW], _mAA, []] ];
_vulcanW = _type;
_type = _type + 1;

unitDefs set [_type, ["M109 ADATS", 4000, _si, 60, "TYW8_DKMM_M109_ADATS", "\M109adats\iadats.paa", 2^_st, [3, _crewW], _mAA, []] ];
_ADATS = _type;
_type = _type + 1;

unitDefs set [_type, ["MHQ West", _costSupportAPC, _si, 10, "TYW8_CBT_M577A3C", "im113_ambu", -1, [1, _crewW], _mMHQ, ["Common\InitMHQ.sqs"]] ];
utMHQ0 = _type;
_type = _type + 1;


_st = stAir;

 unitDefs set [_type, ["MH-6", 3500, _si, 90, "TYW8_bas_mh6", "\bas_lbs\imh6", 2^_st, [2, _pilotW], _mHeli, []] ];
_md6 = _type;
 _type = _type + 1;

 unitDefs set [_type, ["MH-6 (14R/Guns)", 4000, _si, 90, "TYW8_bas_ah6j", "\bas_lbs\imh6", 2^_st, [2, _pilotW], _mHeli, []] ];
_md6g = _type;
 _type = _type + 1;

 unitDefs set [_type, ["MH-6 (4AT)", 8000, _si, 90, "TYW8_bas_md500dtow", "\bas_lbs\imh6", 2^_st, [2, _pilotW], _mHeli, []] ];
_md6at = _type;
 _type = _type + 1;

 unitDefs set [_type, ["OH-58D (12.7mm/FFARs)", 4000, _si, 90, "TYW8_BAS_KiowaWarrior5", "\OH58\iKiowa", 2^_st, [2, _pilotW], _mHeli, []] ];
_oh58 = _type;
 _type = _type + 1;

 unitDefs set [_type, ["OH-58D (4AA)", 5000, _si, 90, "TYW8_BAS_KiowaWarrior3", "\OH58\iKiowa", 2^_st, [2, _pilotW], _mHeli, []] ];
_oh58AA = _type;
 _type = _type + 1;

 unitDefs set [_type, ["OH-58D (4AT)", 8000, _si, 90, "TYW8_BAS_KiowaWarrior", "\OH58\iKiowa", 2^_st, [2, _pilotW], _mHeli, []] ];
_oh58AT = _type;
 _type = _type + 1;

unitDefs set [_type, ["MH60G Minigun (Tug)", 4000, _si, 90, "TYW8_bas_MH60G", "iuh60", 2^_st, [2, _pilotW], _mHeli, ["Extra\ppl\InitTransportChopper.sqs"]] ];
_uh60W = _type;
_type = _type + 1;

unitDefs set [_type, ["AH60L (4AT/38FFAR/Guns)", 12000, _si, 90, "TYW8_bas_ah60l", "iuh60", 2^_st, [2, _pilotW], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_uh60 = _type;
_type = _type + 1;

unitDefs set [_type, ["MH47E Minigun (Tug)", 4500, _si, 90, "TYW8_BAS_MH47E", "\ch47\ich47", 2^_st, [2, _pilotW], _mHeli, ["Extra\ppl\InitTransportChopper.sqs"]] ];
_CH47 = _type;
_type = _type + 1;

unitDefs set [_type, ["AH1Z (8AT/38R/2AA/30mm)", 18000, _si, 90, "TYW8_Vit_AH1z1", "icobra", 2^_st, [2, _pilotW], _mHeli, []] ];
_ah1 = _type;
_type = _type + 1;

unitDefs set [_type, ["AH64D (12Stingers/30mm)", 12000, _si, 90, "TYW8_LLW_AH64D_Stinger", "\APAC\iah64", 2^_st, [2, _pilotW], _mHeli, []] ];
_AH64AA = _type;
_type = _type + 1;

unitDefs set [_type, ["AH64D (16AT/4AA/30mm)", 20000, _si, 90, "TYW8_LLW_AH64D_AT", "\APAC\iah64", 2^_st, [2, _pilotW], _mHeli, []] ];
_ah64AT = _type;
_type = _type + 1;

unitDefs set [_type, ["AH64D (8AT/38FFAR/4AA/30mm)", 20000, _si, 90, "TYW8_LLW_AH64D", "\APAC\iah64", 2^_st, [2, _pilotW], _mHeli, []] ];
_ah64 = _type;
_type = _type + 1;

unitDefs set [_type, ["A10 (6AT/14R/4B/2AA/GAU)", 20000, _si, 90, "TYW8_DSL_a10g", "ia10", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_A10AT = _type;
_type = _type + 1;

unitDefs set [_type, ["A10 (4GBU/2AT/2AA/GAU)", 18000, _si, 90, "TYW8_DSL_a10gbug", "ia10", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_A10G = _type;
_type = _type + 1;

unitDefs set [_type, ["A10 (12B/2AA/GAU)", 18000, _si, 90, "TYW8_DSL_a10mkg", "ia10", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_A10B = _type;
_type = _type + 1;

unitDefs set [_type, ["F15C (10AA/30mm)", 12000, _si, 90, "TYW8_RKTF15C_Grey", "\rktf15c\modpic.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_F15C = _type;
_type = _type + 1;

unitDefs set [_type, ["F16 MIGCAP (6AA)", 8000, _si, 90, "TYW8_RKTF16AA", "\rktf16\picture.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_F16CAP = _type;
_type = _type + 1;

unitDefs set [_type, ["F16 CAS (4AT/2AA)", 15000, _si, 90, "TYW8_RKTF16AG", "\rktf16\picture.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_F16 = _type;
_type = _type + 1;

unitDefs set [_type, ["F16 Strike (2GBU10/2AA)", 15000, _si, 90, "TYW8_RKTF16PS", "\rktf16\picture.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_F16S = _type;
_type = _type + 1;

unitDefs set [_type, ["F16 SEAD (4MK20/2AR/4AA)", 40000, _si, 90, "TYW8_RKTF16WW", "\rktf16\picture.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_F16SEAD = _type;
_type = _type + 1;

unitDefs set [_type, ["C-130 Hercules", 4000, _si, 90, "TYW8_hwk_C130g", "\HWK_c130\c130.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\RemoveAllWeapons.sqs",localize TZK_EQUIP_UNIT_TRUCK]] ]     ;
_C130 = _type;
_type = _type + 1;

unitDefs set [_type, ["B-52 (84xMK84)", 25000, _si, 90, "TYW8_GNTB52", "\GNT_B52\B52pic.paa", 2^_st, [1, _pilotW], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_B52 = _type;
_type = _type + 1;



_si = si1;


_st = stBarracks;

unitDefs set [_type, ["Worker", costWorker, _si, 10, "icp_infdriver2", "ivojak", -1, [], "", ["Server\Loop\Worker.sqs"]] ];
utWorkerE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Soldier (AK-74M)", 100, _si, 10, "icp_infak74m_v", "ivojak", 2^_st, [], "", []] ];
_soldierE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Machinegunner(PK)", 150, _si, 10, "icp_infmgun_v", "ismg", 2^_st, [], "", []] ];
_soldierMGE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Machinegunner(RPK-74)", 150, _si, 10, "icp_infrpk_v", "ismg", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Grenadier (AK-74GL)", 100, _si, 10, "icp_infak74gren", "igrenadier", 2^_st, [], "", []] ];
_type = _type + 1;


unitDefs set [_type, ["RF Sniper (SVD)", 150, _si, 10, "icp_infsvd_v", "isniper", 2^_st, [], "", []] ];
_sniperE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Soldier (RPG-7V)", 200, _si, 10, "icp_infRPG_v", "islaw", 2^_st, [], "", []] ];
_soldierLAWE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Soldier (RPG-18)", 250, _si, 10, "icp_infRPG_v", "isat", 2^_st, [], "", ["Extra\Equip\WLRPG18.sqs"]] ];
_soldierATE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Soldier (RPG29)", 400, _si, 10, "icp_infAT_v", "islaw", 2^_st, [], "", []] ];
_soldierRPG29 = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Soldier AA-Strela", 200, _si, 10, "icp_infAA_v", "isaa", 2^_st, [], "", []] ];
_soldierAAE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Recon (AK-74N)", 100, _si, 10, "icp_infreconAK74N", "isaboteur", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Recon (AK74M+PSO)", 150, _si, 10, "icp_infreconAK74PSO", "isaboteur", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Recon (APKN)", 150, _si, 10, "icp_infreconRPKN", "isaboteur", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Recon Sniper (SVD-S)", 150, _si, 10, "icp_infreconSVDN", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Recon Sniper(SVD-N)", 150, _si, 10, "icp_infreconSVDS", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Recon Sniper(VSS)", 150, _si, 10, "icp_infreconVSS", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["RF Miner", 100, _si, 10, "icp_infminer", "iminer", 2^_st, [], "", []] ];
_minerE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Medic", 100, _si, 10, "icp_infmedic_v", "imedic", 2^_st, [], "", []] ];
_medicE = _type;
_type = _type + 1;

unitDefs set [_type, ["RF Tank Crew", 100, _si, 10, "icp_cr1", "icrew", 2^_st, [], "", []] ];
_crewE = _type;
_type = _type + 1;

unitDefs set [_type, ["Volunteer Rifle", 50, _si, 10, "serb2", "ivojak", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier", 100, _si, 10, "soldier_yu", "ivojak", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Gredanier", 100, _si, 10, "grenadier_yu", "igrenadier", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier PK", 150, _si, 10, "MG_yu", "ismg", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Volunteer M53", 150, _si, 10, "soldier_yu", "ivojak", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Sniper", 150, _si, 10, "sniper_yu", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Heavy Sniper", 150, _si, 10, "yu_vpc_s", "isniper", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier RPG", 200, _si, 10, "RBR_yu", "islaw", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier 2xRPG7V", 250, _si, 10, "RBR_yu", "isat", 2^_st, [], "", ["Extra\Equip\WLRPG7V.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier 2xRPG18", 250, _si, 10, "RBR_yu", "isat", 2^_st, [], "", ["Extra\Equip\WLRPG18.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier RPG29", 400, _si, 10, "RBR_yu", "isat", 2^_st, [], "", ["Extra\Equip\WLRPG29.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier 2xAT4", 300, _si, 10, "RBR_yu", "isat", 2^_st, [], "", ["Extra\Equip\WLat4.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Soldier AA-Strela", 200, _si, 10, "AA_yu", "isaa", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Sokolovi Light MG", 150, _si, 10, "Soko_Shot", "ismg", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Sokolovi HK Demo", 150, _si, 10, "Soko_HK", "isaboteur", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Padobranska", 150, _si, 10, "yu_63", "isaboteur", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Miner", 100, _si, 10, "Engineer_yu", "iminer", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["VJ Medic", 100, _si, 10, "medic_yu", "imedic", 2^_st, [], "", []] ];
_type = _type + 1;

unitDefs set [_type, ["Pilot", 100, _si, 10, "SoldierEPilot", "ipilot", 2^_st, [], "", []] ];
_pilotE = _type;
_type = _type + 1;

unitDefs set [_type, ["Custom", costCustom, _si, 10, "icp_infak74m_v", "ivojak", -1, [], "", []] ];
_customE = _type;
_type = _type + 1;


_st = stLight;

unitDefs set [_type, ["UAZ", 200, _si, 30, "UAZ", "iuaz", 2^_st, [1, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_uazE = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM", 300, _si, 30, "BRDM", "\BRMD\ibrmd", 2^_st, [1, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_brdmE = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ PK", 350, _si, 30, "TYW8_BAS_RUSUAZ_PK", "\TotalYugoWarFinal\Images\uazmg.jpg", 2^_st, [2, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_uazPKE = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZ DshK", 400, _si, 30, "TYW8_BAS_RUSUAZ_DShK", "\TotalYugoWarFinal\Images\uazmg.jpg", 2^_st, [2, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_uazDshK = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM PK", 400, _si, 30, "TYW8_BAS_RUSBRDM_PK", "\TotalYugoWarFinal\Images\bdrmpk.jpg", 2^_st, [2, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_brdmPKE = _type;
_type = _type + 1;

unitDefs set [_type, ["BRDM DshK", 450, _si, 30, "TYW8_BAS_RUSBRDM_DshK", "\TotalYugoWarFinal\Images\bdrmpk.jpg", 2^_st, [2, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_brdmPKE = _type;
_type = _type + 1;

unitDefs set [_type, ["BTR 80", 800, _si, 30, "TYW8_VIT_BTR80", "\VITAPC\BTR80\icon.paa", 2^_st, [2, _soldierE], _mCar, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_btr80 = _type;
_type = _type + 1;

unitDefs set [_type, ["Ural-375", 300, _si, 30, "TYW8_dlem_ural375_closed", "iural", 2^_st, [1, _soldierE], _mTruck, [localize TZK_EQUIP_UNIT_TRUCK]] ];
_truckE = _type;
_type = _type + 1;

unitDefs set [_type, ["Support Ural-375", 500, _si, 30, "TYW8_dlem_ural4320_repair", "iuralrepair", 2^_st, [1, _soldierE], _mSupport, ["Common\InitSupportVehicle.sqs"]] ];
_supportTruckE = _type;
_type = _type + 1;

unitDefs set [_type, ["Fuel Ural-375", 500, _si, 30, "TYW8_dlem_ural4320_GAS", "iuralfuel", 2^_st, [1, _soldierE], _mFuel, []] ];
_type = _type + 1;

unitDefs set [_type, ["Zodiac", 200, _si, 30, "CR08_ZodiacE", "\cwkzodiac\icon.paa", 2^_st, [1, _soldierE], _mBoat, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_type = _type + 1;

unitDefs set [_type, ["Patrol Boat (tug)", 1000, _si, 60, "BoatE", "ihrl", 2^_st, [2, _soldierE], _mBoat, ["Extra\ppl\InitTransportBoat.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Zubr (tug)", 4000, _si, 90, "TYW8_Zubr_E", "\Zubr\zubr.pac", 2^_st, [2, _soldierE], _mBoat, ["Extra\ppl\InitTransportBoat.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Patrol Ship (tug)", 6000, _si, 90, "TYW8_ADF_FCPB_E", "\TotalYugoWarFinal\Images\PatrolShip.jpg" , 2^_st, [2, _soldierE], _mBoat, ["Extra\ppl\InitTransportBoat.sqs"]] ];
_type = _type + 1;

unitDefs set [_type, ["Fast Attack Ship", 8000, _si, 90, "TYW8_FABoat_E", "\TotalYugoWarFinal\Images\AttackShip.jpg", 2^_st, [2, _soldierE], _mBoat, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_type = _type + 1;


_st = stHeavy;

unitDefs set [_type, ["Support BMP", _costSupportAPC, _si, 60, "TYW8_BMPSupport", "ibmp", 2^_st, [3, _crewE], _mSupport, ["Common\InitSupportVehicle.sqs", "Extra\ppl\InitTransportAPC.sqs"]] ];
_supportAPCE = _type;
_type = _type + 1;

unitDefs set [_type, ["MTLB", 800, _si, 60, "TYW8_MAF_MTLB", "\apcrus\mtlb_pict", 2^_st, [2, _crewE], _mAPC, [localize TZK_EQUIP_UNIT_TRUCK]] ];
_MTLB = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2E", 1200, _si, 60, "TYW8_BMP2", "ibmp", 2^_st, [3, _crewE], _mAPC, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_bmp2 = _type;
_type = _type + 1;

unitDefs set [_type, ["BMD3", 1400, _si, 60, "TYW8_VIT_BMD3", "\VITAPC\BMD3T\icon", 2^_st, [3, _crewE], _mAPC, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_bmd3 = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP3", 1500, _si, 60, "TYW8_VIT_BMP3", "\VITAPC\BMP3\icon.paa", 2^_st, [3, _crewE], _mAPC, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_bmp3 = _type;
_type = _type + 1;

unitDefs set [_type, ["M84", 2000, _si, 60, "TYW8_SIG_M84", "it72", 2^_st, [3, _crewE], _mTank, []] ];
_M84 = _type;
_type = _type + 1;

unitDefs set [_type, ["M84A4", 2500, _si, 60, "TYW8_SIG_M84A4", "it72", 2^_st, [3, _crewE], _mTank, []] ];
_M84A4 = _type;
_type = _type + 1;

unitDefs set [_type, ["T72BC Kontakt/ERA", 2500, _si, 60, "TYW8_SIG_T72BC", "\TotalYugoWarFinal\Images\t90.jpg", 2^_st, [3, _crewE], _mTank, []] ];
_t72BC = _type;
_type = _type + 1;

unitDefs set [_type, ["T80BV", 3000, _si, 60, "TYW8_SIG_T80BV", "it80", 2^_st, [3, _crewE], _mTank, []] ];
_t80BV = _type;
_type = _type + 1;

unitDefs set [_type, ["T80U", 3500, _si, 60, "TYW8_SIG_T80U", "it80", 2^_st, [3, _crewE], _mTank, []] ];
_t80U = _type;
_type = _type + 1;

unitDefs set [_type, ["T80UE", 3800, _si, 60, "TYW8_SIG_T80UE", "it80", 2^_st, [3, _crewE], _mTank, []] ];
_t80UE = _type;
_type = _type + 1;

unitDefs set [_type, ["T90", 4000, _si, 60, "TYW8_SIG_T90", "\TotalYugoWarFinal\Images\t90.jpg", 2^_st, [3, _crewE], _mTank, []] ];
_t90 = _type;
_type = _type + 1;

unitDefs set [_type, ["Shilka", 1500, _si, 60, "TYW8_Shilka", "izsu", 2^_st, [2, _crewE], _mAA, []] ];
_shilkaE = _type;
_type = _type + 1;

unitDefs set [_type, ["SA-11 Gadfly", 2000, _si, 60, "TYW8_Sa_11GADFLY", "\Bkm_Sa11\SAMp.paa", 2^_st, [2, _crewE], _mAA, []] ];
_Sa11 = _type;
_type = _type + 1;

unitDefs set [_type, ["SA-13", 3000, _si, 60, "TYW8_MAF_SA_13", "\apcrus\sa13_pict", 2^_st, [2, _crewE], _mAA, []] ];
_Sa13 = _type;
_type = _type + 1;

unitDefs set [_type, ["MHQ East", _costSupportAPC, _si, 10, "TYW8_BMPAmbul", "\apcrus\mtlb_pict", -1, [1, _crewE], _mMHQ, ["Common\InitMHQ.sqs"]] ];
utMHQ1 = _type;
_type = _type + 1;


_st = stAir;

unitDefs set [_type, ["Mi-2R (tug)", 4000, _si, 90, "TYW8_Mi2R","\Mi2NO\Mi2icon.paa", 2^_st, [1, _pilotE], _mHeli, ["Extra\ppl\InitTransportChopper.sqs"]] ];
_mi2 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi2URP (4AT)", 6000, _si, 90, "TYW8_Mi2URP","\Mi2NO\Mi2icon.paa", 2^_st, [1, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mi2AT = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi2URN (32RKT)", 7000, _si, 90, "TYW8_Mi2URN","\Mi2NO\Mi2icon.paa", 2^_st, [1, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mi2R = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 (tug)", 4500, _si, 90, "TYW8_Mi17", "imi17", 2^_st, [1, _pilotE], _mHeli, ["\TZK_Scripts_4_0_4\Common\RemoveAllWeapons.sqs", "Extra\ppl\InitTransportChopper.sqs"]] ];
_mi17E = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 (tug/4KAB500)", 8000, _si, 90, "TYW8_Mi17B", "imi17", 2^_st, [1, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mi17LGB = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi17 (tug/192Roc)", 20000, _si, 90, "TYW8_Mi17R", "imi17", 2^_st, [1, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mi17R = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi-26 (tug)", 4500, _si, 90, "TYW8_OWP_OWP_MI26ps", "\OWP_Mi26\pics\OWP_Mi26.paa", 2^_st, [1, _pilotE], _mHeli, ["Extra\ppl\InitTransportChopper.sqs"]] ];
_mi26 = _type;
_type = _type + 1;

unitDefs set [_type, ["Ka-50 (4KAB/2AA/30mm)", 15000, _si, 90, "TYW8_Ka50B", "Extra\ppl\Ka50.paa", 2^_st, [1, _pilotE], _mHeli, []] ];
_Ka50B = _type;
_type = _type + 1;

unitDefs set [_type, ["Ka-50 (12AT/40R/2AA/30mm)", 20000, _si, 90, "TYW8_Ka50", "Extra\ppl\Ka50.paa", 2^_st, [1, _pilotE], _mHeli, []] ];
_Ka50 = _type;
_type = _type + 1;

unitDefs set [_type, ["Ka-52 (12AT/40R/2AA/30mm)", 20000, _si, 90, "TYW8_Ka52", "\Ka-52\icon", 2^_st, [2, _pilotE], _mHeli, []] ];
_Ka52 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi24 (8AT/64R/30mm)", 18000, _si, 90, "TYW8_mi24", "imi24", 2^_st, [2, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mi24E = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi35 (4AT/40R/30mm)", 15000, _si, 90, "TYW8_mi24_Ru6", "imi24", 2^_st, [2, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_CARGOCAR]] ];
_mi35 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi28 (16AA/30mm)", 12000, _si, 90, "TYW8_HWK_MI28AA","\HWK_MI28\mi28a.paa", 2^_st, [2, _pilotE], _mHeli, []] ];
_mi28AA = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi28 (40R/23mm/2AA/30mm)", 15000, _si, 90, "TYW8_HWK_MI28GS","\HWK_MI28\mi28a.paa", 2^_st, [2, _pilotE], _mHeli, []] ];
_mi28GS = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi28 (8AT/8AA/30mm)", 15000, _si, 90, "TYW8_HWK_MI28AAAT","\HWK_MI28\mi28a.paa", 2^_st, [2, _pilotE], _mHeli, []] ];
_mi28AAAT = _type;
_type = _type + 1;

unitDefs set [_type, ["Mi28 (16AT/30mm)", 20000, _si, 90, "TYW8_HWK_MI28AT","\HWK_MI28\mi28a.paa", 2^_st, [2, _pilotE], _mHeli, []] ];
_mi28AT = _type;
_type = _type + 1;

unitDefs set [_type, ["Mig29 (6KabL/2AA/30mm)", 12000, _si, 90, "TYW8_vit_mig29rus12", "\TotalYugoWarFinal\Images\mig29b.jpg", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_mig29 = _type;
_type = _type + 1;

unitDefs set [_type, ["Mig29 (6AT/30mm)", 15000, _si, 90, "TYW8_vit_mig29rus2", "\TotalYugoWarFinal\Images\mig29.jpg", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_mig29AT = _type;
_type = _type + 1;

unitDefs set [_type, ["Mig29 (8AA/30mm)", 8000, _si, 90, "TYW8_vit_mig29rus1", "\TotalYugoWarFinal\Images\mig29.jpg", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_mig29AA = _type;
_type = _type + 1;

unitDefs set [_type, ["Su-27 (8AA/30mm)", 8000, _si, 90, "TYW8_RKTSu27", "\rktsu27\picture", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_su27 = _type;
_type = _type + 1;

unitDefs set [_type, ["Su25 (6AT/64R/2AA/30mm)", 15000, _si, 90, "TYW8_Su25", "\SU25\isu25", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_su25 = _type;
_type = _type + 1;

unitDefs set [_type, ["An-72 Coaler (Tug)", 4000, _si, 90, "TYW8_RKTCoaler3Col", "\TotalYugoWarFinal\Images\an72.jpg", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\RemoveAllWeapons.sqs",localize TZK_EQUIP_UNIT_TRUCK]] ];
_an72 = _type;
_type = _type + 1;

unitDefs set [_type, ["Tu-22m3 (3AT)", 12000, _si, 90, "TYW8_RKT_Backfire", "\rktbackfire\bf_pic", 2^_st, [1, _pilotE], _mPlane, ["\TZK_Scripts_4_0_4\Common\InitSpawnPlane.sqs"]] ];
_Tu22 = _type;
_type = _type + 1;




_si = siRes;
_st = -1;



unitDefs set [_type, ["Soldier", 100, _si, 0, "euro_res_RFL1", "ivojak", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_soldierR = _type;
_type = _type + 1;

unitDefs set [_type, ["Medic", 100, _si, 0, "euro_res_MED", "imedic", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_medicR = _type;
_type = _type + 1;

unitDefs set [_type, ["Crew", 100, _si, 0, "euro_res_MRK1", "icrew", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_crewR = _type;
_type = _type + 1;

unitDefs set [_type, ["PK", 150, _si, 0, "euro_res_MG1", "ismg", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_soldierMGR = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper", 150, _si, 0, "euro_res_RFL4", "isniper", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_sniperR = _type;
_type = _type + 1;

unitDefs set [_type, ["RPG", 200, _si, 0, "euro_res_RPG1", "islaw", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_soldierLAWR = _type;
_type = _type + 1;

unitDefs set [_type, ["AT4", 200, _si, 10, "euro_res_AT", "isat", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_soldierATR = _type;
_type = _type + 1;

unitDefs set [_type, ["Strela", 200, _si, 10, "SoldierGAA", "isaa", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchute.sqs"]] ];
_soldierAAR = _type;
_type = _type + 1;




unitDefs set [_type, ["BTR80c Res", 800, _si, 0, "TYW8_VIT_BTR80C", "ibmp", 2^_st, [2, _crewR], _mAPC, []] ];
_bmpR = _type;
_type = _type + 1;

unitDefs set [_type, ["T55 Res", 1500, _si, 0, "TYW8_T55G", "it72", 2^_st, [2, _crewR], _mTank, []] ];
_t72R = _type;
_type = _type + 1;

unitDefs set [_type, ["T72s Res", 2000, _si, 0, "TYW8_SIG_T72S", "it80", 2^_st, [2, _crewR], _mTank, []] ];
_t80R = _type;
_type = _type + 1;



_si = siCIV;
_st = -1;

unitDefs set [_type, ["Bike", 100, _si, 0, "Kolo_xj400", "\Kolo\ikolo", _st, [1, _crewR], _mBike, []] ];
_bikeC = _type;
_type = _type + 1;

unitDefs set [_type, ["Motorcycle", 200, _si, 0, "Jawa_xj400", "\o\vehl\ijawa", _st, [1, _crewR], _mBike, []] ];
_motorC = _type;
_type = _type + 1;

unitDefs set [_type, ["UAZG", 200, _si, 0, "UAZG", "iuaz", _st, [1, _crewR], _mCar, []] ];
_uazG = _type;
_type = _type + 1;


infCustom = [];
_i = 0; while "_i < countInfCustom" do { infCustom set [_i, [] ]; _i=_i+1 };
utCustom = [_customW, _customE];




_si = si0;

unitDefs set [_type, ["M60 Town", 100, _si, 10, "SoldierWMG_xj400", "ismg", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs"]] ];
_soldierMGW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper Town", 100, _si, 10, "SoldierWSniper_xj400", "isniper", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs"]] ];
_sniperW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["LAW Town", 250, _si, 10, "SoldierWLAW", "islaw", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\RPGai.sqs"]] ];
_soldierLAWW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Carl Gustav Town", 400, _si, 10, "SoldierWAT_xj400", "isat", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\ATai.sqs"]] ];
_soldierATW1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Stinger Town", 400, _si, 10, "SoldierWAA_xj400", "isaa", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteW.sqs","\TZK_Scripts_4_0_6\Common\Equip\AAai.sqs"]] ];
_soldierAAW1 = _type;
_type = _type + 1;


unitDefs set [_type, ["M2A2 AT Town", 2000, _si, 30, "M2A2_AA_Town_xj400", "\M2A2\im2a2", 2^_st, [3, _crewW], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\TownM2A2_AT.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_m2a2townat = _type;
_type = _type + 1;

unitDefs set [_type, ["M2A2 AA Town", 2000, _si, 30, "M2A2_AA_Town_xj400", "\M2A2\im2a2", 2^_st, [3, _crewW], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\TownM2A2_AA.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_m2a2townaad = _type;
_type = _type + 1;

unitDefs set [_type, ["M1A1 Town", 5000, _si, 60, "M1A1_xj400", "iabrams", 2^_st, [3, _crewW], _mTank, [localize TZK_EQUIP_UNIT_TOWNVEH, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_m1a1townW = _type;
_type = _type + 1;
unitDefs set [_type, ["AH64 Town", 6000, _si, 90, "AH64_AT_xj400", "\APAC\iah64", 2^_st, [2, _pilotW], _mHeli, [localize TZK_EQUIP_UNIT_TOWNVEH, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_ah64townW2 = _type;
_type = _type + 1;

_price = [1500, 3000] select PricingMode;
unitDefs set [_type, ["Vulcan Base", _price, _si, 30, "Vulcan_xj400", "\VULCAN\ivulcan", -2, [2, _crewW], _mAA, []] ];
_vulcanBaseW = _type;
_type = _type + 1;

_price = [8000, 16000] select PricingMode;
unitDefs set [_type, ["4xAA Base", _price, _si, 30, "Vulcan_TZK_xj400", "\VULCAN\ivulcan", -2, [2, _crewW], _mAA, ["\TZK_Scripts_4_0_5\Common\Equip\DefAA.sqs"]] ];
_vulcanBaseW2 = _type;
_type = _type + 1;



_si = si1;

unitDefs set [_type, ["PK Town", 150, _si, 10, "SoldierEMG_xj400", "ismg", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs"]] ];
_soldierMGE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Sniper Town", 150, _si, 10, "SoldierESniper_xj400", "isniper", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs"]] ];
_sniperE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["RPG Town", 250, _si, 10, "SoldierELAW_xj400", "islaw", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs","\TZK_Scripts_4_0_6\Common\Equip\RPGai.sqs"]] ];
_soldierLAWE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["AT4 Town", 400, _si, 10, "SoldierEAT_xj400", "isat", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs","\TZK_Scripts_4_0_6\Common\Equip\ATai.sqs"]] ];
_soldierATE1 = _type;
_type = _type + 1;

unitDefs set [_type, ["Strela Town", 400, _si, 10, "SoldierEAA_xj400", "isaa", 2^_st, [], "", ["\TZK_Scripts_4_0_4\Common\InitSpawnchuteE.sqs"]] ];
_soldierAAE1 = _type;
_type = _type + 1;


unitDefs set [_type, ["BMP2 AT Town", 2000, _si, 30, "BMP2_AA_Town_xj400", "ibmp", 2^_st, [3, _crewE], _mAPC, ["\TZK_Scripts_4_0_6\Common\Equip\TownBMP2_AT.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_bmp2townat = _type;
_type = _type + 1;

unitDefs set [_type, ["BMP2 AA Town", 2000, _si, 30, "BMP2_AA_Town_xj400", "ibmp", 2^_st, [3, _crewE], _mAA, ["\TZK_Scripts_4_0_6\Common\Equip\TownBMP2_AA.sqs", "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_bmp2townaad = _type;
_type = _type + 1;

unitDefs set [_type, ["T80 Town", 5000, _si, 60, "T80_TZK_xj400", "it80", 2^_st, [3, _crewE], _mTank, [localize TZK_EQUIP_UNIT_TOWNVEH, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_t80townE = _type;
_type = _type + 1;
unitDefs set [_type, ["Mi24 Town", 8000, _si, 90, "Mi24_RHS_AT_xj400", "imi24", 2^_st, [2, _pilotE], _mHeli, [localize TZK_EQUIP_UNIT_TOWNVEH, "\TZK_Scripts_4_0_4\Common\InitTownGroupVehicles.sqs"]] ];
_mi24townE2 = _type;
_type = _type + 1;

_price = [1500, 2000] select PricingMode;
unitDefs set [_type, ["Shilka Base", _price, _si, 30, "ZSU_xj400", "izsu", -2, [2, _crewE], _mAA, []] ];
_shilkaBaseE = _type;
_type = _type + 1;

_price = [8000, 16000] select PricingMode;
unitDefs set [_type, ["Tunguska Base", _price, _si, 30, "2S6_DKM_xj400", "\TZK_Texture_4_0_0\icon\i2s6.paa", -2, [3, _crewE], _mAA, ["\TZK_Scripts_4_0_5\Common\Equip\Tunguska.sqs"]] ];
_tunguskaBaseE = _type;
_type = _type + 1;



{unitDefs select _x set [udModel, "Vulcan"]} forEach [_vulcanBaseW, _vulcanBaseW2];
{unitDefs select _x set [udModel, "ZSU"]} forEach [_shilkaBaseE, _tunguskaBaseE, _shilkaE];
{_str = "M2A2_AA_Town_Vanilla_xj405", unitDefs select _x set [udModel, _str]} forEach [_m2a2townat, _m2a2townaad];
{_str = "BMP2_AA_Town_Vanilla_xj405", unitDefs select _x set [udModel, _str]} forEach [_bmp2townat, _bmp2townaad];
