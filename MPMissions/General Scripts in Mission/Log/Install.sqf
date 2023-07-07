if isServer then {
	TzkLog = [];
};
if (not isServer && not isNull player) then {
	if ("IF" == name player) then {
		TzkLog = [];
	};
};