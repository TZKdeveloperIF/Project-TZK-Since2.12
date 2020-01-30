private ["_unit", "_NVGs", "_nvgOptics", "_index", "_count", "_found", "_costO"];
_unit = _this select 0;
_found = [getPos _unit, siBoth, (typesSupportPlus select si0) + (typesSupportPlus select si1) + [utMHQ0, utMHQ1, utMCVW, utMCVE, jeepaW,uazaE], []] call funcGetClosestVehicle;
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {_found = [getPos _unit, siEnemy select siPlayer, stAmmoCrate] call funcGetClosestStructure};
if ((_found select 1) > rangeSupport) then {hint "No Rearm Vehicle Nearby."} else {
	if ("NVG_statF_xj200" in weapons _unit) then {hint "You are equipping the better NVG."} else {
		_NVGs = ["NVGoggles", "NVG_stat_xj200", "NVG_statF_xj200"]; _nvgOptics = "NVG_statF_xj200";
		
		_index = 0; _count = count equipDefs; _found = false; while "_index < _count && !_found" do {
			if (_nvgOptics == ((equipDefs select _index) select edObject)) then {_found = true};
			_index = _index + 1;
		};
		if (_found) then {_costO = ((equipDefs select (_index - 1)) select edcost)} else {_costO = 0};
		
		if (_costO != 0) then {{_unit removeWeapon _x} forEach _NVGs; _unit addWeapon _nvgOptics};
		if ( ((upgMatrix select siPlayer) select upgTL) == 2 ) then {_costO = 0};
		if (_costO > 0) then {[_costO] exec "Player\SendMoneySpent.sqs"};
		if (_costO > 0 || ((upgMatrix select siPlayer) select upgTL) == 2) then {player groupChat format ["Rapid Rearm completed. Cost: $%1", _costO]};
	};
};