class UA_MHQBuildMenu {};
class UA_MCVBuildMenu {};
class UA_SupBuildMenu {};

class UA_SelfMedic {
	statement = "this exec localize {TZK_ACTION_SELF_MEDIC}";
};


// UA for Transport Vehicle
class UA_EjectAICargo {
	statement = "[this, siPlayer] exec localize {TZK_FUNC_EJECT_QUICKLY}";
};
class UA_EjectAllCargo {
	statement = "[this, siPlayer] exec localize {TZK_FUNC_EJECT_ALL_CARGO}";
};
class UA_EjectOneCargo {
	statement = "[this, siPlayer] exec localize {TZK_FUNC_EJECT_ONE_CARGO}";
};
class UA_TransportTurnON {
	statement = "[this] exec localize {TZK_MSG_COMMON_SEND_TRANSPORT_TURNON}";
};
class UA_TransportTurnOFF {
	statement = "[this] exec localize {TZK_MSG_COMMON_SEND_TRANSPORT_TURNOFF}";
};

// UA for Attach
class UA_AttachInVehicle {};
class UA_AttachOnFoot {
	statement = "[this, tsCenter, ttTruck] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachInVehicle_Truck: UA_AttachInVehicle {
	statement = "[this, tsCenter, ttTruck] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachOnFoot_Truck: UA_AttachOnFoot {
	statement = "[this, tsCenter, ttTruck] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};

class UA_AttachInVehicle_Center: UA_AttachInVehicle {
	statement = "[this, tsCenter, ttBoat] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachInVehicle_Right: UA_AttachInVehicle {
	statement = "[this, tsRight, ttBoat] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachInVehicle_Left: UA_AttachInVehicle_Right {
	statement = "[this, tsLeft, ttBoat] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachOnFoot_Center: UA_AttachOnFoot {
	statement = "[this, tsCenter, ttBoat] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachOnFoot_Right: UA_AttachOnFoot {
	statement = "[this, tsRight, ttBoat] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachOnFoot_Left: UA_AttachOnFoot {
	statement = "[this, tsLeft, ttBoat] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};

class UA_AttachInVehicle_APC: UA_AttachInVehicle {
	statement = "[this, tsCenter, ttAPC] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachOnFoot_APC: UA_AttachOnFoot {
	statement = "[this, tsCenter, ttAPC] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};

class UA_AttachInVehicle_Heli: UA_AttachInVehicle {
	statement = "[this, tsCenter, ttHeli] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};
class UA_AttachOnFoot_Heli: UA_AttachOnFoot {
	statement = "[this, tsCenter, ttHeli] exec localize {TZK_FUNC_ATTACHDETACH_VEHICLE}";
};

// UA for driver-gunner-switch
class UA_SwitchToDriverAir {
	statement = "this exec localize {TZK_FUNC_SWITCH_2_DRIVER}";
};
class UA_SwitchToGunnerAir {
	statement = "this exec localize {TZK_FUNC_SWITCH_2_GUNNER}";
};
class UA_SwitchToDriverLand: UA_SwitchToDriverAir {};
class UA_SwitchToGunnerLand: UA_SwitchToGunnerAir {};

// UA for Aircraft
class UA_SetFlightAltitude {
	statement = "[this, driver this] exec localize {TZK_DIALOG_SET_FLIGHT_ALT}";
};
class UA_LAND_Heli {
	statement = "doStop this; this land ""LAND""";
}
	// Display or not decided by boolean
class UA_AfterBurnerON {
	statement = "this removeMagazines {AfterBurnerSwitch_xj400}; this exec localize {TZK_EFFECT_AFTER_BURNER}";
};
class UA_AfterBurnerOFF {
	statement = "this addMagazine {AfterBurnerSwitch_xj400}";
};
class UA_SpoofMissileON {
	statement = "this removeMagazines {SpoofSwitch_xj400}";
};
class UA_SpoofMissileOFF {
	statement = "this addMagazine {SpoofSwitch_xj400}";
};

// The script command addMagazine and removeMagazine(s) is local. Thus the following actions for car/ship only show to local client.
// UA for Virtual Weapons Rearm
class UA_EquipLAW {
	statement = "[this, [{VirtualLAW_xj400}], 25] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}
class UA_EquipRPG {
	statement = "[this, [{VirtualRPG_xj400}], 25] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}
class UA_EquipCarlGustav {
	statement = "[this, [{VirtualCarlGustav_xj400}], 60] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}
class UA_EquipAT4 {
	statement = "[this, [{VirtualAT4_xj400}], 60] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}
class UA_EquipGrenade {
	statement = "[this, [{VirtualGrenade_xj400}], 10] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}
class UA_EquipMortar {
	statement = "[this, [{VirtualMortar_xj400}], 20] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}
class UA_EquipMG {
	statement = "[this, [{Mag_12mm7_100_xj400}], 20] exec localize {TZK_FUNC_EQUIP_VIRTUAL_WEP}";
}

class UA_ShowEquipList {
	statement = "this addMagazine {VirtualEquipSwitchMag_xj400}";
}
class UA_HideEquipList {
	statement = "this removeMagazines {VirtualEquipSwitchMag_xj400}";
}

// UA for MG Car Weapons. Car with weapon and none magazines will cause crash when they target objects, thus necessary to use UA to rearm instead rearm-system in CTI.
class UA_EquipM2 {
	statement = "[this, [{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400},{M2cal50_DVDUS_xj400}], 50, [{M2cal50_DVDUS_xj400}]] exec localize {TZK_FUNC_EQUIP_CAR_MG}";
};
class UA_EquipPKT {
	statement = "[this, [{PKTUAZ_DVD_xj400},{PKTUAZ_DVD_xj400},{PKTUAZ_DVD_xj400},{PKTUAZ_DVD_xj400}], 50, [{PKTUAZ_DVD_xj400}]] exec localize {TZK_FUNC_EQUIP_CAR_MG}";
};

// UA for EAST Tanks Missile. Abandoned.
class UA_Equip9K112 {
	statement = "[this, [{9K112_xj400}], 1000] exec localize {TZK_FUNC_EQUIP_TANK_MISSILE}";
};
class UA_Equip9K119 {
	statement = "[this, [{9K119_xj400}], 1000] exec localize {TZK_FUNC_EQUIP_TANK_MISSILE}";
};
class UA_EquipATGM125 {
	statement = "[this, [{ATGM125_xj400}], 1000] exec localize {TZK_FUNC_EQUIP_TANK_MISSILE}";
};