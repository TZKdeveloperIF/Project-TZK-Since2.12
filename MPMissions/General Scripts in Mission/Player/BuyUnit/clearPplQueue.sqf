// args: none
// clear global variables: qPplIds and qPplTypes
// check before clear

private [{_i}, {_size}, {_data}, {_unexpected}];

_i = 0; _size = qPplIds select 1; _data = qPplIds select 0;

_unexpected = false;
while {_i < _size && not _unexpected} do {
	if ((_data select _i) != -1) then {_unexpected = true};
	_i = _i + 1;
};

if _unexpected then {if (name player == "IF") then {
	player globalChat "WARNING: qPplIds has valid element on qPplOpStat reduced to 0.";
}} else {
	qPplIds call preprocessFile "Algo\Vector\clear.sqf";
	qPplTypes call preprocessFile "Algo\Vector\clear.sqf";
};