// args: none
// use a global array to index script path
// Can't use them before initialization (like in mission.sqm)

TzkScripts = [];

private [{_i}, {_capacity}];
_i = 0; _capacity = 256;
TzkScripts resize _capicity;

_f = {
	if (_i >= _capacity) then {
		_capacity = _capacity * 2;
		TzkScripts resize _capacity;
	};
	TzkScripts set [_i, _this];
	_i = _i + 1;
};

// All exist item's index and their order CAN'T BE CHANGED
"\TZK_Scripts_4_0_4\Player\Action\SelfMedic.sqs" call _f; // 000
"\TZK_Config_4_0_6\Scripts\BREM1\Crane.sqs" call _f; // 001
"\TZK_Config_4_0_6\Scripts\M88\Crane.sqs" call _f; // 002
"Server\BuyUnit\NewOrder.sqs" call _f; // 003
"Server\Init\LeaderAI.sqs" call _f; // 004
"\TZK_Scripts_4_0_4\Server\EquipGroupLeaderAI.sqs" call _f; // 005
"Server\AI_Stop.sqs" call _f; // 006
"Server\AICO\CheckBuyUnit.sqs" call _f; // 007
"\TZK_Patch4_4_0_6\s\Server\AICO\CheckSupport.sqs" call _f; // 008
"Util\LandHeli.sqs" call _f; // 009

"Util\Deploy\M109A6G.sqs" call _f; // 010
"Util\Deploy\PLZ05.sqs" call _f; // 011
"Util\Deploy\TOS1.sqs" call _f; // 012
"\TZK_Scripts_4_0_6\Common\Init\CustomWeaponVehicleInfo.sqf" call _f; // 013
"Player\Dialog\AIGroupOrders.sqs" call _f; // 014
"\TZK_Scripts_4_0_6\Player\Dialog\AiGrpOrder_Init.sqf" call _f; // 015
"Player\Dialog\BuyUnits_Available.sqf" call _f; // 016
"Player\Dialog\AttachVehicle.sqs" call _f; // 017
"Debug\Console.sqs" call _f; // 018
"Player\Dialog\Equipment.sqs" call _f; // 019

"Rts\Dialog\PplGrpOrder.sqs" call _f; // 020
"Player\Dialog\Query.sqs" call _f; // 021
"\TZK_Scripts_4_0_4\Player\Dialog\SetFlightAltitude.sqs" call _f; // 022
"Player\Dialog\ShownGroups.sqs" call _f; // 023
"Player\Dialog\Spectator.sqs" call _f; // 024
"Player\Dialog\TZK_Mission_Setting_1.sqs" call _f; // 025
"Player\Dialog\TZK_Mission_Setting_2.sqs" call _f; // 026
"Player\Dialog\UnitCam.sqs" call _f; // 027
"Rts\Dialog\Waypoints.sqs" call _f; // 028
"\TZK_Patch4_4_0_6\s\Player\Effect\AB.sqs" call _f; // 029

"Player\Effect\T80Drum.sqs" call _f; // 030
"Player\Effect\Fired_Artillery_Impact.sqs" call _f; // 031
"\TZK_Scripts_4_0_4\Player\Effect\Fired_COC_Tracer.sqs" call _f; // 032
"Player\Effect\Fired_FFUR_Cannon.sqs" call _f; // 033
"\TZK_Patch4_4_0_6\s\Common\EH\Fired_TrackShell.sqs" call _f; // 034
"\TZK_Patch4_4_0_6\s\EhInit\RedirectableM109a6g.sqs" call _f; // 035
"\TZK_Patch4_4_0_6\s\EhInit\RedirectablePlz05.sqs" call _f; // 036
"\TZK_Patch4_4_0_6\s\EhInit\RedirectableTos1.sqs" call _f; // 037
"\TZK_Scripts_4_0_6\Server\Event\Add_StructHit.sqs" call _f; // 038
"Common\Event\Add_Killed_Infantry.sqs" call _f; // 039

