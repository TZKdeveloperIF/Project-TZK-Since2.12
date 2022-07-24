_found = false;
if (not _found && _typeName == "2S6_DKM_xj400") then {
	_found = true;
	_vehicle addEventHandler ["Fired", {_this exec "\TZK_Scripts_4_0_6\Common\EH\Fired_2S6.sqs"}];
};
if (not _found && _typeName == "M270_M29064_xj400") then {
	_found = true;
	_vehicle addEventHandler ["Fired", {_this exec "Common\EH\Fired_M270.sqs"}];
	[
		{
			mutex_TZK_MLRS = true;
			_vehicle = _this select 1 select 0;
			_i = 0; _c = count TZK_MLRS_Veh; _found = false; while {_i < _c && !_found} do {
				if (not alive (TZK_MLRS_Veh select _i select 0)) then {_found = true} else {_i = _i + 1};
			};
			TZK_MLRS_Veh set [_i, [_vehicle, 12]];
			["mutex_TZK_MLRS = false", 1] exec "\TZK_Scripts_4_0_5\Common\~@\DelayCode.sqs"
		}, 
		[_vehicle], 
		"!mutex_TZK_MLRS"
	] exec "\TZK_Scripts_4_0_5\Common\~@\mutexCommand.sqs";
};
if (not _found && _typeName == "TOS1_TZK_xj400") then {
	_found = true;
	_vehicle addEventHandler ["Fired", {_this exec "Common\EH\Fired_TOS1.sqs"}], 
	[
		{
			mutex_TZK_MLRS = true;
			_vehicle = _this select 1 select 0;
			_i = 0; _c = count TZK_MLRS_Veh; _found = false; while {_i < _c && !_found} do {
				if (not alive (TZK_MLRS_Veh select _i select 0)) then {_found = true} else {_i = _i + 1};
			};
			TZK_MLRS_Veh set [_i, [_vehicle, 30]];
			["mutex_TZK_MLRS = false", 1] exec "\TZK_Scripts_4_0_5\Common\~@\DelayCode.sqs"
		},
		[_vehicle],
		"!mutex_TZK_MLRS"
	] exec "\TZK_Scripts_4_0_5\Common\~@\mutexCommand.sqs";
};

if (_type in typesHowitzer && not bool_TZK_SEMod_Mode) then {
	private [{_found}];
	_found = false;
	if (not _found && _typeName == "Grkpbv_Coc_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			[_this select 0, _this select 1] exec {\TZK_Config_4_0_6\Scripts\recoilByTex\shootGrkpbv.sqs}
		}];
	};
	if (not _found && _typeName == "PLZ89_TZK_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			[_this select 0] exec {\TZK_Config_4_0_6\Scripts\recoilByTex\shootPlz89.sqs}
		}];
	};
	if (not _found && _typeName == "M109A6G_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			[_this select 0, TheWorld, {m109a6g}] exec {\TZK_Config_4_0_6\Scripts\recoilByTex\shoot155.sqs}
		}];
	};
	if (not _found && _typeName == "PLZ05_TZK_xj400") then {
		_found = true;
		_vehicle addEventHandler ["Fired", {
			[_this select 0, TheWorld, {plz05}] exec {\TZK_Config_4_0_6\Scripts\recoilByTex\shoot155.sqs}
		}];
	};
};