#define TEast 0
#define TWest 1
#define TGuerrila 2
#define TCivilian 3
#define TSideUnknown 4
#define TEnemy 5
#define TFriendly 6
#define TLogic 7

#define true 1
#define false 0

#define private 0
#define protected 1
#define public 2

#define CanSeeRadar 1
#define CanSeeEye 2
#define CanSeeOptics 4
#define CanSeeEar 8
#define CanSeeCompass 16
#define CanSeeAll 31

class CfgPatches {
	class TZK_CONFIG_406_Patch2 {
		name = "TZK_CONFIG_406_Patch2";
		author = "IF";
		units[] = {};
		requiredAddons[] = {"TZK_CONFIG_406_Patch"}; // IMPORTANT!
		requiredVersion = 1.99;
	};
};


class CfgAmmo {
	
};
class CfgWeapons {
	
};

#include "TZK_Patch2_4_0_6\cfgUserActions.h"

// class WeaponFireGun {};
// class WeaponCloudsGun {};

class CfgVehicles {
	#include "TZK_Patch2_4_0_6\cfgVehicles_0.h"

	#include "TZK_Patch2_4_0_6\cfgVehicles_art.h"
	#include "TZK_Patch2_4_0_6\cfgVehicles_tank.h"
};

class CfgMarkers {
	class UnknownVehicle_Marker_xj400 {};
};

class CfgNonAIVehicles {
	
};

class CfgVehicleActions {
	
};
class CfgMovesMC_xj400 {
	
};

// EOF