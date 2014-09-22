#include "unit.h"

typedef struct _BATTLEMAP{
  MAPSQUARE *map[12];
  atm atmosphere;
  int map_units[][1][2]; //[unit numbers][unit pointers][x,y] 
                         //i.e.:[5][1][2] would indicate a board with 5 units on it
}BATTLEMAP;

typedef struct _MAPSQUARE{
  int height;
  int location[2];
  TERRAIN square_terrain;
  bool isValid;
  bool isRendered;
}MAPSQUARE;

typedef struct _TERRAIN{

}TERRAIN;

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
