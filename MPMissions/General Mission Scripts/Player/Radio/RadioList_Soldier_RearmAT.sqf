private ["_unit", "_wpnSec", "_reEquip", "_weapon", "_magazine", "_index", "_exclude", "_found", "_salvage", "_cost", "_magazinesArray", "_magIndex", "_count", "_ammunition", "_volume"];
_unit = _this select 0;
_found = [getPos _unit, siBoth, (typesSupportPlus select si0) + (typesSupportPlus select si1) + [utMHQ0, utMHQ1, utMCVW, utMCVE, jeepaW,uazaE], []] call funcGetClosestVehicle;
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siEnemy select siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {hint "No Rearm Vehicle Nearby."} else {
	_wpnSec = (secondaryWeapon _unit) call funcStringWithoutVersion; _reEquip = true;
	if !(_wpnSec in [{CarlGustavLauncher},{AT4Launcher},{HyperLauncher}]) then {_weapon = [{CarlGustavLauncher},{AT4Launcher}] select siPlayer; _magazine = _weapon} else {
		_weapon = _wpnSec; _magazine = _weapon; if (_magazine == {HyperLauncher}) then {_magazine = [{CarlGustavLauncher},{AT4Launcher}] select siPlayer}; _reEquip = false;
	};
	_wpnSec = secondaryWeapon _unit; _exclude = _wpnSec; if (!_reEquip) then {_exclude = ""};
	if (([_unit, false, _exclude] call loadFile "Player\SQF\SlotCalculate.sqf") < 6) then {hint "You're equipping too many magazines."} else {
		
		RespawnW = RespawnWeapon + [-1]; RespawnM = RespawnMagazine + [-1]; RespawnA = RespawnAmmunition + [-1]; 

		_salvage = 0; _cost = 0; 
		if (_reEquip) then {
			_index = weaponSearch find _wpnSec;
			if (_index != -1) then {_salvage = _salvage + ([_index] call loadFile "Player\SQF\EquipmentRespawnWeapon.sqf")};
			_index = equipSearch find _wpnSec;
			if (_index != -1 && !bool_TZK_199_Mode) then {
				_magazinesArray = magazinesarray _unit; _magIndex = 0; _count = count _magazinesArray;
				while "_magIndex < _count" do {
					if ((_magazinesArray select _magIndex) == _wpnSec) then {
						_ammunition = _magazinesArray select (_magIndex + 1); _volume = call format ["%1", (_magazinesArray select _magIndex) GetWeaponParam "count"];
						_ammunition = [_index, _ammunition] call loadFile "Player\SQF\EquipmentRespawnAmmunition.sqf";
						if (_volume != 0) then {_ammunition = _ammunition / _volume};
						_salvage = _salvage + _ammunition * ((equipDefs select _index) select edcost);
					};
					_magIndex = _magIndex + 2;
				};
			};
			_index = weaponSearch find _weapon;
			if (_index != -1) then {_cost = _cost + ((weaponDefs select _index) select wdcost)};
		};
		_index = equipSearch find _magazine;
		if (_index != -1) then {_cost = _cost + ((equipDefs select _index) select edcost)};
		_salvage = _salvage * salvageRatio; _salvage = _salvage - (_salvage % 1); _cost = _cost - _salvage; _money = (groupMoneyMatrix select siPlayer) select giPlayer;
		
		if (_cost >= 0 && _cost > _money) then {hint "Not Enough Money."} else {
			if (_reEquip) then {_unit removeMagazines _wpnSec; _unit removeWeapon _wpnSec};
			unitContainer = "SecondaryWeaponHolder" camCreate getPos _unit; unitContainer addMagazineCargo [_magazine, 1];
			_unit action ["TAKE MAGAZINE", unitContainer, 0, 0, _magazine];
			if (_reEquip) then {_unit addWeapon _weapon}; unitContainer = nil;
			[_cost] exec "Player\SendMoneySpent.sqs"; player groupChat format ["Rapid Rearm completed. Cost: $%1", _cost];
			RespawnWeapon = RespawnW; RespawnMagazine = RespawnM; RespawnAmmunition = RespawnA; 
		};
	};
};