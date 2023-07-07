// args: [rectangle info: [x, y, w, h, dir], current index, step length]
// return: pos

// by now we don't distinguish x/y step length
// travel the rectangele along the fold line

private [{_rect}, {_idx}, {_len}];
_rect = _this select 0; _idx = _this select 1; _len = _this select 2;

private [{_sx}, {_sy}, {_w}, {_h}];
_sx = _rect select 0; _sy = _rect select 1;
_w = _rect select 2; _h = _rect select 3;

if (_idx < 0 || _len < 0.1 || _w == 0 || _h == 0) then {
	"Invalid input in TravelRect function!" call fDebugLog;
	[]
} else {
	// this function is designed only for mining by now. In this case we tends to 
	// ask AI mine along long edge.

	private [{_long}, {_short}, {_cols}, {_rows}];
	_long = (if (_w > _h) then {_w} else {_h});
	_short = (if (_w > _h) then {_h} else {_w});

	_cols = 2 * _long / _len; _cols = _cols - _cols % 1 + 1;
	_rows = 2 * _short / _len; _rows = _rows - _rows % 1 + 1;

	_idx = _idx % (_cols * _rows);

	private [{_col}, {_row}, {_coef}, {_a}, {_b}, {_offset}];
	_col = _idx % _cols; _row = (_idx - _col) / _cols;
	_coef = (if (1 == _row % 2) then {-1} else {1});
	_a = (_col - _cols / 2) * _coef * _len;
	_b = (_row - _rows / 2) * _len;

	_offset = (if (_w > _h) then {[_a,_b]} else {[_b,_a]});

	[[_sx, _sy], [_offset, (_rect select 4)] call funcVectorRot2D] call funcVectorAdd
}