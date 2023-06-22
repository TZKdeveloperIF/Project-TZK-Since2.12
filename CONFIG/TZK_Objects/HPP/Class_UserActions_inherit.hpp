// UserActions including CTI-Useful-Functions.
// Unsupported to inherit the whole UserActions class directly since parameters of UserActions are custom actions' class.
// Surely using "#define" can make UserActions expressed by string constant, but it's poor readability and inconvenient for further editing.
	
// ( (player in this && boole_ShowAction_Attach) || !(player in this) ) is used to close Action's show with boolean.
// UA for Player
class UA_MHQBuildMenu {
	displayName = "MHQ Build Menu";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && mhqNearby && boole_ShowAction_BuildMenu";
};
class UA_MCVBuildMenu {
	displayName = "MCV Build Menu";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && MCVNearby && boole_ShowAction_BuildMenu";
};
class UA_SupBuildMenu {
	displayName = "Support Vehicle Build Menu";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && SupNearby && boole_ShowAction_BuildMenu";
};

class UA_SelfMedic {
	displayName = "Self-Medic";
	position=gunnerview;
	radius=0.01;
	condition="(player == this) && ""_x=={Medkit_xj400}"" count magazines this > 0 && damage this > 0.01 && boole_ShowAction_SelfMedic";
	statement="this exec {Player\Action\SelfMedic.sqs}";
};


// UA for Transport Vehicle
class UA_EjectAICargo {
	displayName = "Eject AI Units";
	position="pos driver";
	radius = 5;
	condition="(driver this in units group player) && ( (player in this && boole_ShowAction_TransportEject) || !(player in this) )";
	statement="[this, siPlayer] exec {Player\Action\EjectAIUnits.sqs}";
};
class UA_EjectAllCargo {
	displayName = "Eject All Cargo";
	position="pos driver";
	radius = 5;
	condition="(driver this in units group player) && ( (player in this && boole_ShowAction_TransportEject) || !(player in this) )";
	statement="[this, siPlayer] exec {Player\Action\EjectAllCargo.sqs}";
};
class UA_EjectOneCargo {
	displayName = "Eject One Cargo";
	position="pos driver";
	radius = 5;
	condition="(driver this in units group player) && ( (player in this && boole_ShowAction_TransportEject) || !(player in this) )";
	statement="[this, siPlayer] exec {Player\Action\EjectOneCargo.sqs}";
};
class UA_TransportTurnON {
	displayName = "Transport Turn ON";
	position="pos driver";
	radius = 5;
	condition="(driver this in units group player) && !(this in TransportActivatedVehicles) && ( (player in this && boole_ShowAction_TransportEject) || !(player in this) )";
	statement="[this] exec {Common\SendTransportTurnOn.sqs}";
};
class UA_TransportTurnOFF {
	displayName = "Transport Turn OFF";
	position="pos driver";
	radius = 5;
	condition="(driver this in units group player) && (this in TransportActivatedVehicles) && ( (player in this && boole_ShowAction_TransportEject) || !(player in this) )";
	statement="[this] exec {Common\SendTransportTurnOff.sqs}";
};

// UA for Attach
class UA_AttachInVehicle {
	displayName = "Attach/Detach Vehicle";
	position="pos driver";
	radius=4.52;
	condition="alive this && player != vehicle player && ( ( count (units player) > count ((units player)-(crew this)) && ( (player in this && boole_ShowAction_Attach) || !(player in this) ) ) || ( count (units player) == count ((units player) - (crew this)) && ((vehicle player) distance this) > 7.142 ) )";
//	condition="alive this && (count (units player)>count ((units player)-(crew this))||(count (units player)==count ((units player)-(crew this))&&((vehicle player) distance this)>7.142 )) && player != vehicle player";
//	"player != vehicle player" means player is in vehicle
//	((vehicle player) distance this) > 7.142 means player is far from the vehicle (7.142 > 4.52 thus player in vehicle won't see this action in action-list) whose crew don't include player's member, and player can ask its units activate this action when the unit is closed to vehicle enough.
};
class UA_AttachOnFoot {
	displayName = "Attach/Detach Vehicle";
	position="pos driver";
	radius=7.12;
	condition="alive this && player == vehicle player && (driver this in units group player || isNull driver this) ";
	statement="[this, tsCenter, ttTruck] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachInVehicle_Truck : UA_AttachInVehicle {
	statement="[this, tsCenter, ttTruck] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Truck : UA_AttachOnFoot {
	statement="[this, tsCenter, ttTruck] exec {Player\Action\AttachDetachVehicle.sqs}";
};

