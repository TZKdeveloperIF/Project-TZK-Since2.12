// TZK CTI - Town Side Change (Server → all clients)
// Mirrors OFP: Net/sTownSideChange.sqs + TZK_Patch4_4_0_6/s/Net/hTownSideChange.sqs
// Args: [indexTown, siNew, siLast]
// Updates towns array, flag texture, map marker, and checks town victory.

params ["_indexTown", "_siNew", "_siLast"];

private _flag = towns select _indexTown select tdFlag;
private _name = towns select _indexTown select tdName;

_flag setFlagTexture (flags select _siNew);
towns select _indexTown set [tdSide, _siNew];

// Update map marker
private _markerName = format ["TZK_town_%1", _indexTown];
if (getMarkerPos _markerName isEqualTo [0,0,0]) then {
	private _mkr = createMarker [_markerName, getPosATL _flag];
	_mkr setMarkerType "mil_flag";
	_mkr setMarkerText _name;
};

private _colors = ["ColorWEST", "ColorEAST", "ColorGUER", "ColorCIV", "ColorCIV"];
_markerName setMarkerColor (_colors select (_siNew min 4));

// Broadcast town data
publicVariable "towns";

// Notify
private _sideNames = ["WEST", "EAST", "Resistance", "Both", "Civilian"];
private _msg = format ["%1 is now controlled by %2", _name, _sideNames select _siNew];
diag_log format ["TZK CTI: %1", _msg];

[_msg] remoteExec ["systemChat", 0];

// Check town victory for player sides
if (_siNew == si0 || _siNew == si1) then {
	[_siNew] spawn TZK_fnc_checkWinTowns;
};
