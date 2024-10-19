if (_this) then {
	TzkMapAreaCreated = true;
	private [{_deltaX}, {_deltaY}, {_averageX}, {_averageY}];

	private [{_x1}, {_y1}];
	_x1 = TzkMap1x, _y1 = TzkMap1y;

	if (TzkMap1x > TzkMap2x) then {_tmp = TzkMap1x, TzkMap1x = TzkMap2x, TzkMap2x = _tmp};
	if (TzkMap1y > TzkMap2y) then {_tmp = TzkMap1y, TzkMap1y = TzkMap2y, TzkMap2y = _tmp};

	_deltaX = (TzkMap2x - TzkMap1x) / 2;
	_deltaY = (TzkMap2y - TzkMap1y) / 2;
	_averageX = (TzkMap2x + TzkMap1x) / 2;
	_averageY = (TzkMap2y + TzkMap1y) / 2;

	"TzkRtsArea" setMarkerSize [_deltaX, _deltaY];
	"TzkRtsArea" setMarkerPos [_averageX, _averageY];

	private [{_width}, {_height}, {_tmp}];
	_height = 10;
	_tmp = _deltaX; if (_deltaY < _tmp) then {_tmp = _deltaY};
	if (_height > _tmp / 15) then {_height = _tmp / 15};
	if (_height < 5) then {_height = 5};

	_width = sqrt(_deltaX * _deltaX + _deltaY * _deltaY);
	_tmp = 0; if (0 != _deltaX && 0 != _deltaY) then {
		if (_deltaY > _deltaX) then {_tmp = _height * _deltaX / _deltaY} else {_tmp = _height * _deltaY / _deltaX};
	};

	"TzkRtsAreadiagonal" setMarkerSize [_width - _tmp, _height];
	"TzkRtsAreadiagonal" setMarkerPos [_averageX, _averageY];

	"TzkRtsStartPos" setMarkerSize [_height + 2, _height + 2];
	"TzkRtsStartPos" setMarkerPos [_x1, _y1];

	if (0 == (TzkDiag2y - TzkDiag1y) && 0 == (TzkDiag2x - TzkDiag1x)) then {
		TzkDiagDir = 0;
	} else {
		TzkDiagDir = (TzkDiag2y - TzkDiag1y) atan2 (TzkDiag2x - TzkDiag1x);
	};
	TzkDiagDir = 360 - TzkDiagDir;
	"TzkRtsAreadiagonal" setMarkerDir TzkDiagDir;
} else {
	TzkMapAreaCreated = false;

	0 call preprocessFile "Player\Rts\AreaSetDir.sqf";

	_zeroVec = [0, 0];
	"TzkRtsArea" setMarkerSize _zeroVec;
	"TzkRtsArea" setMarkerPos _zeroVec;

	"TzkRtsAreadiagonal" setMarkerSize _zeroVec;
	"TzkRtsAreadiagonal" setMarkerPos _zeroVec;

	"TzkRtsStartPos" setMarkerSize _zeroVec;
	"TzkRtsStartPos" setMarkerPos _zeroVec;
};