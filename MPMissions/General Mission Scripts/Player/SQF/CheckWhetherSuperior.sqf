// args: gis
// return: player is superior or not

private ["_Superior", "_gis", "_groupNames", "_x"];

_gis = _this;

_groupNames = groupNameMatrix select siPlayer;
_Superior = false;

{
	if ( (["Commander"] + callsigns) select (((aiSetting select siPlayer) select _x) select aisSuperior) == _groupNames select giPlayer ) then { _Superior = true };
} forEach _gis;

_Superior