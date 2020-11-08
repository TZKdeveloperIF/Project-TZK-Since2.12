private ["_i", "_ci", "_gi", "_cg", "_item", "_si"];
_i = 0; _ci = count Vote_Result;
while "_i < _ci" do {
	_item = Vote_Result select _i;
	{
		_si = _x;
		_groups = groupMatrix select _si; _groupsAI = groupAiMatrix select _si;
		_gi = 0; _cg = count _groups;
		while "_gi < _cg" do {
			_group = groupMatrix select _si select _gi;
			if !(_group in _groupsAI) Then {
				_mass = 1; if (_group in groupCommander) Then {_mass = 100}; if (name leader _group == "IF" && pvVoteAdmin) Then {_mass = VoteMassAdmin};
				_item set [count _item, [Vote_Matrix select _i select 2, _mass, _si, _gi]];
			};
			_gi = _gi + 1
		};
	} forEach [si0, si1];
	_i = _i + 1
};