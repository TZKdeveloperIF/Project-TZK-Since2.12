// TZK CTI - Find closest town to a position
// Mirrors OFP: TZK_Scripts_4_0_4/Common/SQF/GetClosestTown.sqf
// Args: [pos, siList, exceptList]
//   siList: sides to consider (e.g. [si0, si1, siRes, siBoth, siCiv])
//   exceptList: town indices to skip
// Returns: [townDesc, distance, indexTown]

params ["_pos", "_siList", ["_exceptList", []]];

private _bestDist = 1e10;
private _bestDesc = [];
private _bestIdx = -1;

{
	private _idx = _forEachIndex;
	if !(_idx in _exceptList) then {
		private _tSide = _x select tdSide;
		if (_tSide in _siList) then {
			private _d = _pos distance2D (getPosATL (_x select tdFlag));
			if (_d < _bestDist) then {
				_bestDist = _d;
				_bestDesc = _x;
				_bestIdx = _idx;
			};
		};
	};
} forEach towns;

[_bestDesc, _bestDist, _bestIdx]
