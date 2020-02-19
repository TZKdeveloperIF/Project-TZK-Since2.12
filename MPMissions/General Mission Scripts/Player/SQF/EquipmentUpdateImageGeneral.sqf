private ["_magsInfo", "_index", "_count", "_nextFreeSlot", "_emptyGeneralMag", "_filledExtraSlot", "_typeEq", "_image", "_sizeEq"];

_magsInfo = _this select 0;

{ ctrlSetText [IDC_PIC_GEN_1+_x, ""] } foreach [0,1,2,3,4,5,6,7,8,9, 10];
{ ctrlSetText [IDC_PIC_GEN_2+_x, ""] } foreach [0,1,2,4,5,6,7,8, 3];
{ ctrlSetText [IDC_PIC_GEN_3+_x, ""] } foreach [0,1,4,5,6,7, 2];
{ ctrlSetText [IDC_PIC_GEN_4+_x, ""] } foreach [0,4,5,6, 1];
{ ctrlSetText [IDC_PIC_GEN_5+_x, ""] } foreach [0, 5];
ctrlSetText [IDC_PIC_GEN_6, ""];

_index = 0; _count = count _magsInfo; _nextFreeSlot = 0; _emptyGeneralMag = "\dtaExt\equip\emptymag";
if (_count > 0) then {
	 _filledExtraSlot = true;
	while "_index < _count && _nextFreeSlot < isGeneralSlots" do {
		_typeEq = (_magsInfo select _index) select 0;
		_image = (equipDefs select _typeEq) select edImage;
		_sizeEq = (equipDefs select _typeEq) select edSlots;
		
		if (_sizeEq == 3) then {
			if (_nextFreeSlot < 1) then {_filledExtraSlot = false};
			if (_nextFreeSlot > 1 && _nextFreeSlot < 4) then {
				while "_nextFreeSlot < 4" do {
					ctrlSetText [IDC_PIC_GEN_1+_nextFreeSlot, _emptyGeneralMag]; _nextFreeSlot = _nextFreeSlot + 1
				}
			}; 
			ctrlSetText [IDC_PIC_GEN_3+_nextFreeSlot, _image]; _nextFreeSlot = _nextFreeSlot + _sizeEq
		};
		if (_sizeEq == 5) then {
			if (_nextFreeSlot > 0 && _nextFreeSlot < 5) then {
				while "_nextFreeSlot < 5" do {
					ctrlSetText [IDC_PIC_GEN_1+_nextFreeSlot, _emptyGeneralMag]; _nextFreeSlot = _nextFreeSlot + 1}
				};
			ctrlSetText [IDC_PIC_GEN_5 + _nextFreeSlot, _image]; _nextFreeSlot = _nextFreeSlot + _sizeEq
		};
		
		if (_sizeEq == 1) then {
			if (!_filledExtraSlot) then {
				ctrlSetText [IDC_PIC_GEN_1 + 3, _image]; _filledExtraSlot = true; if (_nextFreeSlot == 3) then { _nextFreeSlot = _nextFreeSlot + _sizeEq};
			} else {
				ctrlSetText [IDC_PIC_GEN_1 + _nextFreeSlot, _image]; _nextFreeSlot = _nextFreeSlot + _sizeEq
			};
		};
		if (_sizeEq == 2) then {
			if (_nextFreeSlot == 3) then {
				ctrlSetText [IDC_PIC_GEN_1+_nextFreeSlot, _emptyGeneralMag]; _nextFreeSlot = 4
			};
			ctrlSetText [IDC_PIC_GEN_2 + _nextFreeSlot, _image]; _nextFreeSlot = _nextFreeSlot + _sizeEq
		};
		if (_sizeEq == 4) then {
			if (_nextFreeSlot > 0 && _nextFreeSlot < 4) then {
				while "_nextFreeSlot < 4" do {
					ctrlSetText [IDC_PIC_GEN_1+_nextFreeSlot, _emptyGeneralMag]; _nextFreeSlot = _nextFreeSlot + 1}
				};
			ctrlSetText [IDC_PIC_GEN_4+_nextFreeSlot, _image]; _nextFreeSlot = _nextFreeSlot + _sizeEq
		};
		if (_sizeEq >= 6) then {
			while "_nextFreeSlot < (10 - _sizeEq)" do {
				ctrlSetText [IDC_PIC_GEN_1+_nextFreeSlot, _emptyGeneralMag]; _nextFreeSlot = _nextFreeSlot + 1
			};
			ctrlSetText [IDC_PIC_GEN_6, _image]; _nextFreeSlot = _nextFreeSlot + _sizeEq
		};
		_index = _index + 1;
	};
};
while "_nextFreeSlot < isGeneralSlots" do { ctrlSetText [IDC_PIC_GEN_1+_nextFreeSlot, _emptyGeneralMag]; _nextFreeSlot = _nextFreeSlot + 1 };