"\TZK_Config_4_0_6\Scripts\CSLA_UH60A\GetOut_EH.sqs" call _f; // 040
"Common\Event\AutoDestroyBadlyHurtVehicle.sqs" call _f; // 041
"Common\Event\AutoDestroyDisabledVehicle.sqs" call _f; // 042
"Common\Event\VehicleHit.sqs" call _f; // 043
"\TZK_Patch4_4_0_6\s\Server\Event\StructHit.sqs" call _f; // 044
"\TZK_Objects\Scripts\InitEventHandlers\removeAllWeapons.sqs" call _f; // 045
"\TZK_Config_4_0_6\Scripts\texture\AMX10RC.sqs" call _f; // 046
"\TZK_Config_4_0_6\Scripts\texture\BMP1.sqs" call _f; // 047
"\TZK_Config_4_0_6\Scripts\texture\BMP2.sqs" call _f; // 048
"\TZK_Config_4_0_6\Scripts\texture\BMPAmbu.sqs" call _f; // 049

"\TZK_Config_4_0_6\Scripts\BREM1\Init.sqs" call _f; // 050
"\TZK_Objects\Scripts\texture\GUER.sqs" call _f; // 051
"\TZK_Objects\Scripts\texture\Leo2A6.sqs" call _f; // 052
"\TZK_Config_4_0_6\Scripts\texture\M1A1.sqs" call _f; // 053
"\TZK_Config_4_0_6\Scripts\texture\M88.sqs" call _f; // 054
"\TZK_Patch4_4_0_6\s\EhInit\4064TexM109.sqs" call _f; // 055
"\TZK_Patch4_4_0_6\s\EhInit\4064TexPlz05.sqs" call _f; // 056
"\TZK_Objects\Scripts\texture\RSC_Numbers.sqs" call _f; // 057
"\TZK_Objects\Scripts\texture\T80.sqs" call _f; // 058
"Player\Effect\T80Drum.sqs" call _f; // 059

"\TZK_Patch4_4_0_6\s\Common\Event\MHQDestroyed.sqs" call _f; // 060
"\TZK_Scripts_4_0_4\Server\Event_DefenceTowerDestroyed.sqs" call _f; // 061
"\TZK_Patch4_4_0_6\s\Server\Event\StructPrimDestroyed.sqs" call _f; // 062
"\TZK_Scripts_4_0_4\Server\Event_StructSecDestroyed.sqs" call _f; // 063
"\TZK_Patch4_4_0_6\s\Common\Equip\GeneralSoldier.sqs" call _f; // 064
"\TZK_Patch4_4_0_6\s\Common\Equip\GeneralVehicle.sqs" call _f; // 065
"\TZK_Patch4_4_0_6\s\Common\Equip\GeneralTownVeh.sqs" call _f; // 066
"\TZK_Scripts_4_0_4\Common\Equip\CargoCar.sqs" call _f; // 067
"\TZK_Scripts_4_0_4\Common\Equip\CargoCar2.sqs" call _f; // 068
"\TZK_Scripts_4_0_4\Common\Equip\CargoTruck.sqs" call _f; // 069
"\TZK_Patch4_4_0_6\s\Common\Equip\TownVehicles.sqs" call _f; // 070

"\TZK_Patch4_4_0_6\s\Common\EditEquipRearmData.sqs" call _f; // 071
"\TZK_Scripts_4_0_4\Common\AddRearmData.sqs" call _f; // 072
"\TZK_Scripts_4_0_4\Common\EditRearmdata.sqs" call _f; // 073
"Player\Action\AttachDetachVehicle.sqs" call _f; // 074
"Server\BuyUnit\Factory.sqs" call _f; // 075
"\TZK_Scripts_4_0_4\Player\CleanupGround.sqs" call _f; // 076
"Player\DisplayGameInfo.sqs" call _f; // 077
"Network\sEjectAllCargo.sqs" call _f; // 078
"Network\sEjectOneCargo.sqs" call _f; // 079
"Network\sEjectAiCargo.sqs" call _f; // 080

