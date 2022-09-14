? not alive (mhq select siPlayer): hint "MHQ destroyed.", exit

if not isServer then {
	publicExec format ["%1 call preprocessFile {Server\Msg\hWallMhq.sqf}", siPlayer];
} else {
	siPlayer call preprocessFile {Server\Msg\hWallMhq.sqf};
};