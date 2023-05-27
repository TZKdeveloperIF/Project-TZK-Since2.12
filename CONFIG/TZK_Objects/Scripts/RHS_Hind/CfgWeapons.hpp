class CfgWeapons
{
	class default {};
	class MGun: Default {};
	class MachineGun7_6: MGun {};
	class MachineGun30: MachineGun7_6 {};
	class RHS_12_7mmGun: MachineGun30
	{
		displayName         ="$STR_DN_RHS_HIND_12_7mm";
		displayNameMagazine ="$STR_MN_RHS_HIND_12_7mm";
		shortNameMagazine   ="$STR_SN_RHS_HIND_12_7mm";
		count=1470;
		ammo="RHS_12_7mm";
		multiplier=1;
		burst=10;
		sound[]={"\RHS_Hind\sounds\12mm_fire",3,1};
		soundContinuous=0;
		reloadTime=0.009;
		dispersion=0.01;
	};
	class RHS_30mmTwinGun: MachineGun30
	{
		displayName         ="$STR_DN_RHS_HIND_30mm";
		displayNameMagazine ="$STR_MN_RHS_HIND_30mm";
		shortNameMagazine   ="$STR_SN_RHS_HIND_30mm";
		count=750;
		ammo="RHS_30mm";
		multiplier=1;
		burst=5;
		sound[]={"\RHS_Hind\sounds\30mm_fire",3,1.4};
		soundContinuous=0;
		reloadTime=0.09;
		dispersion=0.01;
	};
	class LAWLauncher: Default{};
	class CarlGustavLauncher : LAWLauncher{};
	class AT3Launcher: CarlGustavLauncher {};
	class HellfireLauncher: AT3Launcher {};
	class MaverickLauncher: HellfireLauncher {};
	class HellfireLauncherHind: HellfireLauncher{};
	class RHS_AT2:MaverickLauncher
	{
		displayName         ="$STR_DN_RHS_HIND_AT2";
		displayNameMagazine ="$STR_MN_RHS_HIND_AT2";
		shortNameMagazine   ="$STR_SN_RHS_HIND_AT2";

		ammo="RHS_AT2";
		sound[]={"\RHS_hind\sounds\AT2_fire",3,1};
		count=4;
	};
	class RHS_AT6a: HellfireLauncherHind
     	{
		displayName         ="$STR_DN_RHS_HIND_AT6";
		displayNameMagazine ="$STR_MN_RHS_HIND_AT6";
		shortNameMagazine   ="$STR_SN_RHS_HIND_AT6";

		ammo="RHS_AT6a";
		count=8;
		sound[]={"\RHS_hind\sounds\AT6_fire",3,1};
	};
	class RHS_AT6b: RHS_AT6a
     	{
		ammo="RHS_AT6b";
	};
	class RHS_AT6c: RHS_AT6a
     	{
		count=4;
		ammo="RHS_AT6c";
	};
	class RHS_AT6d: RHS_AT6c
     	{
		ammo="RHS_AT6d";
	};
	class ZuniLauncher38: AT3Launcher{};
	class Rocket57x64: ZuniLauncher38{};
	class RHS_Rocket57x64:Rocket57x64
	{
		displayName         ="$STR_DN_RHS_HIND_S5";
		displayNameMagazine ="$STR_MN_RHS_HIND_S5";
		shortNameMagazine   ="$STR_SN_RHS_HIND_S5";
		ammo="RHS_57mmS5";
		burst = 2;
		sound[]={"\RHS_hind\sounds\S5_fire",3,1};
		count=64;
	};
	class RHS_Rocket57x128:RHS_Rocket57x64
	{
		count=128;
	};
	class RHS_Rocket80x80:Rocket57x64
	{
		displayName         ="$STR_DN_RHS_HIND_S8";
		displayNameMagazine ="$STR_MN_RHS_HIND_S8";
		shortNameMagazine   ="$STR_SN_RHS_HIND_S8";
		ammo="RHS_80mmS8";
		burst = 2;
		sound[]={"\RHS_hind\sounds\S8_fire",3,1};
		count=80;
	};
	class RHS_Rocket80x40: RHS_Rocket80x80
     	{
		count=40;
	};
	class RHS_UPK23: Rocket57x64
	{
		displayName         ="$STR_DN_RHS_HIND_UPK23";
		displayNameMagazine ="$STR_MN_RHS_HIND_UPK23";
		shortNameMagazine   ="$STR_SN_RHS_HIND_UPK23";
		burst = 6;
		ammo="RHS_Gunpodammo";
		sound[]={"\RHS_hind\sounds\23mm_fire",3,1.3};
		count=500;
		reloadTime=0.05;
		initSpeed=400;
	};
	class RHS_AGS17: Rocket57x64
	{
		displayName         ="$STR_DN_RHS_HIND_AGS17";
		displayNameMagazine ="$STR_MN_RHS_HIND_AGS17";
		shortNameMagazine   ="$STR_SN_RHS_HIND_AGS17";
		burst = 6;
		ammo="RHS_AGS17ammo";
		sound[]={"\RHS_hind\sounds\AGS_fire",3,1};
		count=600;
		reloadTime=0.05;
		initSpeed=300;
	};
	class RHS_FlareDummy: MGun
	{
		displayname="$STR_DN_RHS_HIND_FLARE";
		ammo="";
	};
};
