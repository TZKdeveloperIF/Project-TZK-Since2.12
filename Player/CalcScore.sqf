// arguments: [si,gi]
// returns: score

private ["_x", "_score", "_index"];

_score = 0;
_index = 0;
{ _score = _score + _x; _index = _index + 1 } foreach ((groupScoreMatrix select (_this select 0)) select (_this select 1));

_score
