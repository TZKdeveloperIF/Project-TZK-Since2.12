private ["_unit", "_wpnSec", "_weapon", "_magazine", "_index", "_count", "_found", "_costW", "_costM"];
_unit = _this select 0;
_found = [getPos _unit, siBoth, (typesSupportPlus select si0) + (typesSupportPlus select si1) + [utMHQ0, utMHQ1, utMCVW, utMCVE, jeepaW,uazaE], []] call funcGetClosestVehicle;
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siEnemy select siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {hint "No Rearm Vehicle Nearby."} else {
	_wpnSec = secondaryWeapon _unit; _weapon = "";
	if !(_wpnSec in [{AALauncher},{9K32Launcher},{HyperLauncher}]) then {_weapon = [{AALauncher},{9K32Launcher}] select siPlayer; _magazine = _weapon} else {
		_weapon = _wpnSec; _magazine = _weapon; if (_magazine == {HyperLauncher}) then {_magazine = {AALauncher},{9K32Launcher}] select siPlayer};
	};
	if (_weapon != "") then {
		_index = 0; _count = count weaponDefs; _found = false; while "_index < _count && !_found" do {
			if (_weapon == ((weaponDefs select _index) select wdObject)) then {_found = true};
			_index = _index + 1;
		};
		if (_found) then {_costW = ((weaponDefs select (_index - 1)) select wdcost)} else {_costW = 0};
		if (_found && (_wpnSec in [{AALauncher},{9K32Launcher},{HyperLauncher}])) then {_costW = 0} else {_unit removeWeapon _wpnSec; _unit removeMagazines _wpnSec};
		
		_index = 0; _count = count equipDefs; _found = false; while "_index < _count && !_found" do {
			if (_magazine == ((equipDefs select _index) select edObject)) then {_found = true};
			_index = _index + 1;
		};
		if (_found) then {_costM = ((equipDefs select (_index - 1)) select edcost)} else {_costM = 0};
		if (("_x == _magazine" count magazines _unit) + (_unit ammo _weapon) > 1) then {_costM = 0};
		if (_costM > 0 && (_unit ammo _weapon) < 1) then {_unit removeMagazine _magazine};
		
		if (_costM != 0) then {_unit addMagazine _magazine};
		if (_costW != 0) then {_unit addWeapon _weapon};
		if (_costM + _costW > 0) then {[_costM + _costW] exec "Player\SendMoneySpent.sqs"; player groupChat format ["Rapid Rearm completed. Cost: $%1", _costM + _costW]};
	};
};