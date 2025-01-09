private [
	"_vs", "_idcList", "_vehicle", "_sel", "_index", "_count", "_v", "_type", 
	"_name", "_image", "_health", "_ammo", "_crew", "_text", "_id"
];

_vs = _this select 0;
_idcList = _this select 1;
_vehicle = _this select 2;

lbClear _idcList;
_sel = -1;
_index = 0; _count = count _vs;
while {_index < _count} do {
	_v = (_vs select _index) select 0; if (_v == _vehicle) then {_sel = _index};
	_type = (_vs select _index) select 1;
	
	_bStruct = 1 != ([_v, "driver"] call funcVehParamHasSeat);
	_name = (if !_bStruct then {unitDefs select _type select udName} else {structDefs select _type select sdName});
	_image = (if !_bStruct then {unitDefs select _type select udImage} else {structDefs select _type select sdImage select siPlayer});

	_health = 1 - (damage _v);
	_health = 100 * (_health - (_health % 0.01));

	_ammo = ["NoAmmo", "HasAmmo"] select (someAmmo _v);

	_crew = crew _v;
	if ( (count _crew) > 0 ) then { _crew = _crew select 0 } else { _crew = "Empty" };

	_text = format["%1  %2%3  %4  %5", _name, _health, "%", _ammo, _crew];
	_id = lbAdd [_idcList, _text];
	if (_image != "") then {lbSetPicture [_idcList, _id, _image]};

	_index = _index + 1;
};

lbSetCurSel [_idcList, _sel];