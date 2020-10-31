private ["_vehicle", "_weapons", "_mags", "_slots"];

_vehicle = typeOf _this camCreate [0,0,20];
removeAllWeapons _vehicle;

{_vehicle addWeapon _x} forEach ["HK", "LaserDesignator", "Binocular", "NVGoggles", "glockS"];
{_vehicle addMagazine _x} forEach ["HK", "HK", "HK", "HK", "HK", "HK", "HK", "HK", "HK", "HK", "glocksmag","glocksmag","glocksmag","glocksmag"];

_weapons = weapons _vehicle; _mags = magazines _vehicle;
_slots	= 1 * ("_x == {HK}" count _weapons) + 16 * ("_x == {LaserDesignator}" count _weapons) + 4096 * ("_x == {Binocular}" count _weapons) + 4096 * ("_x == {NVGoggles}" count _weapons)
		+ 2 * ("_x == {glockS}" count _weapons) + 256 * ("_x == {HK}" count _mags) + 32 * ("_x == {glocksmag}" count _mags);

deleteVehicle _vehicle;
_slots