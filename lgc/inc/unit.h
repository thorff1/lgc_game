struct HP{
	int current;
	int max;
};

struct STATBAR{
	int current;
	int maximum;
};

struct STATS{
	int jump;
	int move;
	int speed;
	int attack;
	int magick;
	int charisma;
	int phys_def;
	int mgk_def;
	int ment_fort;
	int phys_fort;
	int gross;
	int fine;
	int creativity;
	int ingenuity;
	int charm;
	int agility;
	int adept;
};

struct RACE{
	int jump;
	int speed;
	int attack;
	int magick;
	int charisma;
	int phys_def;
	int mgk_def;
	int ment_fort;
	int phys_fort;
	int gross;
	int fine;
	int creativity;
	int ingenuity;
	int charm;
	int agility;
	int adept;
};

enum METER_TYPE{SKILL, MANA, GENIUS};

struct PROFESSION{
	int jump;
	int speed;
	enum METER_TYPE *stat;
	int attack;
	int magick;
	int charisma;
	int phys_def;
	int mgk_def;
	int ment_fort;
	int phys_fort;
	int gross;
	int fine;
	int creativity;
	int ingenuity;
	int charm;
	int agility;
	int adept;
};

struct UNIT{
	struct HP *hitpoints;
	struct PROFESSION *primary;
	struct PROFESSION *secondary;
	struct PROFESSION *auxillary;
	struct STATBAR *prime_bar;
	struct STATBAR *second_bar;
	struct STATS *unit_stats;
	struct RACE *race;
};