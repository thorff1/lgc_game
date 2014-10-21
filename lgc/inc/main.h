//includes
#include "battle_map.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <iostream>
#include <time.h>
using namespace std;

//globals
BATTLEMAP bmap;
int * units;



//prototypes
void generate_map(void);// this will be set up to laod map info and models from file
void init_units(void);//eventually i'll set this up to laod units from a file or something