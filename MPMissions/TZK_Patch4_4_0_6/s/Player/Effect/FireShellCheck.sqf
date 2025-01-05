private [{_skipTank}, {_bShell}, {_sizeOfShell}];

_skipTank = _this;

_bShell = false; _sizeOfShell = 0;

if not _bShell then {if (-1 != TzkMortarLauncher find _weapon) then {
	_bShell = true; _sizeOfShell = 81;
}};
if not _bShell then {if (-1 != TzkArt122 find _weapon) then {_bShell = true; _sizeOfShell = 122}};
if not _bShell then {if (-1 != TzkArt155 find _weapon) then {_bShell = true; _sizeOfShell = 155}};

if not _skipTank then {
	if not _bShell then {if (-1 != TzkTank105 find _weapon) then {_bShell = true; _sizeOfShell = 105}};
	if not _bShell then {if (-1 != TzkTank122 find _weapon) then {_bShell = true; _sizeOfShell = 122}};
	if not _bShell then {if (-1 != TzkTank130 find _weapon) then {_bShell = true; _sizeOfShell = 130}};
	if not bool_TZK_SEMod_Mode then {if (not _bShell) then {
		if not _bShell then {if (-1 != TzkTank125 find _weapon) then {_bShell = true; _sizeOfShell = 125}};
		if not _bShell then {if (-1 != TzkTank73 find _weapon) then {_bShell = true; _sizeOfShell = 73}};
		if not _bShell then {if (-1 != TzkTank120 find _weapon) then {_bShell = true; _sizeOfShell = 120}};
	}};
};

[_bShell, _sizeOfShell]