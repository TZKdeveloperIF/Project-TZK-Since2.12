// args: none
// return: new circular buffer object

// initial capacity: 8
private [{_data}];
_data = []; _data resize 8;
[
	_data,
	[0, 0]
]