typedef struct _UNIT{
  HP hitpoints;
  PROFESSION primary;
  PROFESSION secondary;
  PROFESSION auxillary;
  PROFESSION *profession_list[];
  STATBAR *bView_bars[];
  STATS unit_stats;
  ITEM *inventory[];
}UNIT;

typedef struct _HP{

}HP;

typedef struct _PROFESSION{

}PROFESSION;

typedef struct _STATBAR{

}STATBAR;

typedef struct _STATS{

}STATS;

typedef struct _ITEM{

}ITEM;
