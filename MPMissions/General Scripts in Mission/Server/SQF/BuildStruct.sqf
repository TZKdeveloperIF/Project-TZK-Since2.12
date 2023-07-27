private [
  "_type", "_si", "_gi", "_pos", "_dir", "_objects", "_desc", "_parts", "_i", "_c",
  "_part", "_posPartRel", "_posPartX", "_posPartY", "_posPart", "_dirPart", "_obj",
  "_group"
];

_type = _this select 0;
_si = _this select 1;
_gi = _this select 2;
_pos = _this select 3;
_dir = _this select 4;
_free = (if (count _this <= 5) then {false} else {_this select 5});

_objects = []; _desc = structDefs select _type; _pos set [2, 0]; _parts = _desc select ([sdObjects0, sdObjects1] select (_si == si1));

_i = 0;
_c = count _parts;
while "_i<_c" do {
	_part = _parts select _i;
	_posPartRel = _part select 2;
	if (count _posPartRel == 0) then { _posPartRel = [0,0,0] };
	_posPartX = (_pos select 0) + (_posPartRel select 0)*(cos _dir) + (_posPartRel select 1)*(sin _dir);
	_posPartY = (_pos select 1) + (_posPartRel select 1)*(cos _dir) - (_posPartRel select 0)*(sin _dir);
	_posPart = [ _posPartX, _posPartY, (_pos select 2) + (_posPartRel select 2) ];
	_dirPart = (_dir + (_part select 1)) % 360;
	
	_obj = (_part select 0) createVehicle _posPart;
	_obj setDir _dirPart;
	_obj setPos _posPart;
	
	if (isNull gunner _obj) then { [_obj] exec localize {TZK_REARMDATA_ADD} };
	_objects set [count _objects, _obj];

	_i=_i+1;
};
[_objects, _type] exec localize {TZK_SERVER_FUNC_RESET_UP};
[_si, _type, _objects select 0] exec "\TZK_Scripts_4_0_4\Server\AddToStructMatrix.sqs";
[_objects, _type] exec "\TZK_Scripts_4_0_4\Server\StructuresServerAdd.sqs";
[_objects select 0] exec "\TZK_Scripts_4_0_4\Server\primStructsPlacedAdd.sqs";
{ [_type, _si, _objects] exec _x } foreach (_desc select sdScriptsServer);
[groupMatrix select _si select _gi, _type, _objects] exec "\TZK_Scripts_4_0_4\Server\InsertIntoUndoList.sqs";
{ _group = _x; { _group reveal _x } foreach _objects } foreach (groupAiMatrix select _si);
if not _free then {[_si, _gi, _desc select sdCost] exec localize {TZK_MONEY_SERVER_SPEND}};
if (_type in structsDestroy) then {(_objects select 0) exec "\TZK_Scripts_4_0_4\Server\StructDestoryAdd.sqs"};
_objects