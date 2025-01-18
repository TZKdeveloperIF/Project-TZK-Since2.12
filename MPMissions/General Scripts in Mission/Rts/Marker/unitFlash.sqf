// args: [marker: string, unit, selected units: array, origin color: string]
private [
	{_m}, {_u}, {_top}, {_color},
	{_bHighlight}
];
_m = _this select 0; _u = _this select 1; _top = _this select 2; _color = _this select 3;

_bHighlight = false;
if not TzkMapRtsFlashingDisabled then {if (_u in _top) then {if TzkMapSelectedHighlight then {
	_bHighlight = true;
}}};

if _bHighlight then {
	_m setMarkerColor "ColorRedAlpha";
} else {
	_m setMarkerColor _color;
};