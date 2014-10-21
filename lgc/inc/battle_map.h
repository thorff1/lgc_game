#include "unit.h"

struct MAPSQUARE{
  double height;
  //TERRAIN square_terrain;
  bool isValid;
  bool isRendered;
};

struct TERRAIN{

};

enum atm {
	SUN_OUT,
	OVERCAST_OUT,
	RAIN_OUT,
	STORM_OUT,
	FOG_OUT,
	NIGHT_OUT,
	SUN_IN,
	OVERCAST_IN,
	RAIN_IN,
	STORM_IN,
	FOG_IN,
	NIGHT_IN,
	INDOORS };

struct BATTLEMAP{
	struct MAPSQUARE *map[12][12];
	enum atm atmosphere;
	int map_units[20][1][2]; //[unit numbers][unit pointers][x,y] 
	//i.e.:[5][1][2] would indicate a board with 5 units on it
};
