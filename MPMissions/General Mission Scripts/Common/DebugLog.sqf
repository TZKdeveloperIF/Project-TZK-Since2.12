// args: string
// return: none

private[ "_text" ];

if (debug) then
{
  _text = format["DBG: %1", _this];
  LocalServerObject saveStatus _text;
  _text exec "Common\SendTextMsg.sqs";
};