class UA_AttachInVehicle_Center : UA_AttachInVehicle {
	displayName = "Attach/Detach Center Vehicle";
	statement="[this, tsCenter, ttBoat] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachInVehicle_Right : UA_AttachInVehicle {
	displayName = "Attach/Detach Right Vehicle";
	condition="alive this && player != vehicle player && ( ( count (units player) > count ((units player)-(crew this)) && ( (player in this && boole_ShowAction_AttachLeftRight) || !(player in this) ) ) || ( count (units player) == count ((units player) - (crew this)) && ((vehicle player) distance this) > 7.142 ) )";
	statement="[this, tsRight, ttBoat] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachInVehicle_Left : UA_AttachInVehicle_Right {
	displayName = "Attach/Detach Left Vehicle";
	statement="[this, tsLeft, ttBoat] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Center : UA_AttachOnFoot {
	displayName = "Attach/Detach Center Vehicle";
	statement="[this, tsCenter, ttBoat] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Right : UA_AttachOnFoot {
	displayName = "Attach/Detach Right Vehicle";
	statement="[this, tsRight, ttBoat] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Left : UA_AttachOnFoot {
	displayName = "Attach/Detach Left Vehicle";
	statement="[this, tsLeft, ttBoat] exec {Player\Action\AttachDetachVehicle.sqs}";
};

class UA_AttachInVehicle_APC : UA_AttachInVehicle {
	statement="[this, tsCenter, ttAPC] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_APC : UA_AttachOnFoot {
	statement="[this, tsCenter, ttAPC] exec {Player\Action\AttachDetachVehicle.sqs}";
};

class UA_AttachInVehicle_Heli : UA_AttachInVehicle {
	statement="[this, tsCenter, ttHeli] exec {Player\Action\AttachDetachVehicle.sqs}";
};
class UA_AttachOnFoot_Heli : UA_AttachOnFoot {
	statement="[this, tsCenter, ttHeli] exec {Player\Action\AttachDetachVehicle.sqs}";
};

// UA for driver-gunner-switch
class UA_SwitchToDriverAir {
	displayName = "To driver's seat";
	position = "pos gunner";
	radius = 5;
	condition = "abs(speed this) < 50 && local this && (player == gunner this && boole_ShowAction_SwitchSeat && (isNull driver this || local driver this))";
	statement="this exec {Player\Action\SwitchToDriver.sqs}";
};
class UA_SwitchToGunnerAir {
	displayName = "To gunner's seat";
	position="pos driver";
	radius = 5;
	condition = "abs(speed this) < 50 && local this && (player == driver this && boole_ShowAction_SwitchSeat && (isNull gunner this || local gunner this))";
	statement="this exec {Player\Action\SwitchToGunner.sqs}";
};
class UA_SwitchToDriverLand : UA_SwitchToDriverAir {
	condition = "local this && (player == gunner this && boole_ShowAction_SwitchSeat && (isNull driver this || local driver this))";
};
class UA_SwitchToGunnerLand : UA_SwitchToGunnerAir {
	condition = "local this && (player == driver this && boole_ShowAction_SwitchSeat && (isNull gunner this || local gunner this))";
};

// UA for Aircraft
class UA_SetFlightAltitude {
	displayName = "Set Flight Altitude";
	position="pos driver";
	radius = 5;
	condition="driver this in ((units group player) - [player])";
	statement="[this, driver this] exec {Player\Dialog\SetFlightAltitude.sqs}";
};
class UA_LAND_Heli {
	displayName = "Land Chopper";
	position="pos driver";
	radius = 5;
	condition="driver this in ((units group player) - [player])";
	statement="doStop this; this land ""LAND""";
}
	// Display or not decided by boolean
class UA_AfterBurnerON {
	displayName ="AfterBurner ON";
	position = "pos driver";
	radius =10;
	condition = "bAfterBurner && ""_x=={AfterBurnerSwitch_xj400}"" count magazines this > 0 && (driver this) in units group player && ( (player in this && boole_ShowAction_AirActions) || !(player in this) )";
	statement = "this removeMagazines {AfterBurnerSwitch_xj400}; this exec {Player\Effect\AfterBurner\Start.sqs} ";
};
class UA_AfterBurnerOFF {
	displayName ="AfterBurner OFF";
	position = "pos driver";
	radius =10;
	condition = " ""_x=={AfterBurnerSwitch_xj400}"" count magazines this == 0 && count magazines this > 0 && (driver this) in units group player && ( (player in this && boole_ShowAction_AirActions) || !(player in this) )";
	statement = "this addMagazine {AfterBurnerSwitch_xj400}";
};
class UA_SpoofMissileON {
	displayName ="SpoofMissile ON";
	position = "pos driver";
	radius =10;
	condition = "bSpoofMissile && ""_x=={SpoofSwitch_xj400}"" count magazines this > 0 && (driver this) in units group player && ( (player in this && boole_ShowAction_AirActions) || !(player in this) )";
	statement = "this removeMagazines {SpoofSwitch_xj400}";
};
class UA_SpoofMissileOFF {
	displayName ="SpoofMissile OFF";
	position = "pos driver";
	radius =10;
	condition = " ""_x=={SpoofSwitch_xj400}"" count magazines this == 0 && count magazines this > 0 && (driver this) in units group player && ( (player in this && boole_ShowAction_AirActions) || !(player in this) )";
	statement = "this addMagazine {SpoofSwitch_xj400}";
};

