// args: mhq pos

_mhqPos = _this;

// clear custom start pos info
onMapSingleClick "";
deleteMarker "StartPosAvailableArea";
closeDialog 0;

// player map click func
onMapSingleClick {[_pos, _units, _alt, _shift] call funcMapClickPlayer};

// received message
player groupchat "Start data received.";

[player, siPlayer, giPlayer, _mhqPos] exec "Player\InitPlayer_Scripts.sqs";

call preprocessFile "\TZK_Patch4_4_0_6\s\Player\Init\AIOrder.sqf";

0 exec "Init\PplRespawnEquip.sqs";

_mhqPos exec "Init\PplFlashStartPos.sqs";

// enter game process
0 exec "Init\PplEnterGame.sqs";