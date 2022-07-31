// this should use vehicle param

_found = false;
if not _found then {if (-1 != ["M109A6G_xj400", "PLZ05_TZK_xj400", "TOS1_TZK_xj400"] find _typeName) then {
	_found = true;
	_vehicle addEventHandler ["Engine", {
		if (_this select 1) then {
			_vehicle = _this select 0,
			if ("_x == {DeploySwitch_xj400}" count magazines _vehicle > 0) then {_vehicle engineOn false},
			[_vehicle, ["Suspension"]] exec "\TZK_Scripts_4_0_4\Common\EH\Tank_Acc_Sus.sqs"
		}
	}];
	_vehicle engineOn false;
}};
if not _found then {if (-1 != ["Grkpbv_Coc_xj400","PLZ89_TZK_xj400"] find _typeName) then {
	_found = true;
	_vehicle addEventHandler ["Engine", {
		if (_this select 1) then {
			[_this select 0, ["Suspension"]] exec "\TZK_Scripts_4_0_4\Common\EH\Tank_Acc_Sus.sqs"
		}
	}];
	_vehicle engineOn false;
}};