// The script command addMagazine and removeMagazine(s) is local. Thus the following actions for car/ship only show to local client.
// UA for Virtual Weapons Rearm
class UA_EquipLAW {
	displayName ="Equip LAW($25)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 9 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{VirtualLAW_xj400}], 25] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}
class UA_EquipRPG {
	displayName ="Equip RPG($25)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 9 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{VirtualRPG_xj400}], 25] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}
class UA_EquipCarlGustav {
	displayName ="Equip CarlGustav($60)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 7 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{VirtualCarlGustav_xj400}], 60] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}
class UA_EquipAT4 {
	displayName ="Equip AT4($60)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 7 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{VirtualAT4_xj400}], 60] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}
class UA_EquipGrenade {
	displayName ="Equip Grenade($10)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 9 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{VirtualGrenade_xj400}], 10] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}
class UA_EquipMortar {
	displayName ="Equip Mortar($20)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 9 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{VirtualMortar_xj400}], 20] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}	
class UA_EquipMG {
	displayName ="Equip MG($20)";
	position = "pos driver";
	radius = 5;
	condition = "( (count magazines this) + 2*({_x in [{VirtualCarlGustav_xj400},{VirtualAT4_xj400},{VirtualAA_xj400},{Virtual9K32_xj400}]} count magazines this) ) < 9 && local this && ((driver this) in units group player || (gunner this) in units group player) && !(player in this)";
	statement = "[this, [{Mag_12mm7_100_xj400}], 20] exec {Player\Effect\EquipVirtualWeapon.sqs}";
}

class UA_ShowEquipList {
	displayName ="Show Equip List";
	position = "pos driver";
	radius = 5;
	condition = "{_x=={VirtualEquipSwitchMag_xj400}} count magazines this ==0 && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "this addMagazine {VirtualEquipSwitchMag_xj400}";
}
class UA_HideEquipList {
	displayName ="Hide Equip List";
	position = "pos driver";
	radius = 5;
	condition = "local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "this removeMagazines {VirtualEquipSwitchMag_xj400}";
}

// UA for MG Car Weapons. Car with weapon and none magazines will cause crash when they target objects, thus necessary to use UA to rearm instead rearm-system in CTI.
class UA_EquipM2 {
	displayName ="Equip M2($50)";
	position = "pos driver";
	radius = 5;
	condition = "!(someAmmo this) && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400}], 50, [{M2cal50_DVDUS_xj400}]] exec {Player\Effect\EquipCarMG.sqs}";
};
class UA_EquipPKT {
	displayName ="Equip PKT($50)";
	position = "pos driver";
	radius = 5;
	condition = "!(someAmmo this) && local this && ((driver this) in units group player || (gunner this) in units group player)";
	statement = "[this, [{PKTUAZ_DVD_xj400},{PKTUAZ_DVD_xj400},{PKTUAZ_DVD_xj400},{PKTUAZ_DVD_xj400}], 50, [{PKTUAZ_DVD_xj400}]] exec {Player\Effect\EquipCarMG.sqs}";
};

// UA for EAST Tanks Missile. Abandoned.
class UA_Equip9K112 {
	displayName ="Equip 9K112($1000)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && ((driver this) in units group player || (gunner this) in units group player || (commander this) in units group player)";
	statement = "[this, [{9K112_xj400}], 1000] exec {Player\Effect\EquipTankMissile.sqs}";
};
class UA_Equip9K119 {
	displayName ="Equip 9K119($1000)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && ((driver this) in units group player || (gunner this) in units group player || (commander this) in units group player)";
	statement = "[this, [{9K119_xj400}], 1000] exec {Player\Effect\EquipTankMissile.sqs}";
};
class UA_EquipATGM125 {
	displayName ="Equip ATGM125($1000)";
	position = "pos driver";
	radius = 5;
	condition = "count magazines this == 0 && ((driver this) in units group player || (gunner this) in units group player || (commander this) in units group player)";
	statement = "[this, [{ATGM125_xj400}], 1000] exec {Player\Effect\EquipTankMissile.sqs}";
};
//EOF