"\TZK_Scripts_4_0_4\Player\Order\MoveWP.sqs" call _f; // 081
"\TZK_Scripts_4_0_4\Player\Order\PatrolPos.sqs" call _f; // 082
"\TZK_Scripts_4_0_4\Player\Order\PatrolWP.sqs" call _f; // 083
"Player\Order\PatrolWPs.sqs" call _f; // 084
"\TZK_Patch4_4_0_6\s\Player\Order\TransportDuty.sqs" call _f; // 085
"\TZK_Scripts_4_0_4\Player\Order\DisableMines.sqs" call _f; // 086
"Player\Order\MinePos.sqs" call _f; // 087
"Player\Order\MineWP.sqs" call _f; // 088
"Player\Order\MineWPtoWP.sqs" call _f; // 089
"Player\Order\SatchelPos.sqs" call _f; // 090
"Player\Order\SatchelWP.sqs" call _f; // 091
"Player\Order\MineFlag.sqs" call _f; // 092
"\TZK_Scripts_4_0_4\Player\Order\HoldTown.sqs" call _f; // 093
"Player\Order\BoardVehicle.sqs" call _f; // 094
"Player\Order\Support OptRearm.sqs" call _f; // 095
"\TZK_Patch4_4_0_6\s\Player\Order\TransportDuty Air.sqs" call _f; // 096
"\TZK_Patch4_4_0_6\s\Player\Order\TransportDuty Ground.sqs" call _f; // 097
"" call _f; // 098
"" call _f; // 099

"Server\Order\TakeTowns.sqs" call _f; // 100
"Server\Order\TakeHoldTowns.sqs" call _f; // 101
"Server\Order\HoldTown.sqs" call _f; // 102
"Server\Order\GuardArea.sqs" call _f; // 103
"Server\Order\GuardLine.sqs" call _f; // 104
"Server\Order\PatrolArea.sqs" call _f; // 105
"Server\Order\PatrolLine.sqs" call _f; // 106
"Server\Order\Advance.sqs" call _f; // 107
"Server\Order\TransportDuty.sqs" call _f; // 108
"Server\Order\MineLine.sqs" call _f; // 109
"Server\Order\DisableMines.sqs" call _f; // 110
"Server\Order\Halt.sqs" call _f; // 111
"" call _f; // 112
"" call _f; // 113
"" call _f; // 114
"" call _f; // 115
"" call _f; // 116
"" call _f; // 117
"" call _f; // 118
"" call _f; // 119

"\TZK_Patch4_4_0_6\s\Player\Effect\EquipCarMG.sqs" call _f; // 120
"\TZK_Patch4_4_0_6\s\Player\Effect\EquipTankMissile.sqs" call _f; // 121

"\TZK_Scripts_4_0_4\Common\SQF\GetUnitMarker.sqf" call _f; // 122
"\TZK_Scripts_4_0_4\Common\KeepTempLeaderAlive.sqs" call _f; // 123

"Net\sLockVehicle.sqs" call _f; // 124

// for LST
"" call _f; // 125
"" call _f; // 126
"" call _f; // 127

"\TZK_Scripts_4_0_4\Player\Marker\HideSpectator.sqf" call _f; // 128
"\TZK_Scripts_4_0_4\Player\AddToStructMatrix.sqs" call _f; // 129

"\TZK_Scripts_4_0_4\Player\Action\SwitchToDriver.sqs" call _f; // 130
"\TZK_Scripts_4_0_4\Player\Action\SwitchToGunner.sqs" call _f; // 131

"Common\ReEquip\SwitchMagPreset.sqs" call _f; // 132
"Player\Marker\MapClickPlayer.sqf" call _f; // 133
"\TZK_Scripts_4_0_6\Player\SQF\StringWithoutVersion.sqf" call _f; // 134
"Net\sUndoBuild.sqs" call _f; // 135
"Player\SetWaypointSmart.sqs" call _f; // 136
"Server\AddWorker.sqs" call _f; // 137
"\TZK_Scripts_4_0_6\Server\CheckWinTowns.sqs" call _f; // 138
"\TZK_Patch4_4_0_6\s\Server\UndoStructure.sqs" call _f; // 139

