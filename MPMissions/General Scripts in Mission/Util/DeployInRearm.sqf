// Script for vehicle with deployment to deploy in rearming.
// Author: IFtheTZK, 2021/12/30

// this: vehicle
private [{_vehicle}];
_vehicle = _this;
if (!bool_TZK_199_Mode && (
	"M109A6G_Base_xj400" countType [_vehicle] > 0 || 
	"PLZ05_VME_Base_xj400" countType [_vehicle] > 0 || 
	"TOS1_TZK_xj400" countType [_vehicle] > 0
)) then {
	_script = "\TZK_Objects\Scripts\Deploy\" + (typeOf _vehicle call funcStringWithoutVersion) + ".sqs";
	if (local _vehicle) then {
		_vehicle addMagazine "DeploySwitch_xj400", [_vehicle, 1] exec _script;
	} else {
		publicExec format [{unitById %1 addMagazine "DeploySwitch_xj400", [unitById %1, 1] exec "%2"}, networkID _vehicle, _script];
	};
};