// args: [IDC, lastSelQID]
// return: qPlayer

private ["_idcQueue", "_lastSelQID", "_lbi", "_i", "_c", "_q", "_qid", "_type", "_name", "_qPlayer"];

_idcQueue = _this select 0;
_lastSelQID = _this select 1;

_qPlayer = +qPlayer;
_i = 0;
_c = count _qPlayer;
lbClear _idcQueue;
  
while "_i < _c" do
{
	_q = _qPlayer select _i;
	_qid = _q select 0;
	_type = _q select 1;
	if (_type >= maxUnitTypes) then {_name = format["cs%1", _type - maxUnitTypes]};
	if (_type < maxUnitTypes) then {_name = (unitDefs select _type) select udName};
	_lbi = lbAdd [ _idcQueue, _name ];
	if (_type < maxUnitTypes) then {lbSetPicture [ _idcQueue, _lbi, (unitDefs select _type) select udImage]};
	lbSetValue [_idcQueue, _lbi, _qid];
	if (_lastSelQID == (_q select 0)) then {lbSetCurSel [_idcQueue, _lbi]};
	_i = _i + 1;
};
_qPlayer