	class MachineGun7_6_xj400: MachineGun7_6 {};
	class MG_7_6_xj400: MachineGun7_6 {
		modes[] = {"Player", "AI"};
		count = 500 * 2;
		class Player: MachineGun7_6_xj400 {
			displayName = "7.62mm MGun (Man)";
			ammo = "Bullet_7_6_Player_xj400";
			multiplier = 2;
		};
		class AI: MachineGun7_6_xj400 {
			displayName = "7.62mm MGun (AI)";
			ammo = "Bullet_7_6_AI_xj400";
			dispersion = 0.0007 * 5;
			reloadTime = 0.1 / 2;
			aiRateOfFire = 0.5 / 2;
		};
	};
	class MachineGun12_7_xj400: MachineGun12_7 {};
	class MG_12_7_xj400: MachineGun12_7_xj400 {
		modes[] = {"Player", "AI"};
		count = 500 * 2;
		class Player: MachineGun12_7_xj400 {
			displayName = "12.7mm MGun (Man)";
			ammo = "Bullet_12_7_Player_xj400";
			multiplier = 2;
		};
		class AI: MachineGun12_7_xj400 {
			displayName = "12.7mm MGun (AI)";
			ammo = "Bullet_12_7_AI_xj400";
			dispersion = 0.0007 * 5;
			reloadTime = 0.1 / 2;
			aiRateOfFire = 0.5 / 2;
		};
	};
	class CoaxW_xj400: MachineGun7_6 {};
	class Coax_M240_xj400: CoaxW_xj400 {
		modes[] = {"Player", "AI"};
		count = 11400 * 2;
		class Player: CoaxW_xj400 {
			displayName = "M240 7.62mm (man)";
			ammo = "CoaxW_Player_xj400";
			multiplier = 2;
		};
		class AI: CoaxW_xj400 {
			displayName = "M240 7.62mm (AI)";
			ammo = "CoaxW_AI_xj400";
			dispersion = 0.00065 * 5;
			reloadTime = 0.075 / 2;
		};
	};
	class CoaxE_xj400: MachineGun7_6 {};
	class Coax_PKT_xj400: CoaxE_xj400 {
		modes[] = {"Player", "AI"};
		count = 1000 * 2;
		class Player: CoaxE_xj400 {
			displayName = "PKT 7.62mm (man)";
			ammo = "CoaxE_Player_xj400";
			multiplier = 2;
		};
		class AI: CoaxE_xj400 {
			displayName = "PKT 7.62mm (AI)";
			ammo = "CoaxE_AI_xj400";
			dispersion = 0.00065 * 5;
			reloadTime = 0.075 / 2;
		};
	};
	class LeoMG_xj400: MachineGun12_7 {};
	class MG3A1_xj400: LeoMG_xj400 {
		modes[] = {"Player", "AI"};
		count = 4750 * 2;
		class Player: LeoMG_xj400 {
			displayName = "MG3A1 (Man)";
			ammo = "Bullet_12_7_Player_xj400";
			multiplier = 2;
		};
		class AI: LeoMG_xj400 {
			displayName = "MG3A1 (AI)";
			ammo = "Bullet_12_7_AI_xj400";
			dispersion = 0.0005 * 5;
			reloadTime = 0.065 / 2;
			aiRateOfFire = 0.5 / 2;
		};
	};
	class PLAMG_xj400: MachineGun12_7_xj400 {
		modes[] = {"Player", "AI"};
		count = 500 * 2;
		class Player: MachineGun12_7_xj400 {
			displayName = "12.7mm MGun (Man)";
			ammo = "Bullet_12_7_Player_xj400";
			multiplier = 2;
			sound[] = {"\TZK_Sounds_4_0_0\jiqiang.wss",3.1622777,1};
		};
		class AI: MachineGun12_7_xj400 {
			displayName = "12.7mm MGun (AI)";
			ammo = "Bullet_12_7_AI_xj400";
			dispersion = 0.0007 * 5;
			reloadTime = 0.1 / 2;
			aiRateOfFire = 0.5 / 2;
			sound[] = {"\TZK_Sounds_4_0_0\jiqiang.wss",3.1622777,1};
		};
	};
	class 50calW_xj400: MachineGun12_7 {};
	class 50cal_M2_xj400: 50calW_xj400 {
		modes[] = {"Player", "AI"};
		count = 50 * 2;
		class Player: 50calW_xj400 {
			displayName = "M2 12.7mm (Man)";
			ammo = "50calW_Player_xj400";
			multiplier = 2;
		};
		class AI: 50calW_xj400 {
			displayName = "M2 12.7mm (AI)";
			ammo = "50calW_AI_xj400";
			dispersion = 0.00125 * 5;
			reloadTime = 0.1 / 2;
			aiRateOfFire = 0.5 / 2;
		};
	};
	class 50calE_xj400: MachineGun12_7 {};
	class 50cal_NSVT_xj400: 50calE_xj400 {
		modes[] = {"Player", "AI"};
		count = 50 * 2;
		class Player: 50calE_xj400 {
			displayName = "NSVT 12.7mm (Man)";
			ammo = "50calE_Player_xj400";
			multiplier = 2;
		};
		class AI: 50calE_xj400 {
			displayName = "NSVT 12.7mm (AI)";
			ammo = "50calE_AI_xj400";
			dispersion = 0.00125 * 5;
			reloadTime = 0.1 / 2;
			aiRateOfFire = 0.5 / 2;
		};
	};

	class M134_Bas_xj400: MachineGun7_6 {
		scopeWeapon = 2; scopeMagazine = 2;

		displayName = "M134 Minigun";
		displayNameMagazine = "M134 7.62mm";
		shortNameMagazine = "M134 7.62mm";

		muzzlePos = "usti hlavne";
		muzzleEnd = "konec hlavne";
		count = 4500;
		modes[] = {"RPM2K"};
		class RPMBase {
			displayName = "M134 Minigun";
			ammo = "Gatling7_6_xj400";
			burst = 5;
			multiplier = 1;
			initSpeed = 1000;
			reloadTime = 0.025;
			sound[] = {"\TZK_Sounds_4_0_6\bas\M134_2kx5.wss", 1, 1};
			soundContinuous = 1;
			flash = gunfire;
			flashSize = 0.01;
			dispersion = 0.025;
			maxLeadSpeed = 80;
			aiDispersionCoefX = 5;
			aiDispersionCoefY = 5;
			ffMagnitude = 0.5;
			ffFrequency = 11;
			ffCount = 6;
			recoil = "Empty";
			aiRateOfFire = 0.5;
			aiRateOfFireDistance = 1000;
			autoFire = 1;
			optics = 1;
			useAction = 0;
			useActionTitle = "";
		};
		class RPM2K: RPMBase {};
	};
	class GAU2B_Bas_xj400: M134_Bas_xj400 {
		displayName = "GAU-2B/A 7.62mm";
		displayNameMagazine = "GAU-2B/A 7.62mm";
		shortNameMagazine = "GAU-2B/A";
		modes[] = {"RPM2K"};
		class RPM2K: RPMBase {
			displayName = "GAU-2B/A 7.62mm";
		};
	};
	class GShG7_62_xj400: GAU2B_Bas_xj400 {
		displayName = "9-A-622 7.62mm";
		displayNameMagazine = "9-A-622 7.62mm";
		shortNameMagazine = "9-A-622";
		modes[] = {"RPM2K"};
		class RPM2K: RPMBase {
			displayName = "9-A-622 7.62mm";
			sound[] = {"\BOHJSDF5\wap\fv24b", 1, 1};
		};
	};
	class M60_Heli_xj400: MachineGun7_6 {
		ammo = "Bullet7_6W";
		count = 200;
		reloadAction = "manactreloadmagazine";
		reloadMagazineSound[] = {"weapons\m16load",0.0003162,1};
		displayName = "$STR_DN_M60_MG";
		displayNameMagazine = "$STR_MN_M60_MG";
		shortNameMagazine = "$STR_SN_M60_MG";
	};
	class PKT_Heli_xj400: MachineGun7_6 {
		ammo = "Bullet7_6E";
		count = 200;
		reloadAction = "manactreloadmagazine";
		reloadMagazineSound[] = {"weapons\m16load",0.0003162,1};
		sound[] = {"Weapons\AK74full",3.1622777,1};
		displayName = "$STR_DN_PK";
		displayNameMagazine = "$STR_MN_PK";
		shortNameMagazine = "$STR_SN_PK";
	};