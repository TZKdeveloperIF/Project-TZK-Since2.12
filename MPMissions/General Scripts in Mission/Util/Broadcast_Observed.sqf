_vehOld = _this select 0;
_vehNew = _this select 1;

if (!bool_TZK_199_Mode) then {
	_script = "Util\ObservedModify.sqs";
	_str = format [{[UnitById %1, UnitById %2] exec "%3"}, NetworkID _vehOld, NetworkID _vehNew, _script];
	publicExec _str;
	[_vehOld, _vehNew] exec _script;
} else {
	pvObservedObjOld = _vehOld; pvObservedObjNew = _vehNew;
	publicVariable "pvObservedObjOld"; publicVariable "pvObservedObjNew";
};
