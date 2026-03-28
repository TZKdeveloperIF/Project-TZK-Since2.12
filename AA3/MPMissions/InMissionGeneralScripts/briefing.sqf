// TZK CTI Briefing - called from initPlayerLocal.sqf
// Mirrors OFP briefing.html content in A3 diary format

player createDiaryRecord ["Diary", ["Victory Conditions",
	"Complete one of the following to win:<br/><br/>" +
	"1. Destroy the enemy MHQ and all critical factories (Barracks, Light/Heavy/Air Factory).<br/>" +
	"2. Capture ALL towns and hold them for approximately 2 minutes.<br/>" +
	"3. Enemy commander surrenders.<br/><br/>" +
	"Time limit (if set) results in a draw."
]];

player createDiaryRecord ["Diary", ["Commander",
	"The Commander builds structures, buys units, and issues RTS-style orders on the map.<br/><br/>" +
	"Open the Options menu (scroll action) to access:<br/>" +
	"- Build structures<br/>" +
	"- Buy units<br/>" +
	"- Set income distribution<br/>" +
	"- Transfer funds<br/>" +
	"- Transfer command<br/>" +
	"- Upgrade technologies<br/>" +
	"- Surrender"
]];

player createDiaryRecord ["Diary", ["Economy",
	"Each controlled town generates income every 60 seconds.<br/>" +
	"Income is split between Commander, AI groups, and Players based on ratio settings.<br/>" +
	"Town value determines income amount. Larger towns = more income."
]];
