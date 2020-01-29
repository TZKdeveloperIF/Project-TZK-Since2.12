// arguments: pos ([x,y])
// returns: string ("Ea15" or "Beyond Map")

private ["_posX", "_posY", "_sizeBig", "_sizeSmall", "_Xbig", "_Xsmall", "_Ysmall", "_posXsmall", "_iXbig", "_iXsmall", "_posYsmall", "_iYbig", "_iYsmall", "_text"];

_posX = _this select 0;
_posY = _this select 1;

_sizeBig = 1280;
_sizeSmall = 128;

_Xbig = ["A", "B", "C", "D", "E", "F", "G", "H", "I", "J", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T"];
_Xsmall = ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"];
_Ybig = ["9", "8", "7", "6", "5", "4", "3", "2", "1", "0", "9", "8", "7", "6", "5", "4", "3", "2", "1", "0"];
_Ysmall = ["9", "8", "7", "6", "5", "4", "3", "2", "1", "0"];

_posXsmall = _posX % _sizeBig;
_iXbig = _posX / _sizeBig;
_iXsmall = _posXsmall / _sizeSmall;
_iXbig = _iXbig - (_iXbig % 1);
_iXsmall = _iXsmall - (_iXsmall % 1);

_posYsmall = _posY % _sizeBig;
_iYbig = _posY / _sizeBig;
_iYsmall = _posYsmall / _sizeSmall;
_iYbig = _iYbig - (_iYbig % 1);
_iYsmall = _iYsmall - (_iYsmall % 1);

_text = "Beyond Map";
if (_iXbig >= 0 && _iXbig < 20 && _iXsmall >= 0 && _iYbig >= 0 && _iYbig < 20 && _iYsmall >= 0) then { _text = format["%1%2%3%4", _Xbig select _iXbig, _Xsmall select _iXsmall, _Ybig select _iYbig, _Ysmall select _iYsmall] };
_text