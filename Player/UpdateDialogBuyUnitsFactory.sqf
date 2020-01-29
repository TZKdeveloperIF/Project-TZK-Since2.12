// args: [IDC, IDC Label, typeFactory, typeFactoryLast]
// return: factories

private ["_idcFactory", "_idcFactoryLabel", "_typeFactory", "_factories", "_x", "_textPos", "_textQ", "_qLen",
"_index", "_factoryIndex", "_selectedFactoryIndex", "_typeFactoryLast", "_lastSelectedFactory"];

_idcFactory = _this select 0;
_idcFactoryLabel = _this select 1;
_typeFactory = _this select 2;
_typeFactoryLast = _this select 3;


ctrlSetText [_idcFactoryLabel, (structDefs select _typeFactory) select sdName];
_factories = [siPlayer, _typeFactory] call funcGetWorkingStructuresWithinCCRange;
lbClear _idcFactory;
{
	_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
	_textQ="";
	_qLen = _x call funcGetQueueLength;
	if (_qLen > 0) then { _textQ = format["Q %1", _qLen] };
	lbAdd [ _idcFactory, format["%1 %2", _textPos, _textQ] ] 
} foreach _factories;

_index = [_typeFactory, lastSelectedFactory select 0] call funcGetIndex;
_factoryIndex = -1;
if (_index == -1) then {lbSetCurSel [_idcFactory, 0]; _factoryIndex = 0} else
{
	_selectedFactoryIndex = lbCurSel _idcFactory;
	if (_typeFactoryLast == _typeFactory && _selectedFactoryIndex != -1) then 
	{
		(lastSelectedFactory select 1) set [_index, _factories select _selectedFactoryIndex]
	};
	if (_typeFactoryLast == _typeFactory) then {_factoryIndex = _selectedFactoryIndex} else
	{
		_lastSelectedFactory = (lastSelectedFactory select 1) select _index;
			_factoryIndex = [_lastSelectedFactory, _factories] call funcGetIndex;
		if (_factoryIndex != -1) then {lbSetCurSel [_idcFactory, _factoryIndex]} else {lbSetCurSel [_idcFactory, 0]; _factoryIndex = 0};
	};
};
[_factories, _factoryIndex]