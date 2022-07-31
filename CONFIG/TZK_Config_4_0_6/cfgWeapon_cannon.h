	#define CannonCommonMag(weapon, time, disp) weapon##_##time##_##disp##_xj406
	#define CannonSmallMag(weapon, time, disp) weapon##_Small_##time##_##disp##_xj406
	#define CannonClass(weapon, time, disp) \
	class CannonCommonMag(weapon,time,disp): weapon##_Base_xj406 { \
		reloadTime = 0.0##time##; \
		dispersion = 0.0##disp##; \
	}; \
	class CannonSmallMag(weapon,time,disp): CannonCommonMag(weapon,time,disp) { \
		count = 100; \
	};
	class VulcanCannon_xj400: MachineGun30 {};
	class VulcanCannon_Base_xj406: VulcanCannon_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		ammo = "Bullet4x20_xj406";
	};
	CannonClass(VulcanCannon,3,30);
	CannonClass(VulcanCannon,3,25);
	CannonClass(VulcanCannon,3,20);
	CannonClass(VulcanCannon,3,15);
	CannonClass(VulcanCannon,3,10);
	CannonClass(VulcanCannon,3,05);
	class VulcanCannon_xj406: VulcanCannon_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazineReloadTime = 1;
		magazines[] = {
			CannonCommonMag(VulcanCannon,3,30);
			CannonCommonMag(VulcanCannon,3,25);
			CannonCommonMag(VulcanCannon,3,20);
			CannonCommonMag(VulcanCannon,3,15);
			CannonCommonMag(VulcanCannon,3,10);
			CannonCommonMag(VulcanCannon,3,05);
			CannonSmallMag(VulcanCannon,3,30);
			CannonSmallMag(VulcanCannon,3,25);
			CannonSmallMag(VulcanCannon,3,20);
			CannonSmallMag(VulcanCannon,3,15);
			CannonSmallMag(VulcanCannon,3,10);
			CannonSmallMag(VulcanCannon,3,05);
		};
	};
	class ZsuCannon_Base_xj406: ZsuCannon {
		scopeWeapon = 0; scopeMagazine = 2;
		ammo = "Bullet4x23_xj406";
	};
	CannonClass(ZsuCannon,2,30);
	CannonClass(ZsuCannon,2,25);
	CannonClass(ZsuCannon,2,20);
	CannonClass(ZsuCannon,2,15);
	CannonClass(ZsuCannon,2,10);
	CannonClass(ZsuCannon,2,05);
	class ZsuCannon_xj406: ZsuCannon {
		scopeWeapon = 2; scopeMagazine = 0;
		magazineReloadTime = 1;
		magazines[] = {
			CannonCommonMag(ZsuCannon,2,30);
			CannonCommonMag(ZsuCannon,2,25);
			CannonCommonMag(ZsuCannon,2,20);
			CannonCommonMag(ZsuCannon,2,15);
			CannonCommonMag(ZsuCannon,2,10);
			CannonCommonMag(ZsuCannon,2,05);
			CannonSmallMag(ZsuCannon,2,30);
			CannonSmallMag(ZsuCannon,2,25);
			CannonSmallMag(ZsuCannon,2,20);
			CannonSmallMag(ZsuCannon,2,15);
			CannonSmallMag(ZsuCannon,2,10);
			CannonSmallMag(ZsuCannon,2,05);
		};
	};
	class Tunguska_30mm_DKM_xj400: ZsuCannon {};
	class Tunguska_30mm_SmallMag_xj406: Tunguska_30mm_DKM_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		count = 192;
		dispersion = 0.015;
	};
	class Tunguska_30mm_CommonMag_xj406: Tunguska_30mm_DKM_xj400 {
		scopeWeapon = 0; scopeMagazine = 2;
		dispersion = 0.015;
	};
	class Tunguska_30mm_DKM_xj406: Tunguska_30mm_DKM_xj400 {
		scopeWeapon = 2; scopeMagazine = 0;
		magazineReloadTime = 1;
		magazines[] = {Tunguska_30mm_CommonMag_xj406, Tunguska_30mm_SmallMag_xj406};
	};