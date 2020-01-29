// args: [ nEntrySortIndex, bAsc, aEntries ] (e.g.  [0, false, [[3,"Cleanrock"],[5,"Ernst"]] ])
// return: [aEntriesSorted] (e.g. [[5,"Ernst"],[3,"Cleanrock"]])

private ["_indexSort", "_bAsc", "_entries", "_count", "_j", "_k", "_entry"];

_indexSort = _this select 0;
_bAsc = _this select 1;
_entries = _this select 2;

_count = count _entries;

if ( _count > 1 && _indexSort < count (_entries select 0)) then
{
	_j = 0;
	while { _j < (_count - 1) } do 
	{
		_k = _j + 1;
		while { _k < _count } do
		{
			if (_bAsc) then
			{
				if (((_entries select _j) select _indexSort) > ((_entries select _k) select _indexSort)) then
				{
					_entry = _entries select _j;
					_entries set [_j, (_entries select _k)];
					_entries set [_k, _entry];
				}
			}
			else
			{
				if (((_entries select _j) select _indexSort) < ((_entries select _k) select _indexSort)) then
				{
					_entry = _entries select _j;
					_entries set [_j, (_entries select _k)];
					_entries set [_k, _entry];
				}
			};
			_k = _k + 1;
		};
		_j = _j + 1;
	};
};
_entries