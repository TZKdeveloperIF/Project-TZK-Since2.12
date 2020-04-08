// args: [IDC, IDC Label, typeFactory, typeFactoryLast]
// return: factories

private ["_idcFactory", "_idcFactoryLabel", "_typeFactory", "_factoryTypes", "_factories", "_aTypeOfFac", "_factoryTypeIndex", "_x", "_textPos", "_textQ", "_qLen",
"_index", "_factoryIndex", "_selectedFactoryIndex", "_typeFactoryLast", "_lastSelectedFactory"];

_idcFactory = _this select 0;
_idcFactoryLabel = _this select 1;
_typeFactory = _this select 2;
_typeFactoryLast = _this select 3;

// ctrlSetText [_idcFactoryLabel, (structDefs select _typeFactory) select sdName];
_factoryTypes = _typeFactory call funcBinaryDigit; _factories = [];
lbClear _idcFactory;
{
	_aTypeOfFac = [siPlayer, _x] call funcGetWorkingStructuresWithinCCRange; _factories = _factories + _aTypeOfFac;
	_factoryTypeIndex = _x;
	{
		_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
		_textQ="";
		_qLen = _x call funcGetQueueLength;
		if (_qLen > 0) then { _textQ = format["Q %1", _qLen] };
		_lbFac = lbAdd [ _idcFactory, format["%1 %2", _textPos, _textQ] ];
		lbSetPicture [_idcFactory, _lbFac, ((structDefs select _factoryTypeIndex) select sdImage) select siPlayer];
	} foreach _aTypeOfFac;
} forEach _factoryTypes;

_index = ( lastSelectedFactory select 0 ) find ( _typeFactory ); _factoryIndex = -1;
if (_index == -1) then {
	lbSetCurSel [_idcFactory, 0]; _factoryIndex = 0; 
	(lastSelectedFactory select 0) set [count (lastSelectedFactory select 0), _typeFactory];
	(lastSelectedFactory select 1) set [count (lastSelectedFactory select 1), objNull];
} else {
	_selectedFactoryIndex = lbCurSel _idcFactory;
	if (_typeFactoryLast == _typeFactory && _selectedFactoryIndex != -1) then 
	{
		(lastSelectedFactory select 1) set [_index, _factories select _selectedFactoryIndex]
	};
	if (_typeFactoryLast == _typeFactory) then {_factoryIndex = _selectedFactoryIndex} else
	{
		_lastSelectedFactory = (lastSelectedFactory select 1) select _index;
			_factoryIndex = ( _factories ) find ( _lastSelectedFactory );
		if (_factoryIndex != -1) then {lbSetCurSel [_idcFactory, _factoryIndex]} else {lbSetCurSel [_idcFactory, 0]; _factoryIndex = 0};
	};
};
[_factories, _factoryIndex]