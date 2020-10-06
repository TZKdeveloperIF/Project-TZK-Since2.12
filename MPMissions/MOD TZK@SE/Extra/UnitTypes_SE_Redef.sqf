comment "Make objects build-able. Adjust their udFactoryType to legal value.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stBarracks]" forEach [_javW, _javE];
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight]" forEach [_jeepMGW, _uazMGE,  _hummerWG, _hummerWAA, _brdmEAT, _brdmEAA];

"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight + 2^stHeavy]" forEach [_AMX10W, _bmp3];
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight + 2^stShip]" forEach [_zodiacHW, _patrolboatW, _patrolshipW,  _zodiacHE, _patrolboatE, _patrolshipE];


comment "Allow Light Factory Build Transport Helicopter. In TZK_4 there're no-radar version for transport helicopter, they're applied here.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stLight + 2^stAir]" forEach [_irNO_mh6, _irNO_uh60, _irNO_mi2, _irNO_mi17];


comment "Adjust the build-able tanks.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stHeavy]" forEach [_challengerW, _t90MSE];
"_entry = unitDefs select _x; _entry set [udFactoryType, -1]" forEach [_m1a2sepW, _t90E];

comment "Add the Action EntrenchTank to all units built from Heavy Factory.";
{;
	_entry = _x; _factoryType = _entry select udFactoryType;
	_factoryType = _factoryType - (_factoryType % (2*2^stHeavy));
	if (_factoryType >= 2^stHeavy) Then {;
		_crews = _entry select udCrew; _scripts = _entry select udScripts;
		if (count _crews > 0 && !("Extra\ppl\Action EntrenchTank.sqs" in _scripts)) Then {_scripts set [count _scripts, "Extra\ppl\Action EntrenchTank.sqs"]};
	};
} forEach unitDefs;
comment "Add the Action EntrenchTank to some units assigned in SE.";
{_scripts = unitDefs select _x select udScripts; _scripts set [count _scripts, "Extra\ppl\Action EntrenchTank.sqs"]} forEach [jeepaW, _hummerWG, _hummerWAT, _hummerWAA, uazaE, _brdmEG, _brdmEAT, _brdmEAA];

comment "Adjust the udName, udModel and udImage of planes.";
{;
	_entry = unitDefs select _x;
	_name = _entry select udName; _name = "F15" + substr [_name, sizeofstr "A10", sizeofstr _name]; _entry set [udName, _name];
	_entry set [udModel, "RKTF15C_Grey"];
	_entry set [udImage, "\rktf15c\modpic.paa"];
} forEach [_a10LGB4, _a10bombs, _a10];
{;
	_entry = unitDefs select _x;
	_name = _entry select udName; _name = "F22" + substr [_name, sizeofstr "A10", sizeofstr _name]; _entry set [udName, _name];
	_entry set [udModel, "F22"];
	_entry set [udImage, "\rktf15c\modpic.paa"];
} forEach [_a10LGB8, _a10AA, _a10FFAR];
_entry = unitDefs select _B2; _entry set [udFactoryType, 2^stAir];
_entry = unitDefs select _a10BB; _entry set [udName, "F35 Base Buster"]; _entry set [udModel, "rkt_F35JSF"]; _entry set [udImage, "\rkt_f35\f35_pic.paa"]; _entry select udScripts set [count (_entry select udScripts), "Common\Equip\LGB8.sqs"];
_entry = unitDefs select _a10Tomahawk; _entry set [udName, "F35 Stealth Nuke"]; _entry set [udModel, "rkt_F35JSF_Stealth"]; _entry set [udImage, "\rkt_f35\f35_pic.paa"];
{;
	_entry = unitDefs select _x;
	_name = _entry select udName; _name = "Su30" + substr [_name, sizeofstr "Su25", sizeofstr _name]; _entry set [udName, _name];
	_entry set [udModel, "su30mki_p1"]; if (_x == _su25LGB8) Then {_entry set [udModel, "su30mki_p1b"]};
} forEach [_su25, _su25LGB8, _su25AA, _su25Rocket];
_entry = unitDefs select _su39; _entry set [udFactoryType, 2^stAir];
_entry = unitDefs select _su25BB; _entry set [udName, "Su57 Base Buster"]; _entry set [udModel, "PAK_FA"]; _entry select udScripts set [count (_entry select udScripts), "Common\Equip\LGB8.sqs"];
_entry = unitDefs select _su25Raduga; _entry set [udName, "Su57 Raduga"]; _entry set [udModel, "PAK_FA_Nuke"];

comment "TZK use AAOnly A10/Su25 and allow LF build them. It's optional for SE to modify their udModel. Here, their udFactoryType are redefined.";
"_entry = unitDefs select _x; _entry set [udFactoryType, 2^stAir]" forEach [_a10gun, _su25gun];


comment "Redefine Soldiers and Support M113/BMP udModel.";
_entry = unitDefs select utWorkerW; _entry set [udModel, "DVDUS_SoldierWWorker"];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWB"]} forEach [_soldierW, _MortarW, _soldierLAWW2, _soldierATW2];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWHG"]} forEach [_soldierGLW, _MM1W];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWLMG"]} forEach [_soldierMGW, _soldierMGW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWsniperM24SD"]} forEach [_sniperW, _sniperW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWSMAW"]} forEach [_soldierLAWW, _soldierATW, _soldierLAWW1, _soldierATW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_SoldierWAA"]} forEach [_soldierAAW, _soldierAAW1];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_BlackOpDemo1"]} forEach [_bomberW, _customW];
_entry = unitDefs select _minerW; _entry set [udModel, "DVDUS_SoldierWMiner"];
_entry = unitDefs select _medicW; _entry set [udModel, "DVDUS_SoldierWMedic"];
_entry = unitDefs select _crewW; _entry set [udModel, "DVDUS_SoldierWCrew"];
{_entry = unitDefs select _x; _entry set [udModel, "DVDUS_M113A3Amb"]} forEach [_supportAPCW, _supportAPCWminer];
_entry = unitDefs select utMHQ0; _entry set [udModel, "DVDUS_M113A3_MHQW"];

_entry = unitDefs select utWorkerE; _entry set [udModel, "utWorkerE"];
_entry = unitDefs select _soldierE; _entry set [udModel, "icp_infakm"];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infak74gren_v"]} forEach [_soldierGLE, _6G30E];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infmgun"]} forEach [_soldierMGE, _soldierMGE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infsvd"]} forEach [_sniperE, _KSVKE, _soldierLAWE2, _soldierATE2, _sniperE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infRPG18"]} forEach [_soldierLAWE, _soldierATE, _soldierLAWE1, _soldierATE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infAA"]} forEach [_soldierAAE, _soldierAAE1];
{_entry = unitDefs select _x; _entry set [udModel, "icp_infreconVSK"]} forEach [_bomberE, _customE];
_entry = unitDefs select _minerE; _entry set [udModel, "icp_infminer"];
_entry = unitDefs select _medicE; _entry set [udModel, "icp_infmedic"];
_entry = unitDefs select _crewE; _entry set [udModel, "icp_cr1"];