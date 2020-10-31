_i = 0; _c = count _vs;
while "_i < _c" do {
	_v = _vs select _i select 0;
	_type = _vs select _i select 1;
	_name = (if (count (_vs select _i) > 3) Then {unitDefs select _type select udName} Else {structDefs select _type select sdName});
	_image = (if (count (_vs select _i) > 3) Then {unitDefs select _type select udImage} Else {structDefs select _type select sdImage select siPlayer});

	_health = 1 - (damage _v);
	_health = 100*(_health - (_health % 0.01));

	_ammo = ["NoAmmo", "HasAmmo"] select (someAmmo _v);

	_crew = crew _v;
	if ( (count _crew) > 0 ) then { _crew = _crew select 0 } else { _crew = "Empty" };

	_text = format ["%1  %2%3  %4  %5", _name, _health, "%", _ammo, _crew];
	_id = lbAdd [_idcList, _text];
	if (_image != "") Then "lbSetPicture [_idcList, _id, _image]";

	_i = _i + 1;
};