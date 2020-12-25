comment "Vanilla units of Su25 in 4.0.5 version is badly defined. They should recover to 4.0.0 vanilla units.";
if true Then {
	{_entry = unitDefs select _x, _entry set [udModel, "Su25_Vanilla_xj405"]} forEach [_su25gun, _su25LGB4, _su25LGB8, _su25Rocket, _su25BB, _su25Raduga];
	{_str = "Su25_Vanilla_xj405", unitDefs select _x set [udModel, _str]} forEach [_su25bombs, _su25, _su25AA];
	_entry = unitDefs select _su25Rocket, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Rocket.sqs"];
	_entry = unitDefs select _su25BB, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25BB.sqs"];
	_entry = unitDefs select _su25Raduga, _scripts = _entry select udscripts, _scripts set [count _scripts, "Common\Equip\Su25Raduga.sqs"];
};

comment {  if false Then {call loadFile "Extra\199\UnitTypes_MFCTI116_TZK_Units.sqf"};  };
