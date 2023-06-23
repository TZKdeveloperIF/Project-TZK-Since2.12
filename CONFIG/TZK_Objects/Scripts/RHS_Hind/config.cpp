// Edited for RCWC Mod
// 2013.12.14
// some basic defines
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

// type scope
#define private 0
#define protected 1
#define public 2

#define WeaponNoSlot		0	// dummy weapons
#define WeaponSlotPrimary	1	// primary weapons
#define WeaponSlotSecondary	16	// secondary weapons
#define WeaponSlotItem		256	// items
#define WeaponSlotBinocular	4096	// binocular
#define WeaponHardMounted	65536

class CfgPatches
{
	class RHS_Hind
	{
		units[] = 
		{
			"RHS_Mi24P_CAS",
			"RHS_Mi24P_AT",
			"RHS_Mi24V_CAS",
			"RHS_Mi24V_AT",
			"RHS_Mi24D",
			"RHS_Mi24D_Gun",
			"RHS_Mi24D_IRQ"
		};
		weapons[] = 
		{
			"RHS_12_7mmGun",
			"RHS_30mmTwinGun",
			"RHS_AT2",
			"RHS_AT6a",
			"RHS_AT6b",
			"RHS_AT6c",
			"RHS_AT6d",
			"RHS_Rocket57x64",
			"RHS_Rocket57x128",
			"RHS_Rocket80x40",
			"RHS_AGS17",
			"RHS_FlareDummy"
		};
		requiredAddons[]={"RHS_Misc","owp_crew"};
		requiredVersion = 1.85;
	};
};
class CfgModels
{
	class Default {};
	class weapon: default {};
	class Vehicle: Default {};
	class Helicopter {};
	class RHS_Mi24V_AT: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={"n1","n2","gearlight","enginelight","fire","fireB","missilelight"};
	};
	class RHS_Mi24P_AT: RHS_Mi24V_AT{};
	class RHS_Mi24P_CAS: RHS_Mi24V_AT{};
	class RHS_Mi24V_CAS: RHS_Mi24V_AT{};
	class RHS_Mi24D: RHS_Mi24V_AT{};
	class RHS_Mi24D_Gun: RHS_Mi24V_AT{};
	class RHS_Mi24D_IRQ: Helicopter
	{
		sectionsInherit="Helicopter";
		sections[]={"n1","n2","gearlight","enginelight","fire","fireB","missilelight","n3","n4"};
	};
};
class CfgSounds
{
	class RHS_Mi24_engineon
	{
		sound[]={"\RHS_hind\sounds\engineon.ogg",7,1.000000};
		name = "Mi24_engineon";
		titles[] = {};
 	};
	class RHS_Mi24_engineoff
	{
		sound[]={"\RHS_hind\sounds\engineoff.ogg",7,1.000000};
		name = "Mi24_engineon";
		titles[] = {};
 	};
	class RHS_Mi24_gear
	{
		sound[]={"\RHS_hind\sounds\gear",0.05,1};
		name = "Mi24_gear";
		titles[] = {};
 	};
     	class RHS_mi24_PdoorOpen
	{
		sound[]={"\RHS_hind\sounds\pdoorop",0.05,1};
		name = "mi24_PdoorOpen";
		titles[] = {};
 	};
	class RHS_mi24_PdoorClose
	{
		sound[]={"\RHS_hind\sounds\pdoorcl.wss",0.05,1};
		name = "mi24_PdoorClose";
		titles[] = {};
 	};
	class RHS_mi24_GdoorOpen
	{
		sound[]={"\RHS_hind\sounds\gdoorop.wss",0.05,1};
		name = "mi24_GdoorOpen";
		titles[] = {};
 	};
	class RHS_mi24_GdoorClose
	{
		sound[]={"\RHS_hind\sounds\gdoorcl.wss",0.05,1};
		name = "mi24_GdoorClose";
		titles[] = {};
 	};
	class RHS_mi24_Cdoor
	{
		sound[]={"\RHS_hind\sounds\cdoor.wss",0.05,1};
		name = "mi24_Cdoor";
		titles[] = {};
 	};
	class RHS_mi24_flare
	{
		sound[]={"\RHS_hind\sounds\flare.wss",0.5,1};
		name = "mi24_flare";
		titles[] = {};
 	};
	class RHS_mi24_missilealert
	{
		sound[]={"\RHS_hind\sounds\missilealert.wss",0.05,1};
		name = "mi24_flare";
		titles[] = {};
 	};
};

#include <RHS_hind\CfgAmmo.hpp>

#include <RHS_hind\CfgWeapons.hpp>

#include <RHS_hind\CfgVehicles.hpp>

class CfgNonAIVehicles
{
	class ProxyWeapon{};
	class Proxyat2_proxy:ProxyWeapon
	{
		model="\RHS_Hind\RHS_AT2_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6a:ProxyWeapon
	{
		model="\RHS_Hind\RHS_AT6a_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6b:ProxyWeapon
	{
		model="\RHS_Hind\RHS_AT6b_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6c:ProxyWeapon
	{
		model="\RHS_Hind\RHS_AT6c_Proxy.p3d";
		simulation="maverickweapon";
	};
	class Proxyat6d:ProxyWeapon
	{
		model="\RHS_Hind\RHS_AT6d_Proxy.p3d";
		simulation="maverickweapon";
	};
};
