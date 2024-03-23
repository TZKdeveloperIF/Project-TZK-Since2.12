// args: none
// this is a process but not a function. script read/write local variables directly

// update queue add time
qPplAddTime = _t;
// allocate another array
qPplTypePool = []; _ref = qPplTypePool;
// append new element
_ref set [0, _type];

// start timer
_ref exec "Player\BuyUnit\SetQueueAddTimer.sqs";