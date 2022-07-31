class GameOverDialog: Menu {
	idd = -1;
	movingEnable = true;
	controlsBackground[] = {};
	objects[] = { };
	controls[] = {Leaderboard, Stats};

	class Leaderboard: Button {
		x = 0.0;
		y = 0.0;
		w = 0.2;
		text = "Leaderboard";
		action = "btnLeaderboard = true";
	};

	class Stats: Button {
		x = 0.8;
		y = 0.0;
		w = 0.2;
		text = "Statistics";
		action = "btnShowStats = true";
	};
};