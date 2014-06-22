// cluster.h headers

#ifndef __CLUSTER_H__
#define __CLUSTER_H__

#include <stdlib.h>

#define getSRand()	((float)rand() / (float)RAND_MAX)
#define getRand(x)	(int)((x) * getSRand())

#define MAX_X	45
#define MAX_Y	130

#define ITERATIONS	10

typedef struct Place_s
{
  unsigned int  type : 4;
  unsigned int value : 28;
} Place_t;

#define PLAIN_TYPE	0
#define FOREST_TYPE	1
#define WATER_TYPE	2
#define SWAMP_TYPE	3
#define MOUNTAIN_TYPE	4
#define MAX_TYPES       5

#define NUMBER_PLAINS		50
#define NUMBER_FORESTS		15
#define NUMBER_WATER		10
#define NUMBER_SWAMP		10
#define NUMBER_MOUNTAIN		20

#endif // __CLUSTER_H__