"\TZK_Patch4_4_0_6\s\InfoSvr\GroupIsAI.sqs" call _f; // 140
"\TZK_Patch4_4_0_6\s\InfoSvr\CmdChange.sqs" call _f; // 141
"\TZK_Patch4_4_0_6\s\InfoSvr\DestructionCompleted.sqs" call _f; // 142
"\TZK_Patch4_4_0_6\s\InfoSvr\MHQRepaired.sqs" call _f; // 143
"\TZK_Patch4_4_0_6\s\InfoSvr\NoMoneyForStructRepair.sqs" call _f; // 144
"\TZK_Patch4_4_0_6\s\InfoSvr\ScoreMoney.sqs" call _f; // 145
"\TZK_Patch4_4_0_6\s\InfoSvr\StructDestroyed.sqs" call _f; // 146
"\TZK_Patch4_4_0_6\s\InfoSvr\StructReady.sqs" call _f; // 147
"\TZK_Patch4_4_0_6\s\InfoSvr\StructRepaired.sqs" call _f; // 148
"\TZK_Patch4_4_0_6\s\InfoSvr\StructUndone.sqs" call _f; // 149
"\TZK_Patch4_4_0_6\s\InfoSvr\TempAACreated.sqs" call _f; // 150
"\TZK_Patch4_4_0_6\s\InfoSvr\TempAADeleted.sqs" call _f; // 151
"\TZK_Patch4_4_0_6\s\InfoSvr\TimeUntilTownWin.sqs" call _f; // 152
"\TZK_Patch4_4_0_6\s\InfoSvr\TownGroupHibernate.sqs" call _f; // 153
"\TZK_Patch4_4_0_6\s\InfoSvr\TownGroupLoss.sqs" call _f; // 154
"\TZK_Patch4_4_0_6\s\InfoSvr\TownGroupSpawn.sqs" call _f; // 155
"\TZK_Patch4_4_0_6\s\InfoSvr\UnitBuilding.sqs" call _f; // 156
"\TZK_Patch4_4_0_6\s\InfoSvr\WorkerStuck.sqs" call _f; // 157
"\TZK_Patch4_4_0_6\s\InfoSvr\GroupFull.sqs" call _f; // 158
"\TZK_Patch4_4_0_6\s\InfoSvr\NoMoneyUnit.sqs" call _f; // 159
"\TZK_Patch4_4_0_6\s\InfoSvr\TimeLimitRemind.sqs" call _f; // 160

"\TZK_Scripts_4_0_6\Player\Marker\SpectatorMarker.sqs" call _f; // 161
"Player\Marker\InitStructureMarker.sqs" call _f; // 162
"" call _f; // 163
"" call _f; // 164
"" call _f; // 165

"Server\Money\Add.sqs" call _f; // 166
"Server\Money\Spend.sqs" call _f; // 167
"Server\Money\Transfer.sqs" call _f; // 168
"" call _f; // 169
"" call _f; // 170

"Network\sAiGrpOrder.sqf" call _f; // 171
"Network\sAiGrpSetting.sqf" call _f; // 172
"\TZK_Patch4_4_0_6\s\Common\Msg\sMHQKilled.sqs" call _f; // 173
"Net\sScore.sqs" call _f; // 174
"Common\Msg\sTransportTurnOn.sqs" call _f; // 175
"Common\Msg\sTransportTurnOff.sqs" call _f; // 176
"Net\sUpgrade.sqs" call _f; // 177
"\TZK_Patch4_4_0_6\s\Player\Msg\sBlockedByClient.sqs" call _f; // 178
"Net\sInfo.sqs" call _f; // 179
"Net\sTownSideChange.sqs" call _f; // 180

