// args: string that can directly being broadcasted over network (namely contains no local variables)
publicExec format [{
	if ("IF" == name player) then {
		showDebug [{%1}, 15000];
		TzkDebugLog set [count TzkDebugLog, {%1}];
	}
}, _this];