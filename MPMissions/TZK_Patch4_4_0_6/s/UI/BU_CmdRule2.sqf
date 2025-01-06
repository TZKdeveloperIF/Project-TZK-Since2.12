comment {args: [type, factory]};
comment {return: allowed};

private [{_unitType}, {_factory}, {_factoryType}];
_unitType = _this select 0;
_factory = _this select 1;
_factoryType = -1;

private [{_ret}];
_ret = true;

comment {Buy Transport Heli from LF};
if (_ret) then {if (_unitType in TransportirNOHeliW || _unitType in TransportirNOHeliE) then {
	if (-1 == _factoryType) then {_factoryType = _factory call funcGetStructTypeFromObject};
	if (_factoryType == stLight) then {
		if not (format ["%1 %2 %3 %4 LF"
			, localize {TZK_LANG_BUY}
			, localize {TZK_LANG_TRANSPORT}
			, localize {TZK_LANG_SHORT_HELICOPTER}
			, localize {TZK_LANG_FROM}
		] call preprocessFile "RuleCmd\Check.sqf") then {
			hint "Buy Transport Heli from LF is banned by CMD rule. Ask CMD(s) to decide the rule again (left colume in Options dialog).";
			_ret = false;
		};
	};
}};

_ret