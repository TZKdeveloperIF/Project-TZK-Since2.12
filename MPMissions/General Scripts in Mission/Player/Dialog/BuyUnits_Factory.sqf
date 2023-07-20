// args: none
// read variables external
// read-only var: _idcFactory, _typeFactory, _typeFactoryLast
// write-only var: _factoryCache, _factories

_factories resize 0; lbClear _idcFactory;
{
	private [{_type}]; _type = _x;
	_structs = structMatrix select siPlayer select _type; _aTypeOfFac resize 0;

	private [{_aTypeOfFac}]; _aTypeOfFac = _type call _funcAvailableStruct;
	[_factories, _aTypeOfFac] call preprocessFile "Util\ArrayAppend.sqf";

	private ["_textPos", "_textQ", "_qLen"];
	{
		_textPos = (getPos _x) call funcCalcTownDirDistFromPos;
		_textQ = "";
		_qLen = _x call funcGetQueueLength;
		if (_qLen > 0) then {_textQ = format ["Q %1", _qLen]};
		_lbFac = lbAdd [ _idcFactory, format ["%1 %2", _textPos, _textQ] ];
		lbSetPicture [_idcFactory, _lbFac, (structDefs select _type select sdImage) select siPlayer];
	} foreach _aTypeOfFac;
} forEach (_typeFactory call funcBinaryDigit);

private ["_index", "_factoryIndex", "_selectedFactoryIndex", "_lastSelectedFactory"];
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
_factoryCache set [1, _factoryIndex];
// [_factories, _factoryIndex]