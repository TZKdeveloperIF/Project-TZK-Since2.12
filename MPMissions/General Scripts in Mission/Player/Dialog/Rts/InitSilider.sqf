_idcSliderAzimut = IDC + 512 + 0;
_idcValueAzimut = IDC + 512 + 1;

if _this then { // show
	_AzimutCache = format ["%1", TzkMapSelectDir];
	sliderSetRange [_idcSliderAzimut, 0, 180]; sliderSetPosition [_idcSliderAzimut, TzkMapSelectDir];
	ctrlSetText [_idcValueAzimut, format ["%1", _AzimutCache]];
} else { // hide
	{ctrlShow [_x, false]} forEach [_idcSliderAzimut, _idcValueAzimut];
};