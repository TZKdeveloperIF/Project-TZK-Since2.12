{
	_si = _x select 2; _gi = _x select 3;
	_group = groupMatrix select _si select _gi;
	if !(_group in (groupAiMatrix select _si)) Then {
		_mass = _x select 1; if (name leader _group == "IF" && pvVoteAdmin) Then {_mass = VoteMassAdmin};
		_mass_Total = _mass_Total + _mass;
		if (_x select 0 == _item_Value) Then {_mass_Vote = _mass_Vote + _mass};
	};
} forEach _entry;