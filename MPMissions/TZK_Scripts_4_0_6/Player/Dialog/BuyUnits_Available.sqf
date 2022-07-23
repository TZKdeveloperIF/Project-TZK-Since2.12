private ["_idcUnits", "_nShow", "_workingFactoryTypes", "_lastWorkingFactoryTypes", "_infLevel", 
"_unitDesc", "_sideUnit", "_name", "_cost", "_manning", "_spacer", "_text"];

_idcUnits = _this select 0; _nShow = _this select 1; 
_workingFactoryTypes = _this select 2; _lastWorkingFactoryTypes = _this select 3;
_this = 0;

_infLevel = siPlayer call loadFile "Util\InfLevel.sqf";

if (0 == count _workingFactoryTypes) then {
	private [{_types}, {_type}, "_structs", "_index", "_count"];
	_types = [stBarracks, stLight, stHeavy, stAir, stShip];
	_index = 0; _count = count _types; while {_index < _count} do {
		_type = _types select _index;
		_structs = [siPlayer, _type] call funcGetWorkingStructuresWithinCCRange;
		if (count _structs > 0) then {_workingFactoryTypes = _workingFactoryTypes + [_type]};
		_index = _index + 1;
	};
};
if ((count (_workingFactoryTypes - _lastWorkingFactoryTypes) != 0 || count (_lastWorkingFactoryTypes - _workingFactoryTypes) != 0 ) || _nShow != nShow) then {
	lbClear _idcUnits;
	if (stBarracks in _workingFactoryTypes && nShow != 1) then {
		private ["_id", "_x", "_lbi"];
		_id = maxUnitTypes; {
			if (count _x > 0) then {
				_lbi = lbAdd[_idcUnits, format["cs%1 $%2 %3", _id - maxUnitTypes, costCustom, _x select 0]];
				lbSetValue [_idcUnits, _lbi, _id]
			};
			_id = _id + 1;
		} foreach infCustom;
	};
	_index = 0; _count = count unitDefs; while "_index < _count" do {
		_unitDesc = unitDefs select _index;
		_sideUnit = _unitDesc select udSide;
		if (_sideUnit == siPlayer && [(_unitDesc select udFactoryType) call funcBinaryDigit, _workingFactoryTypes] call funcArrayOverlap) then {
			_manning = _unitDesc select udCrew;
			_skip = false;
			if (0 == count _manning) then {
				_levelIdx = TzkInfLevelIdx find _index;
				if (-1 != _levelIdx) then {
					if (TzkInfLevelVal select _levelIdx > _infLevel) then {_skip = true};
				};
				if (not _skip && -1 == _levelIdx) then {
					_selfUpdateIdx = TzkSelfUpdateIdx find _index;
					if (-1 != _selfUpdateIdx) then {
						if (TzkSelfUpdateVal select _selfUpdateIdx select 0 > _infLevel) then {_skip = true};
					};
				}
			};
			if (not _skip) then {
				_name = _unitDesc select udName;
				_cost = _unitDesc select udCost;
				if (not (nShow == 0 && (count _manning) > 0) && not (nShow == 1 && (count _manning) == 0)) then {
					_spacer = "";
					if (_cost < 100) then {_spacer = _spacer + " "};
					if (_cost < 1000) then {_spacer = _spacer + " "};
					_text = Format["$%1 %2%3", _cost, _spacer, _name];
					_lbi = lbAdd[_idcUnits,_text];
					lbSetValue [_idcUnits, _lbi, _index];
					lbSetPicture [_idcUnits, _lbi, (unitDefs select _index) select udImage];
					if (lastSelectedUnitType == _index) then {lbSetCurSel [_idcUnits, _lbi]};
				};
			};
		};
		_index = _index + 1;
	};
};
_workingFactoryTypes