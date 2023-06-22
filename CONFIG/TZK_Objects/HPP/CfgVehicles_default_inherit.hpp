	class All {};
	class AllVehicles:All{};
	class Land:AllVehicles{};

	// buildings
	class Thing: All {};
	class Static: All {};
	class Building: Static {};
	class NonStrategic: Building {};
	class HeliH: NonStrategic {};
	class House: NonStrategic {};  
	class Fence: NonStrategic {};
	
	class Strategic: Building {};
	class Camp: Strategic {};
	class Mash: Camp {};

	// infantry
	class Man:Land {};
	class Soldier:Man {};
	class SoldierWB:Soldier {};
	class OfficerW: SoldierWB {};
	class SoldierWSaboteur: SoldierWB {};
	class SoldierWSaboteurPipe: SoldierWSaboteur {};
	class SoldierWSaboteurDay: SoldierWSaboteurPipe {};
	class SoldierWSniper: SoldierWB {};
	class SoldierWMedic: SoldierWB {};
	class SoldierWCrew: SoldierWB {};
	class SoldierWPilot: SoldierWB {};
	class SoldierWG: SoldierWB {};
	class SoldierWMortar: SoldierWG {};
	class SoldierWMG: SoldierWB {};
	class SoldierWLAW: SoldierWB {};
	class SoldierWAT: SoldierWLAW {};
	class SoldierWAA: SoldierWLAW {};
	class HeavyGW: SoldierWB {};
	class SoldierWMiner: SoldierWB {};

	class SoldierEB:Soldier {};
	class SoldierESniper: SoldierEB {};
	class SoldierESaboteur: SoldierEB {};
	class SoldierESaboteurPipe: SoldierESaboteur {};
	class SoldierESaboteurBizon: SoldierESaboteurPipe {};
	class SoldierEMedic: SoldierEB {};
	class SoldierECrew: SoldierEB {};
	class SoldierEPilot: SoldierEB {};
	class SoldierEG: SoldierEB {};
	class SoldierEMG: SoldierEB {};
	class SoldierELAW: SoldierEB {};
	class SoldierEAT: SoldierELAW {};
	class SoldierEAA: SoldierELAW {};
	class OfficerE: SoldierEB {};
	class SoldierEMiner: SoldierEB {};
	class HeavyGrenadier: SoldierEB {};
	
	class SoldierGB: Soldier {};
	class SoldierGG: SoldierGB {};
	class SoldierGMG: SoldierGB {};
	class SoldierGSniper: SoldierGB {};
	class SoldierGMedic: SoldierGB {};
	class SoldierGCrew: SoldierGB {};
	class SoldierGPilot: SoldierGB{};
	class OfficerG: SoldierGB {};
	class SoldierGLAW: SoldierGB {};
	class SoldierGAT: SoldierGLAW {};
	class SoldierGAA: SoldierGLAW {};

	// light vehicles
	class LandVehicle: Land {};
	class Car: LandVehicle {};
	class Truck: Car {};
	class Jeep: Car {};
	class JeepMG: Jeep {};
	class HMMWV: Jeep {};
	class UAZ: Car {};
	class UAZG: Car {};
	class scud: Car {};
	class BRDM: LandVehicle {};
	class Truck5t: Truck {};
	class Truck5tRepair: Truck5t {};
	class Truck5tReammo: Truck5t {};
	class Truck5tRefuel: Truck5t {};
	class Ural: Truck {};
	class UralRepair: Ural {};
	class UralReammo: Ural {};
	class UralRefuel: Ural {};
	class Ship: AllVehicles {};
	class SmallShip: Ship {};
	class BoatW: SmallShip {};
	class BoatE: SmallShip {};
	class CWKZodiac: BoatW {};
	class CWKZodiaccam2: CWKZodiac {};

	// armored
	class Tank: LandVehicle {};
	class RussianTank: Tank {};
	class APC: Tank {};
	class ZSU: Tank {};
	class BMP: APC {};
	class BMPAmbul: BMP {};
	class BMPRes: BMP {};
	class BMP2: BMP {};
	class T55G: Tank {};
	class T72: RussianTank {};
	class T72Res: T72 {};
	class T80: RussianTank {};
	class T80Res: T80 {};
	class M1Abrams: Tank {};
	class M113: APC {};
	class M113Ambul: M113 {};
	class Vulcan: M113 {};
	class Bradley: M113 {};
	class M60: Tank {};

	// static guns
	class M2StaticMG: M113 {};

	// air
	class Air: AllVehicles {};
	class Helicopter: Air {};
	class Plane: Air {};
	class UH60: Helicopter {};
	class UH60MG: UH60 {};
	class Cobra: Helicopter {};
	class AH64: Helicopter {};
	class Mi17: Helicopter {};
	class Mi24: Helicopter {};
	class Kamov: Mi24 {};
	class A10: Plane {};
	class Su25: Plane {};
	class ParachuteBase: Helicopter {};
	class ParachuteEast:ParachuteBase {};
  	class ParachuteWest:ParachuteBase {};
	class ParachuteC:ParachuteBase {};
	class ParachuteG:ParachuteBase {};