_plane = _this;

_isTzkPlane = false;
if !(
	"A10_xj400" countType [_plane] == 0 &&
	"Su25_xj400" countType [_plane] == 0 &&
	"A10_Vanilla_xj405" countType [_plane] == 0 &&
	"Su25_Vanilla_xj405" countType [_plane] == 0
) then {
	if !(
		"A10_AAOnly_xj400" countType [_plane] > 0 ||
		"Su25_AAOnly_xj400" countType [_plane] > 0 ||
		"A10_AAOnly_Vanilla_xj405" countType [_plane] > 0 ||
		"Su25_AAOnly_Vanilla_xj405" countType [_plane] > 0
	) then {
		_isTzkPlane = true;
	}
};
_isTzkPlane