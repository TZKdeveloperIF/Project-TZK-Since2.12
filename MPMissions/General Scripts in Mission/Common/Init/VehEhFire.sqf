_found = false;
if not _found then {if (_typeName == "2S6_DKM_xj400") then {
	_found = true;
	_vehicle addEventHandler ["Fired", {_this exec "\TZK_Patch4_4_0_6\s\Common\EH\Fired_2S6.sqs"}];
}};
if not _found then {if (_typeName == "M270_M29064_xj400") then {
	_found = true;
	_vehicle addEventHandler ["Fired", {_this exec "Common\EH\Fired_M270.sqs"}];
}};
if not _found then {if (_typeName == "TOS1_TZK_xj400") then {
	_found = true;
	_vehicle addEventHandler ["Fired", {_this exec "Common\EH\Fired_TOS1.sqs"}];
}};

if (_type in typesHowitzer && not bool_TZK_SEMod_Mode) then {
	private [{_found}];
	_found = false;
	if not _found then {if (_typeName == "Grkpbv_Coc_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			if ("Gun120_Grk_xj400" == (_this select 1)) then {
				[_this select 0, _this select 1] exec {\TZK_Patch4_4_0_6\s\EventFire\shootGrkpbv.sqs}
			};
		}];
	}};
	if not _found then {if (_typeName == "PLZ89_TZK_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			if ("Gun122_VME_xj400" == (_this select 1)) then {
				[_this select 0] exec {\TZK_Patch4_4_0_6\s\EventFire\shootPlz89.sqs}
			};
		}];
	}};
	if not _found then {if (_typeName == "M109A6G_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			if ("Gun155_xj400" == (_this select 1) || "Shrapnel_W_xj400" == (_this select 1)) then {
				[_this select 0, TheWorld, {m109a6g}] exec {\TZK_Patch4_4_0_6\s\EventFire\shoot155.sqs}
			};
		}];
	}};
	if not _found then {if (_typeName == "PLZ05_TZK_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			if ("Gun155_xj400" == (_this select 1) || "Shrapnel_E_xj400" == (_this select 1)) then {
				[_this select 0, TheWorld, {plz05}] exec {\TZK_Patch4_4_0_6\s\EventFire\shoot155.sqs}
			};
		}];
	}};
};