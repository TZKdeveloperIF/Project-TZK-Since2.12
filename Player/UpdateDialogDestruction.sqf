// args: [_idcList, _idcAction4Label]
// return: [_structsDisp, _MCVs]

private ["_idcList", "_idcAction4Label", 
"_MCVs", "_index", "_count", "_textPos", "_structsDisp", 
"_x", "_type", "_name", "_image", "_structs", "_CommandCenters", "_workers", "_engineers", 
"_struct", "_text", "_id" ];

_idcList = _this select 0;
_idcAction4Label = _this select 1;
ctrlShow [_idcAction4Label, true]; ctrlSetText [ _idcAction4Label, format ["Workers %1/%2", [pvWorkers0, pvWorkers1] select siPlayer, maxWorkers select siPlayer] ];

_MCVs = MCV select siPlayer;

_index = 0;
_count = count (structsDestroy + structsDefence);
_structsDisp = [];
_MCVs = MCV select siPlayer;
if ((count _MCVs) > 0) then
{
	{
		if (! isNull _x) then
		{
			_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
			_structsDisp = _structsDisp + [[_x, [utMCVW, utMCVE] select siPlayer, "MCV", ["im113_ambu", "ibmp_abu"] select siPlayer, _textPos]];
		};
	} forEach _MCVs;
};
while "_index < _count" do
{
	_type = (structsDestroy + structsDefence) select _index;
	_name = (structDefs select _type) select sdName;
	_image = ( (structDefs select _type) select sdImage ) select siPlayer;
	_structs = [siPlayer, _type] call funcGetWorkingStructuresWithinCCRange;
	{ _textPos = (getPos _x) call funcCalcTownDirDistFromPos; _structsDisp = _structsDisp + [[_x, _type, _name, _image, _textPos]] } forEach _structs;
	_index = _index + 1;
};

_CommandCenters = (structMatrix select siPlayer) select stComm;
{ if !(alive _x) then {_CommandCenters = _CommandCenters - [_x]} } forEach _CommandCenters;
_workers = [];
{ _workers = _workers + ([getPos _x, distMaxCC, [[utWorkerW], [utWorkerE]] select siPlayer, [], siPlayer] call funcGetNearbySoldiers) } forEach _CommandCenters;
_engineers = [];
{ if !( (_x select 0) in _engineers ) then { _engineers set [count _engineers, _x select 0] } } forEach _workers;
{
	_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
	_structsDisp set [ count _structsDisp, [_x, [utWorkerW, utWorkerE] select siPlayer, "Worker", "isaa", _textPos] ];
} forEach _engineers;

lbClear _idcList;
_textPos = ""; _text = "";
_index = 0;
_count = count _structsDisp;
while "_index < _count" do
{
  _struct = (_structsDisp select _index) select 0;
  _type = (_structsDisp select _index) select 1;
  _name = (_structsDisp select _index) select 2;
  _image = (_structsDisp select _index) select 3;
  _textPos = (_structsDisp select _index) select 4;
  
  _text = format["%1 - %2", _name, _textPos];
  _id = lbAdd [_idcList, _text];
  if (_image != "") then {lbSetPicture [_idcList, _id, _image]};
  
  _index = _index + 1;
};
if !(lbCurSel _idcList < _count) then {lbSetCurSel [_idcList, _count - 1]};

[_structsDisp, _MCVs]