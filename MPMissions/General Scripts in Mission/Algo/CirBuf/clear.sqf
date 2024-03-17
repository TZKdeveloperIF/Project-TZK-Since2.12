// args: circular buffer
// return: none

// capacity after clear should keep same as creation
(_this call preprocessFile "Algo\CirBuf\data.sqf") resize 8;

[_this, -(_this call preprocessFile "Algo\CirBuf\begin.sqf")] call preprocessFile "Algo\CirBuf\changeBegin.sqf";
[_this, -(_this call preprocessFile "Algo\CirBuf\size.sqf")] call preprocessFile "Algo\CirBuf\changeSize.sqf";