"\TZK_Config_4_0_6\Scripts\recoilByTex\grkpbv.sqs" call _f; // 181
"\TZK_Config_4_0_6\Scripts\recoilByTex\m109a6.sqs" call _f; // 182
"\TZK_Config_4_0_6\Scripts\recoilByTex\plz05.sqs" call _f; // 183
"\TZK_Config_4_0_6\Scripts\recoilByTex\plz89.sqs" call _f; // 184

"Network\sBuyWorker.sqs" call _f; // 185
"Network\sRearmVehGeneral.sqs" call _f; // 186
"Network\sVehMagsRemove.sqs" call _f; // 187

"Common\DeleteUnitAfterDelay.sqs" call _f; // 188
"Player\EH\FiredEffect.sqf" call _f; // 189
"\TZK_Patch4_4_0_6\s\Player\Effect\EquipVirtualWeapon.sqs" call _f; // 190

"Player\PlayGameOverSequence.sqs" call _f; // 191
"\TZK_Patch4_4_0_6\s\Player\Init\DialogChnLanguage.sqf" call _f; // 192
"\TZK_Patch4_4_0_6\s\Player\Init\StructureEventHandler.sqs" call _f; // 193

"\TZK_Patch4_4_0_6\s\Player\Loop\VehState.sqs" call _f; // 194

"Player\Radio\Radio_Update_Vehicle.sqs" call _f; // 195
"Player\Radio\Radio_Update_Vehicle_Common.sqf" call _f; // 196
"Player\Radio\Radio_Update_Vehicle_M270.sqs" call _f; // 197
"Player\Radio\Radio_Update_Vehicle_Parachute.sqf" call _f; // 198
"Player\Radio\Graduation.sqs" call _f; // 199
"\TZK_Patch4_4_0_6\s\Radio\RadioList_Spectator_Return.sqs" call _f; // 200
"Player\Rts\SwitchMapMode.sqs" call _f; // 201
"\TZK_Scripts_4_0_4\Player\Radio\RadioList_Struct_ResetUp.sqs" call _f; // 202
"" call _f; // 203
"" call _f; // 204
"" call _f; // 205
"" call _f; // 206
"" call _f; // 207
"" call _f; // 208
"" call _f; // 209

"Server\SQF\BuildStruct.sqf" call _f; // 210
"Server\Destruction.sqs" call _f; // 211
"\TZK_Patch4_4_0_6\s\Server\RepairMHQ.sqs" call _f; // 212
"\TZK_Patch4_4_0_6\s\Server\RepairMCV.sqs" call _f; // 213
"Server\ResetStructureUp.sqs" call _f; // 214

"\TZK_Patch4_4_0_6\s\Server\Init\DefTowerStruct.sqs" call _f; // 215
"Server\Init\PrimaryStruct.sqs" call _f; // 216
"\TZK_Patch4_4_0_6\s\Server\Init\SecondaryStruct.sqs" call _f; // 217

"\TZK_Patch4_4_0_6\s\Server\Start\KnowsAbout.sqs" call _f; // 218
"Server\Loop\KnowsAboutG.sqs" call _f; // 219
"Server\Loop\KnowsAboutR.sqs" call _f; // 220

"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup1.sqs" call _f; // 221
"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup2.sqs" call _f; // 222
"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup3.sqs" call _f; // 223
"\TZK_Patch4_4_0_6\s\Server\Start\TownGroup4.sqs" call _f; // 224
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup1.sqs" call _f; // 225
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup2.sqs" call _f; // 226
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup3.sqs" call _f; // 227
"\TZK_Patch4_4_0_6\s\Server\Loop\TownGroup4.sqs" call _f; // 228

"\TZK_Patch4_4_0_6\s\Common\TriggerGameEnd.sqs" call _f; // 229
"\TZK_Scripts_4_0_6\Server\Dynamic\TriggerGameEnd.sqs" call _f; // 230
"Server\Loop\TownTrigger.sqs" call _f; // 231


// free extra memory
TzkScripts resize _i;