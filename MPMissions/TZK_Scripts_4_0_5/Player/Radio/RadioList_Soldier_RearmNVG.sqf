private ["_unit", "_NVGs", "_nvgOptics", "_index", "_count", "_found", "_costO"];
_unit = _this select 0;
_found = [getPos _unit, siBoth, (typesSupportPlus select si0) + (typesSupportPlus select si1) + [utMHQ0, utMHQ1, utMCVW, utMCVE, jeepaW,uazaE], []] call funcGetClosestVehicle;
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siPlayer, stBarracks] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siEnemy select siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {hint "No Rearm Vehicle Nearby."} else {
	if ("NVG_statF_xj400" in weapons _unit) then {hint "You are equipping the better NVG."} else {
		_NVGs = ["NVGoggles", "NVG_stat_xj400", "NVG_statF_xj400"]; _nvgOptics = "NVG_statF_xj400";
		
		_index = weaponSearch find _nvgOptics;
		if (_index != -1) then {
			{_unit removeWeapon _x} forEach _NVGs; _unit addWeapon _nvgOptics;
			_costO = weaponDefs select _index select wdcost;
			if (upgMatrix select siPlayer select upgTL == 2) then {_costO = 0}; if (_costO > 0) then {[_costO] exec "\TZK_Scripts_4_0_4\Player\SendMoneySpent.sqs"};
			player groupChat format ["Rapid Rearm completed. Cost: $%1", _costO];
		};
	};
};