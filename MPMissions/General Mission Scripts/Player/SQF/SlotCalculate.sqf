private ["_unit", "_boolHandGun", "_slotType", "_slots", "_slotsHandGun", "_slotsGeneral", "_magazine", "_magazinesArray", "_index", "_count"];
_unit = _this select 0; _boolHandGun = _this select 1; _exclude = _this select 2;
_slotType = [256, 32] select _boolHandGun;
_slots = call format ["%1", (typeOf _unit) GetVehicleParam "weaponSlots"];
_slots = _slots % 4096; _slotsHandGun = _slots % 256; _slotsGeneral = (_slots - _slotsHandGun) / 256; _slotsHandGun = _slotsHandGun - (_slotsHandGun % 32);
_slots = [_slotsGeneral, _slotsHandGun] select _boolHandGun;

_magazinesArray = magazinesarray _unit; _index = 0; _count = count _magazinesArray;
 
while "_index < _count" do {
	_magazine = _magazinesArray select _index; _ammunition = _magazinesArray select (_index + 1);
	if (_ammunition > 0 && _magazine != _exclude) then {
		_magazineType = call format ["%1", _magazine GetWeaponParam "magazineType"];
		if ([_magazineType >= 256, _magazineType < 256] select _boolHandGun) then {
			_slots = _slots - (_magazineType / _slotType);
		};
	};
	_index = _index + 2;
};
_slots