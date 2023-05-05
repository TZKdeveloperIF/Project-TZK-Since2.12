private ["_vx", "_vy", "_yS", "_yE", "_retType"];
private ["_c", "_g", "_h", "_t", "_x", "_y"]; 
private ["_vx0", "_vy0", "_vx00", "_vy00",  "_K1", "_L1", "_K2", "_L2", "_K3", "_L3", "_K4", "_L4"];

_vx = _this select 0; _vy = _this select 1; _yS = _this select 2; _yE = _this select 3; _retType = (if(count _this > 4) then "_this select 4" else "0");

_x = 0;	_y = _yS;
_c = -0.0005; _g = 9.80665;
_h = 0.05;

while "_y > _yE || _vy > 0" do {
	_vx00 = _vx0; _vy00 = _vy0;
	_vx0 = _vx;_vy0 = _vy;
	
	_K1 = _c*_vx*sqrt(_vx^2+_vy^2); _L1 = _c*_vy*sqrt(_vx^2+_vy^2)-_g;
	_K2 = _c*(_vx+_h/2*_K1)*sqrt((_vx+_h/2*_K1)^2+(_vy+_h/2*_L1)^2); _L2 = _c*(_vy+_h/2*_L1)*sqrt((_vx+_h/2*_K1)^2+(_vy+_h/2*_L1)^2)-_g;
	_K3 = _c*(_vx+_h/2*_K2)*sqrt((_vx+_h/2*_K2)^2+(_vy+_h/2*_L2)^2); _L3 = _c*(_vy+_h/2*_L2)*sqrt((_vx+_h/2*_K2)^2+(_vy+_h/2*_L2)^2)-_g;
	_K4 = _c*(_vx+_h/2*_K3)*sqrt((_vx+_h/2*_K3)^2+(_vy+_h/2*_L3)^2); _L4 = _c*(_vy+_h/2*_L3)*sqrt((_vx+_h/2*_K3)^2+(_vy+_h/2*_L3)^2)-_g;

	_vx = _vx+_h/6*(_K1+2*_K2+2*_K3+_K4);
	_vy = _vy+_h/6*(_L1+2*_L2+2*_L3+_L4);
	_x=_x+_h/2*(_vx0+_vx);
	_y=_y+_h/2*(_vy0+_vy);
};
_x = _x - _h/2*(_vx0+_vx); _y = _y - _h/2*(_vy0+_vy); _vx = _vx0; _vy = _vy0; _vx0 = _vx00; _vy0 = _vy00;
_h = _h / 10;
while "_y > _yE || _vy > 0" do {
	_vx0 = _vx;_vy0 = _vy;
	
	_K1 = _c*_vx*sqrt(_vx^2+_vy^2); _L1 = _c*_vy*sqrt(_vx^2+_vy^2)-_g;
	_K2 = _c*(_vx+_h/2*_K1)*sqrt((_vx+_h/2*_K1)^2+(_vy+_h/2*_L1)^2); _L2 = _c*(_vy+_h/2*_L1)*sqrt((_vx+_h/2*_K1)^2+(_vy+_h/2*_L1)^2)-_g;
	_K3 = _c*(_vx+_h/2*_K2)*sqrt((_vx+_h/2*_K2)^2+(_vy+_h/2*_L2)^2); _L3 = _c*(_vy+_h/2*_L2)*sqrt((_vx+_h/2*_K2)^2+(_vy+_h/2*_L2)^2)-_g;
	_K4 = _c*(_vx+_h/2*_K3)*sqrt((_vx+_h/2*_K3)^2+(_vy+_h/2*_L3)^2); _L4 = _c*(_vy+_h/2*_L3)*sqrt((_vx+_h/2*_K3)^2+(_vy+_h/2*_L3)^2)-_g;

	_vx = _vx+_h/6*(_K1+2*_K2+2*_K3+_K4);
	_vy = _vy+_h/6*(_L1+2*_L2+2*_L3+_L4);
	_x=_x+_h/2*(_vx0+_vx);
	_y=_y+_h/2*(_vy0+_vy);
};
_x - _h/2*(_vx0+_vx) / 2