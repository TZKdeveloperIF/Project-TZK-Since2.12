// args: string
// return: none

private[ "_text" ];

if (debug) then
{
  _text = format["DBG: %1", _this];
	resistance_Center saveStatus _text;
//	LocalServerObject saveStatus _text;
  _text exec "Common\SendTextMsg.sqs";
};