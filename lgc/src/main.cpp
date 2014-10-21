/* a very simple program written to ensure that 
   functions are working correctly for use in the
   game
   © Philip Washy
	 2014
	 thorff1@gmail.com
   */

#include "main.h"

void main( char * args[] )
{
	srand(time(NULL));
	generate_map();
	init_units();
	exit(0);
}

void generate_map()
{
	struct MAPSQUARE * temp;
	bool l = true, m = true;
	for (int i = 0; i < 12; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			temp = new struct MAPSQUARE();
			temp->height = (rand() % 4 + 2);
			temp->isValid = l;
			temp->isRendered = m;

			bmap.map[i][j] = temp;
		}
	}
	return;
}

void init_units()
{
	struct UNIT unit1;
	struct UNIT unit2;

	struct RACE tempr;
	tempr.adept = 0;
	tempr.agility = 0;
	tempr.attack = 50;
	tempr.charisma = 25;
	tempr.charm = 0;
	tempr.creativity = 0;
	tempr.fine = 0;
	tempr.gross = 0;
	tempr.ingenuity = 0;
	tempr.jump = 2;
	tempr.magick = 34;
	tempr.ment_fort = 40;
	tempr.mgk_def = 40;
	tempr.phys_def = 40;
	tempr.phys_fort = 40;
	tempr.speed = 3;
	unit1.race = &tempr;
	unit2.race = &tempr;

	return;
};