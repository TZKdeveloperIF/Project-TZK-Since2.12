// args: button basic IDC

ctrlSetText [_this + 0, "Select AI groups"];
ctrlShow [_this + 0, TzkRtsSelectEnum != 0 && count (TzkSelUnitsCube select 0 select 0) > 0];

ctrlSetText [_this + 1, "Select workers"];
ctrlShow [_this + 1, TzkRtsSelectEnum != 1 && count (TzkSelUnitsCube select 1 select 0) > 0];

ctrlSetText [_this + 2, "Select base units"];
ctrlShow [_this + 2, TzkRtsSelectEnum != 2 && count (TzkSelUnitsCube select 2 select 0) > 0];

// hide unused button
ctrlShow [_this + 3, false];