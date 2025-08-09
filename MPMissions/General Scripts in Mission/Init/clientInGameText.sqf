// args: none

// this script will generate an array that contains in-game text
// It works like stringtable, but use in-game scripts to initialize it
// Few languages requires special encoding. Chinese uses GB2312. Use 
// different script files with their own encoding to init the content

if (not isNull player) then {
	TzkInGameText = [];

	private [{_bMatch}];
	_bMatch = false;

	if not _bMatch then {_bMatch = call preprocessFile "Init\clientInGameChn.sqf"};
	if not _bMatch then {_bMatch = call preprocessFile "Init\clientInGameEng.sqf"};
};