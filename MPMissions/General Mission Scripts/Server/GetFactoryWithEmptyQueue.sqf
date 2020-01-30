// args: [si, structType] (e.g. [si0, stBarracks])
// return: factory

private ["_res", "_queues", "_type", "_index", "_count", "_queue"];

_res = objNull;
_queues = factoryQueues select (_this select 0);
_type = _this select 1;

_index = 0;
_count = count _queues;
while "_index < _count && isNull _res" do
{
	_queue = _queues select _index;

	if (  ((_queue select 1) == _type)
        && alive (_queue select 0) ) then
	{
	  if (  (([getPos (_queue select 0), _this select 0, stComm] call funcGetClosestStructure) select 1) < distMaxCC
	        && (count (_queue select 2)) == 0 ) then
    {
  		_res = _queue select 0;
    };
	};
	_index = _index + 1;
};

_res